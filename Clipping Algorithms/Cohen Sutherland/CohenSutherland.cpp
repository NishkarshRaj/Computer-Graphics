#include<iostream>
using namespace std;
int main()
{
	int p1[4],p2[4],AND[4],i,x1,y1,x2,y2,flag1=0,flag2=0,flag=0;
	cin>>x1>>y1;
	cin>>x2>>y2;
	for(i=0;i<4;i++)
	{
		cin>>p1[i];
		if(p1[i]!=0)
		{
			flag1=1;
		}
	}
	for(i=0;i<4;i++)
	{
		cin>>p2[i];
		if(p2[i]!=0)
		{
			flag2=1;
		}
	}
	if((flag1==0)&&(flag2==0))
	{
		cout<<"No need to clip"<<endl;
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
		}
		else
		{
			cout<<"Outside Clip window"<<endl;
		}
	}
}
