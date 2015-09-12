#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool functio(int a, int b){
return a>b;
}

int main()
{
    int t;
    cin>>t;
    for(int c=1; c<=t; c++){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), functio);
        long long ans=0;
        for(int i=0; i<n; i++){
            ans+=(long long)a[i]*(long long)b[i];
        }
    cout<<"Case #"<<c<<": "<<ans<<endl;
    }
    return 0;
}
