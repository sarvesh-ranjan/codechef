#include <iostream>
#include <cmath>

using namespace std;


int * createST(int arr[], int n){
    int heightST=(int)(ceil(log2(n)));
    int noNodesST=2*height+1;

    int *st = new int[noNodes];
    st = createSTutil(int arr, int *st, int n);
    return st;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
