#include <iostream>
#include <vector>

using namespace std;

int lis(int arr[], int n, int *max_ref){
    if(n==1)
        return 1;
    int max_ending_here=1, res;

    for(int i=1; i<n; i++){
        res = lis(arr, i, max_ref);
        if(arr[i-1]<arr[n-1] && res +1 > max_ending_here ){
            max_ending_here = 1 + res;
        }
    }
    *max_ref = max_ending_here;
    return *max_ref;
}

int lis_memoization(int arr[], int i, int lis_ans[]){
    if(lis_ans[i]>0){
        return lis_ans[i];
    }
    if(i==1){
        lis_ans[i]=1;
        return lis_ans[i];
    }
    else{
        int max_ending_here=1, res;
        for(int j=1; j<i; j++){
            res = lis_memoization(arr, j, lis_ans);
            if(arr[j-1]<arr[i-1] && res+1 < max_ending_here){
                lis_ans[i]=max_ending_here = res+1;
            }
        }
    }
    return lis_ans[i];
}

int lis_iterative(int arr[], int n){
    int dp[n];
    for(int i=0; i<n; i++)
        dp[i]=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[j] < arr[i] && dp[i]< dp[j]+1){
                dp[i]=dp[j]+1;
            }
        }
    }
    return dp[n-1];
}

int main()
{
    int arr[]={ 10, 22 , 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int lis_ans[n+1];
    for(int i=0; i<=n; i++)
        lis_ans[i]=NULL;
    //vector<int> a(arr, arr+n);
    int max=1;
    cout<<lis(arr, n, &max)<<endl;
    //cout<<lis_memoization(arr, n, lis_ans)<<endl;
    cout<<lis_iterative(arr, n)<<endl;
    return 0;
}
