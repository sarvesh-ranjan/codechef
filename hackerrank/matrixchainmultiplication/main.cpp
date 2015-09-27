#include <iostream>

using namespace std;

int mcm_recursive(int arr[], int i, int j){
    if(i==j)
        return 0;
    int min=1000000007;
    int count=0;
    for(int k=i; k<j; k++){
        count=mcm_recursive(arr, i, k)+mcm_recursive(arr, k+1, j)+arr[i-1]*arr[k]*arr[j];
    if(count<min)
        min=count;
    }
    return count;
}

int mcm_iterative(int arr[],int n){
    int m=n;
    int dp[m][n];
    int j;
    int k;
    int min=1000000007;
    for(int a=1; a<m; a++)
            dp[a][a]=0;
    for(int l=2; l<n; l++){
        for(int i=1; i<=n-l+1; i++){
                j=n+l-1;
                for(k=1; k<j; k++){
                    int temp=dp[i][k] + dp[k+1][j] + arr[i-1]*arr[k]*arr[j];
                    if(temp<dp[i][j])
                        dp[i][j]=temp;
                }

        }
    }
    return dp[1][n-1];
}

int main()
{
    int arr[] = {1, 2, 3, 4, 3}; //Matrix is of size p[i-1]*p[i]
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<mcm_recursive(arr, 1, n-1);
    cout<<endl<<mcm_iterative(arr, n);
    return 0;
}
