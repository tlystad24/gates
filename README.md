# Logiske porter


### And gate - HEF4081BP
#### Kobling
<img width="450" alt="schematic" src="https://cloud.githubusercontent.com/assets/18582452/24607457/2ad97b4e-1872-11e7-9ce6-e2d1bef17a60.jpg">

#### Programmering

```arduino
/* Logiske kretser med arduino
Dette programmet går igjennom alle stadiene i en AND gate:
- 1 & 1
- 0 & 1
- 1 & 0
- 0 & 0
*/
const int IC1 = 7; // Første led på pin 7
const int IC2 = 8; // Andre led på pin 8

void setup() {
  
  pinMode(IC1, OUTPUT); // Sette IC1 pin som utgang
  pinMode(IC2, OUTPUT); // Sette IC2 pin som utgang

}

void loop() {
  
  // Begge inngangene i IC er HIGH = led vil lyse:
  digitalWrite(IC1, HIGH);
  digitalWrite(IC2, HIGH);
  delay(1000);

  // Inngang 1 er LOW, og inngang 2 er HIGH = led vil ikke lyse:
  digitalWrite(IC1, LOW);
  digitalWrite(IC2, HIGH);
  delay(1000);
 
  // Inngang 1 er HIGH, og inngang 2 er LOW = led vil ikke lyse:
  digitalWrite(IC1, HIGH);
  digitalWrite(IC2, LOW);
  delay(1000);

  // Begge inngangene er LOW = led vil ikke lyse
  digitalWrite(IC1, LOW);
  digitalWrite(IC2, LOW);
  delay(1000);
}}
```
