#include <iostream>

using namespace std;

int no(int b){
    if(b==1 || b==2)
        return 0;

    return (b/2-1) + no(b-2);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int b;
        cin>>b;
        cout<<no(b)<<endl;
    }
    return 0;
}
