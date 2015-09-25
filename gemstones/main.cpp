#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<string> strmap(n);
    for(int i=0; i<n; i++)
        cin>>strmap[i];
    map<int, int> freq;
    vector<map<int, int> > multifreq(n);
    for(int j=0; j<n; j++){
        for(int i=0; i<26; i++)
            multifreq[j][i]=0;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<strmap[i].size(); j++){
            multifreq[i][strmap[i][j]-'a']++;
        }
    }
    bool flag=true;
    int count=0;
    for(int i=0; i<26; i++){
        for(int j=0; j<n; j++){
            if(multifreq[j][i]<1){
                flag=false;
                break;
            }
        }
        if(flag==true){
            count++;
        }
    }
    cout<<count;
    return 0;
}
