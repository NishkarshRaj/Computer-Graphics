#include<iostream>
using namespace std;
int main()
{
	cout<<"Bresenham's Circle for standard circle centered at origin"<<endl;
	int x,y,r,p,c; //r is radius
	cout<<"Enter the radius: ";
	cin>>r;
	//Setting initial x and y
	x = 0;
	y = r;
	//Initial Decision Parameter
	p = 3 - (2*r);
	//Case initialization
	c = 0;
	//Bresenham's Circle
	do
	{
		cout<<"Case "<<c++<<endl;
		cout<<"Value of x: "<<x<<endl;
		cout<<"Value of y: "<<y<<endl;
		cout<<"Decision Parameter: "<<p<<endl;
		if(p<0)
		{
			p = p + 4*x + 6;
		}
		else
		{
			p = p + 4*(x-y) + 10;
			y--;
		}
		x++;
	}while(x!=y);
	cout<<"Case "<<c++<<endl;
	cout<<"Value of x: "<<x<<endl;
	cout<<"Value of y: "<<y<<endl;
	cout<<"Decision Parameter: "<<p<<endl;
}
