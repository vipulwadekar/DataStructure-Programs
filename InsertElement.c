#include<stdio.h>
#define MAX_LOC 10
void init_Array(int a[],int n);
int isArrayOverflow(int a[],int n);
int insert_Data(int a[],int n,int loc,int item);
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
void main()
{
    int a[MAX_LOC]={0},loc,n,item;
    printf("Enter the no element for array : ");
    scanf("%d",&n);

    init_Array(a,n);

    if(isArrayOverflow(a,n))
    printf("Array is overflow");
    else
    {
        printf("Enter the position where do you want to insert particular item : ");
        scanf("%d",&loc);

        printf("Enter the data item : ");
        scanf("%d",&item);
    }
    if(insert_Data(a,n,loc,item))
    {
        printf("Insertion Operation Has Successfully done");
        n+=1;
    }
    else
        printf("Insertion operation Hasn't Successfully done");

    //print array to verify
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
int isArrayOverflow(int a[],int n)
{
    if( a[MAX_LOC-1]!=0 && n==MAX_LOC )
    return 1;
    else
    return 0;
}
int insert_Data(int a[],int n,int loc,int item)
{
    int i=0;
    for(i=n; i>=loc ; i--)
    {
        a[i]=a[i-1];
    }
    a[loc-1]=item;
    //n+=1;

    if(i==(loc-1))
    return 1;
    else
    return 0;

}
