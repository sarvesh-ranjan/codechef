#include<iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //cout<<"here";
        bool flag=false;
        vector<int> arr(1005, 0);
        while(n--){
            int a;
            cin>>a;
            //cou<<"a";
            if(arr[a]){
                flag=true;
                //break;
            }
            else arr[a]=1;
        }

        if(flag==true) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
