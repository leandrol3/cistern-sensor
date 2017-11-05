const int qtdeLEDs = 10;
const int pinosLEDs[] = {2,3,4,5,6,7,8,9,10,11};
//const int pinoPotenc = 0;
//int potenciometro = 0;
//int bargraph = 0;
void setup() {
 // int i;
 // for (int i=0; i<=qtdeLEDs; i++) {
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);    
    pinMode(11, OUTPUT);
    Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.


//  }
}
void loop() {
  
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
  
  //potenciometro = analogRead(pinoPotenc);
 // bargraph = map(potenciometro,0,1023,0,10);
  //for (int i=0; i<=qtdeLEDs; i++) {
  Serial.print("Acesso");

    delay(250); 
//    if (i < 9) {
//    }
   // else {
     // digitalWrite(pinosLEDs[i],LOW);
 //   }
  //}
}
