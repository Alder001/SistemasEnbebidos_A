/*
 * TAREA 9
 */
  #include <LiquidCrystal.h>
  
  #include<MsTimer2.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
 int on=0; 
 int off=0;
 int numero1=0;
 int numero2=0;
 int resultado;
 String num1;
 String num2;
void setup(){
  lcd.begin(16, 2);
  Serial.begin(9600); 
  attachInterrupt(0,activacion,LOW); 
  attachInterrupt(1,contador1,LOW);  
}
void loop(){
if (on==1){
 if(Serial.available()>0){
 num1=Serial.readString(); 
 numero1=num1.toInt();
 delay (300);
  }}
 if (on==2){
 if(Serial.available()>0){
 num2=Serial.readString(); 
 numero2=num2.toInt();
 delay (300);
 }}
if (off==2){ 
    resultado=numero1+numero2; 
  }
if (off==3){ 
    resultado=numero1-numero2;    
  }}
 void activacion (){
  if (on==0){
      switch(off){ 
        case 0:
    Serial.println("Inicio Del Sistema"); 
    Serial.println(""); 
        off++;
        break;
      case 1:
    Serial.println("sumador"); 
    Serial.println(""); 
        off++;
      break;
      case 2:
    Serial.println("restador"); 
    Serial.println(""); 
       off++;
       break;
      case 3:
         off=1;
    
    }}}
void contador1(){
  if (off>0){
      switch(on){ 
      case 0:
      Serial.println("INGRESE NUMERO 1"); 
      on++;
      break;
      case 1:
      Serial.println(""); 
      Serial.println("INGRESE NUMERO 2"); 
      on++;
      break;
      case 2:
      Serial.println(""); 
      Serial.println("RESULTADO"); 
      Serial.println(resultado); 
      on++;
      break;
      case 3:
      on=0;
      off=0;
      break;
      }}}
      
    
