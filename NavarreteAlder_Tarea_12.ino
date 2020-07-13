/*
 * CAPÍTULO V: FUNCIONES ESPECÍFICAS
 * CÓDIGO 21: Rutina de reinicio del sistema
 * OBJETIVO: Reiniciar el sistema en un determinado tiempo por medio del perro guardián y memoria EEPROM
 *             
 */

#include<avr/wdt.h>  // librería wdt
#include<EEPROM.h>  
#include <MsTimer2.h> 

int cont=0;
int i=0;
const int led1=6;
const int led2=7;
              
void setup(){
  Serial.begin(9600);  
  Serial.println("INICIO DEL SISTEMA");   
 
   MsTimer2::set(1000,contador);
   MsTimer2::start();
   pinMode (led1, OUTPUT);
   pinMode (led2, OUTPUT);
   
}
void contador(){
   
  cont++;
  Serial.println(i++);
}
void loop(){
  if(cont==24){
      wdt_disable();
    wdt_enable(WDTO_4S);
     }

    if(cont<15){
 digitalWrite (led1, HIGH);
  digitalWrite (led2, LOW);
  delay(300);
   digitalWrite (led1, LOW);
  digitalWrite (led2, HIGH);
     }
if(cont>15){
 digitalWrite (led1, HIGH);
  digitalWrite (led2, HIGH);
  delay(300);
   digitalWrite (led1, LOW);
  digitalWrite (led2, LOW);
     }
        

  delay(300); // espera de 300 ms
}
