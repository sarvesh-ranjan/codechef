#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
            int n;
        cin>>n;
        vector<int> citya(n,0);
        vector<int> cityb(n,0);
        for(int i=0; i<n; i++){
            cin>>citya[i]>>cityb[i];
        }

        int c;
        cin>>c;
        vector<int> count(c,0);
        vector<int> ans(c,0);
        for(int i=0; i<c; i++)
            cin>>count[i];
        for(int j=0; j<c; j++){
            for(int i=0; i<n; i++){
                if(count[j]>=citya[i] && count[j]<=cityb[i]){
                    ans[i]++;
                }
            }
        }
        cout<<"Case #"<<i<<" :";
        for(int i=0; i<c; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
