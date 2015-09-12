#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int a;
    vector<int> arr(n*n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a;
            arr[i*n+j]=a;
        }
    }
    int cost=0;
    int rowdiff=0;
    int coldiff=0;
    for(int i=0;i<=n*n;i++){
        rowdiff=
    }
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
