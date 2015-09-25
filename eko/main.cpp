#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a.begin(), a.end());
    int l=a[0];
    int r=a[n-1];
    int ans=0;
    while(l<=r){
        int m=(l+r)/2;
        cout<<"m"<<m<<endl;
        int sum=0;
        int b;
        for(int i=0; i<=n-1; i++){
            b=(a[i]-m);
            if(b>0)
                b=b;
            else b=0;
            sum+=b;
        }
        cout<<"sum"<<sum<<endl;
        if(sum==k){
            ans=a[m];
            break;
        }
        else if(sum>k)
            r=m-1;
        else l=m+1;
    }
    cout<<ans;
    return 0;
}
