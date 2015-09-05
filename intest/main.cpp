#include <iostream>

using namespace std;

int main()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    int ti;
    int ans=0;
    while (n--){
        cin>>ti;
        if(ti%k==0)
            ans++;

    }
    cout<<ans;
}
