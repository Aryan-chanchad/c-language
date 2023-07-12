#include<stdio.h>
int main()
{
	int even=0,odd=0,a[10];
	for(int i=0;i<=10;i++)
	{
		a[i] = i;
		if(a[i]%2==0)
		{
			even=even+a[i];
			printf("%d\n",a[i]);
		}
		else
		{
			odd=odd+a[i];
			printf("%d\n",a[i]);
		}
	}
	printf("Even Total:%d\n",even);
	printf("odd Total:%d\n",odd);

return 0;
}