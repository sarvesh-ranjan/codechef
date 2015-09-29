#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin>>n;
    queue<int> a;
    queue<int> b;
    int temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        b.push(temp);
    }
    for(int i=0; i<n; i++){
        cin>>temp;
        a.push(temp);
    }
    int count=0;
    while(!a.empty() || !b.empty()){
        while(a.front() != b.front()){
            temp=b.front();
            b.pop();
            b.push(temp);
            count++;
        }
        if(a.front() == b.front()){
            a.pop();
            b.pop();
            count++;
        }
    }
    cout<<count;
    return 0;
}
