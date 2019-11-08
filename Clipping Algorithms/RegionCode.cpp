#include<iostream>
using namespace std;
int main()
{
	int i;
	int xmin,xmax,ymin,ymax; //window
	int x1,y1; //first end point
	int x2,y2; //second end point
	int p1[4],p2[4]; //region codes
	cin>>xmin>>xmax>>ymin>>ymax;
	cin>>x1>>y1;
	cin>>x2>>y2;
	//initialize region codes
	for(i=0;i<4;i++)
	{
		p1[i]=0;
		p2[i]=0;
	}
	//Assign Region Code for p1
	if((x1>xmin)&&(x1<xmax)&&(y1>ymin)&&(y1<ymax))
	{
		//
	}
	else if((x1<xmin)&&(x1<xmax)&&(y1>ymin)&&(y1<ymax)) 
	{
		p1[3]=1;
	}
	else if((x1>xmin)&&(x1>xmax)&&(y1>ymin)&&(y1<ymax))
	{
		p1[2]=1;
	}
	else if((x1>xmin)&&(x1<xmax)&&(y1>ymin)&&(y1>ymax))
	{
		p1[0]=1;
	}
	else if((x1>xmin)&&(x1<xmax)&&(y1<ymin)&&(y1<ymax))
	{
		p1[1]=1;
	}
	else if((x1<xmin)&&(x1<xmax)&&(y1>ymin)&&(y1>ymax))
	{
		p1[0]=1;
		p1[3]=1;
	}
	else if((x1>xmin)&&(x1>xmax)&&(y1>ymin)&&(y1>ymax))
	{
		p1[0]=1;
		p1[2]=1;
	}
	else if((x1<xmin)&&(x1<xmax)&&(y1<ymin)&&(y1<ymax))
	{
		p1[1]=1;
		p1[3]=1;
	}
	else if((x1>xmin)&&(x1>xmax)&&(y1<ymin)&&(y1<ymax))
	{
		p1[1]=1;
		p1[2]=1;
	}
	//Region Code for p2
	if((x1>xmin)&&(x1<xmax)&&(y1>ymin)&&(y1<ymax))
	{
		//
	}
	else if((x2<xmin)&&(x2<xmax)&&(y2>ymin)&&(y2<ymax)) 
	{
		p2[3]=1;
	}
	else if((x2>xmin)&&(x2>xmax)&&(y2>ymin)&&(y2<ymax))
	{
		p2[2]=1;
	}
	else if((x2>xmin)&&(x2<xmax)&&(y2>ymin)&&(y2>ymax))
	{
		p2[0]=1;
	}
	else if((x2>xmin)&&(x2<xmax)&&(y2<ymin)&&(y2<ymax))
	{
		p2[1]=1;
	}
	else if((x2<xmin)&&(x2<xmax)&&(y2>ymin)&&(y2>ymax))
	{
		p2[0]=1;
		p2[3]=1;
	}
	else if((x2>xmin)&&(x2>xmax)&&(y2>ymin)&&(y2>ymax))
	{
		p2[0]=1;
		p2[2]=1;
	}
	else if((x2<xmin)&&(x2<xmax)&&(y2<ymin)&&(y2<ymax))
	{
		p2[1]=1;
		p2[3]=1;
	}
	else if((x2>xmin)&&(x2>xmax)&&(y2<ymin)&&(y2<ymax))
	{
		p2[1]=1;
		p2[2]=1;
	}
	// print region codes
	for(i=0;i<4;i++)
	{
		cout<<p1[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<4;i++)
	{
		cout<<p2[i]<<" ";
	}
}
