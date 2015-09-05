#include <iostream>

using namespace std;

void solve(){
    string s;
    cin>>s;
    string ans;
    bool flag=false;
    int j=0;
    int i;
    for(i=s.size()-1; i>=0;i-- ){
            if(s[i]!='0')
                break;
    }
    for(;i>=0;i--)
        cout<<s[i];
    cout<<endl;
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
