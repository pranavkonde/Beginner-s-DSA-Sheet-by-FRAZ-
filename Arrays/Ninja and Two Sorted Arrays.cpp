 Problem: Ninja and Two Sorted Arrays
 Link: https://www.codingninjas.com/codestudio/problems/ninja-and-sorted-arrays_1214628?leftPanelTab=0


Approach 1:

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int j=0;
    for(int i=0;i<m+n;i++)
    {
        if(arr1[i]==0)
        {
            arr1[i]=arr2[j];
            j++;
        }
    }
    sort(arr1.begin(),arr1.end());
    return arr1;
}


Approach 2:

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
		int j=0,k=0,i=0;
    	vector<int> arr3(m+n);
    	while(i<m && j<n)
        {
            if(arr1[i]<=arr2[j])
            {
                arr3[k++]=arr1[i++];
            }
            else
            {
                arr3[k++]=arr2[j++];
            }
        }
    while(i<m)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<n)
    {
        arr3[k++]=arr2[j++];
    }
    return arr3;
}