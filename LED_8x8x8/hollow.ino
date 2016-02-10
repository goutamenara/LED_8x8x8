
void hollow()
{
for(z=0;z<=1;z++)
{
for(int n=0;n<12;n++)
{
for(int i=3;i<=4;i++)
{
 glow_led(i,3,z);
 glow_led(3,i,z);
 glow_led(4,i,z);
 glow_led(i,4,z);
}
}
}


for(z=2;z<=3;z++)
{
for(int n=0;n<12;n++)
{
for(int i=2;i<=3;i++)
{
 glow_led(i,2,z);
 glow_led(2,i,z);
 glow_led(5,i,z);
 glow_led(i,5,z);
}
}
}


for(z=4;z<=5;z++)
{
for(int n=0;n<12;n++)
{
for(int i=1;i<=6;i++)
{
 glow_led(i,1,z);
 glow_led(1,i,z);
 glow_led(6,i,z);
 glow_led(i,6,z);
}
}
}


for(z=6;z<=7;z++)
{
for(int n=0;n<12;n++)
{
for(int i=0;i<=7;i++)
{
 glow_led(i,0,z);
 glow_led(0,i,z);
 glow_led(7,i,z);
 glow_led(i,7,z);
}
}
}

/*

for(x=7;x>=6;x--)
{
for(int n=0;n<12;n++)
{
for(int i=0;i<=7;i++)
{
 glow_led(x,i,0);
 glow_led(x,0,i);
 glow_led(x,7,i);
 glow_led(x,i,7);
}
}
}


for(x=5;x>=4;x--)
{
for(int n=0;n<12;n++)
{
for(int i=1;i<=6;i++)
{
 glow_led(x,i,1);
 glow_led(x,1,i);
 glow_led(x,6,i);
 glow_led(x,i,6);
}
}
}


for(x=3;x>=2;x--)
{
for(int n=0;n<12;n++)
{
for(int i=2;i<=5;i++)
{
 glow_led(x,i,2);
 glow_led(x,2,i);
 glow_led(x,5,i);
 glow_led(x,i,5);
}
}
}


for(x=1;x>=0;x--)
{
for(int n=0;n<12;n++)
{
for(int i=3;i<=4;i++)
{
 glow_led(x,i,3);
 glow_led(x,3,i);
 glow_led(x,4,i);
 glow_led(x,i,4);
}
}
}

*/

}

