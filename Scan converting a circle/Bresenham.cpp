#include<iostream>
using namespace std;
int main()
{
	int x,y,r,p;
	cout<<"Enter Radius of the circle: ";
	cin>>r;
	x=0;
	y=r;
	p=3-2*r;
	while(x<=y)
	{
		cout<<"\n\n";
		cout<<"Value of X: "<<x<<endl;
		cout<<"Value of y: "<<y<<endl;
		cout<<"Value of p: "<<p<<endl;
		cout<<"\n\n";
		if(p<0)
		{
			p=p+4*x+6;
		}
		else
		{
			p=p+4*x-4*y+10;
			y--;
		}
		x++;
	}
}
