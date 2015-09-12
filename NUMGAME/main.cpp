#include <iostream>

using namespace std;

void solve(){
    int n;
    cin>>n;
    string ans = (n%2)?"BOB":"ALICE";
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
