#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;

        int ny=0, nn=0, ni=0;
        for (int i=0; i<=s.size(); i++){
            if(s[i]=='I') ni++;
            else if(s[i]=='N') nn++;
            else ny++;
        }
        string ans;
        cout<<"here"<<ny<<" "<<nn<<" "<<ni<<endl;
        if(ni) ans="INDIAN";
        else if (ny) ans="NOT INDIAN";
        else ans="NOT SURE";
        cout<<ans<<endl;
    }
    return 0;
}
