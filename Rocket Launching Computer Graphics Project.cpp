#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#define endl "\n"
using namespace std;
void rocket();
void text();
int gd=DETECT,gm,i,j,k;
string x,s = "hello";
class RocketLunch
{
public :
    void fail()
    {
       {
            setcolor(BLUE);
//earth
            for(i=30; i<=40; i++)
            {
                setcolor(BLUE);

                arc(500-i,200+i,0,120,200);
                arc(500-i,200+i,0,120,300);
                arc(500-i,200+i,0,120,400);
                arc(500-i,200+i,0,120,500);

                setcolor(GREEN);
                outtextxy(318,330-i,"B");
                outtextxy(318,340-i,"U");
                outtextxy(318,350-i,"B");
                outtextxy(318,360-i,"T");
                outtextxy(310,385-i,"CSE");
//rocket
                setcolor(WHITE );
                outtextxy(10,400+i,"EARTH");
                for(j=0; j<=7; j++)
                {
                    setcolor(RED);
                    circle(320,300-i,0+j);
                }
                for(k=0; k<=15; k++)
                {
                    setcolor(YELLOW);
                    circle(300,410-i,0+k);
                    circle(340,410-i,0+k);
                    circle(320,410-i,0+k);
                    circle(280,410-i,0+k);
                    circle(360,410-i,0+k);
                }
                setcolor(WHITE);
                line(0,420+i,620,420+i);
                line(340,400-i,340,320-i);
                line(300,400-i,300,320-i);
                line(330,370-i,330,330-i);
                line(310,370-i,310,330-i);
                line(310,330-i,330,330-i);
                line(310,370-i,330,370-i);
                line(300,380-i,340,380-i);
                line(270,400-i,370,400-i);
                line(270,400-i,300,380-i);
                line(340,380-i,370,400-i);
                line(300,320-i,340,320-i);
                line(300,320-i,320,300-i);
                line(340,320-i,320,300-i);
                delay(50);
                //cleardevice();

                if (i==30)
                {
                    delay(1400);
                    for ( int k=0; k<70; k++)
                    {
                        delay(100);
                        setcolor(DARKGRAY);
                        circle(250+0,400-50,k);
                        circle(270+0,400-50,k);
                        setcolor(LIGHTGRAY);
                        circle(285+0,400-50,k+10);
                        circle(318+0,400-50,k+30);
                        circle(335+0,400-50,k+30);
                        circle(370+0,400-50,k+10);
                        setcolor(DARKGRAY);
                        circle(390+0,400-50,k);
                        circle(410+0,400-50,k);
                    }
                    delay(50);
                    break;

                }
            }
            setcolor(GREEN);
            settextstyle(0,EMPTY_FILL,5);
            outtextxy(50,100,"!!!FAILED!!!");
            outtextxy(50,200,"MISSION");
            outtextxy(50,300,"UNSUCCESSFUL");
            getch();
        }
    }///fail function;
    void text()
    {
        initgraph(&gd,&gm,"MAHADI SHAWON SHOJOL");
        settextstyle(0,EMPTY_FILL,1);
        setcolor(YELLOW);
        outtextxy(50,50,"B");
        outtextxy(50,60,"U");
        outtextxy(50,70,"B");
        outtextxy(50,80,"T");
        settextstyle(0,EMPTY_FILL,2);
        setcolor(BLUE);
        outtextxy(100,50,"Bangladesh Space");
        outtextxy(100,70,"Research Organisation");
        settextstyle(0,EMPTY_FILL,1);
        setcolor(WHITE);
        outtextxy(50,120,"WELCOME TO BANGLADESH SPACE REASERCH ORGANISATION.");
        delay(150);
        outtextxy(50,150,"TODAY 04-MARCH-2018 BUBT - ROCKET IS READY TO LAUNCH.");
        delay(150);
        outtextxy(50,180,"IT CARRIES 5 SATELLITES TO DEPLOYE IN THE SUN-");
        delay(150);
        outtextxy(50,210,"SYNCHRONOUS ORBIT.");
        delay(150);
        setcolor(RED);
        outtextxy(50,240,"LAUNCH MASS => 320,000 KG");
        delay(150);
        outtextxy(50,270,"PAYLOAD MASS => 1,440 KG");
        delay(150);
        outtextxy(50,300,"LAUNCH SITE => Mirpur-2 Lunching Station");
        delay(150);
        outtextxy(50,330,"DISTANCE TRAVELL => 647 KM");
        delay(150);
        outtextxy(50,360,"PAYLOAD => 3 DMCE Satellites, 1 CBNT-1 (Technology Demonstrator)");
        delay(150);
        outtextxy(50,390,"& 1 D-O (TD Nano Satellite)");
        delay(150);
        outtextxy(50,420,"SO... COUNTDOWN IS BEGIN");
        delay(150);
        outtextxy(50,450,"Now Rocket is Starting");
        delay(150);
    }///text

