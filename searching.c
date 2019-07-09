#include<stdio.h>
#define MAX_SIZE 100

void init_Array(int a[],int n)
{
        int i;
        printf("Enter the element in array : ");
        for(i=0 ; i<n; i++)
        {
                scanf("%d",&a[i]);
        }
}
void traversal(int a[],int n)
{
         int i;
         printf("Index Value : ");
        for(i=0;i<n;i++)
        {
            printf("%4d",i);
        }
        printf("\nData  Value  : ");
        for(i=0;i<n;i++)
        {
            printf("%4d",a[i]);
        }
}
int searchElement(int a[],int n,int k)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            return i;
        }
    }
    return 0;
}

int  main()
{
    int a[MAX_SIZE]={0},n,k,flag;
    
    printf("Enter the no of element : ");
    scanf("%d",&n);
    
    init_Array(a,n);
    traversal(a,n);
    
    printf("\nEnter the element to be search : ");
    scanf("%d",&k);
    flag = searchElement(a,n,k);
    
    if(flag!=0)
    {
        printf("Position of value : %d",flag);
        printf("\nElement is present in the array");
    }
    else
        printf("Element is not present in the array");
    return 0;
}
