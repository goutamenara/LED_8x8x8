void test ()
{
for(int p=0;p<30;p++)
for(z=2;z<=4;z++)  
{
for(int n=0;n<2;n++)
{
for(int i=2;i<4;i++)
{
 glow_led(2,i,z);
 glow_led(i,2,z);
 glow_led(4,i,z);
 glow_led(i,4,z);
 
 }
}
}

for(int p=0;p<30;p++)
for(z=2;z<=4;z++)  
{
for(int n=0,i=1;n<2;n++)
{
 glow_led(1,i+2,z);
 
 glow_led(2,i+3,z);
 glow_led(2,i+1,z);
 
 glow_led(3,i,z);
 glow_led(3,i+4,z);

 glow_led(4,i+3,z);
 glow_led(4,i+1,z);

 glow_led(4,i+2,z);
 
 }
}



  
//for(int i=7;1>=0;i--)
  //{
  //circle(i);
  //delay(10);
  
  //}



//
/*
rand1=random(8);
rand2=random(8);
rand3=random(8);
for(y=7;y>=0;y--)
{

for(int n=0;n<5;n++)
{
for(int i=0,r;i<4;i++)
{
 glow_led(rand1,rand2,y);
 glow_led(rand2,rand1,y);
 glow_led(rand1,rand1,y);
 glow_led(rand1+3,rand1+2,y);
 glow_led(rand2,rand2+4,y);
 glow_led(rand1,rand1+4,y);
 glow_led(rand1,rand1-2,y);

 glow_led(rand1/2,rand2,y);
 glow_led(rand2,rand1,y);
 glow_led(rand1,rand1/3,y);
 glow_led(rand1,rand1+2,y);
 glow_led(rand2*2,rand2+4,y);
 glow_led(rand1,rand1+1,y);
 glow_led(rand1,rand1-5,y);

}
}
}

}

/*
for(byte X=0;X<7;X++)
{
 delay(1);
for(z=4;z<=7;z++)
{
for(x=X;x<=X+3;x++)
{
  for(y=0;y<=3;y++)
  {
    glow_led(x,y,z);
    delayMicroseconds(1);
  }
}
}
} */ 
}

