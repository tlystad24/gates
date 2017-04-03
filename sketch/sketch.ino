/* Logiske kretser med arduino */
const int led1 = 7; // Første led på pin 7
const int led2 = 8; // Andre led på pin 8

void setup() {
  
  pinMode(led1, OUTPUT); // Sette led1 pin som utgang
  pinMode(led2, OUTPUT); // Sette led2 pin som utgang

}

void loop() {
  
  // AND GATE - begge innganger er HIGH:
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

}
