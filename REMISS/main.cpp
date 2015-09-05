#include <iostream>

using namespace std;
int max(int a, int b){
    return (a>b)?a:b;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        cin>>a>>b;
        int ans = a+b;
        cout<<max(a, b)<<" "<<a+b<<endl;
    }
    return 0;
}
