/* LED CUBE 8x8x8 Testing Program
 *  written on: 06-02-2016, 23:46
 *  By: Ashlin Jose, Goutam S
 */

#define C0 0
#define C1 1
#define C2 2
#define C3 3
#define CE0 4
#define CE1 5
#define CE2 6
#define CE3 7
#define RE 8
#define R0 9
#define R1 10
#define R2 11

int ARRAY[8][3]={{0,0,0},{1,1,0},{2,2,0},{3,3,0},{4,4,0},{5,5,0},{6,6,0},{7,7,0}};

byte ce3,ce2,ce1,ce0,c3,c2,c1,c0;
byte re,r2,r1,r0;
byte XY_POS,Z_POS;
void setup() 
{                                   /*Setup Starts*/
pinMode(C0,OUTPUT); 
pinMode(C1,OUTPUT); 
pinMode(C2,OUTPUT); 
pinMode(C3,OUTPUT); 
pinMode(CE0,OUTPUT); 
pinMode(CE1,OUTPUT); 
pinMode(CE2,OUTPUT); 
pinMode(CE3,OUTPUT); 
pinMode(RE,OUTPUT); 
pinMode(R0,OUTPUT); 
pinMode(R1,OUTPUT); 
pinMode(R2,OUTPUT); 

digitalWrite(RE, LOW);
digitalWrite(CE0, HIGH);
digitalWrite(CE1, HIGH);
digitalWrite(CE2, HIGH);
digitalWrite(C0, LOW);
digitalWrite(C1, LOW);
digitalWrite(C2, LOW);
digitalWrite(C3, LOW);
digitalWrite(R0, HIGH);
digitalWrite(R1, HIGH);
digitalWrite(R2, HIGH);
  }                           /*Setup Ends*/

void loop() 
{                            /*loop Starts*/



for(int i=0;i<=7;i++)
{
  XY_POS=224+ARRAY[i][0] + 8*ARRAY[i][1];
  Z_POS =8+ARRAY[i][2];
  ce3=(XY_POS & 0b10000000)>>7;
  ce2=(XY_POS & 0b01000000)>>6;
  ce1=(XY_POS & 0b00100000)>>5;
  ce0=(XY_POS & 0b00010000)>>4;
  c3 =(XY_POS & 0b00001000)>>3;
  c2 =(XY_POS & 0b00000100)>>2;
  c1 =(XY_POS & 0b00000010)>>1;
  c0 =(XY_POS & 0b00000001);

  re =(Z_POS  & 0b1000)>>3;
  r2 =(Z_POS  & 0b0100)>>2;
  r1 =(Z_POS  & 0b0010)>>1;
  r0 =(Z_POS  & 0b0001);

  digitalWrite(CE3,ce3);
  digitalWrite(CE2,ce2);
  digitalWrite(CE1,ce1);
  digitalWrite(CE0,ce0);
  digitalWrite(C3 ,c3);
  digitalWrite(C2, c2);
  digitalWrite(C1, c1);
  digitalWrite(C0, c0);
  digitalWrite(RE, re);
  digitalWrite(R2, r2);
  digitalWrite(R1, r1);
  digitalWrite(R0, r0);
  
 delay(200);
 }

}                             /* Loop Ends */
