#include<stdio.h>
#define MAX_SIZE 100
void bubblesort(int a[],int n)
{
	int i,j,temp=0;
	for(i=0 ; i < (n-1) ; i++)
	{
		for(j=0;j<(n-1)-i;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}

		}
	}

}
void main()
{
	int a[MAX_SIZE]={0},n,i;

	printf("Enter the no of element : ");
	scanf("%d",&n);

	printf("Enter the element : ");
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}

	bubblesort(a,n);

	printf("After Swapping : ");

	for(i=0;i<n;i++)
	printf("%d ",a[i]);

}
