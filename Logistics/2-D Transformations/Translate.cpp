#include<iostream>
using namespace std;
int main()
{
	int x,y,tx,ty;
	cout<<"Translation";
	cout<<"Enter point to be translated\n";
	cout<<"x: ";
	cin>>x;
	cout<<"y: ";
	cin>>y;
	cout<<"Enter the translation factors\n";
	cout<<"tx: ";
	cin>>tx;
	cout<<"ty: ";
	cin>>ty;
	//Translate
	x=x+tx;
	y=y+ty;
	//
	cout<<"Point after translation\n";
	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;
}
