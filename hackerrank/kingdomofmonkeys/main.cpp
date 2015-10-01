#include <vector>
#include <iostream>
#include <algorithm>
#define lli long long int
using namespace std;
vector<bool> visited(1005, false);
vector<lli> bananas(1005);
vector<int> graph[1005];

lli counting;
void dfs(int s) {
    visited[s] = true;
    counting=counting + bananas[s];
    for(int i = 0;i < graph[s].size();++i)    {
     if(visited[graph[s][i]] == false)
         dfs(graph[s][i]);
    }
}

void solve(){
	int n;
	cin>>n;
	int m;
	cin>>m;
	lli a, b;
	counting=0;
	for(int i=0; i<n; i++)
        visited[i]=false;
	for(int i=0; i<m; i++){
		cin>>a>>b;
		a--;
		b--;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for(int i=0; i<n; i++)
		cin>>bananas[i];
    		counting =0;
	for(int i=0; i<n; i++){

		if(visited[i]==false){	cout<<"here\n";
			dfs(i);
		}
	}
	cout<<counting<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
