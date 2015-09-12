#include <iostream>
#include <string>
#include <vector>

using namespace std;
int lcs(string a, string b, int k){
    int m=a.size();
    int n=b.size();
    //vector< vector<int> > lcs(m+1, vector<int>(n+1));
    int lcs[m+1][n+1];
    for(int i=0;i<=m;i++)
    for(int j=0;j<n;j++){
        if(i==0 || j==0)
            lcs[i][j]=0;
        else if(a[i-1]==b[j-1]){
            lcs[i][j]=lcs[i-1][j-1]+1;
            k--;
            cout<<"equal"<<a[i]<<endl;
        }
        else lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);

    }
    if(k<=0) return lcs[m][n];
    else return 0;
}

int main()
{
    int k;
    cin>>k;
    string a;
    string b;
    cin>>a;
    cin>>b;
    cout<<lcs(a,b,k)<<endl;
    return 0;
}
