// C++ code
//
#define NO_BOTON 0 
#define BOTON_A 1
#define BOTON_B 2
#define BOTON_C 3
#define BOTON_D 4

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

#define DURACION_MINUTO 1000
#define DELAY_DISPLAYS 8

int melody[] = {
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5,
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, 
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, 
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_F4,
  NOTE_G4, 0, NOTE_G4, NOTE_D5, NOTE_C5, 0, NOTE_AS4, 0,
  NOTE_A4, 0, NOTE_A4, NOTE_A4, NOTE_C5, 0, NOTE_AS4, NOTE_A4, 
  NOTE_G4,0, NOTE_G4, NOTE_AS5, NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4,0, NOTE_G4, NOTE_AS5, NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4, 0, NOTE_G4, NOTE_D5, NOTE_C5, 0, NOTE_AS4, 0,
  NOTE_A4, 0, NOTE_A4, NOTE_A4, NOTE_C5, 0, NOTE_AS4, NOTE_A4, 
  NOTE_G4,0, NOTE_G4, NOTE_AS5, NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4,0, NOTE_G4, NOTE_AS5, NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,0,0,0,0,0,0,0,0
 };

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4,4,4,4,  4,4,4,4,  4,4,4,4,  4,4,4,4,  4,4,4,4,
  4,4,4,4,  4,4,4,4,  4,4,4,4,  4,4,4,4,  4,4,4,4,
  4,4,4,4,  4,4,4,4,  4,4,4,4,  4,4,4,4,  4,4,4,4,
  4,4,4,4,  4,4,4,4,  4,4,4,4,  4,4,4,4,  4,4,4,4,
  4,4,4,4,  4,4,4,4,  4,4,4,4,  4,4,4,4,  4,4,4,4,
  4,4,4,4,  4,4,4,4,  4,4,4,4,  };

int digitos[13][7] = {
    //A     B     C       D      E      F      G
    {LOW  ,LOW  ,LOW    ,LOW   ,LOW   ,LOW   ,HIGH}, // 0
    {HIGH ,LOW  ,LOW    ,HIGH  ,HIGH  ,HIGH  ,HIGH}, // 1
    {LOW  ,LOW  ,HIGH   ,LOW   ,LOW   ,HIGH  ,LOW} , // 2
    {LOW  ,LOW  ,LOW    ,LOW   ,HIGH  ,HIGH  ,LOW} , // 3
    {HIGH ,LOW  ,LOW    ,HIGH  ,HIGH  ,LOW   ,LOW} , // 4
    {LOW  ,HIGH ,LOW    ,LOW   ,HIGH  ,LOW   ,LOW} , // 5
    {LOW  ,HIGH ,LOW    ,LOW   ,LOW   ,LOW   ,LOW} , // 6
    {LOW  ,LOW  ,LOW    ,HIGH  ,HIGH  ,HIGH  ,HIGH}, // 7
    {LOW  ,LOW  ,LOW    ,LOW   ,LOW   ,LOW   ,LOW} , // 8
    {LOW  ,LOW  ,LOW    ,LOW   ,HIGH  ,LOW   ,LOW} , // 9
    {LOW ,HIGH  ,HIGH   ,LOW   ,LOW  ,LOW  , HIGH}, //C
    {LOW ,HIGH  ,HIGH    ,HIGH  ,LOW ,LOW  ,LOW}, //F
    {HIGH ,HIGH  ,HIGH    ,HIGH  ,HIGH ,HIGH  ,LOW} //signo -
};
  
int pinTemp = A1;
int sensorInput;
double temp;

int horas = 9;
int minutos = 25;

int horaSet = 0;
int minutoSet = 0;

int horaAlarma = 18;
int minutosAlarma = 30;

long millisBefore = 0;
long millisNow = 0;
long millisBeforeForMinute = 0;

int buttonNow = 0;
int buttonBefore = 1023;
float tempActual;
int flag=0;
double tempF;



void setup()
{
  Serial.begin(9600);
  
  for(int i = 2; i < 13; i ++){
    //seteo de displays 7 seg
  	pinMode(i,OUTPUT);
  }
  
  //botones y sensor de temp
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  
  //leds
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
}

void agregarMinuto(){
	minutos++;
    if(minutos==60) 
    {
      minutos = 0;
      if (horas == 23){
      	horas = 0;
      }
      else {
      	horas++;
	  }
    }
}

