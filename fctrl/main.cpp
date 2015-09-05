#include <iostream>

using namespace std;

int main()
{
    int t;
    int ans=0;
    int n;
    cin>>n;
    while(n--){
        ans=0;
        cin>>t;
        int a=5;
        while(t>=a){
            ans  = ans + t/a;
            a*=5;
        }
    cout<<ans<<endl;
    }
}
