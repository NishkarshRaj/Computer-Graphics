#include<iostream>
using namespace std;
int main()
{
	int xmin,xmax,ymin,ymax,x1,y1,x2,y2;
	int p1,p2,p3,p4,q1,q2,q3,q4;
	int t1,t2;
	cout<<"Liang Barsky Algorithm"<<endl;
	cout<<"Enter the First End point co-ordinates of line (x,y): ";
	cin>>x1;
	cin>>y1;
	cout<<"Enter the second end point co-ordinates of line (x.y): ";
	cin>>x2;
	cin>>y2;
	cout<<"Specify the Clipping Domain\n";
	cout<<"Enter Xmax: ";
	cin>>xmax;
	cout<<"Enter Xmin: ";
	cin>>xmin;
	cout<<"Enter Ymax: ";
	cin>>ymax;
	cout<<"Enter Ymin: ";
	cin>>ymin;
	// Initiate Liang Barksy
	p1=x1-x2;
	p2=x2-x1;
	p3=y1-y2;
	p4=y2-y1;
	q1=x1-xmin;
	q2=xmax-x1;
	q3=y1-ymin;
	q4=ymax-y1;
	t1=0;
	t2=1;
	if((p1<0)&&((q1/p1)>t1))
	{
		t1=q1/p1;
	}
	if((p2<0)&&((q2/p2)>t1))
	{
		t1=q2/p2;
	}
	if((p3<0)&&((q3/p3)>t1))
	{
		t1=q3/p3;
	}
	if((p4<0)&&((q4/p4)>t1))
	{
		t1=q3/p3;
	}
	if((p1>0)&&((q1/p1)<t2))
	{
		t2=q1/p1;
	}
	if((p2>0)&&((q2/p2)<t2))
	{
		t2=q2/p2;
	}
	if((p3>0)&&((q3/p3)<t2))
	{
		t2=q3/p3;
	}
	if((p4>0)&&((q4/p4)<t2))
	{
		t2=q4/p4;
	}
	if(t1>t2)
	{
		cout<<"Line is completely outside"<<endl;
	}
	else
	{
		xmin=x1+t1*(x2-x1);
		ymin=y1+t1*(y2-y1);
		xmax=y1+t1*(y2-y1);
		ymax=y1+t2*(y2-y1);
		cout<<"Line is clipped"<<endl;
		cout<<"Start Point:"<<endl;
		cout<<"x1: "<<xmin<<endl;
		cout<<"y1: "<<ymin<<endl;
		cout<<"End point:"<<endl;
		cout<<"x2: "<<xmax<<endl;
		cout<<"y2: "<<ymax<<endl;
	}
}
