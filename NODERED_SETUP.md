# Node-RED Setup for Timer Camera Upload

This guide details how to set up Node-RED in Home Assistant to receive images from your ESPHome Timer Camera, save them to disk, and display them in your Home Assistant dashboard.

## Overview

1.  **ESP32** wakes up, takes a photo.
2.  **ESP32** POSTs the raw image data to `http://<HA_IP>:1880/endpoint/mailbox_upload`.
3.  **Node-RED** receives the data and saves it to `/config/www/mailbox.jpg`.
4.  **Home Assistant** displays the image using the local HTTP server.

---

## Step 1: Configure Node-RED

1.  Open **Node-RED** in Home Assistant.
2.  Click the **Hamburger Menu** (top right) > **Import**.
3.  Paste the following JSON and click **Import**:

```json
[
    {
        "id": "mailbox_http_in",
        "type": "http in",
        "z": "flow_id",
        "name": "Camera Upload",
        "url": "/mailbox_upload",
        "method": "post",
        "upload": true,
        "swaggerDoc": "",
        "x": 160,
        "y": 120,
        "wires": [
            [
                "mailbox_file_save",
                "mailbox_http_response",
                "mailbox_debug"
            ]
        ]
    },
    {
        "id": "mailbox_http_response",
        "type": "http response",
        "z": "flow_id",
        "name": "200 OK",
        "statusCode": "200",
        "headers": {},
        "x": 520,
        "y": 120,
        "wires": []
    },
    {
        "id": "mailbox_file_save",
        "type": "file",
        "z": "flow_id",
        "name": "Save to /config/www/mailbox.jpg",
        "filename": "/config/www/mailbox.jpg",
        "appendNewline": false,
        "createDir": true,
        "overwriteFile": "true",
        "encoding": "none",
        "x": 480,
        "y": 200,
        "wires": [
            []
        ]
    },
    {
        "id": "mailbox_debug",
        "type": "debug",
        "z": "flow_id",
        "name": "Log Upload",
        "active": true,
        "tosidebar": true,
        "console": false,
        "tostatus": false,
        "complete": "payload",
        "targetType": "msg",
        "statusVal": "",
        "statusType": "auto",
        "x": 430,
        "y": 280,
        "wires": []
    }
]
```

4.  **Important Change**: In the "Save to" node, I changed the path to `/config/www/mailbox.jpg`.
    *   `/config/www` is a special folder in Home Assistant. Files here are accessible via the web browser at `http://<HA_IP>:8123/local/...`.
    *   This makes displaying the image in Lovelace much easier than using `/share`.

5.  Click **Deploy** (top right).

---

## Step 2: Update ESPHome Secrets

Ensure your `secrets.yaml` points to the correct Node-RED endpoint.

```yaml
# secrets.yaml
wifi_ssid: "YOUR_WIFI"
wifi_password: "YOUR_PASSWORD"
# Replace 192.168.1.50 with your Home Assistant IP
mailbox_upload_url: "http://192.168.1.50:1880/endpoint/mailbox_upload"
```

---

## Step 3: Add Camera to Home Assistant Dashboard

Now that the image is being saved to `/config/www/mailbox.jpg`, it is available at the URL path `/local/mailbox.jpg`.

You can add this as a "Generic Camera" so it updates automatically.

### Option A: Using YAML (configuration.yaml)

Add this to your `configuration.yaml` in Home Assistant and restart HA:

```yaml
camera:
  - platform: generic
    name: Mailbox Camera
    still_image_url: http://127.0.0.1:8123/local/mailbox.jpg
    verify_ssl: false
```

### Option B: Using the UI (Picture Card)

If you don't want to create a `camera` entity, you can just use a **Picture Card** on your dashboard:

1.  Edit Dashboard > Add Card > **Picture**.
2.  **Image Path**: `/local/mailbox.jpg`
3.  **Tap Action**: None (or 'Image' to enlarge).

*Note: The Picture Card might cache the image aggressively. The Generic Camera entity (Option A) is better at handling updates.*

---

## Step 4: Testing

1.  Trigger your camera (press the button/switch or use the magnet).
2.  Watch the **Node-RED Debug** sidebar. You should see a message buffer arrive.
3.  Check `http://<HA_IP>:8123/local/mailbox.jpg` in your browser. You should see the latest capture.
