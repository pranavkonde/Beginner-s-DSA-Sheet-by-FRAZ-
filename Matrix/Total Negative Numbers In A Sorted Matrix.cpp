Problem: Total Negative Numbers In A Sorted Matrix
Link: https://www.codingninjas.com/codestudio/problems/total-negative-numbers-in-a-sorted-matrix_3161878?leftPanelTab=0

Approach 1:

int countNegativeNumbers(vector<vector<int>> &mat)
{
   int count=0;
   int n=mat.size();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<mat[i].size();j++)
		{
			if(mat[i][j]<0)
			{
				count++;
			}
		}
	}
	return count;
}



Approach 2:

int countNegativeNumbers(vector<vector<int>> &mat)
{
int ans=0;
for(int i=0;i<mat.size();i++)
     {
        for(int j=0;j<mat[i].size();j++){
             if(mat[i][j]<0){
            ans+=mat[i].size()-j;
            break;
          }
       }
}
	return ans;
}