# include<windows.h>
# include<iostream>
# include<graphics.h>
# include<conio.h>
# include<math.h>
# include<time.h>
# include<dos.h>
# include<stdlib.h>
# include<stdio.h>

using namespace std;
/* void front()
    {
    setcolor(RED);
    rectangle(2,2,2,2);
    settextstyle(8,HORIZ_DIR, 8);
    outtext("HELLO");
    }
*/
class data
 {
        public:
        float a;
        char b[20];
        data()
        {
           strcpy(b,"null");
        }
        void indata()
        {
            cout<<"\nfield : ";
            fflush(stdin);
            gets(b);
            cout<<"\ndata : ";
            cin>>a;
        }
};

 void kink()
 {
    int y=0,a[5],i,x2=0,y2=0;
    int j,n;
    float x;
    outtextxy(220,10,"EQUATION GRAPH");
    setcolor(WHITE);
    setbkcolor(15);
    line(420,20,420,820);                                          //y axis
    line(20,420,820,420);                                       //x axis
    cout<<"\nEnter the degree of equation less than 5: ";
    cin>>n;
    n++;
    cout<<"\nEnter the coefficients: ";
    for(i=0;i<n;i++)
	{
        cin>>a[i];
	}
	for (x=-400;x<=400;x=x+0.1)
	{
        x2=420+(x);
        y2=420-(y);
        putpixel(x2,y2,RED);
        y=0;
        for(j=0;j<n;j++)
        {
           y+=a[j]*pow(x,j);
	    }
    cout<<"\n y = "<<y<<"  x = "<<x<<"  "<<x2<<"  "<<y2;
    }
    delay(10000);
 }
void Pie()
    {
   int x,y;
   data d[10];
   settextstyle(BOLD_FONT,HORIZ_DIR,2);
   outtextxy(220,10,"PIE CHART");
   x = getmaxx()/2; //centre x-coordinate
   y = getmaxy()/2; //centre y-coordinate
   int i,n;
   float k=0;
   float s=0,f=0;
   cout<<"\nEnter the no. of field : ";
   cin>>n;
   cout<<"\nEnter the fields and data simuntanously :";
   for(i=0;i<n;i++)
   {
        d[i].indata();
   }
   for(i=0;i<n;i++)
   {
        k+=d[i].a;
   }
   cout<<"\nk==  "<<k;
   for(i=0;i<n;i++)
   {
        s+=(d[i].a/k)*360;
        settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
        setfillstyle(SOLID_FILL,i+1);
        rectangle(630,(i+1)*30,650,(i+2)*30);
        floodfill(630,(i+1)*30,WHITE);
        outtextxy(660,(i+1)*30,d[i].b);
        //outtextxy(650,(i+1)*50,d[i].a);
        pieslice(x, y,f,s, 150);
        f=s;
        delay(1000);

  }
   getch();
}
void Bar2D()
    {
    int n,i,t,p;
    float mx=0,mn=0;
    data d[10];
    setcolor(WHITE);
    line(20,20,20,620);
    setcolor(WHITE);                                         //y axis
    line(20,620,620,620);                                       //x axis
    setcolor(RED);
    settextstyle(BOLD_FONT,HORIZ_DIR,2);
    outtextxy(220,10,"BAR GRAPH");

    cout<<"\nEnter the no. of field : ";
    cin>>n;
    cout<<"\nEnter the fields and data simultanously :";
    for(i=0;i<n;i++)
    {
        d[i].indata();
    }
    mx=d[0].a;
    for(i=1;i<n;i++)
    {
        if(mx<d[i].a)
        mx=d[i].a;
    }
    mn=d[0].a;
    for(i=1;i<n;i++)
    {
        if(mn>d[i].a)
        mn=d[i].a;
    }
    int diff=mx-mn;
    cout<<"\n mx "<<mx<<" mn "<<mn;
    t=40;
    setcolor(RED);
    for(i=0;i<n;i++)
    {
        //if (diff>=200)
        //{

        p=620-(600/mx*d[i].a);
        cout<<"   p= "<<p;
        setfillstyle(XHATCH_FILL, WHITE);
        rectangle(t,p,t+20,620);
        t+=40;
        //}
    }
    delay(10000);

}

void line_graph()
{
    int n,i,t,p;
    int x1=20,y1=620,x2=60,y2;
    float mx=0,mn=0;
    settextstyle(BOLD_FONT,HORIZ_DIR,2);
    outtextxy(220,10,"LINE GRAPH");
    data d[10];
    setcolor(WHITE);
    line(20,20,20,620);
    setcolor(WHITE);                                         //y axis
    line(20,620,620,620);                                       //x axis
    setcolor(RED);
    cout<<"\nEnter the no. of field : ";
    cin>>n;
    cout<<"\nEnter the fields and data simultanously :";
    for(i=0;i<n;i++)
    {
        d[i].indata();
    }
    mx=d[0].a;
    for(i=1;i<n;i++)
    {
        if(mx<d[i].a)
        mx=d[i].a;
    }
    mn=d[0].a;
    for(i=1;i<n;i++)
    {
        if(mn>d[i].a)
        mn=d[i].a;
    }
    int diff=mx-mn;
    cout<<"\n mx "<<mx<<" mn "<<mn;
    setcolor(RED);
    for(i=0;i<n;i++)
    {
        y2=620-(600/mx*d[i].a);
        cout<<"   y2= "<<y2;
        line(x1,y1,x2,y2);
        x1=x2;
        x2+=40;
        y1=y2;

    }
    delay(10000);

}

 void sine_wave()
 {
       settextstyle(BOLD_FONT,HORIZ_DIR,2);
       outtextxy(220,10,"SINE");
       int angle = 0;
       double x, y;
       line(20,400,1000,400);
       line(20,200,20,600);
       for(x=20;x<getmaxx()-20;x+=3)
        {
            y = 75*sin(angle*3.141/180);
            y = 400-y;
            angle+=5;
            putpixel(x,y,RED);
            delay(20);
       }
     getch();
   }
   void cos_wave()
   {
       settextstyle(BOLD_FONT,HORIZ_DIR,2);
       outtextxy(220,10,"COSINE");
       int angle = 0;
       double x, y;
       line(20,400,1000,400);
       line(20,200,20,600);
       for(x=20;x<getmaxx()-20;x+=3)
        {
            y = 75*cos(angle*3.141/180);
            y = 400-y;
            angle+=5;
            putpixel(x,y,RED);
            delay(20);
       }
     getch();
   }
int main()
    {
    //initwindow(1000,1000);
	int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode," ");
    int p;
    //front();
    //system("cls");
    setbkcolor(BLUE);
    cout<<"\nWelcome to the graph generator ";
    cout<<"\nEnter your choice : "<<"\n1.Bar graph"<<"\n2.pie chart"<<"\n3.line graph"<<"\n4.kink"<<"\n5.sine wave"<<"\n6.cosine wave"<<"\n";
    cin>>p;
//setbkcolor(12);

    switch(p)
           {
           case 1:Bar2D();
                  break;
           case 2:Pie();
                  break;
           case 3:line_graph();
                  break;
           case 4:kink();
                  break;
           case 5:sine_wave();
                  break;
           case 6:cos_wave();
                  break;

           }
    closegraph();
  	return 0;
    }
