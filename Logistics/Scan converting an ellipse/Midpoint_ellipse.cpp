#include<iostream>
using namespace std;
int main()
{
	int rx,ry,c1,c2,x,y,p1,p2;
	cout<<"Mid point Ellipse Algorithm"<<endl;
	cout<<"Enter rx: ";
	cin>>rx;
	cout<<"Enter ry: ";
	cin>>ry;
	c1 = 0;
	x = 0;
	y = ry;
	p1 = (ry*ry) - (rx*rx)*ry + ((rx*rx)/4);
	cout<<"=============Region 1==============="<<endl;
	cout<<"Case "<<c1++<<endl;
	cout<<"Value of x: "<<x<<endl;
	cout<<"Value of y: "<<y<<endl;
	cout<<"Decision  Parameter: "<<p1<<endl;
	cout<<"===============";
	cout<<"\n\n";
	while((ry*ry*x)<=(rx*rx*y))
	{
		x = x + 1;
		if(p1<0)
		{
			//y remains same
			p1 = p1 + (ry*ry) + 2*(ry*ry)*x;
		}
		else
		{
			y = y-1;
			p1 = p1 + (ry*ry*(2*x+1)) - 2*(rx*rx)*(y);
		}
			cout<<"Case "<<c1++<<endl;
			cout<<"Value of x: "<<x<<endl;
			cout<<"Value of y: "<<y<<endl;
			cout<<"Decision  Parameter: "<<p1<<endl;
			cout<<"===============";
			cout<<"\n\n";
	}
	// Starting Region 2
	c2 = 0;
	p2 =  (ry*ry)*(x+0.5)*(x+0.5) + (rx*rx)*(y-1)*(y-1) - (rx*rx*ry*ry);
	cout<<"=============Region 2==============="<<endl;
	cout<<"Case "<<c2++<<endl;
	cout<<"Value of x: "<<x<<endl;
	cout<<"Value of y: "<<y<<endl;
	cout<<"Decision  Parameter: "<<p2<<endl;
	cout<<"===============";
	cout<<"\n\n";
	while((y>0)&&(x<=rx))
	{
		y = y-1;
		if(p2<0)
		{
			x = x + 1;
			p2 = p2 + (rx*rx)*(1-2*y) + 2*(ry*ry)*x;
		}
		else
		{
			p2 = p2 + (rx*rx)*(1-2*y);
		}
		cout<<"Case "<<c2++<<endl;
		cout<<"Value of x: "<<x<<endl;
		cout<<"Value of y: "<<y<<endl;
		cout<<"Decision  Parameter: "<<p2<<endl;
		cout<<"===============";
		cout<<"\n\n";
	}
}
