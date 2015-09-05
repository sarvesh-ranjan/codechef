#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int x1, y1, x2, y2, x3, y3;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        double d1, d2, d3;
        d1= sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
        d2= sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
        d3= sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
        string ans;

        if((d>=d1 && d>=d2) || (d>=d1 && d>=d3) || (d>=d2 && d>=d3) )
            ans="yes";
        else ans="no";
        cout<<ans<<endl;


    }
    return 0;
}
