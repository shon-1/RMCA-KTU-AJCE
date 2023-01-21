//Array Sorting
#include<stdio.h>
int main()
{
    int a[100],b[100],n,m,s,t=0,i,j;
    printf("Enter the size of array");
    scanf("%d",&n);

    printf("Enter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);


    printf("Enter the number of Elements in 2nd Array");
    scanf("%d",&m);

    printf("Enter the elements");
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
//-------------------------------------------------------Sorting 1st Array ,a[]-----------

    for(j=0;j<n;j++)
    {
       for(i=j+1;i<n; i++)
       {
           if(a[i]<a[j])
         {
           t=a[i];
           a[i]=a[j];
           a[j]=t;
         }

       }
    }
    printf("\nsorted array 1 : ");

     for(i=0;i<n;i++)
        printf("\t%d",a[i]);


 //-------------------------------------------------------------Sorting 2nd Array ,b[]
    for(j=0;j<m;j++)
    {
       for(i=j+1;i<m; i++)
       {
           if(b[i]<b[j])
         {
           t=b[i];
           b[i]=b[j];
           b[j]=t;
         }

       }
    }
    printf("\nsorted array 2 : ");

     for(i=0;i<m;i++)
        printf("\t%d",b[i]);

//------------------------------------------------------------Merging 2 array

  s=m+n;

    for(i=n;i<s;i++)
    {
        a[i]=b[i-n];
    }

//----------------------------------------------------------sorting the merged array

   printf("\nMerged  Sorted Array :\n");


    for(j=0;j<s;j++)
    {
       for(i=j+1;i<s; i++)
       {
           if(a[i]<a[j])
         {
           t=a[i];
           a[i]=a[j];
           a[j]=t;
         }

       }
    }


    for(i=0;i<s;i++)
    printf("\t%d",a[i]);



return 0;
}

