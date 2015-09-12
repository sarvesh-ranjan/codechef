#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> pie(n);
    vector<int> rack(n);
    for (int i=0; i<n; i++)
        cin>>pie[i];
    for(int i=0; i<n; i++)
        cin>>rack[i];
    sort(pie.begin(), pie.end());
    sort(rack.begin(), rack.end());
    int count=0;
    int j=0;
    for(int i=0; i<n && j<n; ){
        if(pie[i]<=rack[j]){
            i++;
            j++;
            count++;
        }
        else j++;
    }
    cout<<count<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
