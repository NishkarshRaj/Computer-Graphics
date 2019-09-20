#include<iostream>
using namespace std;
int main()
{
	int r,x,y,p;
	cin>>r;
	x=0; //x = xc
	y=r; //y = yc+r
	p = 3-2*r; //Initial Decision Parameter
	do
	{
		///
		cout<<"\n\n";
		cout<<"X: "<<x<<endl;
		cout<<"Y: "<<y<<endl;
		cout<<"P: "<<p<<endl;
		///
	if(p<0)
	{
		p = p + 4*x + 6;
	}
	else
	{
		p = p + 4*x - 4*y + 10;
		y--;
	}
	x++;
	}while(x!=y);
	cout<<"\n\n";
		cout<<"X: "<<x<<endl;
		cout<<"Y: "<<y<<endl;
		cout<<"P: "<<p<<endl;
}
