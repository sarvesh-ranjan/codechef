#include <iostream>
#include <vector>


using namespace std;

int knapsack(int W, int *wt, int *val, int n){
    int K[n+1][W+1];
    for(int i=0; i<=n; i++){
    for(int w=0; w<=W; w++){
        if(i==0||w==0){
            K[i][w]=0;
        }
        else if(wt[i-1]<=w){
            K[i][w]=max(val[i-1]+K[i-1][w-wt[i-1]], K[i-1][w]);
        }
        else K[i][w]=K[i-1][w];
    }
    }
    return K[n][W];
}

int cylinder(int O, int N, vector<int> &oxy, vector<int> &nit, vector<int> &wt, int n){
    int K[n+1][O+1][N+1];
    for(int i=0; i<=n; i++){
        for(int j=0; i<=O; j++){
            for(int k=0; k<=N; k++){
                if(i==0||j==0||k==0){
                    K[i][j][k]=0;
                }
                else if(oxy[i-1]<= j && nit[i-1]<=k){
                    K[i][j][k]=max(wt[i-1] + K[i-1][j-oxy[i-1]][k-nit[i-1]], K[i-1][j][k]);
                }
                else K[i][j][k]=K[i-1][j][k];
            }
        }
    }
    return K[n][O][N];
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int O, N;
        cin>>O>>N;
        int n;
        cin>>n;
        vector<int> oxy(n);
        vector<int> nit(n);
        vector<int> wt(n);
        for(int i=0; i<n; i++){
            cin>>oxy[i]>>nit[i]>>wt[i];
        }
        cout<<cylinder(O,N, oxy, nit, wt, n);
    }
    return 0;
}
