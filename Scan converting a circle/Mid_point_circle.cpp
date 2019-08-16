#include<iostream>
using namespace std;
int main()
{
	int Xc,Yc,r,x,y,count,p;
	cout<<"Scan conversion of Circle\n";
	cout<<"Enter the center of the circle co-ordinates\n";
	cout<<"Enter Xc: ";
	cin>>Xc;
	cout<<"Enter Yc: ";
	cin>>Yc;
	cout<<"Enter radius of the circle: ";
	cin>>r;
	//Setting initial values of x and y
	x = Xc;
	y = Yc + r;
	p = 1 - r; //Initial Decision Parameter
	cout<<"\n\n";
	count = 1;
	cout<<"Case "<<count++<<endl;
	cout<<"Value of X: "<<x<<endl;
	cout<<"Value of Y: "<<y<<endl;
	cout<<"Decision Parameter: "<<p;
	cout<<"\n\n";
	while(x<y)
	{
		x = x + 1;
		if(p<0)
		{
			// y remains the same
			p = p + (2*x) + 1;
		}		
		else if(p>0)
		{
			y = y - 1;
			p = p + (2*x) + 1 - (2*y);
		}
		cout<<"Case "<<count++<<endl;
		cout<<"Value of X: "<<x<<endl;
		cout<<"Value of Y: "<<y<<endl;
		cout<<"Decision Parameter: "<<p;
		cout<<"\n\n";
	}
	return 0;
}
