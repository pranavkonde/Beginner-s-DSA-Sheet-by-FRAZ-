Problem: Move Zeros To Left
Link: https://www.codingninjas.com/codestudio/problems/move-zeros-to-left_1094877?leftPanelTab=0


Approach 1:

void moveZerosToLeft(int *arr, int n)  
{
   int ans[n];
   int l=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==0)
       {
           ans[l++]=arr[i];
       }
   }
   for(int i=0;i<n;i++)
   {
       if(arr[i]!=0)
       {
           ans[l++]=arr[i];
       }
   }
   for(int i=0;i<n;i++)
   {
       arr[i]=ans[i];
   }
}
