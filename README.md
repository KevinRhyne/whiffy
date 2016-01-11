# whiffy
Whiffy is a portable Wifi signal strength indicator implemented on an MBED LPC1768 attached to a ESP8266 Wifi module. The status of the device and strength of wifi signals are displayed by an external array of LEDs while additional access point information is displayed on a small LCD screen.

The device has two modes of operation - "connected" access point mode and "all" access point mode. Connected mode only shows signal strength pertaining to the access point which the module is currently connected. All mode displays an average of all detected access point strengths regardless of which AP whiffy is connected to.
