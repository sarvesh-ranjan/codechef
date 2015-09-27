#include <iostream>
#include <vector>

using namespace std;

void editdistance(string x, string y){
    int m=x.size();
    int n=y.size();
    vector< vector<int> > dp(m+1, vector<int>(n+1));
    for(int i=0; i<=m; i++)
        dp[i][0]=i;
    for(int j=0; j<=n; j++)
        dp[0][j]=j;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(x[i-1]==y[j-1])
                dp[i][j]=dp[i-1][j-1];
            else{
                dp[i][j]=min(dp[i-1][j-1]+1,min(dp[i][j-1]+1, dp[i-1][j]+1));
            }
        }
    }
    cout<<dp[m][n]<<endl;
    return ;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string x, y;
        cin>>x>>y;
        editdistance(x, y);
    }

    return 0;
}
