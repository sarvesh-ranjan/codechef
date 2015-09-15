#include<iostream>
#include <list>
#include <vector>

using namespace std;

// Graph class represents a directed graph using adjacency list representation
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[]);  // A function used by DFS
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS(int v);    // DFS traversal of the vertices reachable from v
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " ";

    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
}

// DFS traversal of the vertices reachable from v. It uses recursive DFSUtil()
void Graph::DFS(int v)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function to print DFS traversal
    DFSUtil(v, visited);
}

int main()
{
    // Create a graph given in the above diagram
    /*
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    */
    int t;
    cin>>t;
    for(int c=1; c<=t; c++){
        int n;
        cin>>n;

        vector< vector<int> > arr(n, vector<int>(n, 0));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            cin>>arr[i][j];
            }
        }
        vector<int> ans(n*n+1);
        vector<int> freq(n*n+1, 1);

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            if(i<n-1 && arr[i+1][j] == arr[i][j]+1)
                ans[arr[i][j]]=arr[i+1][j];
            if(i>0 && arr[i-1][j] == arr[i][j]+1)
                ans[arr[i][j]]=arr[i-1][j];
            if(j<n-1 && arr[i][j+1] == arr[i][j]+1)
                ans[arr[i][j]]=arr[i][j+1];
            if(j>0 && arr[i][j-1] == arr[i][j]+1)
                ans[arr[i][j]]=arr[i][j-1];
            }
        }

        int max=1;
        int value= 1;
        for(int i=0; i<=n*n; i++){

            int count = 1;

            int temp=ans[i];
            while(temp){
                //cout<<"here"<<temp<<endl;
                count++;
                temp=ans[temp];
                if(count>max){
                    value=i;
                    max=count;
                }

            }
        }
    cout<<"Case #"<<c<<": "<<value<<" "<<max<<endl;
    }
    return 0;
}
