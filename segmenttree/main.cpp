#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
using namespace std;
int *st;

int getLeft(int n){
    return 2*n+1;
}

int getRight(int n){
    return 2*n+2;
}

int getParent(int n){
    return floor((n-1)/2);
}

int getMid(int a, int b){
    return (a+b)/2;
}

int createSTUtil(vector<int> & arr, int *st, int ss, int se, int si){
    if(ss==se){
        st[si]=arr[ss];
        return st[si];
    }

    int mid = getMid(ss, se);
    st[si] = createSTUtil(arr, st, ss, mid, getLeft(si)) + createSTUtil(arr, st, mid+1, se, getRight(si));
    return st[si];

}

int getSum(int *st, int qs, int qe, int ss, int se, int index){
    if(ss<=qe && se>=qe){
        return st[index];
    }
    if(ss> qe || se<qs){
        return 0;
    }

    return getSum(st, qs, getMid(qs, qe), ss, se, getLeft(index)) + getSum(st, getMid(qs, qe)+1, qe, ss, se, getRight(index));
}

int * createST(vector<int> & arr){
    int n=arr.size();
    int ss, se; //segment start, segment end
    int height = (int) ceil(log2(n));
    int noNodesST=2*height -1;
    st = new int[noNodesST];
    createSTUtil(arr, st, 0, noNodesST, 0);
    return st;

}

int main()
{
    int n;
    n=6;
    vector<int> arr(n);
    for( int i=0;i <n; i++){
        arr[i]=2*i+1;
    }
    int *st=createST(arr);
    cout<<getSum(st, 1, 3, 0, n, 0)<<endl;
    return 0;
}
