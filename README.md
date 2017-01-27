# GroveSlidePotentiometer
Slide Potentiometer Library for Arduino + Grove shield

[Link to the tested grove module](http://wiki.seeed.cc/Grove-Slide_Potentiometer/)

##Example
```c++
#include <Grove.h>
#include <GroveSlidePotentiometer.h>

GroveSlidePotentiometer slide(GROVE_A0);

void setup() {
  slide.initialize();
  Serial.begin(9200);
}

void loop() {
  Serial.println(slide.getPosition());
  slide.toggleLED();
  delay(500);
}
```

##Documentation

###`GroveSlidePotentiometer(GrovePin pins, unsigned int maxMesurement = 1023)`
Parameters:
- `pins`: Must be a analog socket (GROVE_A0 to GROVE_A3)
- `maxMesurement`: The A/D converter value corresponding to the maximum angle (from 0 to 1023)

###`void initialize()`
Initialize the sensor before using it.

###`float getPosition()`
Return the position of the sensor from 0 (0° angle) to 1 (maximum angle).

###`void setMaxMesurement(unsigned int maxMesurement)`
Set the maximum position of the rotary sensor.

Parameters:
- maxPosition: A number between 0 and 1023 corresponding to the maximum angle at the output of the A/D converter

###`void turnOnLED()`
Turn the embedded LED on

###`void turnOffLED()`
Turn the embedded LED off

###`void toggleLED()`
Change the embedded LED state (on to off or off to on)

