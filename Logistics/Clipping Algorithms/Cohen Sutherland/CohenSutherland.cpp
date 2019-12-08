#include<iostream>
using namespace std;
int main()
{
	int p1[4],p2[4],AND[4],i,flag1=0,flag2=0,flag=0;
	float m;
	float xmin,xmax,ymin,ymax; //window
	float x1,y1; //first end point
	float x2,y2;
	cout<<"Enter the Point 1 Co-ordinates: ";
	cin>>x1>>y1;
	cout<<"Enter the Point 2 Co-ordinates: ";
	cin>>x2>>y2;
	cout<<"Enter the window Co-ordinates: ";
	cin>>xmin>>xmax>>ymin>>ymax;
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
	//////////////////////////////
	for(i=0;i<4;i++)
	{
		//cin>>p1[i];
		if(p1[i]!=0)
		{
			flag1=1;
		}
	}
	for(i=0;i<4;i++)
	{
		//cin>>p2[i];
		if(p2[i]!=0)
		{
			flag2=1;
		}
	}
	//////////////////////////////
	if((flag1==0)&&(flag2==0))
	{
		cout<<"No need to clip"<<endl;
		cout<<x1<<" "<<y1<<endl;
	cout<<x2<<" "<<y2<<endl;
	}
	else
	{
		for(i=0;i<4;i++)
		{
			if((p1[i]==1)&&(p2[i]==1))
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			cout<<"Clipping is possible and needed"<<endl;
				m=(y2-y1)/(x2-x1);
	if(p1[0]==1)
	{
		
		x1=x1+((ymax-y1)*m);
		y1=ymax;
	}
	if(p1[1]==1)
	{
		
		x1=x1+((ymin-y1)*m);
		y1=ymin;
	}
	if(p1[2]==1)
	{
		
		y1=y1+((xmax-x1)*m);
		x1=xmax;
	}
	if(p1[3]==1)
	{
		
		y1=y1+((xmin-x1)*m);
		x1=xmin;
	}
	//region2
	if(p2[0]==1)
	{
		
		x2=x2+((ymax-y2)*m);
		y2=ymax;
	}
	if(p2[1]==1)
	{
		
		x2=x2+((ymin-y2)*m);
		y2=ymin;
	}
	if(p2[2]==1)
	{
		
		y2=y2+((xmax-x2)*m);
		x2=xmax;
	}
	if(p2[3]==1)
	{
		y2=y2+((xmin-x2)*m);
		x2=xmin;
	}
	//output
	cout<<endl;
	cout<<x1<<" "<<y1<<endl;
	cout<<x2<<" "<<y2<<endl;
	//cout<<m<<endl;
		}
		else
		{
			cout<<"Outside Clip window"<<endl;
		}
	}
}
