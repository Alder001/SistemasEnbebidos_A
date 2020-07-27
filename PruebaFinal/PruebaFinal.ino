#include "datos1.h"

#include "datosP.h"
#include<LiquidCrystal.h> 
LiquidCrystal lcd(13,12,11,10,9,8); // inicia lcd
int ct1=0;
int ct2=0;
int ct3=0;
int ct4=0;
int n=0;
int rep=0;
int vec1[10];
int vec2[10];
int vec3[10];
int ej=0;
int cont=0;
int act1=0;
int act2=0;
int act3=0;
int fil=0;
int suma1;
int suma2;
int suma3;
int c1=0;
int c2=0;
int c3=0;
int c4=0;
int c5=0;
int co6;
int val1=0;
int val2=0;
int val3=0;
int val4=0;
int conta=0;

float etiqueta1;
float etiqueta2;
float etiqueta3;
float etiqueta4;
float etiqueta5;
float etiqueta6;
int vtr[5];
float distancia1;
float distancia2;
float distancia3;
float distancia4;
float distancia5;
float distancia1_m;
float distancia2_m;
float distancia3_m;
float distancia4_m;
float distancia5_m;
float prom1_1;
float prom1_2;
float prom1_3;
float prom2_1;
float prom2_2;
float prom2_3;
float prom3_1;
float prom3_2;
float prom3_3;
float prom4_1;
float prom4_2;
float prom4_3;

float distanciaM1;
float distanciaM2;
float distanciaM3;
float distanciaM4;
float matriz3[157][3];
float matriz2[48][2];
int matriz4[48][4];

void setup() {
  lcd.begin(16,2);
 attachInterrupt(0,activacion1,LOW); 
attachInterrupt(1,activacion2,LOW); 
attachInterrupt(2,activacion3,LOW);
  Serial.begin(9600);
  for(int i=0 ;i<157;i++){    
if(matriz1[i][3]==1){
  prom1_1=matriz1[i][0]+prom1_1;
  prom1_2=matriz1[i][1]+prom1_2;
  prom1_3=matriz1[i][2]+prom1_3;
  ct1++;  
  }
  if(matriz1[i][3]==2){
  prom2_1=matriz1[i][0]+prom2_1;
  prom2_2=matriz1[i][1]+prom2_2;
  prom2_3=matriz1[i][2]+prom2_3;
  ct2++;
  }
  if(matriz1[i][3]==3){
  prom3_1=matriz1[i][0]+prom3_1;
  prom3_2=matriz1[i][1]+prom3_2;
  prom3_3=matriz1[i][2]+prom3_3;
  ct3++;
  }
  if(matriz1[i][3]==4){
  prom4_1=matriz1[i][0]+prom4_1;
  prom4_2=matriz1[i][1]+prom4_2;
  prom4_3=matriz1[i][2]+prom4_3;
  ct4++;
  }
      }
  prom1_1=prom1_1/ct1;
  prom1_2=prom1_2/ct1;
  prom1_3=prom1_3/ct1;
  prom2_1=prom2_1/ct2;
  prom2_2=prom2_2/ct2;
  prom2_3=prom2_3/ct2;
  prom3_1=prom3_1/ct3;
  prom3_2=prom3_2/ct3;
  prom3_3=prom3_3/ct3;
  prom4_1=prom4_1/ct4;
  prom4_2=prom4_2/ct4;
  prom4_3=prom4_3/ct4;

  for(int j=0 ;j<157;j++){
   if(matriz1[j][3]==1){
  distancia1=((pow(matriz1[j][1]-prom1_2,2))+(pow(matriz1[j][0]-prom1_1,2))+(pow(matriz1[j][2]-prom1_3,2)));
  distancia1=sqrt(distancia1);
  matriz3[j][0]=distancia1;
  matriz3[j][1]=matriz1[j][3];
  matriz3[j][2]=matriz1[j][4];
   if(distanciaM1<=distancia1){
    distanciaM1=distancia1;
    } 
  }
  if(matriz1[j][3]==2){
distancia1=((pow(matriz1[j][1]-prom2_2,2))+(pow(matriz1[j][0]-prom2_1,2))+(pow(matriz1[j][2]-prom2_3,2)));
  distancia1=sqrt(distancia1);
  matriz3[j][0]=distancia1;
  matriz3[j][1]=matriz1[j][3];
  matriz3[j][2]=matriz1[j][4];
  if(distanciaM2<=distancia1){
    distanciaM2=distancia1;
    }
  
  }
  if(matriz1[j][3]==3){
distancia1=((pow(matriz1[j][1]-prom3_2,2))+(pow(matriz1[j][0]-prom3_1,2))+(pow(matriz1[j][2]-prom3_3,2)));
  distancia1=sqrt(distancia1);
  matriz3[j][0]=distancia1;
  matriz3[j][1]=matriz1[j][3];
  matriz3[j][2]=matriz1[j][4];
   if(distanciaM3<=distancia1){
    distanciaM3=distancia1;
    }
  }
  if(matriz1[j][3]==4){
distancia1=((pow(matriz1[j][1]-prom4_2,2))+(pow(matriz1[j][0]-prom4_1,2))+(pow(matriz1[j][2]-prom4_3,2)));
  distancia1=sqrt(distancia1);
  matriz3[j][0]=distancia1;
  matriz3[j][1]=matriz1[j][3];
  matriz3[j][2]=matriz1[j][4];
   if(distanciaM4<=distancia1){
    distanciaM4=distancia1;
    }
  } 
  }
  for(int k=0 ;k<157;k++){
  if(matriz3[k][1]==1){
    matriz3[k][0]=matriz3[k][0]/distanciaM1;
    if(matriz3[k][0]<=0.65&&matriz3[k][0]>=0.4){
      matriz4[n][0]=matriz1[k][0];
      matriz4[n][1]=matriz1[k][1];
      matriz4[n][2]=matriz1[k][2];
      matriz4[n][3]=matriz1[k][3];
      n++;      
    }
    
  }
    if(matriz3[k][1]==2){
    matriz3[k][0]=matriz3[k][0]/distanciaM2;
    if(matriz3[k][0]<=0.65&&matriz3[k][0]>=0.4){
      matriz4[n][0]=matriz1[k][0];
      matriz4[n][1]=matriz1[k][1];
      matriz4[n][2]=matriz1[k][2];
      matriz4[n][3]=matriz1[k][3];  
      n++;     
    }
    
  }
    if(matriz3[k][1]==3){
    matriz3[k][0]=matriz3[k][0]/distanciaM3;
    if(matriz3[k][0]<=0.65&&matriz3[k][0]>=0.4){
      matriz4[n][0]=matriz1[k][0];
      matriz4[n][1]=matriz1[k][1];
      matriz4[n][2]=matriz1[k][2];
      matriz4[n][3]=matriz1[k][3];
      n++;       
    }
    
  }
    if(matriz3[k][1]==4){
    matriz3[k][0]=matriz3[k][0]/distanciaM4;
    if(matriz3[k][0]<=0.65&&matriz3[k][0]>=0.4){
      matriz4[n][0]=matriz1[k][0];
      matriz4[n][1]=matriz1[k][1];
      matriz4[n][2]=matriz1[k][2];
      matriz4[n][3]=matriz1[k][3]; 
      n++;      
    }}}
    for (int q=0;q<48;q++){
    Serial.println(String(matriz4[q][0])+String(",")+String(matriz4[q][1])+String(",")+String(matriz4[q][2])+String(",")+String(matriz4[q][3]));
    
    }}
