# ESP32 Security Demo

This project provides a simple starting point for implementing Wi-Fi
security tools on the ESP32 using the latest ESP-IDF. Three modules are
included and initialized from `app_main`:

- `deauth.c` &mdash; placeholder for deauthentication features.
- `evil_twin.c` &mdash; placeholder for creating an evil twin access point.
- `captive_portal.c` &mdash; serves a simple captive portal from SPIFFS.

The SPIFFS partition is configured in `partitions.csv` at offset
`0x110000` with a size of `0x100000`. HTML files for the portal are
located in the `spiffs/` directory.

## Building

Ensure ESP-IDF is installed and the environment is set up, then run:

```bash
idf.py build
```

Flash the firmware and the SPIFFS image with:

```bash
idf.py -p PORT flash spiffs
```

Replace `PORT` with the serial port of your device.