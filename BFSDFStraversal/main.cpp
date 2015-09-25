#include <iostream>
#include <list>

using namespace std;

class graph{
    int v;
    list<int> *adj;
    public:
    graph(int v){
        this->v=v;
        adj = new list<int>[v];
    }
    void addEdge(int v, int w);
    void bfs(int s);
    void dfs();
    void dfsUtil(int s, bool *visited);
    void dfs_queue(int s, bool *visited);
};

void graph::addEdge(int v, int w){
    adj[v].push_back(w);
}

void graph::bfs(int s){
    bool *visited=new bool[v];
    for(int i=0; i<v; i++)
        visited[i]=false;

    list<int> q;
    q.push_back(s);
    while(!q.empty()){
        s=q.front();
        cout<<s<<" ";
        visited[s]=true;
        q.pop_front();
        for(list<int>::iterator i=adj[s].begin(); i!=adj[s].end(); ++i){
            if(!visited[*i]){
                q.push_back(*i);
                visited[*i]=true;
            }
        }
    }
}

void graph::dfsUtil(int s, bool visited[]){
    visited[s]=true;
    cout<<s<<" ";
    for(list<int>::iterator i=adj[s].begin(); i!=adj[s].end(); ++i){
        if(!visited[*i]){
            dfsUtil(*i,visited);
        }
    }
}

void graph::dfs(){
    bool *visited=new bool[v];
    for(int i=0; i<v; i++)
        visited[i]=false;
    for(int i=0; i<v; i++){
        if(visited[i]==false)
            dfsUtil(i, visited);
    }
    for(int i=0; i<v; i++)
        visited[i]=false;
    for(int i=0; i<v; i++){
    if(visited[i]==false)
        this->dfs_queue(i, visited);
    }
}

void graph::dfs_queue(int s, bool *visited){
    //bool *visited=new bool[v];
    for(int i=0; i<v; i++)
        visited[i]=false;
    list<int> stack;
    stack.push_front(s);
    while(!stack.empty()){
        s=stack.front();
        visited[s]=true;
        cout<<s<<" ";
        stack.pop_front();
        for(list<int>::iterator i=adj[s].begin(); i!=adj[s].end(); ++i){
            if(!visited[*i]){
                stack.push_front(*i);
            }
        }
    }
}

int main()
{
    graph g(7);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.addEdge(4, 6);
    g.addEdge(5, 6);
    cout<<"BFS\n";
    g.bfs(2);
    cout<<"\nDFS"<<endl;
    g.dfs();
    cout<<"\nDFS ITERATIVE"<<endl;
   // g.dfs_queue(0);
    return 0;
}
