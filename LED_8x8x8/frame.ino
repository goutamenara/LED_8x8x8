void frame()
{
for(z=7;z>=0;z--)
{
for(int n=0;n<5;n++)
{
for(int i=0;i<8;i++)
{
 glow_led(i,0,z);
 glow_led(0,i,z);
 glow_led(7,i,z);
 glow_led(i,7,z);
 
 
}
}
}

for(z=0;z<=7;z++)
{
for(int n=0;n<5;n++)
{
for(int i=0;i<8;i++)
{
 glow_led(i,0,z);
 glow_led(0,i,z);
 glow_led(7,i,z);
 glow_led(i,7,z);
 
 
}
}
}


for(x=0;x<=7;x++)
{
for(int n=0;n<5;n++)
{
for(int i=0;i<8;i++)
{
 
 glow_led(x,i,0);
 glow_led(x,0,i);
 glow_led(x,7,i);
 glow_led(x,i,7);

 
}
}
}


for(x=7;x>=0;x--)
{
for(int n=0;n<5;n++)
{
for(int i=0;i<8;i++)
{
 
 glow_led(x,i,0);
 glow_led(x,0,i);
 glow_led(x,7,i);
 glow_led(x,i,7);

 
}
}
}


for(y=7;y>=0;y--)
{
for(int n=0;n<5;n++)
{
for(int i=0;i<8;i++)
{
 
 glow_led(i,y,0);
 glow_led(0,y,i);
 glow_led(7,y,i);
 glow_led(i,y,7);

 
}
}
}

for(y=0;y<=7;y++)
{
for(int n=0;n<5;n++)
{
for(int i=0;i<8;i++)
{
 
 glow_led(i,y,0);
 glow_led(0,y,i);
 glow_led(7,y,i);
 glow_led(i,y,7);

 
}
}
}

}

