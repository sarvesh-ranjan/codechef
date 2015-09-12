#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct myclass{
    vector<int> myarr;
    myclass(vector<int> &a): myarr(a) {}
    bool operator()(int i, int j) { return myarr[i]<myarr[j]; }
};

int main()
{
    int n;
    cin>>n;
    vector<int> s(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin>>s[i]>>b[i];
    }
    myclass myobject(s);
    vector<int> indices(n);
    for(int i=0; i<n; i++)
        indices[i]=i;
    sort(indices.begin(), indices.end(), myobject);
    for(int i=0; i<n; i++)
        cout<<s[indices[i]]<<" ";
    return 0;
}
