#include <iostream>
#include <list>
#include <vector>

using namespace std;

long long int ans=0;
vector< vector<int> > adjacency(100005, vector<int>(100005, 0));
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
    void dfs(vector<long long> &);
    void dfsUtil(int s, bool *visited);
    void dfs_queue(int s, bool *visited, vector<long long> &cost);
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

void graph::dfs(vector<long long> &cost){
    bool *visited=new bool[v];
    for(int i=0; i<v; i++)
        visited[i]=false;
    for(int i=0; i<v; i++){
        if(visited[i]==false)
            dfs_queue(i, visited, cost);
    }
}

void graph::dfs_queue(int s, bool *visited, vector<long long> &cost){
    //bool *visited=new bool[v];
    //for(int i=0; i<v; i++)
        //visited[i]=false;
    long long int sum=0;
    list<int> stack;
    stack.push_front(s);
    while(!stack.empty()){
        s=stack.front();
        visited[s]=true;
        //cout<<s<<" ";
        sum+=cost[s];
        stack.pop_front();
        for(list<int>::iterator i=adj[s].begin(); i!=adj[s].end(); ++i){
            if(!visited[*i]){
                stack.push_front(*i);
            }
        }
    }
   // cout<<endl;
    if(sum>ans){
        ans=sum;
    }
}

vector< vector<int> > gr;
bool visi[100005];
void dfs_1(int no){

}
int main()
{
    int n;
    int m;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>m;
        vector<long long> cost(n);
        graph g(n+1);
        gr.resize(n+5);
        int a, b;
        for(int i=0; i<m; i++){
            cin>>a>>b;
            gr[a].push_back(b);
            gr[b].push_back(a);
            g.addEdge(a, b);
            adjacency[a][b]=1;
        }
        for(int i=0; i<n-1; i++)
            cin>>cost[i+1];
        g.dfs(cost);
        cout<<ans<<endl;
    }

   // g.dfs_queue(0);
    return 0;
}
