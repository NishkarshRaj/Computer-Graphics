#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int Xc,Yc,r,x,y,count,temp_int;
	float temp;
	cout<<"Scan conversion of Circle\n";
	cout<<"Enter the center of the circle co-ordinates\n";
	cout<<"Enter Xc: ";
	cin>>Xc;
	cout<<"Enter Yc: ";
	cin>>Yc;
	cout<<"Enter radius of the circle: ";
	cin>>r;
	//Setting initial value
	x = Xc - r;
	y = Yc;
	count = 1;
	cout<<"\n\n";
	cout<<"Case "<<count++<<endl;
	cout<<"Value of X: "<<x<<endl;
	cout<<"Value of Y: "<<y<<endl;
	while(x < (Xc+r))
	{
		cout<<"\n\n";
		x = x + 1;
		temp = sqrt(pow(r,2)-pow(x-Xc,2)); 
		//cout<<temp<<endl;
		//cout<<int(temp+0.5);
		temp_int = int(temp+0.5);
		cout<<"Case "<<count++<<endl;
		cout<<"Value of X: "<<x<<endl;
		cout<<"Value of Y Top: "<<y+temp_int<<endl;	
		cout<<"Value of Y Bottom:"<<y-temp_int;
	}
}
