#include<iostream>
#include<math.h>
using namespace std;
//Function for sine!!!
double sine(double x)
{
	x=x*3.14;
	x=x/180;
	return sin(x);
}
//Function for cosine
double cosine(double x)
{
	x=x*3.14;
	x=x/180;
	return cos(x);
}
int main()
{
	double flag,x,y,z,tx,ty,tz,S,theta;
	int ch;
	cout<<"3D Transformation"<<endl;
	cout<<"Enter Point (x,y,z): ";
	cin>>x>>y>>z;
	flag=0;
	cout<<"\n\n";
	do
	{
	cout<<"\n\n";
	cout<<""<<endl;
	cout<<"1) Translation"<<endl;
	cout<<"2) Rotation about X Axis"<<endl;
	cout<<"3) Rotation about Y Axis"<<endl;
	cout<<"4) Rotation about Z Axis"<<endl;
	cout<<"5) Scaling"<<endl;
	cout<<"6) Reflection about XY axis"<<endl;
	cout<<"7) Reflection about YZ axis"<<endl;
	cout<<"8) Reflection about ZX axis"<<endl;
	//9 and 10th can only be done on 2D transformation and not on 3D and it is thus only done on X,Y co-ordinates
	cout<<"9) Reflection about Line y=mx+c"<<endl;
	cout<<"10) Reflection about Line ax + by + c = 0"<<endl;
	cout<<"11) Shear about edge"<<endl;
	cout<<"12) Shear about vertex"<<endl;
	cout<<"13) Exit"<<endl;
	cout<<"\n"<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Translation of point"<<endl;
			cout<<"Enter the translation factors"<<endl;
			cin>>tx>>ty>>tz;
			x=x+tx;
			y=y+ty;
			z=z+tz;
			break;
		case 2:
			cout<<"Rotation About X axis"<<endl;
			cout<<"Enter Rotation Angle: ";
			cin>>theta;
			y = y*cosine(theta) - z*sine(theta);
			z = z*cosine(theta) + y*sine(theta);
			break;
		case 3:
			cout<<"Rotation About Y axis"<<endl;
			cout<<"Enter Rotation Angle: ";
			cin>>theta;
			z = z*cosine(theta) - x*sine(theta);
			x = x*cosine(theta) + z*sine(theta);
			break;
		case 4:
			cout<<"Rotation About Z axis"<<endl;
			cout<<"Enter Rotation Angle: ";
			cin>>theta;
			x = x*cosine(theta) - y*sine(theta);
			y = y*cosine(theta) + x*sine(theta);
			break;
		case 5:
			cout<<"Scaling of point"<<endl;
			cout<<"Enter the scaling factor: ";
			cin>>S;
			x=x*S;
			y=y*S;
			z=z*S;
			break;
		case 6:
			cout<<"Reflection about XY Plane"<<endl;
			z=z*(-1);
			break;
		case 7:
			cout<<"Reflection about YZ Plane"<<endl;
			x=x*(-1);
			break;
		case 8:
			cout<<"Reflection about ZX Plane"<<endl;
			y=y*(-1);
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;	
		case 12:
			break;
		case 13: cout<<"Exiting the code";
			flag=1;
			break;							
		default: cout<<"Wrong choice entered"<<endl;			
	}
	cout<<"Updated co-ordinates"<<endl;
	cout<<"X: "<<x<<endl;
	cout<<"Y: "<<y<<endl;
	cout<<"Z: "<<z<<endl;
	}while(flag==0);
}
