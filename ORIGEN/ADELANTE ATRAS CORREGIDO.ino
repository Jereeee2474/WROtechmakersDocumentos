//adelante atras
#define ENA 3
#define IN1 6
#define IN2 7 
#define IN3 8 
#define IN4 9 

void back()
{
 analogWrite(ENA,500);
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,HIGH);
 
}

void forward()
{
 analogWrite(ENA,500);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,HIGH);
 
}

void Stop()
{
 analogWrite(ENA,0);
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,LOW);
}
void setup() 
{
  // put your setup code here, to run once:
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
}

void loop() 
{
 
back();//antes forward
delay(1); // Esperamos 2 segundo
forward();//antes back
delay(1000); // Esperamos 2 segundo
Stop();
delay(7000);

}
