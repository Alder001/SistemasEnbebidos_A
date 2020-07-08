
/////////////////MASTER///////////////////
/*
 * CAPITULO III ;MODULOS DE COMUNICACION
 * CODIGO 12 : ENVIO Y RESEPCION DE DATOS POR COMUNICACION I2C
 * FUNCIONES .ENVIAR FUNCIONES DEL MASTE ASIA EL ESCLAVO U VICEVERSA
 */
 
 
#include<Wire.h>  
char dato;  
void setup() {
  Wire.begin(); //inicia cx i2c
  Serial.begin(9600); // inicia cx serial
}

void loop() {
    if(Serial.available()>0){ //verifica el puerto de cx
        dato=Serial.read(); // almacena el dato en variable
        Wire.beginTransmission(4); // empieza cx i2c
        Wire.write(dato); // envía dato
        Wire.endTransmission(); // termina cx i2c
      }
}
