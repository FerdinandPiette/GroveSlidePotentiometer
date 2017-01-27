#include "GroveSlidePotentiometer.h"

GroveSlidePotentiometer::GroveSlidePotentiometer(GrovePin pins, unsigned int maxMesurement) {
	this->_led = new GroveLED(pins);
	this->_pinSensor = pins.pin1;
	this->setMaxMesurement(maxMesurement);
}

GroveSlidePotentiometer::~GroveSlidePotentiometer() {
	delete this->_led;
}

void GroveSlidePotentiometer::initialize() {	
	this->_led->initialize();
}

unsigned int GroveSlidePotentiometer::_performMesurement() {
	return analogRead(this->_pinSensor);
}

float GroveSlidePotentiometer::getPosition() {
	unsigned int value = this->_performMesurement();
	float position = (float)value / this->_maxMesurement;
	if(position > 1) { position = 1; } else if(position < 0) { position = 0; }
	return position;
}

void GroveSlidePotentiometer::setMaxMesurement(unsigned int maxMesurement) {	
	this->_maxMesurement = maxMesurement;
}

void GroveSlidePotentiometer::turnOnLED() {
	this->_led->turnOn();
}

void GroveSlidePotentiometer::turnOffLED() {
	this->_led->turnOff();
}

void GroveSlidePotentiometer::toggleLED() {
	this->_led->toggle();
}
