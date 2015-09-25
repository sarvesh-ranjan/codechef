#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int j;
    for(j=1; j<=t; j++){
        int n;
        cin>>n;
        long long ans= (long long)pow(3+ sqrt(5), n);St
        int a=ans%10;
        ans/=10;
        int b=ans%10;
        ans/=10;
        int c=ans%10;
        cout<<"Case #"<<j<<": "<<c<<b<<a<<endl;
    }
    return 0;
}
