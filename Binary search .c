
#include <stdio.h>

int main()
{
   int high,mid,low,key,n;
   scanf ("%d",&n);
   int arr[n];
   for (int i=0;i<n;i++)
   {
       scanf ("%d",&arr[i]); 
   }
   printf ("Enter the key value to be find ");
   scanf ("%d",&key);
   high = n-1;
   low = 0;
   mid = (low + high)/2;
   while (low <= high)
   {
       if (arr[mid]<key)
       {
           low = mid+1;
       }
   
   else if (arr[mid] == key)
   {
       printf ("The entered key value is present in the given array");
       break;
       
   }
   else 
   {
       high = mid-1;
   }
   mid = (low+high)/2;
}
if (low > high)
{
    printf ("The entered key value is doesn't present in the given array ");
}

    return 0;
}
