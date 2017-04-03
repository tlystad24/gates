# Logiske porter


### And gate - HEF4081BP
#### Kobling
<img width="450" alt="schematic" src="https://cloud.githubusercontent.com/assets/18582452/24607457/2ad97b4e-1872-11e7-9ce6-e2d1bef17a60.jpg">

#### Programmering

```arduino
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
```
