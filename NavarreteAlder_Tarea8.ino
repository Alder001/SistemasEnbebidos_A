/*
 * CODIGO14:CAD Y PWM
 */
#include<LiquidCrystal.h>
LiquidCrystal lcd (13,12,11,10,9,8);
int conversor;
float voltaje;
float velM;
int ct=0;
const int motor=6;
int dutty;
String maxima;
String minima;
int maxi=0;
int mini=-2;
float val;
void setup() {
  lcd.begin(16,2);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 if(maxi==0){
 lcd.setCursor(0,0);
 lcd.print("ING VEL MAX :");
 if(Serial.available()>0){
 
 maxima=Serial.readString(); 
 lcd.setCursor(0,1);
  lcd.print(maxima); 
  maxi=maxima.toInt();
  ct=1;
  delay (300);
    lcd.clear();
   lcd.print("INGR VEL MIN :");
 }}
if (ct>0){
  if(Serial.available()>0){
 lcd.setCursor(0,0);
 lcd.print("INGR VEL MIN :");
 minima=Serial.readString(); 
 lcd.setCursor(0,1);
  lcd.print(minima); 
  mini=minima.toInt();
  delay (300);
  ct=0;
  }}
 if(maxi>0){
  if(mini>=0){
    lcd.clear();
 conversor=analogRead(A0);
 val=(mini*5)/maxi;
 voltaje=(conversor*5.0)/1023.0;
 dutty=conversor/4;
 velM=((voltaje)*maxi)/5;
 analogWrite(motor,dutty);
 lcd.setCursor(0,0);
 lcd.print("VELOCIDAD MOTOR :");
 lcd.setCursor(4,1);
  lcd.print(velM);
  lcd.setCursor(8,1);
  lcd.print("rpm");
 delay(300);
 lcd.clear();
}}}
