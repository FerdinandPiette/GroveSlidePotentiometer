#ifndef GroveSlidePotentiometer_H
#define GroveSlidePotentiometer_H

#include <Arduino.h>
#include "../Grove/Grove.h"
#include <GroveLED.h>

class GroveSlidePotentiometer {
	private:
		unsigned int _pinSensor; 
		unsigned int _maxMesurement;
		GroveLED * _led;
	
	protected:
		unsigned int _performMesurement(); 

	public:
		GroveSlidePotentiometer(GrovePin pins, unsigned int _maxMesurement = 1023);
		virtual ~GroveSlidePotentiometer();
		void initialize();
		float getPosition();
		void setMaxMesurement(float maxPosition);
		void turnOnLED();
		void turnOffLED();
		void toggleLED();
};

#endif