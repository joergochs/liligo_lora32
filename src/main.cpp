#include <Arduino.h>

#define LED 25

 void setup () { 
  // Pin-Modus festlegen 
  pinMode (LED,OUTPUT); 
} 

void loop () { 
  delay ( 500 ); 
// Die Verzögerungszeit kann durch Anpassen des Parameters delay() eingestellt werden; 
  digitalWrite (LED,HIGH); 
  delay ( 500 ); 
  digitalWrite (LED,LOW); 
}