    void rocket()
    {
        setcolor(BLUE);
//earth
        for(i=30; i<=500; i++)
        {
            delay(3);
            setcolor(BLUE);

            arc(500-i,200+i,0,120,200);
            arc(500-i,200+i,0,120,300);
            arc(500-i,200+i,0,120,400);
            arc(500-i,200+i,0,120,500);
            arc(500-i,200+i,0,120,600);
            arc(500-i,200+i,0,120,700);


            setcolor(GREEN);
            outtextxy(318,330-i,"B");
            outtextxy(318,340-i,"U");
            outtextxy(318,350-i,"B");
            outtextxy(318,360-i,"T");
            outtextxy(310,385-i,"CSE");
//rocket
            setcolor(WHITE );
            outtextxy(10,400+i,"EARTH");
            for(j=0; j<=7; j++)
            {
                setcolor(RED);
                circle(320,300-i,0+j);
            }
            for(k=0; k<=15; k++)
            {
                setcolor(YELLOW);
                circle(300,410-i,0+k);
                circle(340,410-i,0+k);
                circle(320,410-i,0+k);
                circle(280,410-i,0+k);
                circle(360,410-i,0+k);
            }
            setcolor(WHITE);
            line(0,420+i,620,420+i);
            line(340,400-i,340,320-i);
            line(300,400-i,300,320-i);
            line(330,370-i,330,330-i);
            line(310,370-i,310,330-i);
            line(310,330-i,330,330-i);
            line(310,370-i,330,370-i);
            line(300,380-i,340,380-i);
            line(270,400-i,370,400-i);
            line(270,400-i,300,380-i);
            line(340,380-i,370,400-i);
            line(300,320-i,340,320-i);
            line(300,320-i,320,300-i);
            line(340,320-i,320,300-i);
            delay(50);
            cleardevice();
        }
        setcolor(GREEN);
        settextstyle(0,EMPTY_FILL,5);
        outtextxy(50,100,"CONGRATULATIONS");
        outtextxy(50,200,"MISSION");
        outtextxy(50,300,"SUCCESSFUL");
        delay(100);
        getch();
    }/// rocket
};///class

void preview()
{
    cout<<"*******          *       *        *******        ***********\n"        ;
    cout<<"*       *        *       *        *       *           *\n";
    cout<<"*       *        *       *        *       *           *\n";
    cout<<"*       *        *       *        *       *           *\n";
    cout<<"********         *       *        *******             *\n";
    cout<<"*       *        *       *        *       *           *\n";
    cout<<"*       *        *       *        *       *           *\n";
    cout<<"*       *        *       *        *       *           *\n";
    cout<<"*******           *******         *******             *\n";

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"ENTER";

     cout<<"THE";

     cout<<" PASSWORD";
    // delay(5);
     cout<<" TO";
    // delay(5);
     cout<<" LUNCHING";
    // delay(5);
     cout<<" THE";
    // delay(5);
     cout<<" ROCKET\n";
    // delay(5);

}///preview()

main()
{
    int gdriver = DETECT, gmode;

    int i,style,midx,midy;

    midx = getmaxx() / 2;
    midy = getmaxy() / 2;

    preview();
    cin>>x;
    RocketLunch Rocket;
    Rocket.text();
    cleardevice();
    if(x==s)
    {

        Rocket.rocket();
    }
    else
    {
        Rocket.fail();
        // cout<<"fail";
    }

    getch();
}/// main

