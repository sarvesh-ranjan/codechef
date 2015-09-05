#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x;
    double y;
    cin>>x;
    cin>>y;

    if(x%5!=0){
        cout<<setprecision(2)<<fixed<<y;
    }
    else if(y<(x+0.50)){
        cout<<setprecision(2)<<fixed<<y;
    }
    else{
        cout<<setprecision(2)<<fixed<<(y-x-0.50);
    }
    return 0;
}
