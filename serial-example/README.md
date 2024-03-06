# Arduino example

An example how to use web serial with an arudino board. On the arduino we connected a simple breadboard circuit containing a led and a motor.  On PIN 9 we receive power which can be controlled by the webserial interface between 0 and 255 steps.

## Getting started

- Get the [Arduino IDE](https://www.arduino.cc/en/software) and load `webdimmer.ino` into the microcontroller
- Create a simple circuit with a consumer connected (e.g. a LED or a motor)
- Connect the circuit to PIN 9 and to GROUND
- Open index.html and make sure your browser support [Webserial](https://caniuse.com/web-serial)
- Click on the connect button on the web interface
- Select the arduino device
- Play with the dimmer and checkout the results on your circuit



