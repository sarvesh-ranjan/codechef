#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    arr.resize(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    vector<int> ans(n, 1);
    for(int i=1; i<n; i++){
        if(arr[i]>arr[i-1])
            ans[i]=1+ans[i-1];
    }
    long long int count=0;
    for(int i=0; i<n; i++)
        count+=ans[i];
    cout<<count<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
