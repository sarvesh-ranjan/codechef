#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int ceil(vector<int> &lis, int s, int e, int element){
    int mid;
    while((e-s)>1){
            mid = s + (e-1)/2;
            (lis[mid]>element? s: e)= mid;

    }
    return e;
}

int lisnlogn(vector<int> &a){
    int n=a.size();
    vector<int> lis(n,0);
    for(int i=0; i<n; i++) cout<<lis[i];
    int len=1;
    if(n){
        lis[0]=a[0];
        len=1;
    }
    for(int i=1; i<n; i++){
        if(a[i]<lis[0]){
            lis[0]=a[i];
            cout<<"if  ";
        }
        else if(a[i]>lis[len-1]){
            lis[len++]=a[i];
            cout<<"else if  ";
        }
        else{
            cout<<"else";
            int last= ceil(lis, -1, len-1, a[i]);
            lis[last]=a[i];
            cout<<last<<endl;
        }
    }
    cout<<len<<endl;
    return len;

}

int main()
{
    int a[]={0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    vector<int> arr(a, a+8);
        vector<int> lis(arr.size(),0);
    for(int i=0; i<arr.size(); i++) cout<<lis[i];
    cout<<lisnlogn(arr);
    return 0;
}
