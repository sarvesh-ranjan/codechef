#include <iostream>
#include <cmath>

using namespace std;

int noOfSetBits(int n){
    int count =0;
    for (int i= 1<<11; i>0; i/=2){
            if(n & i) count++;

    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans =0;
        ans = n/2048;
        if (n>2048)
        n = n%2048;
        ans += noOfSetBits(n);
        cout<<ans<<endl;
    }
    return 0;
}
