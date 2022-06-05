/*
This is binary search main function.
*/

int s =0;
   int e =n;

   while(s<=e)
   {
       int mid = (s+e)/2;
       if( arr[mid] == k)
       {
           return mid;
       }
       else if(arr[mid] > k)
       {
           e = mid -1;
       }
       else
       {
           s = mid +1;
       }
   }
   return -1;