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
    if(dir=="right"){
        for(int i=0; i<n; i++){
            int j=n-1;
            int k=n-1;
            short temp=0;
            int min_0=0;
            while(j && k){
                temp=board[i][j];
                while(k && board[i][k]!=temp) k--;
                if(k && board[i][k]==temp){
                    board[i][j] *=2;
                    board[i][k] =0;
                    k=j-1;
                    j--;
                }
            }
        }
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
