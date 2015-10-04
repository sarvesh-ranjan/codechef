#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdio>
#include <math.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    string a, b;
    cin>>a>>b;
    vector<int> value(n+1);
    for(int i=0; i<=n; i++)
        cin>>value[i];
    long long int ultimatemax=0;
    for(int j=0; j<n; j++){
        vector<long long int> counting(n,0);
        for(int i=0; i<n; i++){
            if(a[i]==b[i]){
                counting[i]=1;
            }
        }
        //long long int counting;
        for(int i=1; i<n; i++){
            if(counting[i]>0){
                counting[i]=counting[i-1]+1;
            }
        }
        long long int maximum_counting=0;
        for(int i=0; i<n; i++)
            maximum_counting=maximum_counting>counting[i]?maximum_counting:counting[i];
        ultimatemax=ultimatemax>maximum_counting?ultimatemax:maximum_counting;
        char temp=a[0];
        for(int i=0; i<n-1; i++)
            a[i]=a[i+1];
        a[n-1]=a[0];
    }

    long long int ans=0;
    for(int i=0; i<=ultimatemax; i++)
        ans=(ans>value[i])?ans:value[i];
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
