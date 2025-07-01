class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> nums1;
	vector<int> row1;
	row1.push_back(1);
	nums1.push_back(row1);    
	for(int i=1; i<numRows; i++)
	{   vector<int> row;
		for(int j=0; j<=i/2; j++)
		{	if(j==0)
				row.push_back(1);
			else
				row.push_back(nums1[i-1][j-1]+nums1[i-1][j]);
		}
		for(int a=(i-1)/2; a>=0; a--)
			row.push_back(row[a]);
		nums1.push_back(row);
	}
	return nums1;
	}
};