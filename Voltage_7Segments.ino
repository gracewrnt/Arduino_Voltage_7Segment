typedef void (*Show)();
int segmentA = A0;
int segmentB = A1;
int segmentC = 3;
int segmentD = 4;
int segmentE = 5;
int segmentF = 7;
int segmentG = 8;
int segmentDP = 2;
int VR = A3;
int digit[] = {6, 9, 10, 11} ;

void setup() {
  pinMode(segmentA, OUTPUT);
  pinMode(segmentB, OUTPUT);
  pinMode(segmentC, OUTPUT);
  pinMode(segmentD, OUTPUT);
  pinMode(segmentE, OUTPUT);
  pinMode(segmentF, OUTPUT);
  pinMode(segmentG, OUTPUT);
  pinMode(digit[0], OUTPUT);
  pinMode(digit[1], OUTPUT);
  pinMode(digit[2], OUTPUT);
  pinMode(digit[3], OUTPUT);
  pinMode(segmentDP, OUTPUT);
  pinMode(VR,INPUT);
  Serial.begin(9600);

}

[ตรงนี้เป็นฟังก์ชัน lowAll highAll Num0-9]

Show showNum[20] = {Num0,Num1,Num2, Num3, Num4, Num5, Num6, Num7, Num8, Num9};

void digitLow() {
  digitalWrite(digit[0], LOW);
  digitalWrite(digit[1], LOW);
  digitalWrite(digit[2], LOW);
  digitalWrite(digit[3], LOW);
}

void loop() {

  int sensorValue = analogRead(A3);
  float voltage = sensorValue*(0.01);
  int a,b,c,d,m,n;
 
  voltage *= 100;
  a = voltage/1000;

  m = voltage - (a*1000);
  b = m/100;

  n = m-(b*100);
  c=n/10;
  d=n-(c*10);
   
      digitalWrite(digit[0], HIGH);
      digitalWrite(segmentDP, LOW);
      Displaynum(a);
      delay(5);  digitLow();

      digitalWrite(digit[1], HIGH);
      digitalWrite(segmentDP, HIGH);
      Displaynum(b);
      delay(5);  digitLow();

      digitalWrite(digit[2], HIGH);
      digitalWrite(segmentDP, LOW);
      Displaynum(c);
      delay(5);  digitLow();

      digitalWrite(digit[3], HIGH);
      digitalWrite(segmentDP, LOW);
      Displaynum(d);
      delay(5);  digitLow();

}

  void Displaynum(int input){    
   switch (input)
   {      
      case 0 :
    Num0();    break;
      case 1 :
    Num1();    break;    
      case 2 :
    Num2();    break;    
      case 3 :
    Num3();    break;    
      case 4 :
    Num4();    break;
      case 5 :
    Num5();    break;    
      case 6 :
    Num6();    break;
      case 7 :
    Num7();    break;    
      case 8 :
    Num8();    break;
      case 9 :
    Num9();    break;    

    }
        }

