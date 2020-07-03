  /*
   * CAPITULO II :PUEROTS LCD
   * OBJETIVO:VISUALISAR DATOS LCD
   */
#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
//RS,E,D4,D5,D6,D7
const int btn1=4;
const int btn2=5;
const int btn3=6;
const int btn4=7;
const int c1=2;
const int c2=3;
const int c3=1;
const int c4=2;
const int led=3;
int ct[4];
int cc[4]={'2','3','1','2'};

int i=0;
int e=0;

int cont=3;
void setup() {
 pinMode(btn1,INPUT);
 pinMode(btn2,INPUT);
 pinMode(btn3,INPUT);
 pinMode(btn4,INPUT);
 pinMode(led,OUTPUT);
 
 lcd.begin(16,2);
}
void loop() {
  if (cont==0){
      lcd.setCursor(1,0);
      lcd.print("ingrese nueva contraseña"); 
     
 if(digitalRead(btn1)==HIGH){ // condición que active el boton en bajo
    delay(300);
     cc[e]=1;
     e++;
   } 
 if(digitalRead(btn2)==HIGH){ // condición que active el boton en bajo
    delay(300);
    cc[e]=2;
    e++;
 } 
 if(digitalRead(btn3)==HIGH){ // condición que active el boton en bajo
    delay(300);
    cc[e]=3;
    e++;
  } 
 lcd.setCursor(0,1);
 lcd.print(cc[0]);
 lcd.print(cc[1]);
 lcd.print(cc[2]);
 lcd.print(cc[3]);

} else{
  cont=3;
  }
  
  
  if (i<4){
   
 if(digitalRead(btn1)==HIGH){ // condición que active el boton en bajo
    delay(300);
     ct[i]=1;
     i++;
   } 
 if(digitalRead(btn2)==HIGH){ // condición que active el boton en bajo
    delay(300);
    ct[i]=2;
    i++;
 } 
 if(digitalRead(btn3)==HIGH){ // condición que active el boton en bajo
    delay(300);
    ct[i]=3;
    i++;
  } 
 lcd.setCursor(0,1);
 lcd.print(ct[0]);
 lcd.print(ct[1]);
 lcd.print(ct[2]);
 lcd.print(ct[3]);

} else{
  i=0;}
if(digitalRead(btn4)==HIGH){ 
    delay(300);
      if (ct[0]==2){
        if (ct[1]==3{
          if (ct[2]==2{
            if (ct[3]==1{
      lcd.setCursor(1,0);
      lcd.print("DESACTIVADO");
      digitalWrite(led,HIGH);
            }else{ 
            
      lcd.setCursor(1,0);
     
      lcd.print("ERROR:int" );
      lcd.setCursor(9,0);
        lcd.print(cont );
        
            cont--; 
      }
    
            }else{ 
            
      lcd.setCursor(1,0);
     
            lcd.print("ERROR:int" );
      lcd.setCursor(9,0);
        lcd.print(cont );
            cont--; 
      }}else{ 
            
      lcd.print("ERROR:int" );
      lcd.setCursor(9,0);
        lcd.print(cont );
            cont--; 
      }}else{ 
            
      lcd.setCursor(1,0);
           lcd.print("ERROR:int" );
      lcd.setCursor(9,0);
        lcd.print(cont );
            cont--; 
      }} }
