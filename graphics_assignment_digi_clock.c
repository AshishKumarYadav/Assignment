#include<graphics.h>
#include<stdio.h>
#include<time.h>

 
int main()
{
      int gd = DETECT, gm;
      initgraph (&gd, &gm, ""); 
setbkcolor(BROWN);
while(1)
{   
time_t now;
struct tm *now_tm;
int hour,minute,second;
now = time(NULL);
now_tm = localtime(&now);
hour = now_tm->tm_hour;
minute = now_tm->tm_min;
second = now_tm->tm_sec;

// 12hour format
if(hour<=12)
	{

//AM

	line(550,300,570,300);
	line(550,300,550,320);
	line(570,300,570,320);
	line(550,312,570,312);
	
	line(580,300,580,320);
	line(580,300,590,310);
	line(600,300,600,320);
	line(600,300,590,310);
	}
else
{



//PM
	line(550,300,550,320);
	line(550,300,570,300);
	line(570,300,570,310);
	line(570,310,550,310);

	line(580,300,580,320);
	line(580,300,590,310);
	line(600,300,600,320);
	line(600,300,590,310);
}

hour=hour%12;
int h1 = hour/10;
int h2 = hour%10;
int m1 = minute/10;
int m2 = minute%10;
int s1 = second/10;
int s2 = second%10;
display_format(h1,h2,m1,m2,s1,s2);
delay(100);
cleardevice();

}
}

void display_format(int h1, int h2, int m1, int m2,int s1, int s2)
{ 
      //Hours Block
      digit(h1,100,250,100,330,140,250,140,330,100,290,140,290);
      
      digit(h2,160,250,160,330,200,250,200,330,160,290,200,290);
      
      
      //:
      putpixel(220,290,RED);
      putpixel(220,330,RED);
      
      
      //minute block
      digit(m1,240,250,240,330,280,250,280,330,240,290,280,290);
                  
      digit(m2,320,250,320,330,360,250,360,330,320,290,360,290);
      
//:
      putpixel(380+20,290,RED);
      putpixel(380+20,330,RED);
      
      //Second Block
      digit(s1,400+20,250,400+20,330,440+20,250,440+20,330,400+20,290,440+20,290);
       
      digit(s2,460+20,250,460+20,330,500+20,250,500+20,330,460+20,290,500+20,290);
     
      
}
//coordinates
void digit(int value , int left_up_x,int left_up_y, int left_down_x,int left_down_y,int right_up_x,int right_up_y, int right_down_x,int right_down_y,int left_mid_x,int left_mid_y,int right_mid_x,int right_mid_y)
{
if(value==1)
	{
	 line(right_up_x,right_up_y,right_mid_x,right_mid_y);
	 line(right_down_x,right_down_y,right_mid_x,right_mid_y);
	}
if(value==2)
	{
	line(right_up_x,right_up_y,left_up_x,left_up_y);
	line(right_up_x,right_up_y,right_mid_x,right_mid_y);
	line(right_mid_x,right_mid_y,left_mid_x,right_mid_y);
	line(left_mid_x,left_mid_y,left_down_x,left_down_y);
	line(left_down_x,left_down_y,right_down_x,right_down_y);
	}
if(value==3)
	{
	line(right_up_x,right_up_y,left_up_x,left_up_y);
	line(right_up_x,right_up_y,right_mid_x,right_mid_y);
	line(right_mid_x,right_mid_y,left_mid_x,left_mid_y);
	line(right_mid_x,right_mid_y,right_down_x,right_down_y);
	line(left_down_x,left_down_y,right_down_x,right_down_y);
	
	}
if(value==4)
	{
	line(left_up_x,left_up_y,left_mid_x,left_mid_y);
	line(right_mid_x,right_mid_y,left_mid_x,left_mid_y);
	line(right_up_x,right_up_y,right_mid_x,right_mid_y);
	line(right_down_x,right_down_y,right_mid_x,right_mid_y);
	}
if(value==5)
	{
	line(right_up_x,right_up_y,left_up_x,left_up_y);
	line(left_up_x,left_up_y,left_mid_x,left_mid_y);
	line(right_mid_x,right_mid_y,left_mid_x,left_mid_y);
	line(right_down_x,right_down_y,right_mid_x,right_mid_y);
	line(left_down_x,left_down_y,right_down_x,right_down_y);
	}
if(value==6)
	{
	line(right_up_x,right_up_y,left_up_x,left_up_y);
	line(left_up_x,left_up_y,left_mid_x,left_mid_y);
	line(right_mid_x,right_mid_y,left_mid_x,left_mid_y);
	line(right_down_x,right_down_y,right_mid_x,right_mid_y);
	line(left_down_x,left_down_y,right_down_x,right_down_y);
	line(left_down_x,left_down_y,left_mid_x,left_mid_y);
	}
if(value==7)
	{
	line(right_up_x,right_up_y,left_up_x,left_up_y);
	line(right_up_x,right_up_y,right_mid_x,right_mid_y);
	line(right_down_x,right_down_y,right_mid_x,right_mid_y);
	}
if(value==8)
	{
	line(right_up_x,right_up_y,left_up_x,left_up_y);
	line(left_up_x,left_up_y,left_mid_x,left_mid_y);
	line(right_mid_x,right_mid_y,left_mid_x,left_mid_y);
	line(right_down_x,right_down_y,right_mid_x,right_mid_y);
	line(left_down_x,left_down_y,right_down_x,right_down_y);
	line(left_down_x,left_down_y,left_mid_x,left_mid_y);
	line(right_mid_x,right_mid_y,right_up_x,right_up_y);
	}
if(value==9)
	{
	line(right_up_x,right_up_y,left_up_x,left_up_y);
	line(left_up_x,left_up_y,left_mid_x,left_mid_y);
	line(right_mid_x,right_mid_y,left_mid_x,right_mid_y);
	line(right_down_x,right_down_y,right_mid_x,right_mid_y);
	line(left_down_x,left_down_y,right_down_x,right_down_y);
	line(right_mid_x,right_mid_y,right_up_x,right_up_y);
	}

if(value==0)
	{
	line(right_up_x,right_up_y,left_up_x,left_up_y);
	line(left_up_x,left_up_y,left_mid_x,left_mid_y);
	line(right_down_x,right_down_y,right_mid_x,right_mid_y);
	line(left_down_x,left_down_y,right_down_x,right_down_y);
	line(left_down_x,left_down_y,left_mid_x,left_mid_y);
	line(right_mid_x,right_mid_y,right_up_x,right_up_y);
	}
	
}

