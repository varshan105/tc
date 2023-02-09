#include<graphics.h>
#include<dos.h>
void main()
{
	int gmode=DETECT,gdriver,i;
	int font=7,direction=0,font_size=10;
	initgraph(&gmode,&gdriver,"C:\\TURBOC3\\BGI");
 /*	sound(100);
	delay(50);
	nosound();
	delay(50);
	sound(500);
	delay(50);
	sound(50);*/
	for(i=0;i<220;i++)
	{
		circle(320,240,i);
	}
	cleardevice();
	nosound();
	delay(500);
	line(0,20,0,450);//ab
	line(0,20,630,20);   //ad
	//line(630,20,0,450); diagonal bd
	line(0,450,630,450);  //bc
	line(630,450,630,20);  //cd
	//line(0,20,630,450); diagonal ac
	//inner rectangle
	line(10,30,10,440);  //ab
	line(10,440,620,440);  //bc
	line(620,440,620,30);  //cd
	line(620,30,10,30);  //ad
	outtextxy(270,240,"LOGAVARSHINI");
	//setfillstyle(SLASH_FILL,GREEN);
	delay(100);
	sound(300);
	delay(50);
	sound(400);
	delay(100);
	sound(500);
	delay(50);
	sound(400);
	delay(100);
	sound(300);
	delay(50);
	nosound();
	for(i=30;i<610;i+=20)
	{
		setcolor(WHITE);
		circle(i,200,10);
		delay(50);
		setcolor(BLACK);
		circle(i,200,10);
	}
	for(i=30;i<610;i+=20)
	{
		setcolor(WHITE);
		circle(i,280,10);
		delay(100);
		setcolor(BLACK);
		circle(i,280,10);
	}
	//setcolor(WHITE);
	//circle(609,280,10);
	sound(300);
	delay(100);
	sound(400);
	delay(100);
	sound(500);
	delay(100);
	sound(400);
	delay(100);
	sound(300);
	nosound();
	settextstyle(font,direction,font_size);
	getch();
}