# whiffy
Whiffy is a portable WiFi signal strength indicator implemented on an MBED LPC1768 attached to an ESP8266 WiFi module. The device status and WiFi signal strength are displayed on an external array of LEDs, while additional access point information is displayed on a small LCD screen.

The device has two modes of operation - "connected" access point mode and "all" access point mode. Connected mode only shows signal strength pertaining to the access point which the module is currently connected. All mode displays an average of all detected access point strengths regardless of which AP whiffy is connected to.