void loop()
{
  if (horas == horaAlarma && minutos == minutosAlarma){
    coffinDance();
  }
  millisNow = millis();
  if(!flag)
  {
    escribirHoras(horas);
    escribirMinutos(minutos);
  }
  
  else if(flag==1)
  {
    escribirTemperatura(temp, 0);
    
  }
  else if(flag==2)
  {
    tempF=convertToFarenheit(temp);
    escribirTemperatura(tempF, 1);
  }
  else if(flag==3)
  {
    escribirHoras(horaSet);
    escribirMinutos(minutoSet);
  }
  if (millisNow - DURACION_MINUTO > millisBeforeForMinute){
  	agregarMinuto();
    millisBeforeForMinute = millisNow;
  }
  
  if (millisNow - 1000 > millisBefore){
    obtenerTemp();
    Serial.println(temp);
    shutdownLeds();    
    
    if (temp < 20){
      	Serial.println("frio");
    	digitalWrite(A2, HIGH);
    }
    else if (temp >= 20 && temp <= 25){
      	Serial.println("medio");
    	digitalWrite(A3, HIGH);
    }
    else {
      	Serial.println("caliente");
    	digitalWrite(A4, HIGH);
    }
	millisBefore = millisNow;
  }
  
  buttonNow = analogRead(A0);
  if (buttonNow < 1010 && buttonBefore > 1010){
    int valorBoton = leerBotones(buttonNow);
    switch(valorBoton)
    {
      case BOTON_A:
      Serial.println("boton A");
      if(flag==0)//MODO SET
      {
        flag=3; //Entro en modo set
        horaSet = horas;
        minutoSet = minutos;
       
      }
      else if(flag==3)
      {
        flag=0;//salgo modo set, asigno horas y mins
        horas = horaSet;
        minutos = minutoSet;
      }
      
      break;
      case BOTON_B://Sumo horas en modo SET
      if(flag==3)
      {
        if (horaSet == 23){
        	horaSet = 0;
        }
        else {
          horaSet++;
        }
        Serial.println("boton B");
      }
      break;
      case BOTON_C://Sumo minutos en modo SET
      if(flag==3)
      {
        if (minutoSet == 59){
          minutoSet = 0;
        }
        else {
          minutoSet++;
        }
        Serial.println("boton C");
      }
      break;
      case BOTON_D://CAMBIO DE MODOS HORA - TEMP C - TEMP F
      if(!flag)
      {
        flag=1;
      }
      else if(flag==1)
      {
        flag=2;
      }
      else if(flag==2)
      {
        flag=0;
      }
      Serial.println("boton D");
      break;
    }
  }
  buttonBefore = buttonNow;
}

int leerBotones(int valor){
  
  if(valor > 1000)
  {
    return NO_BOTON;
  }
  if(valor > 500 && valor < 520)
  {
    return BOTON_A;
  }
  if(valor > 670 && valor < 690)
  {
    return BOTON_B;
  }
  if(valor > 760 && valor < 780)
  {
    return BOTON_C;
  }
  if(valor > 800 && valor < 830)
  {
    return BOTON_D;
  }
}

void escribirMinutos(int minutos)
{
  int a = minutos / 10;
  int b = (minutos - (a * 10));
  digitalWrite(11,HIGH);
  escribirDigito(a);
  delay(DELAY_DISPLAYS);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  escribirDigito(b);
  delay(DELAY_DISPLAYS);
  digitalWrite(12,LOW);
}

void escribirHoras(int horas){
  int a = horas / 10;
  int b = (horas - (a * 10));
  
  digitalWrite(9,HIGH);
  escribirDigito(a);
  delay(DELAY_DISPLAYS);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  escribirDigito(b);
  delay(DELAY_DISPLAYS);
  digitalWrite(10,LOW);
}

void shutdownLeds(){
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
  digitalWrite(A4, LOW);
}

float obtenerTemp(){
  sensorInput = analogRead(A1);        //read the analog sensor and store it
  temp = (double)sensorInput / 1024;   //find percentage of input reading
  temp = temp * 5;                     //multiply by 5V to get voltage
  temp = temp - 0.5;                   //Subtract the offset 
  temp = temp * 100;                   //Convert to degrees 
  return  temp;
}

float convertToFarenheit(float temp){
	return 1.8 * temp + 32;
}

