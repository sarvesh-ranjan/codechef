#include <iostream>
#include <vector>

using namespace std;

class stick{
    public:
    int x, y;
    bool operator()(stick a, stick b){ return a.x <= b.x; }
}object;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<stick> sticks(n);
        for(int i=0; i<n; i++){
            cin>>sticks[i].x>>sticks[i].y;
        }
        sort(sticks.begin(), sticks.end(), object);
        int ans=1;
        for(int i=1; i<n; i++){
            if(sticks[i].x < sticks[i-1].x || sticks[i].y < sticks[i-1].y )
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
