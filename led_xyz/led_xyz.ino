/* LED CUBE 8x8x8 Testing Program
 *  written on: 06-02-2016, 23:46
 *  By: Ashlin Jose, Goutam S
 */

#define C0 12
#define C1 13
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

boolean ce3=0,ce2=0,ce1=0,ce0=0,c3=0,c2=0,c1=0,c0=0;
boolean re=0,r2=0,r1=0,r0=0;
int x=1,y=0,z=0,Cen=0;
void glow_led(int x, int y, int z)
{
 c0=(x & 0b001);
 c1=(x & 0b010)>>1;
 c2=(x & 0b100)>>2;
 c3=(y%2);
 
 r0=(z & 0b001);
 r1=(z & 0b010)>>1;
 r2=(z & 0b100)>>2;

 Cen=(15-(pow(2,(y/2))));

 ce0=(Cen & 0b0001);
 ce1=(Cen & 0b0010)>>1;
 ce2=(Cen & 0b0100)>>2;
 ce3=(Cen & 0b1000)>>3;

  digitalWrite(CE3,ce3);
  digitalWrite(CE2,ce2);
  digitalWrite(CE1,ce1);
  digitalWrite(CE0,ce0);
  digitalWrite(C3, c3);
  digitalWrite(C2, c2);
  digitalWrite(C1, c1);
  digitalWrite(C0, c0);
  digitalWrite(R2, r2);
  digitalWrite(R1, r1);
  digitalWrite(R0, r0);
}
void setup() 
{                                   /*Setup Starts*/

Serial.begin(115200);
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

digitalWrite(RE, HIGH);
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
 /*while (!Serial.available()){;}
 x=Serial.parseInt();
 y=Serial.parseInt();
 z=Serial.parseInt();*/
 for(x=0,y=0,z=0;x<8;x++)
  {
   glow_led(x,y,z);
  delay(1);
  }
   for(x=0,y=0,z=7;x<8;x++)
  {
   glow_led(x,y,z);
  delay(1);
  }
   //delay(100);
   
   for(x=7,y=0,z=0;y<8;y++)
  {
   glow_led(x,y,z);
  delay(1);
  }
   for(x=7,y=0,z=7;y<8;y++)
  {
   glow_led(x,y,z);
  delay(1);
  }
   //delay(100);
   
   for(x=7,y=7,z=0;x>=0;x--)
  {
   glow_led(x,y,z);
  delay(1);
  }
   for(x=7,y=7,z=7;x>=0;x--)
  {
   glow_led(x,y,z);
  delay(1);
  }
  //delay(100);
  
   for(x=0,y=7,z=0;y>=0;y--)
  {
   glow_led(x,y,z);
  delay(1);
  }
   for(x=0,y=7,z=7;y>=0;y--)
  {
   glow_led(x,y,z);
  delay(1);
  }
//delay(100);
  
   
}                             /* Loop Ends */