void escribirDigito(int digito)
{
  for(int i=0; i<7; i++)
  {
    digitalWrite(i+2, digitos[digito][i]);
  }
}

void alarma()
{
  tone(13, 400, 100);
  delay(200);
  tone(13, 400, 300);
  delay(200);
}
long beforeMillis = 0;
long afterMillis = 0;
long totalTardo = 0;
long totalMinutosAAgregar = 0;

void coffinDance()
{
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  escribirDigito(11);
  beforeMillis = millis();
  for (int thisNote = 0; thisNote < 112; thisNote++) 
  {
    int noteDuration = 750 / noteDurations[thisNote];
    tone(13, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  afterMillis = millis();
  totalTardo = afterMillis - beforeMillis;
  
  totalMinutosAAgregar = totalTardo / DURACION_MINUTO;
  Serial.println(totalTardo / DURACION_MINUTO);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  for (int i = 0; i < totalMinutosAAgregar; i++){
  	agregarMinuto();
  }
  
}

void escribirTemperatura(float temp, int escala){
 	
  int a;
  int b;
  int c;
  
  if(temp<100 && temp>=-0.9) //hago el calculo para que se muestren 2 digitos (numeros positivos)
  {
    a = temp / 10;
    b = temp - (a * 10);
    digitalWrite(9,HIGH);
  	escribirDigito(a);
  	delay(DELAY_DISPLAYS);
  	digitalWrite(9,LOW);
  	digitalWrite(10,HIGH);
  	escribirDigito(b);
  	delay(DELAY_DISPLAYS);
  	digitalWrite(10,LOW);
  }
  else if(temp>99)			//hago el calculo para que se muestren 3 digitos (numeros positivos)
  {
    a = temp / 100;
    b = (temp - (a * 100)) / 10;
    c = temp - (a * 100) - (b * 10);
    digitalWrite(9,HIGH);
 	escribirDigito(a);
 	delay(DELAY_DISPLAYS);
 	digitalWrite(9,LOW);
 	digitalWrite(10,HIGH);
  	escribirDigito(b);
  	delay(DELAY_DISPLAYS);
  	digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  	escribirDigito(c);
  	delay(DELAY_DISPLAYS);
  	digitalWrite(11,LOW);
  }
  else if(temp<0.9)			
  {
   	 digitalWrite(9, HIGH);		//muestro en el pin 9 el signo -
     escribirDigito(12);
     delay(DELAY_DISPLAYS);
     digitalWrite(9,LOW);
    
    if(temp>-10)
    {
        a=temp*-1;				//temp de 1 digito, multiplico * -1 para pasar a positivo el numero
    	digitalWrite(10, HIGH);
    	escribirDigito(a);
    	delay(DELAY_DISPLAYS);
    	digitalWrite(10,LOW);
    }
    	else
    	{
       	 	a = (temp / 10) * -1;  		//hago el calculo para que muestre 2 digitos y los multiplico * -1 para pasar a positivo el numero
    		b = (temp - (-a * 10)) * -1;
       		digitalWrite(10, HIGH);
    		escribirDigito(a);
    		delay(DELAY_DISPLAYS);
    		digitalWrite(10,LOW);
        	digitalWrite(11, HIGH);
    		escribirDigito(b);
    		delay(DELAY_DISPLAYS);
    		digitalWrite(11,LOW);
    	}
    }
 
  switch(escala)
  {
    case 0:
    if(temp>99 || temp<=-10)   //si es mayor a 99 o es menor igual  -10 muestro el C en el pin 12
    {
      	digitalWrite(12,HIGH);
    	escribirDigito(10);
  		delay(DELAY_DISPLAYS);
  		digitalWrite(12,LOW);
    }
    else if(temp>-10)         //si es mayor a -10 muestro el C en el pin 11
    {
      	digitalWrite(11,HIGH);
    	escribirDigito(10);
  		delay(DELAY_DISPLAYS);
  		digitalWrite(11,LOW);
    }
    break;
    case 1:
    if(temp>99 || temp<=-10) //F en el 12
    {
      	digitalWrite(12,HIGH);
    	escribirDigito(11);
  		delay(DELAY_DISPLAYS);
  		digitalWrite(12,LOW);
    }
    else if(temp>-10)       //F en el 11
    {
      	digitalWrite(11,HIGH);
    	escribirDigito(11);
  		delay(DELAY_DISPLAYS);
  		digitalWrite(11,LOW);
    }
  break;
  }
  
}