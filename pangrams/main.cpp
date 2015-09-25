#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str;
    cin.ignore();
    getline(cin, str);
    map<int, int> strmap;
    for(int i=0; i<26; i++){
        strmap[i] = 0;
    }
    for(int i=0; i<str.size(); i++){
        if(str[i]==' ')
            continue;
        if(str[i]>='A' && str[i]<='Z'){
            cout<<"here"<<str[i]<<endl;
            strmap[str[i]-'A']=1;
            continue;
        }
        strmap[str[i]-'a']=1;
    }
    for(int i=0; i<26; i++)
        cout<<strmap[i];
    for(int i=0; i<26; i++){
        if(strmap[i]==0){
            cout<<"not pangram";
            return -1;
        }
    }
    cout<<"pangram";
    return 0;
}
