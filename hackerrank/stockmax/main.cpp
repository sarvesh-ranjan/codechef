#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    long long bought=arr[0];
    long long sell=0;
    int boughtcount=1;
    int localmaxcount=0;
    long long profit=0;
    int currmax=-1;
    for(int i=n-1; i>=0; i--){
        if(currmax<arr[i])
            currmax=arr[i];
        profit+=(currmax-arr[i]);
    }
    cout<<profit<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
