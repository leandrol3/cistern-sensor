
#include <NewPing.h>

#define TRIGGER_PIN  13  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     12  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
#define ELEMENTCOUNT(x)  (sizeof(x) / sizeof(x[0]))   //Função que contem o numero de itens do array


NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

const int pinosLEDs[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

void setup() {
  //Set dos pinos da barra gráfica
  for (int counter = 0; ELEMENTCOUNT(pinosLEDs); counter++) {
    pinMode(pinosLEDs[counter], OUTPUT);
  }
  
  /*
  pinMode(pinosLEDs[0], OUTPUT);
  pinMode(pinosLEDs[1], OUTPUT);
  pinMode(pinosLEDs[2], OUTPUT);
  pinMode(pinosLEDs[3], OUTPUT);
  pinMode(pinosLEDs[4], OUTPUT);
  pinMode(pinosLEDs[5], OUTPUT);
  pinMode(pinosLEDs[6], OUTPUT);
  pinMode(pinosLEDs[7], OUTPUT);
  pinMode(pinosLEDs[8], OUTPUT);
  pinMode(pinosLEDs[9], OUTPUT);
  pinMode(pinosLEDs[10], OUTPUT);
*/
  Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.

}

void loop() {
  int dist;
  dist = sonar.ping_cm();
  delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping le: ");
  Serial.print(dist); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println(" cm");


  //digitalWrite(3, HIGH);

  /*
    // if (dist < 10)
    {
    //   delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.

      digitalWrite(2, HIGH);
       digitalWrite(3, HIGH);
       digitalWrite(4, HIGH);
       digitalWrite(5, HIGH);
       digitalWrite(6, HIGH);
       digitalWrite(7, HIGH);
       digitalWrite(8, HIGH);
       digitalWrite(9, HIGH);
       digitalWrite(10, HIGH);
       digitalWrite(11, HIGH);
    }
    else if (dist > 20)
    {
       digitalWrite(2, LOW);
       digitalWrite(3, LOW);
       digitalWrite(4, LOW);
       digitalWrite(5, LOW);
       digitalWrite(6, LOW);
       digitalWrite(7, LOW);

     digitalWrite(8, HIGH);
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(11, HIGH);
    }*/

}
