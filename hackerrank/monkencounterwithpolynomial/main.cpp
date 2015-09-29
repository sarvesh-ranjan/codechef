#include <iostream>
#include <cmath>
using namespace std;

void solve(){
	int a;
	int b;
	int c;
	long long k;
	cin>>a>>b>>c>>k;
	long long tempans;
	int l=0, m, r=100005;
	while(l<=r){
		m=l+(r-l)/2;
		tempans=a*m*m + b*m + c;
		if(tempans==k){
			cout<<m<<endl;
			return;
		}
		if(tempans<k)
			r=m-1;
		else
			l=m+1;
	}
	return ;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    	solve();
    return 0;
}
