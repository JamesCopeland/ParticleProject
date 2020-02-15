/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "application.h"
#line 1 "/Users/jamescopeland/Documents/PKI/Particle/test-app/src/test-app.ino"
#include "./../lib/Grove_Temperature_And_Humidity_Sensor/src/Grove_Temperature_And_Humidity_Sensor.h"

void setup();
void loop();
#line 3 "/Users/jamescopeland/Documents/PKI/Particle/test-app/src/test-app.ino"
DHT dht(D2);

/*
 * Project test-app
 * Description:
 * Author:
 * Date:
 */

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  Serial.begin(9600);

  dht.begin();
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  float temp, humidity;

  temp = dht.getTempFarenheit();
  humidity = dht.getHumidity();

  Serial.printlnf("Temp: %f", temp);
  Serial.printlnf("Humidity: %f", humidity);

  delay(10000);

}