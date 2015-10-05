#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

void solve(){
    string a, b;
    cin>>a>>b;
    //stack<char> p, q;
    int m=a.size();
    int n=b.size();
    //p.resize(m);
    //q.resize(n);
    //string ans;
    //char ans[m+n];
    int i, j, k;
    i=j=k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            //ans[k]=a[i];
            printf("%c", a[i]);
            i++;
            k++;
        }
        else if(a[i]>b[j]){
            //ans[k]=b[j];
            printf("%c", b[j]);
            //cout<<b[j];
            j++;
            k++;
        }
    }
    while(i<m){
        //ans[k]=a[i];
        printf("%c", a[i]);
        i++;
        k++;
    }
    while(j<n){
        //ans[k]=b[j];
        printf("%c", b[j]);
        j++;
        k++;
    }
    //printf("\n%s\n", ans);
    cout<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
