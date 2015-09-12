#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void solve(){
    int a;
    int b;
    cin>>a>>b;
    int c = a-b;
    string sum = to_string(c);
    int index=sum.size()-1;
    sum[index]= ((sum[0]+1)%57);
    if(sum[index=='0']) sum[index]='1';
    cout<<sum<<endl;



}

int main()
{
    int t;
    solve();
    return 0;
}
