#include <iostream>
#include <graphics.h>
#include <math.h>
#include <dos.h>
#include <cmath>

using namespace std;

void namePrint()
{
    //M line Draw
    line(30,30,30,60);
    line(30,30,40,60);
    line(50,30,40,60);
    line(50,30,50,60);

    //D line Draw
    line(60,30,60,60);
    arc(55,46,290,70,17);

    //A line Draw
    line(110,30,100,60);
    line(110,30,120,60);
    line(100,50,120,50);

    //S line Draw
    //- line Draw
    line(130,30,140,30);
    //First || line Draw
    line(130,30,130,40);
    line(140,30,140,40);
    // \ line Draw
    line(130,40,140,50);
    //Last || line Draw
    line(130,50,130,60);
    line(140,50,140,60);
    // _ line Draw
    line(130,60,140,60);

    //H line Draw
    line(150,30,150,60);
    line(150,45,160,45);
    line(160,30,160,60);

    // R line Draw
    // | line Draw
    line(170,30,170,60);
    // - line Draw
    line(170,30,180,30);
    // - line Draw
    line(170,45,180,45);
    // | line Draw
    line(180,30,180,45);
    // \ line Draw
    line(170,45,180,60);

    //A line Draw
    // / line Draw
    line(200,30,190,60);
    // \ line Draw
    line(200,30,210,60);
    // - line Draw
    line(190,50,210,50);

    // F line Draw
    // | line Draw
    line(220,30,220,60);
    // - line Draw
    line(220,30,230,30);
    // - line Draw
    line(220,45,230,45);

    // U line Draw
    line(240,30,240,60);
    line(255,30,255,60);
    line(240,60,255,60);

    // L line Draw
    line(265,30,265,60);
    line(265,60,275,60);

    //Second Alam Part Start

    //A line Draw
    // / line Draw
    line(320,30,310,60);
    // \ line Draw
    line(320,30,330,60);
    // - line Draw
    line(310,50,330,50);

    // L line Draw
    line(340,30,340,60);
    line(340,60,350,60);

    //A line Draw
    // / line Draw
    line(370,30,360,60);
    // \ line Draw
    line(370,30,380,60);
    // - line Draw
    line(360,50,380,50);

    //M line Draw
    line(390,30,390,60);
    line(390,30,400,60);
    line(410,30,400,60);
    line(410,30,410,60);

    // Zehad Part Start
    // Z line Draw
    line(450,30,470,30);
    line(470,30,450,60);
    line(450,60,470,60);

    // E line Draw
    line(480,30,480,60);
    line(480,30,490,30);
    line(480,45,490,45);
    line(480,60,490,60);

    //H line Draw
    line(500,30,500,60);
    line(500,45,510,45);
    line(510,30,510,60);

    // A line Draw
    // / line Draw
    line(530,30,520,60);
    // \ line Draw
    line(530,30,540,60);
    // - line Draw
    line(520,50,540,50);

    // D line Draw
    line(550,30,550,60);
    arc(545,46,290,70,17);
}

void nationalFlag()
{
    initwindow(600, 700, "National Flag");
    namePrint();
    setbkcolor(WHITE);
    setcolor(WHITE);
    rectangle(100,170,450,350);
    setfillstyle(1,GREEN);
    floodfill(110,210,WHITE);
    setcolor(WHITE);
    rectangle(90,160,100,650);
    setfillstyle(1,BLUE);
    floodfill(95,170,WHITE);
    setcolor(WHITE);
    bar(80,650,110,660);
    setcolor(WHITE);
    circle(270,260,65);
    setfillstyle(1,RED);
    floodfill(280,270,WHITE);
}

void emoji()
{
    initwindow(600, 700, "emoji");
    namePrint();
    setcolor(YELLOW);
    circle(200, 200, 80);
    setfillstyle(1, YELLOW);
    floodfill(210, 210, YELLOW);

    setcolor(BLACK);
    setfillstyle(1, BLACK);

    fillellipse(170, 190, 5, 8);
    fillellipse(230, 190, 5, 8);

    ellipse(200,220,170,370,40,40);
    ellipse(200,220,170,370,40,41);
    ellipse(200,220,170,370,40,42);
}

void dda()
{
    initwindow(600, 700, "DDA");
    namePrint();
    int i;
    float x,y,x1,y1,x2,y2,dx,dy,step;
    cout<<"\n\t\t\tEnter The Value of X1 and Y1: ";
    cin>>x1>>y1;
    cout<<"\t\t\tEnter The Value of X2 and Y2: ";
    cin>>x2>>y2;

    dx=abs(x2-x1);
    dy=abs(y2=y1);

    if(dx>=dy){
        step = dx;
    }else{
        step = dy;
    }
    dx = dx/step;
    dy = dy/step;

    x=x1;
    y=y1;

    i=1;
    while(i<=step){
        putpixel(x,y,15);
        x=x+dx;
        y=y+dx;
        i=i+1;
        delay(100);
    }
}

void bhm()
{
    int x,y,x1,y1,x2,y2,dx,dy,p;
    initwindow(600, 700, "BHM");
    namePrint();
    cout<<"\n\t\t\tEnter X1 and Y1: ";
    cin>>x1>>y1;
    cout<<"\t\t\tEnter X2 and Y2: ";
    cin>>x2>>y2;
    dx= abs(x2-x1);
    dy= abs(y2=y1);
    x=x1;
    y=y1;
    p = 2*dy-dx;
    while (x<=x2){
        if(p>=0){
            putpixel(x,y,15);
            y=y+1;
            p=p+2*dy-2*dx;
        }else{
            putpixel(x,y,15);
            p=p+2*dy;
        }
        x=x+1;
        delay(100);
    }

}

int main()
{
    aa:
    int op;
    cout<<"\t\t\t=================================================================="<<endl;
    cout<<"\t\t\t||\t\t1- National Flag\t\t\t\t||"<<endl;
    cout<<"\t\t\t||\t\t2- Emoji\t\t\t\t\t||"<<endl;
    cout<<"\t\t\t||\t\t3- DDA\t\t\t\t\t\t||"<<endl;
    cout<<"\t\t\t||\t\t4- BHM\t\t\t\t\t\t||"<<endl;
    cout<<"\t\t\t||\t\t5- Exit\t\t\t\t\t\t||"<<endl;
    cout<<"\t\t\t=================================================================="<<endl;
    cout<<"\n\t\t\tEnter Your Option: ";
    cin>>op;
    switch(op)
    {
        case 1: nationalFlag();
            goto aa;
            getch();
            break;
        case 2: emoji();
            goto aa;
            getch();
            break;
        case 3: dda();
            goto aa;
            getch();
            break;
        case 4: bhm();
            goto aa;
            getch();
            break;
        case 5: exit(0);
            break;
        default: cout<<"\n\t\t\tWrong Input.. Enter Current Option\n"<<endl;
            goto aa;
            getch();
            break;
    }
    getch();
    closegraph();
    return 0;
}
