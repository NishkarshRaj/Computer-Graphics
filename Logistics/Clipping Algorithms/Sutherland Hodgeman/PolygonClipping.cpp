#include<iostream>
using namespace std;
int main()
{
	double xmax,xmin,ymax,ymin;
	int n,i;
	cout<<"Enter the number of vertex in the polygon"<<endl;
	cin>>n;
	double X[n],Y[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter the co-ordinates (x,y) for "<<i+1<<" Vertex: ";
		cin>>X[i];
		cin>>Y[i];
	}
	cout<<"Enter Xmax,Ymax of Clipping Window: ";
	cin>>xmax>>ymax;
	cout<<"Enter the Xmin, Ymin of Clipping Window: ";
	cin>>xmin>>ymin;
	////////Clipping
}
