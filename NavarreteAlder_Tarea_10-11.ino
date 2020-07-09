/*
 * CAPITULO IV:MANEJO INTERRUPCIONES
 */
  #include <LiquidCrystal.h>
  
  #include<MsTimer2.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
 const int alarma=4;
 const int encendido=5;
 int segundo;
 int on=0; 
 int off=0;
 int cont; 
 int cont1;
 int conversor1;
 int conversor2;
 int hora;
 int minuto;
 int hora1;
 int minuto1;
 int i;
 int j;
void setup(){
MsTimer2::set(1000,contador);
MsTimer2::start();
  lcd.begin(16, 2);
  pinMode(alarma,OUTPUT);
  pinMode(encendido,OUTPUT);
   Serial.begin(9600); //activación de cx serial
   attachInterrupt(0,activacion,LOW); 
   attachInterrupt(1,contador1,LOW);  
}
void contador(){
    if(on==4){ 
  cont++;
  }
}
void loop(){
   if(off==1){ 
digitalWrite(encendido,HIGH); 
    }
    if(off==0){ 
digitalWrite(encendido,LOW); 
    }
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
  cont=segundo;
  delay(300);
  lcd.clear();
  
    }

 if(on==4){ 

    if (cont<60) {
    segundo=cont;
   }else{
    
    cont=0;
    minuto++;
    }
    
if (hora==24) {
  hora=0;
    }
if (minuto==60) {
  hora++;
  minuto=0;
    }
if (segundo==60) {
  segundo=0;
    } 
   lcd.clear();  
  lcd.setCursor(0,0); 
  lcd.print("LA HORA ES:");  
  lcd.setCursor(3,1); 
  lcd.print(hora);  
  lcd.setCursor(5,1); 
  lcd.print(":");  
  lcd.setCursor(6,1); 
  lcd.print(minuto); 
  lcd.setCursor(8,1); 
  lcd.print(":");
  lcd.setCursor(9,1);
  lcd.print(segundo); 

  if (hora1==hora){
  if (minuto1==minuto){
    if (segundo==0){
    digitalWrite(alarma,HIGH);
      
  }}
}  
delay(300); 
  lcd.clear(); }
if(on==3){
  lcd.clear();
 
  conversor1=analogRead(0);
  conversor2=analogRead(1);
  conversor1 = map(conversor1, 0, 1023, 0, 23);
  conversor2 = map(conversor2, 0, 1023, 0, 59);
 hora1=(conversor1);
 minuto1=(conversor2);
  lcd.setCursor(0,0); 
  lcd.print("Ingrese Alarma:");
  lcd.setCursor(0,1); 
  lcd.print("H:");  
  lcd.setCursor(2,1); 
  lcd.print(hora1);  
  lcd.setCursor(5,1); 
  lcd.print("M:"); 
  lcd.setCursor(7,1); 
  lcd.print(minuto1); 
  delay(300);
  lcd.clear();
    }}

void activacion (){
   if (off==1){

    
   switch(on){  
      case 0:
    lcd.clear ();
    lcd.setCursor(0,0); 
    lcd.print("InicioDelSistema"); 

        on++;
   
      break;
      case 1:
    
        on++;
      break;
      case 2:
        on++;
       break;
      case 3:
       on++;
      break;
      case 4:
    lcd.clear ();
    
    lcd.setCursor(0,0); 
    lcd.print("alarma apagada");
    digitalWrite(alarma,LOW);
    delay(300);
    lcd.clear ();
       on=4;
      break;
    }
}}
void contador1(){
 
      switch(off){ // opciones de boton 
      case 0:
    lcd.setCursor(16,1); 
    lcd.print("E"); 
      
        off++;
   
      break;
      case 1:
         on=0;


        off=0;
      break;


    } }
      
    
