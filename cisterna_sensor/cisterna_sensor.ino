// ---------------------------------------------------------------------------
// Cistern Sensor - Leandro Lopes - 05/Nov/2017
// Update - 19/Aug/2018
// Version 1.0
// ---------------------------------------------------------------------------

#include <NewPing.h> //Library to use ultrasonic sensor

#define TRIGGER_PIN  13  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     12  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

#define EMPTY 154 // Height to measure the capacity when is empty in centimeters
#define FULL 4 // Height to measure the capacity when is full in centimeters

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

void setup() {
  
  Serial.begin(57600); // Open serial monitor at 115200 baud to see ping results.
  
  //Determines all ports to Bar graph from 2 to 12
  for (int i = 2; i < 12; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  int distance;  //load distance from ultrasonic sensor
  int level; //level of bar graph to print between 154 (max height - empty) to 4 (min height - full)
  distance = sonar.ping_cm();
  delay(350);                     // Wait 150ms between pings (about 8 pings/sec). 29ms should be the shortest delay between pings.
  //If debug on
//  distance = 10;
  Serial.print("Distance: "); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println(distance); // Send ping, get distance in cm and print result (0 = outside set distance range)

  level = map(distance, FULL, EMPTY, 0, 10);  //Maps distance to level from 0 to 10
  if (distance != 0) {   // Somente ativa se o valor for diferente de 0 
//    If debug on
    Serial.print("Ping: ");
    Serial.print(distance); // Send ping, get distance in cm and print result (0 = outside set distance range)
    Serial.println("cm");
    Serial.println(level);
    setbargraph(level);
  } 
}
void setbargraph(int level) {
  //Acende somente ao nivel passado na variavel
  for (int i = 0; i < 11; i++) {
     if (i < level) {
        digitalWrite(i+2, LOW);
     }
     else {
        digitalWrite(i+2, HIGH);
     }
  }
}
