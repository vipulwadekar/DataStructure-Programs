#include<stdio.h>
#define MAX_LOC 10
void init_Array(int a[],int n);
int isArrayUnderFlow(int a[],int n);
int deleteElement(int a[],int n,int loc);
void traversal(int a[],int n);
void main()
{
    int a[MAX_LOC]={0},loc,n,item=0,c=0;
    printf("Enter the element no of element to be enter : ");
    scanf("%d",&n);
    
    init_Array(a,n);

    if(isArrayUnderFlow(a,n))
        printf("Array is in underflow condition we can't perform delete operation");
    else
    {
            printf("\nEnter the location to delete the element : ");
            scanf("%d",&loc);
    }
    if(item=deleteElement(a,n,loc))
    {
        n-=1;
        printf("Deleted item is : %d",item);
        printf("\nDeletion operation has successfully done");
    }
    else
        printf("Deletion operation hasn't successfully done");
    traversal(a,n);
}
void init_Array(int a[],int n)
{
        int i;
        printf("Enter the element in array : ");
        for(i=0 ; i<n; i++)
        {
                scanf("%d",&a[i]);
        }
}
int isArrayUnderFlow(int a[],int n)
{
    if(a[0]==0)
        return 1;
    else
        return 0;
}
int deleteElement(int a[],int n,int loc)
{
    int i=0,item=0;
    item=a[loc-1];
    for(i=loc; i<=(n-1) ; i++)
    {
        a[i-1]=a[i];
    }
    if(i==(n))
        return item;
    else
        return 0;
}
void traversal(int a[],int n)
{
         int i;
         printf("\nIndex Value : ");
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

