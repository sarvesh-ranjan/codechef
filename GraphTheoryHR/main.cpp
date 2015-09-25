#include <iostream>
#include <vector>

using namespace std;

int a[10][10];
vector<int> adj[10];

void initialize(){
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            a[i][j]=false;
        }
    }
}

int main()
{
    initialize();
    int nodes;
    int edges;
    cin>>nodes>>edges;
    int x,y;
    for(int i=0; i<edges; i++){
            cin>>x>>y;
            a[x][y]=true;
            adj[x].push_back(y);
    }
    for(int i=0; i<edges; i++){
            cout<<endl;
        for(int j=0; j<adj[i].size(); j++){
            cout<<adj[i][j]<<" ";
        }
    }
    return 0;
}
