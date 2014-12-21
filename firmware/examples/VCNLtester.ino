// Example sketch for talking to the VCNL4000 i2c proximity/light sensor
// Written by Adafruit! Public domain.
// To use: Connect VCC to 3V3, GND to ground,
//         SCL to i2c clock (D1), SDA to i2c data (D0)
// You can pick one up at the Adafruit shop: www.adafruit.com/products/466

#include "vcnl4000/vcnl4000.h"

VCNL4000 vcnl;

void setup() {
	Serial.begin(9600);
	Serial.println("VCNL");
	vcnl.begin();

	Serial.print("IR LED current = ");
	Serial.print(vcnl.readLedCurrent());
	Serial.println(" mA");

	Serial.print("Proximity adjustment register = ");
	Serial.println(vcnl.readProximityAdjust(), HEX);
}

void loop() {
	Serial.print("Ambient = ");
	Serial.print(vcnl.readAmbientData());
	Serial.print("\t\tProximity = ");
	Serial.println(vcnl.readProximityData());
	delay(100);
}
