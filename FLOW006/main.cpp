#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        for(int i=0; i<s.size(); i++){
            ans+=(s[i]-48);
        }
        cout<<ans<<endl;
    }
    return 0;
}
