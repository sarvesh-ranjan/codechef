#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    int a;
    cin>>t;
    vector<int> v;
        while(t--){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int i=0;
    while(i<v.size()){
        cout<<v[i]<<endl;
        i++;
    }
    return 0;
}
