#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int c;
    while(n){
        int temp;
        vector<int> a(n+1);
        vector<int> b(n+1);
        a[0]=b[0]=0;
        for( int i=1; i<=n; i++ ){
            cin>>temp;
            a[i]=temp;n
            b[temp]=i;
        }
    if(a!=b){
        cout<<"not ambiguous"<<endl;
    }
    else
    cout<<"ambiguous"<<endl;
    cin>>n;
    }
    return 0;
}
