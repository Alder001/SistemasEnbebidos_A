/////////////////////MASTER///////////////////////////////
/*
 * CAPÍTULO III: MÓDULOS DE COMUNICACIÓN I2C
 *   TAREA 6        
 */
#include<Wire.h>  
int const sw1=2;
int const sw2=3;
int const sw3=4;
int const sw4=5;
char dato;
char dato1;
char dato2;
char dato3;
char dato4;  
void setup() {
 Wire.begin(); 
 Serial.begin(9600); 
 pinMode(sw1,INPUT); 
pinMode(sw2,INPUT);
pinMode(sw3,INPUT);
pinMode(sw4,INPUT);
}
void loop() {
  Wire.beginTransmission(4); 
         if(digitalRead(sw1)==HIGH){  
        dato1='1'; 
        Wire.write(dato1);
         }else{
          dato1='2';
        Wire.write(dato1);    
 }
     if(digitalRead(sw2)==HIGH){
        dato2='1'; 
        Wire.write(dato2); 
         }else{
          dato2='2';         
        Wire.write(dato2);   
 }
  if(digitalRead(sw3)==HIGH){
          dato3='1';   
        Wire.write(dato3);    
         }else{
          dato3='2';         
        Wire.write(dato3); 
   }
  if(digitalRead(sw4)==HIGH){  
        dato4='1';
        Wire.write(dato4); 
                }else{
          dato4='2'; 

        Wire.write(dato4);  
 }
   Wire.endTransmission();    
}
