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

byte r0=0,r1=0,r2=0,c0=0,c1=0,c2=0,c3=0;
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

digitalWrite(RE, HIGH);
for(byte r=0;r<=7;r++)
{                           /*for RE starts*/                         
r2=(r & 0b100)>>2;
r1=(r & 0b010)>>1;
r0=(r & 0b001);
digitalWrite(R0, r0);
digitalWrite(R1, r1);
digitalWrite(R2, r2);
for(byte d=0;d<=3;d++)
  {                        /*for DE starts*/
   if(d==0)
   {
    digitalWrite(CE0,LOW);
    digitalWrite(CE1,HIGH);
    digitalWrite(CE2,HIGH);
    digitalWrite(CE3,HIGH);
   }
   else if(d==1)
   {
    digitalWrite(CE0,HIGH);
    digitalWrite(CE1,LOW);
    digitalWrite(CE2,HIGH);
    digitalWrite(CE3,HIGH);
   }
   else if(d==2)
   {
    digitalWrite(CE0,HIGH);
    digitalWrite(CE1,HIGH);
    digitalWrite(CE2,LOW);
    digitalWrite(CE3,HIGH);
   }
   else if(d==3)
   {
    digitalWrite(CE0,HIGH);
    digitalWrite(CE1,HIGH);
    digitalWrite(CE2,HIGH);
    digitalWrite(CE3,LOW);
   }
   for(byte c=0;c<=15;c++)
   {                            /* for CE Starts*/
    c0=(c & 0x0001);
    c1=(c & 0b0010)>>1;
    c2=(c & 0b0100)>>2;
    c3=(c & 0b1000)>>3;
    digitalWrite(C0,c0);
    digitalWrite(C1,c1);
    digitalWrite(C2,c2);
    digitalWrite(C3,c3);
    delay(100);
   }                            /*for CE  ENDS*/          
   
   }                            /* for DE Ends*/
  
  }                             /* for RE ends */
  
  }                             /* Loop Ends */
