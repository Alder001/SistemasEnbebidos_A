/*
 * CAPITULO II : PUERTOS DIGITALES
 * TEMA:CONTADOR DECIMAL Y BINARIO
 */
const int A=8;
const int B=9;
const int C=10;
const int D=11;
const int J=7;
const int I=6;
const int H=5;
const int G=4;
const int F=3;
const int E=2;
const int decenas=13;
const int unidades=12;
const int btn=0;
int cont=0;
int dec; 
int uni;
void setup() {
  pinMode (A,OUTPUT);
  pinMode (B,OUTPUT);
  pinMode (C,OUTPUT);
  pinMode (D,OUTPUT);
  pinMode (E,OUTPUT);
  pinMode (F,OUTPUT);
  pinMode (G,OUTPUT);
  pinMode (H,OUTPUT);
  pinMode (I,OUTPUT);
  pinMode (J,OUTPUT);
  pinMode (decenas,OUTPUT);
  pinMode (unidades,OUTPUT);
  pinMode (btn,INPUT);
  }
void loop() {
if(digitalRead(btn)==HIGH){
  delay(300);
  if(cont<63)
  cont++;
  else
  cont=0;
  dec= cont/10;
  uni=cont-(dec*10);
}
digitalWrite(decenas,HIGH);
digitalWrite(unidades,LOW);
//imprimir valor decenas
segmentos(dec);
delay(200);
digitalWrite(decenas,LOW);
digitalWrite(unidades,HIGH);
//imprimir valor unidades.  
segmentos(uni);
delay(200);

  switch(cont){
    case 0:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
    
    break;
      case 1:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
    break;
      case 2:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
    break;
      case 3:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
    break;
      case 4:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
    break;
      case 5:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
    break;
      case 6:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
    break;
      case 7:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
    break;
      case 8:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
    break;
      case 9:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
  break;
        case 10:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
  break;
        case 11:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
  break;
        case 12:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
  break;
        case 13:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
  break;
        case 14:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
  break;
        case 15:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
  break;
           case 16:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
    
    break;
      case 17:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
    break;
      case 18:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
    break;
      case 19:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
    break;
      case 20:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
    break;
      case 21:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
    break;
      case 22:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
    break;
      case 23:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
    break;
      case 24:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
    break;
      case 25:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
  break;
        case 26:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
  break;
        case 27:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
  break;
        case 28:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
  break;
        case 29:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
  break;
        case 30:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
  break;
        case 31:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
  break;
      case 32:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
    
    break;
      case 33:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
    break;
      case 34:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
    break;
      case 35:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
    break;
      case 36:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
    break;
      case 37:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
    break;
      case 38:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
    break;
      case 39:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
    break;
      case 40:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
    break;
      case 41:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
  break;
        case 42:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
  break;
        case 43:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
  break;
    case 44:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
  break;
    case 45:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
  
    case 46:
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
  break;
 case 47:
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
  break;
 case 48:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
    
    break;
      case 49:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
    break;
      case 50:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
    break;
      case 51:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
    break;
      case 52:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
    break;
      case 53:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
    break;
      case 54:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
    break;
      case 55:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
    break;
      case 56:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
    break;
      case 57:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
  break;
        case 58:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
  break;
        case 59:
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,LOW);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
  break;
        case 60:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,LOW);
  break;
        case 61:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,LOW);
    digitalWrite(J,HIGH);
  break;
        case 62:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,LOW);
  break;
        case 63:
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(H,HIGH);
    digitalWrite(I,HIGH);
    digitalWrite(J,HIGH);
  break;
  }}
  void segmentos(int i) { 
  switch(i){
    case 0:
    digitalWrite(D,LOW);
    digitalWrite(C,LOW);
    digitalWrite(B,LOW);
    digitalWrite(A,LOW);
    break;
      case 1:
    digitalWrite(D,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(B,LOW);
    digitalWrite(A,LOW);
    break;
      case 2:
    digitalWrite(D,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(A,LOW);
    break;
      case 3:
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(A,LOW);
    break;
      case 4:
    digitalWrite(D,LOW);
    digitalWrite(C,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(A,LOW);
    break;
      case 5:
    digitalWrite(D,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(A,LOW);
    break;
      case 6:
    digitalWrite(D,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(A,LOW);
    break;
      case 7:
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(A,LOW);
    break;
      case 8:
    digitalWrite(D,LOW);
    digitalWrite(C,LOW);
    digitalWrite(B,LOW);
    digitalWrite(A,HIGH);
    break;
      case 9:
    digitalWrite(D,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(B,LOW);
    digitalWrite(A,HIGH);
  break;  
}}
