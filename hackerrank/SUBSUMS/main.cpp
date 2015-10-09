#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSubsetSum(vector<int> & arr, int n, int sum){
    vector< vector<bool> > dp(n+1, vector<bool> (sum+1));
    for(int i=0; i<=n; i++)
        dp[i][0]=true;
    for(int i=0; i<=sum; i++)
        dp[0][i]=false;
    dp[0][0]=true;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=sum; j++){
            dp[i][j]=dp[i-1][j];
            if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
            }
        }
    }
    return dp[n][sum];
}

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<isSubsetSum(arr, n, k)<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
