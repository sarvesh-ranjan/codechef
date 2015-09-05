#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        int b;
        int ab=n;
        while(n--)
            cin>>a>>b;
        int ans=1;
        for (int i =2; i<=ab; i++){
            ans^=i;
        }
        cout<<ans<<endl;


    }
    return 0;
}
