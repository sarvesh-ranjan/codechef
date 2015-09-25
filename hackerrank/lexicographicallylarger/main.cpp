#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    string s;
    cin>>s;
    string ans;
    int i, j;
    int n=s.size();
    int k;
    for(i=0; i<n-1; i++){
        if(s[i]<s[i+1]){
            k=i;
        }
    }
    if(i==(n-1) && s[n-2]>=s[n-1] ){
        ans="no answer";
    }
    else{
        i=k;
        for(j=n-1; j>i; j--){
            if(s[j]>s[i])
                break;
        }
        /*
        cout<<i<<" "<<j<<endl;
        for(int k=i; k<(j+i)/2; k++){
            char temp=s[k];
            s[k]=s[j-k];
            s[j-k]=temp;
        }*/
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        reverse((s.begin()+i+1), s.end());
        ans=s;
    }
    cout<<ans<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
