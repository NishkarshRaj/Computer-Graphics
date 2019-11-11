#include<iostream>
#include<math.h>
#define PI 3.14159265
using namespace std;
int main()
{
	//Arc tan code for converting slope to angle of slope to rotate parallel to axis
	double slope,theta;
	cout<<"Enter slope: ";
	cin>>slope;	
	theta=atan(slope);
	theta=theta*180;
	theta=theta/PI;
	cout<<theta;
}
