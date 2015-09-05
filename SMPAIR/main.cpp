#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int min=1000001;
        int ma=1000001;
        int a;
        while(n--){
            cin>>a;
            if(a<=min){
                ma=min;
                min=a;
            }
            else if(a<ma && a>min){
                ma=a;
            }
        }
        cout<<min+ma<<endl;

    }
    return 0;
}
