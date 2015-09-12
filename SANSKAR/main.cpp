#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector<int> sanskaar(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>sanskaar[i];
        sum+=sanskaar[i];
    }
    if(sum%k)
        cout<<"no";
    else cout<<"yes";


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
