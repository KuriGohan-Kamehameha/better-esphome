# Better ESPHome

A collection of optimized ESPHome configuration files for various M5Stack and ESP32 devices.

## Overview

This repository contains ready-to-use ESPHome configurations for popular ESP32-based devices, with a focus on M5Stack products and voice assistant capabilities.

## Available Device Configurations

### M5Stack Devices

- **atom-echo.yml** - M5Stack Atom Echo
  - Voice assistant ready configuration
  - Built-in microphone and speaker support
  - RGB LED control
  - Button input

- **atom-lite.yml** - M5Stack Atom Lite
  - IR blaster configuration
  - RGB LED (WS2812)
  - Button input
  - I2C support

- **atom-s3.yaml** - M5Stack Atom S3
  - ESP32-S3 based configuration
  - Advanced features for the S3 platform

- **core-ink.yml** - M5Stack Core Ink
  - E-ink display configuration
  - Low power consumption setup

- **timer-camera-f.yaml** - M5Stack Timer Camera F
  - Camera module configuration
  - Timer and scheduling features

### Other Devices

- **respeaker-xvf3800.yml** - ReSpeaker XVF3800
  - Advanced voice processing
  - Multi-microphone array support

## Prerequisites

- [ESPHome](https://esphome.io/) installed (minimum version 2025.5.0 or later depending on device)
- Home Assistant (optional, for integration)
- Wi-Fi network credentials
- Device-specific hardware

## Usage

1. **Clone or download** this repository
2. **Choose** the configuration file for your device
3. **Update** the following in the configuration:
   - Wi-Fi credentials (in `wifi:` section or `secrets.yaml`)
   - API encryption key (generate new if needed)
   - OTA password (if applicable)
   - Device-specific pins or settings
4. **Flash** the configuration to your device:
   ```bash
   esphome run atom-echo.yml  # Replace with your config file
   ```

## Configuration

### Secrets File

Create a `secrets.yaml` file in the same directory with your sensitive information:

```yaml
wifi_ssid: "Your_WiFi_SSID"
wifi_password: "Your_WiFi_Password"
```

### First Time Setup

For initial device flashing, you may need to connect via USB:

```bash
esphome run atom-echo.yml --device /dev/ttyUSB0
```

After the initial flash, OTA (Over-The-Air) updates can be used.

## Features

These configurations include:

- ✅ Safe mode for recovery
- ✅ Fallback AP for troubleshooting
- ✅ OTA updates
- ✅ Home Assistant API integration
- ✅ Optimized settings for each device
- ✅ Voice assistant support (where applicable)
- ✅ RGB LED control
- ✅ Button inputs

## Support

For issues or questions:
- Check the [ESPHome documentation](https://esphome.io/)
- Review device-specific datasheets
- Open an issue in this repository

## License

These configurations are provided as-is for educational and personal use.

## Contributing

Feel free to submit improvements, bug fixes, or additional device configurations via pull requests.
