#include<iostream>
#include<stdlib.h>
#include<graphics>
#include<math>
using namespace std;
class TRIANGLE
{
private:
	int x1,y1,x2,y2,x3,y3,a;
public:
	TRIANGLE()
	{
  		a=45;
	}

	void triangle(int a,int b,int c,int x,int y,int z)
	{
		x1=a;
		y1=b;
		x2=c;
		y2=x;
		x3=y;
		y3=z;
		line(x1,y1,x2,y2);
		line(x2,y2,x3,y3);
		line(x3,y3,x1,y1);
	}
	
	void rotation(int x1,int y1,int x2,int y2,int x3,int y3)
	{
		int a1,b1,a2,b2,a3,b3,p,q;
		p=x2,q=y2;
		a=(a*3.14)/180;
		a1=p+(x1-p)*cos(a)-(y1-q)*sin(a);
		b1=q+(x1-p)*sin(a)+(y1-q)*cos(a);
		a2=p+(x2-p)*cos(a)-(y2-q)*sin(a);
                b2=q+(x2-p)*sin(a)+(y2-q)*cos(a);
		a3=p+(x3-p)*cos(a)-(y3-q)*sin(a);
                b3=q+(x3-p)*sin(a)+(y3-q)*cos(a);
		
		cout<<"Rotation of triangle"<<endl;
		triangle(a1,b1,a2,b2,a3,b3);
	}
	

};

main()
{
	TRIANGLE T;
	int x1,x2,x3,y1,y2,y3;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode," ");
	cout<<"Enter the first coordinates:";
	cin>>x1>>y1;
	cout<<"Enter the second coordinates:";
	cin>>x2>>y2;
	cout<<"Enter the third coordiates:";
	cin>>x3>>y3;
	T.triangle(x1,y1,x2,y2,x3,y3);
	cleardevice();
	setcolor(10);
	T.rotation(x1,y1,x2,y2,x3,y3);
	T.triangle(x1,y1,x2,y2,x3,y3);
}

