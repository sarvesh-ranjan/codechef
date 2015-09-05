#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if (b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int g=arr[0];
        for( int i=0; i<n; i++){
            g = gcd(g, arr[i] );
        }
        for(int i=0; i<n ; i++){
            cout<<arr[i]/g<<" ";
        }
        cout<<endl;
    }
    return 0;
}
