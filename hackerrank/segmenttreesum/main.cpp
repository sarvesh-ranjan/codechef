#include <iostream>

using namespace std;

int getsumutil(int *st, int ss, int se, int qs, int qe, int si){
    if(se>=qe && ss<=qe){
        return st[si];
    }
    if(se<qs || ss>qe)
        return 0;
    int mid=(ss+se)/2;
    return getsumutil(st, ss, mid, qs, qe, 2*si+1 ) + getsumutil(st, mid+1, qs, qe, 2*si+2);
}

int getsum(int *st, int n, int qs, int qe){
    if(qs<0 || qe>n-1)
        return -1;
    return getsumutil(st, 0, n-1, qs, qe, 0);
}

int constructstUtil(int arr[], int ss, int se, int *st, int si){
    if(ss==se){
        st[si]=arr[ss];
        return  arr[ss];
    }
    int mid=(ss+se)/2;
    st[si]=constructstUtil(arr, ss, mid, st, 2*si+1) + constructstUtil(arr, mid+1, se, st, 2*si+2);
    return st[si];
}

int *constructst(int arr[], int n){
    int height=ceil(log2(n));
    int sizest=2*pow(height)-1;
    int *st=new int[sizest];

    constructstUtil(arr, 0, n-1, st, 0);

    return st;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    int *st=constructst(arr, 0, n);

    return 0;
}
