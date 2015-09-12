#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

bool myfunction(int i, int j){ return i<j; }

struct myclass{
    bool operator()(int i, int j){ return i<j; }
} myobject;


int main()
{
    vector<int> a(10);
    for( int i=0; i<10; i++){
        a[i]=rand() %100;
    }
    sort(a.begin(), a.end());
    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    sort(a.begin(), a.end(), myfunction);
    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    sort(a.begin(), a.end(), myobject);
    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
