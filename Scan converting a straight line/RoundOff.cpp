#include<stdio.h>
int main()
{
	printf("Round off method: Convert float to rounded Integers\n");
	int flag=0,ch;
	float val;
	do
	{
		printf("Enter a float value: ");
		scanf("%f",&val);
		val = (int)(val + 0.5);
		printf("%f\n",val);
		printf("Press 1 to continue else any key to exit: ");
		scanf("%d",&ch);
		if(ch!=1)
		{
			flag=1;
		}
	}while(flag==0);
	return 0;
}
