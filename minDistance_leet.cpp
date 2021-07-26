int minDistance_Dp(string s1,string s2)
{
    //return mD (s1,s1.size(),s2,s2.size());
    int m = s1.size();
    int n = s2.size();
    int dp [m+1][n+1];

    for (int i = 0; i <=m ; ++i)
    {
        for (int j = 0; j <=n; ++j)
        {
            if(i==0)
            {
                dp[i][j]=j;
            }
            else if (j==0){
                dp[i][j]=i;
            }
            else if (s1[i-1]==s2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else
            {
                int in = dp[i][j-1];
                int d = dp[i-1][j];
                int r = dp [i-1][j-1];
                dp[i][j] = 1 + min (in,min(d,r)) ;

            }
        }
    }
    return dp[m][n];
}