#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int n;
    cin>>n;
    string dir;
    cin>>dir;
    vector< vector<short> > board(n, vector<short>(n,0));
    for(int i=0; i<n; i++)
    for (int j=0; j<n; j++){
        cin>>board[i][j];
    }
        for(int i=0; i<n; i++)
    if(dir=="up"){
        return;
    }
}


int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<endl;
    }
    return 0;
}
