#include <stdio.h>

int main()
{
  int n,search,i;
   printf ("Enter the size of the array = ");
scanf ("%d",&n);
int arr[n];
for ( i=0;i<n;i++)
{
scanf ("%d ",&arr[i]);
}

scanf ("%d",&search);
for ( i=0;i<n;i++)
{
if (arr[i]==search)
{
printf ("The entered integer is present in the index %d == %d",i,search);
break;
}
}
if ( i==n)
{
printf ("The entered digit doesn't exists???");
}

    return 0;
}