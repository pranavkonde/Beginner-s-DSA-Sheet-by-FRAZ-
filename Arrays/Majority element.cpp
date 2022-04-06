Problem: Majority element
link: https://www.codingninjas.com/codestudio/problems/majority-element_842495?leftPanelTab=0


Approach 1:
#include<bits/stdc++.h>
int findMajorityElement(int arr[], int n) {
	unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
         mp[arr[i]]++;
    }
    for(auto x:mp)
    {
       if(x.second>n/2)
       {
          return x.first;
       }
    }
    return -1;
}