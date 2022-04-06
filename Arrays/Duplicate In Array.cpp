Problem: Duplicate In Array
link:  https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?leftPanelTab=0


Approach 1:

#include<bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
 	sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
    	if(arr[i]==arr[i+1])
        {
        return arr[i];
        }
    }
}


Approach 2:

int findDuplicate(vector<int> &arr)  
{
   int ans = 0;
   for(int i = 0; i < arr.size(); i++) {
       ans = ans^arr[i];
       ans = ans^i;
   }
   return ans;
}



Approach 3:

int findDuplicate(vector<int> &arr) 
{
   int n=arr.size();
   int tsum=((n-1)*n)/2;
   int sum=0;
   for(int i=0;i<n;i++)
   {
      sum=sum+arr[i];
   }
   return sum-tsum;
}
