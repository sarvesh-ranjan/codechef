#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        double min=0;
        double max=0;
        double b;
        double ls;
        cin>>b>>ls;
        min=sqrt(ls*ls-b*b);
        max=sqrt(ls*ls+b*b);
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
