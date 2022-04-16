Problem: Buildings Projection
Link: https://www.codingninjas.com/codestudio/problems/buildings-projection_1466964


Approach 1:

int projectionArea(vector<vector<int>> &grid) {
	int m=grid.size();
	int n=grid[0].size();
	int result=0;
	int xy=0;
	//int yz=0;
	//int xz=0;
	for(int i=0;i<m;i++)
	{   int yz=0;
		for(int j=0;j<n;j++)
	    {
			 if(grid[i][j]>0)
	          { result++;}
			yz=max(grid[i][j],yz);
		}
		result+=yz;
	}
		for(int i=0;i<n;i++)
	{   int xz=0;
		for(int j=0;j<m;j++)
	    { 
			xz=max(grid[j][i],xz);
		}
			result+=xz;
	}
	//result+=xz;
	//cout<<xy<<" "<<yz<<" "<<xz<<" "<<endl;;
	return result;
    // 
}
