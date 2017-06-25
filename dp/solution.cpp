#include "solution.h"

#include <numeric>

using namespace std;

int Solution::findTargetSumWays(vector<int> &nums, int s)
{

}

int Solution::subsetSum(vector<int> &a, int s)
{
	/*
	p[i][j] = dp[i-1][j-a[j]] + dp[i-1][j+a[j]]
	
	dp[i][j] : j = sum{a[0],a[1]...a[i]}*{+,-} {+a[i]? -a[i]?}
	
	dp[i][0] = 0;
	*/
	
	int dp[s+1] ={0};
	dp[0] = 1;
	for(int n:nums)
	{
		for(int i = s; i >=n; i--)
		{
			if(i+n <= s)
			{
				dp[i] = dp[i]+ dp[i-n] + dp[i+n];
			}
			else
			{
				dp[i] += dp[i-n];
			}
		}
	}
}





