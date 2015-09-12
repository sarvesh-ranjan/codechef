#include <iostream>
#include <vector>

using namespace std;

    struct myclass{
        int *a;
        myclass(int *arr): a(arr){}
        bool operator()(int i, int j)
        { return a[i]<a[j]; }
    };

int main()
{
    int arr[5]={4,1,3,6,2};
    string arr1[5]={"a1","b1","c1","d1","e1"};
    int index[5]={0,1,2,3,4};
    vector<int> indices(index, index+5);

    myclass myobject(arr);// = new myclass(arr);
    sort(indices.begin(), indices.end(), myobject);
    for(int i=0; i<5; i++){
        cout<<i<<" "<<arr[indices[i]]<<" "<<arr1[indices[i]]<<endl;
    }

    return 0;
}
