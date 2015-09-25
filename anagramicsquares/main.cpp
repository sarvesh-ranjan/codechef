#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(long long no){
    vector<int> digits;
    while(no>=0){
        digits.push_back(no%10);
        no/=10;
    }
    cout<<"here";
    for(int i=0; i<digits.size(); i++){
        if(digits[i]!=digits[digits.size()-i-1])
            return false;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int digits=n;
    long long no=0;
    while(n--){
        no=no*10+9;
    }
    int ans;
    double temp=1;
    for(; no>=pow(10,digits-1); no--){
        temp=sqrt(no);
        if(temp==floor(temp) && isAnagram(no))
            break;
    }
    cout<<no;
    return 0;
}
