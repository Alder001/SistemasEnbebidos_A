/*
 * CAPITULO IV:MANEJO INTERRUPCIONES
 */
  #include <LiquidCrystal.h>
  #include<TimerOne.h>
  #include<MsTimer2.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
 const int led1=4;
 const int led2=5;
 const int led3=6;
 const int led4=7;
 int on=0; 
 int off=0;
 int cont; 
 int cont1;
 int conversor1;
 int conversor2;
 int hora;
 int minuto;
 int i;
 int j;//variables de conteo
 
 
void setup(){
MsTimer2::set(1000,contador);
MsTimer2::start();
  lcd.begin(16, 2);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
   Serial.begin(9600); //activación de cx serial
   attachInterrupt(0,activacion,LOW); // interrupt 0 habilitada
   attachInterrupt(1,contador1,LOW);  // interrupt 1 habilitada
}
void contador(){
    if(on==3){ 
  cont++;
  }
}
void loop(){
  
  if(on==2){ 
  lcd.clear();   
  conversor1=analogRead(0);
  conversor2=analogRead(1);
  conversor1 = map(conversor1, 0, 1023, 0, 23);
  conversor2 = map(conversor2, 0, 1023, 0, 59);
  hora=(conversor1);
  minuto=(conversor2);
  lcd.setCursor(0,0); 
  lcd.print("INGRESE LA HORA :");  
   lcd.setCursor(0,1); 
  lcd.print("H:");  
  lcd.setCursor(2,1); 
  lcd.print(hora);  
  lcd.setCursor(5,1); 
  lcd.print("M:"); 
  lcd.setCursor(7,1); 
  lcd.print(minuto); 
  cont=minuto;
  delay(300);
  lcd.clear();
  
    }

 if(on==3){ 
  lcd.setCursor(0,0); 
  lcd.print("                ");  
  lcd.setCursor(0,1);
  lcd.print("          ");  
  lcd.setCursor(0,0); 
  lcd.print("LA HORA ES:");  
  lcd.setCursor(3,1); 
  lcd.print(hora);  
  lcd.setCursor(5,1); 
  lcd.print("H");  
  lcd.setCursor(7,1); 
  lcd.print(minuto); 
  delay(300);
  if (cont<60) {
    minuto=cont;
   }else{
    
    cont=0;
    hora++;
    }
if (hora==24) {
  hora=0;
    }
if (minuto==60) {
  minuto=0;
    }
   
} 
if(off==1){
     lcd.setCursor(11,1); 
     lcd.print("ENC:");
     if(cont==0){ 
     i=random(0,15); 
      switch(i){
           case 0:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,HIGH);
     break;
          case 1:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,LOW);
     digitalWrite(led3,LOW);
     digitalWrite(led4,LOW);
     break;
          case 2:
     digitalWrite(led1,LOW);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,LOW);
     digitalWrite(led4,LOW);
     break;
          case 3:
     digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,LOW);
     break;
               case 4:
     digitalWrite(led1,LOW);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,LOW);
     break;
          case 5:
     digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
     digitalWrite(led3,LOW);
     digitalWrite(led4,HIGH);
     break;
          case 6:
     digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
     digitalWrite(led3,LOW);
     digitalWrite(led4,LOW);
     break;
          case 7:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,LOW);
     digitalWrite(led4,LOW);
     break;
          case 8:
     digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,HIGH);
     break;
          case 9:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,LOW);
     digitalWrite(led3,LOW);
     digitalWrite(led4,HIGH);
     break;
          case 10:
     digitalWrite(led1,LOW);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,LOW);
     break;
          case 11:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,LOW);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,LOW);
     break;
          case 12:
     digitalWrite(led1,LOW);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,LOW);
     digitalWrite(led4,HIGH);
     break;
          case 13:
     digitalWrite(led1,LOW);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,HIGH);
     break;
          case 14:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,LOW);
     break;
          case 15:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,LOW);
     digitalWrite(led4,HIGH);
     break;
      
     }}
     if(cont==20){
     digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
     digitalWrite(led3,LOW);
     digitalWrite(led4,LOW);
     }
          if(cont==40){
           i=random(0,15); 
           delay(10);
      switch(i){
           case 0:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,HIGH);
     break;
          case 1:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,LOW);
     digitalWrite(led3,LOW);
     digitalWrite(led4,LOW);
     break;
          case 2:
     digitalWrite(led1,LOW);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,LOW);
     digitalWrite(led4,LOW);
     break;
          case 3:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,LOW);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,HIGH);
     break;
          case 4:
     digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,LOW);
     break;
          case 5:
     digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
     digitalWrite(led3,LOW);
     digitalWrite(led4,HIGH);
     break;
          case 6:
     digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
     digitalWrite(led3,LOW);
     digitalWrite(led4,LOW);
     break;
          case 7:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,LOW);
     digitalWrite(led4,LOW);
     break;
          case 8:
     digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,HIGH);
     break;
          case 9:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,LOW);
     digitalWrite(led3,LOW);
     digitalWrite(led4,HIGH);
     break;
          case 10:
     digitalWrite(led1,LOW);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,LOW);
     break;
          case 11:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,LOW);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,LOW);
     break;
          case 12:
     digitalWrite(led1,LOW);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,LOW);
     digitalWrite(led4,HIGH);
     break;
          case 13:
     digitalWrite(led1,LOW);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,HIGH);
    break;
          case 14:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,LOW);
     break;
          case 15:
     digitalWrite(led1,HIGH);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,LOW);
     digitalWrite(led4,HIGH);
     break;
      
     }}}}

void activacion (){
   switch(on){ // opciones de boton 
      case 0:
    lcd.setCursor(0,0); 
    lcd.print("InicioDelSistema"); 

        on++;
   
      break;
      case 1:
    
        on++;
      break;
      case 2:
     lcd.setCursor(0,0); 
     lcd.print("SE VOLVERA A"); 
     lcd.setCursor(0,1); 
     lcd.print("CONFIGURAR HORA");
        on++;
       break;
      case 3:
         cont=0;
        on=0;
        i=0;
      break;
    }
}
void contador1(){
    if(on==3){
      switch(off){ // opciones de boton 
      case 0:
        off++;
   
      break;
      case 1:
       lcd.setCursor(11,1); 
     lcd.print("OFF:");
     digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
     digitalWrite(led3,LOW);
     digitalWrite(led4,LOW);
        off=0;
      break;
 

    } }} 
      
    
