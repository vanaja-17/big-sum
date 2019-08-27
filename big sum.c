#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
    long int val,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%li",&val);
		sum=sum+val;
    }
	printf("%li ",sum);
	
}
