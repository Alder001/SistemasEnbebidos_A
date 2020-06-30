  /*
   * CAPITULO II :PUEROTS LCD
   * OBJETIVO:VISUALISAR DATOS LCD
   */
#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
//RS,E,D4,D5,D6,D7
const char vector[7]={'A','R','D','U','I','N','O'};
int btn;
int i;
int j=0;
int cont=0;
void setup() {
 lcd.begin(16,2);
 pinMode(btn,INPUT);

}
void loop() {
  lcd.setCursor(0,0);
  
  for(i=0;i<23;i++){
    lcd.setCursor(i-7,0);
    lcd.print(" A");
  
    lcd.setCursor(i-5,0);
    lcd.print("R");
   
    lcd.setCursor(i-4,0);
    lcd.print("D");
  
    lcd.setCursor(i-3,0);
    lcd.print("U");
   
    lcd.setCursor(i-2,0);
    lcd.print("I");
  
    lcd.setCursor(i-1,0);
    lcd.print("N");
 
    lcd.setCursor(i,0);
    lcd.print("0");
    delay(200);
}

//lcd.clear();
 
}
