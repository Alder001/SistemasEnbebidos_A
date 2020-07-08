////////////////////////ESCLAVO1///////////////////////
/*
 * 
 */
#include <Wire.h> //librería i2c
char dato;
String i;
int cont=0;
const int led1=8; // led1 en pin8
const int led2=9; // led1 en pin9
const int led3=10; // led1 en pin10
void setup() {
  Wire.begin(4); // id de esclavo
  Wire.onReceive(receiveEvent); 
  Wire.onRequest(requestEvent);
  Serial.begin(9600); // inicio de cx serial

}
void loop() {

}
void receiveEvent (int bytes){
  while(Wire.available()){
    dato=Wire.read();
      switch(dato){
        
          case 'A':
      
       
        Serial.println ("000000");

          break;
          case 'B':
            Serial.println ("000001");

          break;
          case 'C':
            Serial.println ("000010");
            

          break;
            case 'D':
            Serial.println ("000011");
            

          break;
            case 'E':
            Serial.println ("000100");
            

          break;
            case 'F':
            Serial.println ("000101");
            

          break;
            case 'G':
            Serial.println ("000110");
            

          break;
            case 'H':
            Serial.println ("000111");
            

          break;
            case 'I':
            Serial.println ("001000");
            

          break;
            case 'J':
            Serial.println ("001001");
            

          break;
           
            case 'K':
            Serial.println ("001010");
            

          break;
            case 'L':
            Serial.println ("001011");
            

          break;
            case 'M':
            Serial.println ("001100");
            

          break; 
          case 'N':
            Serial.println ("001101");
            

          break;  
          case 'O':
            Serial.println ("001110");
            

          break; 
          case 'P':
            Serial.println ("001111");
            

          break; 
          case 'Q':
            Serial.println ("010000");
            

          break;  
          case 'R':
            Serial.println ("010001");
            

          break; 
          case 'S':
            Serial.println ("010010");
            

          break;  
          case 'T':
            Serial.println ("010011");
            

          break; 
          case 'U':
            Serial.println ("010100");
            

          break;
          
           case 'V':
            Serial.println ("010101");

          break;
           case 'W':
            Serial.println ("010110");

          break;
            case 'X':
            Serial.println ("010111");

          break;
           case 'Y':
            Serial.println ("011000");

          break;
           case 'Z':
            Serial.println ("011001");

          break;
             case ' ':
            Serial.println ("111111");

          break;
                   
          default:
            Serial.println ("ERROR:Caracter no asignado");
          break;
        }
    }
}
void requestEvent() {
 Wire.write("Hi");  
}
