# Better ESPHome

Optimized ESPHome configurations for M5Stack and ESP32 devices, including voice assistants and cameras.

## Device Configurations

All configurations are located in the `devices/` directory.

| Device | Config Path | Description |
|--------|-------------|-------------|
| **Atom Echo** | [`devices/atom-echo.yaml`](devices/atom-echo.yaml) | Voice assistant with media player & RGB. |
| **Atom Lite** | [`devices/atom-lite.yaml`](devices/atom-lite.yaml) | IR blaster & RGB controller. |
| **Atom S3** | [`devices/atom-s3.yaml`](devices/atom-s3.yaml) | ESP32-S3 with split display color/backlight control. |
| **Atom S3 (BLE proxy)** | [`devices/atom-s3-bluetooth-proxy.yaml`](devices/atom-s3-bluetooth-proxy.yaml) | Alternate build with `bluetooth_proxy` enabled (acts as a BLE proxy for Home Assistant). |
| **Core Ink** | [`devices/core-ink.yaml`](devices/core-ink.yaml) | E-ink display optimization. |
| **ReSpeaker** | [`devices/respeaker-xvf3800.yaml`](devices/respeaker-xvf3800.yaml) | Advanced voice processing kit. |
| **Timer Camera F** | [`devices/timer-camera-f/`](devices/timer-camera-f/) | Contains `stream` (video) and `mailbox` (low power) variants. |

## Feature Highlights

- **Atom S3 Display**: Controls are split into `light.screen_colors` (RGB) and `light.screen_backlight` (Brightness) for independent control.
  - *Tip*: Use `light.turn_on` service with `rgb_color` for color, and `brightness_pct` for backlight intensity.
- **Timer Camera F**:
  - `timer-camera-f-stream.yaml`: optimized for continuous video streaming.
  - `timer-camera-f-mailbox.yaml`: optimized for deep sleep and triggered capture (e.g. smart mailbox).

## Custom Enhancements

These configurations build upon and enhance the official ESPHome examples:

**Atom Echo**
- Extensive RGB color customization with pre-configured palettes and transitions.
- Enhanced media player integration with Home Assistant.
- Optimized audio routing and voice assistant tuning.

**ReSpeaker XVF3800**
- Significant improvements over the original formatBCE configuration, including:
  - Updated voice processing pipeline with better VAD (Voice Activity Detection).
  - Enhanced timezone handling with robust input validation.
  - Improved audio stream quality and latency optimization.
  - Better integration with Home Assistant voice assistant.
  - Additional GPIO and I2C configurations for expanded peripheral support.

**Atom S3**
- Advanced display control with independent color and brightness management.
- Optimized for both local and remote control scenarios.
- Alternate BLE variant available at `devices/atom-s3-bluetooth-proxy.yaml` — enables `bluetooth_proxy` so the device can act as a BLE proxy for Home Assistant. Requires ESPHome >= 2025.12.0 and increases firmware size/RAM slightly. If you plan to run both firmwares on the network, change the `name:` in the BLE file to avoid duplicate device names.

## Usage

1. Create a `secrets.yaml` in the root:
   ```yaml
   wifi_ssid: "Your_SSID"
   wifi_password: "Your_Password"
   # ... other secrets
   ```

2. Flash a device:
   ```bash
   # Default Atom S3
   esphome run devices/atom-s3.yaml

   # Alternate BLE proxy variant (acts as BLE proxy for HA; requires ESPHome >= 2025.12.0)
   esphome run devices/atom-s3-bluetooth-proxy.yaml
   ```

## Requirements
- ESPHome 2025.5.0+
- Python 3.9+ (if running locally)

