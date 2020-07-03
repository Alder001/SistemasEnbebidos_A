////////////////////////ESCLAVO////////////////////////////
/*
 * CAPÍTULO III: MÓDULOS DE COMUNICACIÓN I2C
 * CÓDIGO 13: Envío y recepción de datos por cx i2c
 * OBJETIVO: El usuario envía caracteres por comunicación serial, el máster lo recibe
 *            y envía por i2c hacia el esclavo y según el dato enviado enviende un diferente led
 * FUNCIONES: 
 *           Wire.begin()
 *           Wire.beginTransmission(address) -> ID de esclavo
 */

#include <Wire.h> //librería i2c
char dato;
char dato1;
char dato2;
char dato3;
char dato4;
const int led1=8; // led1 en pin8
const int led2=9; // led1 en pin9
const int led3=10; // led1 en pin10
const int led4=11;
void setup() {
  Wire.begin(4); 
  Wire.onReceive(receiveEvent); 
  Serial.begin(9600); 
  pinMode(led1,OUTPUT); 
  pinMode(led2,OUTPUT); 
  pinMode(led3,OUTPUT); 
  pinMode(led4,OUTPUT);
}
void loop() {
  
}
void receiveEvent (int bytes){
  
    dato1=Wire.read();
      switch(dato1){
          case '1':
            digitalWrite(led1,HIGH);

         
          break;
          case '2':
            digitalWrite(led1,LOW);
          break;
              }
        dato2=Wire.read();
      switch(dato2){
          case '1':
            digitalWrite(led2,HIGH);
           
            
          break;
          case '2':
            digitalWrite(led2,LOW);

          break;
         
        }
        dato3=Wire.read();
      switch(dato3){
          case '1':
            digitalWrite(led3,HIGH);

          break;
          case '2':
            digitalWrite(led3,LOW);
            
          break;
          
        }
        dato4=Wire.read();
      switch(dato4){
          case '1':
            digitalWrite(led4,HIGH);
                      
          break;
          case '2':
            digitalWrite(led4,LOW);
          
          break;
        
        }
    }
