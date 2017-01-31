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
		GroveSlidePotentiometer();
		virtual ~GroveSlidePotentiometer();
		void initialize(GrovePin pins, unsigned int maxMesurement = 1023);
		float getPosition();
		void setMaxMesurement(unsigned int maxMesurement);
		void turnOnLED();
		void turnOffLED();
		void toggleLED();
};

#endif