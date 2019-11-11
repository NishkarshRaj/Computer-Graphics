#include<iostream>
using namespace std;
int main()
{
	int flag,x,y,z,ch;
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
	cout<<"6) Reflection about X axis"<<endl;
	cout<<"7) Reflection about Y axis"<<endl;
	cout<<"8) Reflection about Z axis"<<endl;
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
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
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
	}while(flag==0);
}
