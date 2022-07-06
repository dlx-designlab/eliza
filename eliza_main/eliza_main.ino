//参考: https://miraluna.hatenablog.com/entry/rasen

#include<Servo.h>

int servo_socket_NS = 11;
int servo_socket_EW = 12;
Servo servo_NS, servo_EW; 

void setup() {

 servo_NS.attach( servo_socket_NS );
 servo_EW.attach( servo_socket_EW );

 pinMode(1, INPUT);//N_OUT
 pinMode(23, INPUT);//NE_IN
 pinMode(22, INPUT);//E_IN
 pinMode(21, INPUT);//SE_IN
 pinMode(20, INPUT);//S_IN
 pinMode(19, INPUT);//SW_IN
 pinMode(18, INPUT);//W_IN
 pinMode(13, INPUT);//NW_OUT

 pinMode(0, OUTPUT);//N_IN
 pinMode(2, OUTPUT);//NE_OUT
 pinMode(3, OUTPUT);//E_OUT
 pinMode(4, OUTPUT);//SE_OUT
 pinMode(5, OUTPUT);//S_OUT
 pinMode(6, OUTPUT);//SW_OUT
 pinMode(7, OUTPUT);//W_OUT
 pinMode(8, OUTPUT);//NW_OUT
 

 int prevt = 0;
 
 int t0 = 0;
 int t1 = 0;
 int t2 = 0;
 int t3 = 0;
 int t4 = 0;
 int t5 = 0;
 int t6 = 0;
 int t7 = 0;
}


void loop(){



 // 0=正転, 90=停止, 180=逆転
 
//North
  int threshold_0 = 2;
  int t0 = 0;

  digitalWrite(0, HIGH);
  while (digitalRead(1)!=HIGH)  t0++;
  digitalWrite(0, LOW);  
  delay(1);

if( t0 > threshold_0 )
 {servo_NS.write(120);
 delay(1500);

 servo_NS.write(90);
 delay(3000);
 
 servo_NS.write(60);
 delay(1500);

 servo_NS.write(90);
 delay(10);}


//SouthWest
  int threshold_1 = 2;
  int t1 = 0;

  digitalWrite(2, HIGH);
  while (digitalRead(23)!=HIGH) t1++;
  digitalWrite(2, LOW);  
  delay(1);

if( t1 > threshold_1 ){
 servo_NS.write(120);
 servo_EW.write(120);
 delay(1500);

 servo_NS.write(90);
 servo_EW.write(90);
 delay(3000);

 servo_NS.write(60);
 servo_EW.write(60);
 delay(1500);

 servo_NS.write(90);
 servo_EW.write(90);
 delay(3000);
 }


//East
  int threshold_2 = 2;
  int t2 = 0;

  digitalWrite(3, HIGH);
  while (digitalRead(22)!=HIGH) t2++;
  digitalWrite(3, LOW);  
  delay(1);

if( t2 > threshold_2 ){
 servo_EW.write(120);
 delay(1500);
 
 servo_EW.write(90);
 delay(3000);
 
 servo_EW.write(60);
 delay(1500);

 servo_EW.write(90);
 delay(3000);
 }

//NorthWest
  int threshold_3 = 2;
  int t3 = 0;
  
  digitalWrite(4, HIGH);
  while (digitalRead(21)!=HIGH) t3++;
  digitalWrite(4, LOW);  
  delay(1);

if( t3 > threshold_3 ){
 servo_NS.write(60);
 servo_EW.write(120);
 delay(1500);

 servo_NS.write(90);
 servo_EW.write(90);
 delay(3000);

 servo_NS.write(120);
 servo_EW.write(60);
 delay(1500);

 servo_NS.write(90);
 servo_EW.write(90);
 delay(5000);
 }

//South
  int threshold_4 = 2;
  int t4 = 0;

  digitalWrite(5, HIGH);
  while (digitalRead(20)!=HIGH) t4++;
  digitalWrite(5, LOW);  
  delay(1);

if( t4 > threshold_4 ){
 servo_NS.write(60);
 delay(1500);

 servo_NS.write(90);
 delay(3000);
 
 servo_NS.write(120);
 delay(1500);

 servo_NS.write(90);
 delay(5000);
 }

//NorthEast
  int threshold_5 = 2;
  int t5 = 0;

  digitalWrite(6, HIGH);
  while (digitalRead(19)!=HIGH) t5++;
  digitalWrite(6, LOW);  
  delay(1);

if( t5 > threshold_5 ){
 servo_NS.write(60);
 servo_EW.write(60);
 delay(1500);

 servo_NS.write(90);
 servo_EW.write(90);
 delay(3000);

 servo_NS.write(120);
 servo_EW.write(120);
 delay(1500);

 servo_NS.write(90);
 servo_EW.write(90);
 delay(3000);
 }

//West
  int threshold_6 = 2;
  int t6 = 0;

  digitalWrite(7, HIGH);
  while (digitalRead(18)!=HIGH) t6++;
  digitalWrite(7, LOW);  
  delay(1);


if( t6 > threshold_7 ){
 servo_EW.write(60);
 delay(1500);
 
 servo_EW.write(90);
 delay(3000);
 
 servo_EW.write(120);
 delay(1500);

 servo_EW.write(90);
 delay(3000);
}

//SouthEast
  int t7 = 0;
  int threshold_7 = 2;

  digitalWrite(8, HIGH);
  while (digitalRead(13)!=HIGH) t7++;
    digitalWrite(8, LOW);  
  delay(1);

if( t7 > threshold_7 ){
 servo_NS.write(120);
 servo_EW.write(60);
 delay(1500);

 servo_NS.write(90);
 servo_EW.write(90);
 delay(3000);

 servo_NS.write(60);
 servo_EW.write(120);
 delay(1500);

 servo_NS.write(90);
 servo_EW.write(90);
 delay(3000);
 }

}