void loop() { 
}
void activacion1 (){ 
    if (rep==8){
  if(act1==1){
     Serial.println("PROCENTAJE DE ACIERTO CON K=1 ,K=3,K=5:"); 
     for(int c=0 ;c<10;c++){
      suma1=suma1 + vec1[c];
      suma2=suma2 + vec2[c];
      suma3=suma3 + vec3[c];      
     }
     
    Serial.println(String("K=1 : ")+String((suma1*100)/8)+String("% ")+String("De Aciertos")+String(".")); 
    Serial.println(String("K=3 : ")+String((suma2*100)/8)+String("% ")+String("De Aciertos")+String(".")); 
    Serial.println(String("K=5 : ")+String((suma3*100)/8)+String("% ")+String("De Aciertos")+String(".")); 
  }   
}
}  
 void activacion2 (){
  switch (act1){
    case 0:
 lcd.clear();
 lcd.setCursor(0,0);  
 lcd.print("INTERFAST CON:"); 
 lcd.setCursor(0,1);  
 lcd.print("K=1,K=3,K=5"); 
 rep=0;
 ej=0;
 suma1=0;
 suma2=0;
 suma3=0;
 act1++;  
 break; 
case 1:
     lcd.clear();
 lcd.setCursor(3,0);  
 lcd.print("REINICIAR"); 

 act1=0;
 break;
    }
  }
    
    void activacion3 (){
      if(act1==1){ 
      if(rep<8){    
fil=0;
cont=0;
c1=0;
c2=0;
c3=0;
c4=0;
c5=0;

conta=0;
val1=0;
val2=0;
val3=0;
val4=0;
distancia1_m=50000;
distancia2_m=50000;
distancia3_m=50000;
distancia4_m=50000;
distancia5_m=50000;
  
  for(;fil<48;fil++){  
    
    
  distancia1=((pow(matriz4[fil][1]-matriz_p[ej][1],2))+(pow(matriz4[fil][0]-matriz_p[ej][0],2))+(pow(matriz4[fil][2]-matriz_p[ej][2],2)));   
  distancia1=sqrt(distancia1);
  matriz2[fil][0]={distancia1};
  matriz2[fil][1]=matriz4[fil][3];
     } 
     if(rep==0){
      for(int r=0 ;r<48;r++){ 
     Serial.println(String(matriz2[c5][0])+String(",")+String(matriz2[c5][1]));   
     }}
for(;c1<48;c1++){ 
  conta++;
  
  distancia1=matriz2[c1][0];
 if(distancia1 < distancia1_m){
    distancia1_m = distancia1;
    etiqueta1 = matriz2[c1][1];
    vtr[0]=etiqueta1;
   co6=c1;   
  }  
  }  
  if (conta==48){
    
    matriz2[co6][0]=50000;
    }
  
  for(;c2<48;c2++){
    distancia2=matriz2[c2][0];
    conta++;
    if(distancia2<distancia2_m){
    distancia2_m = distancia2;
    etiqueta2 = matriz2[c2][1];
    vtr[1]=etiqueta2;    
  co6=c2;  
  }   
  }
    if (conta==96){
    matriz2[co6][0]=50000;    
    }
for(;c3<48;c3++){ 
  distancia3=matriz2[c3][0];
    conta++;
    if(distancia3<distancia3_m){
    distancia3_m = distancia3;
    etiqueta3 = matriz2[c3][1];
    vtr[2]=etiqueta3;
    co6=c3;
  }   
  }  
    if (conta==144){
    matriz2[co6][0]=50000;
    }
for(;c4<48;c4++){ 
  distancia4=matriz2[c4][0];
  conta++;
    if(distancia4<distancia4_m){
    distancia4_m = distancia4;
    etiqueta4 = matriz2[c4][1];
    vtr[3]=etiqueta4;
    co6=c4;
  } 

  }
    if (conta==192){
    matriz2[co6][0]=50000;
    }
for(;c5<48;c5++){ 
 
  distancia5=matriz2[c5][0];
  conta++;
    if(distancia5<distancia5_m){
    distancia5_m = distancia5;
    etiqueta5 = matriz2[c5][1];
    vtr[4]=etiqueta5;  
    co6=c5;   
  } 
  
  
  }
  if (conta==240){
    matriz2[co6][0]=50000;
    }
   
  if (act1==1){
  Serial.println(String("EJEMPLO {")+String(matriz_p[ej][0])+String(" , ")+String(matriz_p[ej][1])+String(" , ")+String(matriz_p[ej][2])+String(" , ")+String(matriz_p[ej][3])+String("}"));
 Serial.println(String("ETIQUETA ")+String(etiqueta1));
 Serial.println(String("ETIQUETA ")+String(etiqueta2));
  Serial.println(String("ETIQUETA ")+String(etiqueta3));
Serial.println(String("ETIQUETA ")+String(etiqueta4));
  Serial.println(String("ETIQUETA ")+String(etiqueta5)); 
  etiqueta6=etiqueta1;
  Serial.println("con k = 1"); 
  Serial.println(String("datos son de etiqueta:")+String(etiqueta1));
  if(etiqueta1==matriz_p[ej][3]){
  Serial.println("Acierto");
  vec1[rep]=1; 
}else{
  Serial.println("Error");
  vec1[rep]=0; 
}

Serial.println("con k = 3");
for(int p=0;p<3;p++){
  if(vtr[p]==1){
    val1++;
  }
  if(vtr[p]==2){
    val2++;
  }
  if(vtr[p]==3){
    val3++;
  } 
  if(vtr[p]==4){
    val4++;
  } 
}
if(val1>val2&&val1>val3&&val1>val4){
  etiqueta6=1;
}
if(val2>val1&&val2>val3&&val2>val4){
  etiqueta6=2;
}
if(val3>val1&&val3>val2&&val3>val4){
  etiqueta6=3;
}
if(val4>val1&&val4>val2&&val4>val3){
  etiqueta6=4;
}
Serial.println(String("datos son de etiqueta:")+String(etiqueta6));
if(etiqueta6==matriz_p[ej][3]){
  Serial.println("Acierto");
  vec2[rep]=1; 
}else{
  Serial.println("Error");
  vec2[rep]=0; 
}
val1=0;
val2=0;
val3=0;
val4=0;


for(int o=0;o<5;o++){
  if(vtr[o]==1){
    val1++;
  }
  if(vtr[o]==2){
    val2++;
  }
  if(vtr[o]==3){
    val3++;
  } 
  if(vtr[o]==4){
    val4++;
  } 
}
if(val1>val2&&val1>val3&&val1>val4){
  etiqueta6=1;
}
if(val2>val1&&val2>val3&&val2>val4){
  etiqueta6=2;
}
if(val3>val1&&val3>val2&&val3>val4){
  etiqueta6=3;
}
if(val4>val1&&val4>val2&&val4>val3){
  etiqueta6=4;
}

Serial.println("con k = 5"); 
Serial.println(String("datos son de etiqueta:")+String(etiqueta6));
if(etiqueta6==matriz_p[ej][3]){
  Serial.println("Acierto");
 vec3[rep]=1; 
}else{
  Serial.println("Error");
  vec3[rep]=0; 
}

ej++;
rep ++;
Serial.println(rep);
  }       
    }else{
  Serial.println("TODOS LOS DATOS INGRESADOS");
   
}
    }}
      
 
