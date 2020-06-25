
  /*Tarea1:MANEJO DE PUERTOS COMO ENTRADA Y SALIDA
   * 
   */
const int led1=2;
const int led2=3;
const int led3=4;
const int led4=5;
const int led5=6;
const int led6=7;

const int btn1=0;
const int btn2=1;
int i=0;
int j;
int k;
int l=0;
void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
 pinMode(led5,OUTPUT);
 pinMode(led6,OUTPUT);
 pinMode(btn1,INPUT);
 pinMode(btn2,INPUT);
}

void loop() {

if(digitalRead(btn1)==HIGH){
 for(j=0;j<8;j++){
 digitalWrite(led1,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,HIGH);
 digitalWrite(led5,HIGH);
 digitalWrite(led6,HIGH);
  delay(300);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(300);
 }
  delay(300);
  }
if(digitalRead(btn2)==HIGH){
 for(k=0;k<10;k++){
 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 digitalWrite(led5,LOW);
 digitalWrite(led6,HIGH);
 delay(300);
 digitalWrite(led1,LOW);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 digitalWrite(led5,HIGH);
 digitalWrite(led6,LOW);
 delay(300);
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,HIGH);
 digitalWrite(led5,LOW);
 digitalWrite(led6,LOW);
 delay(300);
  digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 digitalWrite(led5,LOW);
 digitalWrite(led6,LOW);

 }
  delay(300);
  }
 }
