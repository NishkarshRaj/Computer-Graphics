#include<iostream>
using namespace std;
int main()
{
	int x,y,Sx,Sy;
	cout<<"Translation";
	cout<<"Enter point to be translated\n";
	cout<<"x: ";
	cin>>x;
	cout<<"y: ";
	cin>>y;
	cout<<"Enter the Scaling factors\n";
	cout<<"Sx: ";
	cin>>Sx;
	cout<<"Sy: ";
	cin>>Sy;
	//Scale
	x=x*Sx;
	y=y*Sy;
	//
	cout<<"Point after translation\n";
	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;
}
