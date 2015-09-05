#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int count = 0;
        cin>>s;
        for(int i=0; i< s.size(); i++){
            if(s[i]=='4')
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
