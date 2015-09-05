#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
        int ans=1;
        for(int i=1; i<=k ; i++){
            ans=max(ans, n%i);
        }
        cout<<ans<<endl;
    }
    return 0;
}
