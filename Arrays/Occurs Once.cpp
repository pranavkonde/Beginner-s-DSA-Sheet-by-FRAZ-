Problem: Occurs Once
Link: https://www.codingninjas.com/codestudio/problems/occurs-once_1214969?leftPanelTab=0


Approach:
int occursOnce(vector<int> &a, int n){
	int arr=a[0];
    for(int i=1;i<n;i++)
    {
        arr=arr^a[i];
    }
    return arr;
}






