#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#define fr freopen("Others/A-small.in","r",stdin)

#define fo freopen("output.txt","w",stdout)
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    while(m--){
        int a, b;
        cin>>a>>b;
        long long int volume=0;
        for(int i=a; i<=b; i++)
            volume+=log(arr[i]);
        //cout<<"v"<<pow(volume, (double)1/2);
        double ans=exp((double)volume/(b-a+1));
        cout<<fixed;
        cout<<setprecision(9)<<ans<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        cout<<"Case #"<<i<<": \n";
        solve();
        //cout<<endl;
    }
    return 0;
}
