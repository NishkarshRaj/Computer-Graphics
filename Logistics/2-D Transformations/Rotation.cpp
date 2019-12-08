#include<iostream>
#include<math.h>
#define PI 3.14159265
using namespace std;
int main()
{
	int x,y;
	double angle;
	cout<<"Generic Rotation in Anti-clockwise direction"<<endl;
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter y: ";
	cin>>y;
	cout<<"Angle of rotation: ";
	cin>>angle;
	x=x*cos(angle)-y*sin(angle);
	y=x*sin(angle)+y*cos(angle);
	cout<<"After rotation"<<endl;
	cout<<"X: "<<x<<endl;
	cout<<"Y: "<<y<<endl;
}
