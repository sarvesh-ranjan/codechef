#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

void solve(){
	int n;
	int k;
	cin>>n;
	cin>>k;

    vector arr(k);
    vector brr(k);
	std::string s;
	int a;
	int b;
	bool flag=false;
	for(int i=0; i<k; i++){
		cin>>a;
		cin>>s;
		cin>>b;
		if(s=="!="){
			if(std::find(equal.begin(), equal.end(),make_pair(a,b)) !=equal.end())
				flag=true;
			notequal.push_back(make_pair(a,b));
		}
		else
		{
			if(std::find(notequal.begin(), notequal.end(),make_pair(a,b)) !=notequal.end())
				flag=true;
			equal.push_back(make_pair(a,b));
		}
	}
	std::string ans="YES";
	if(flag)
		ans="NO";
	cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    	solve();
    return 0;
}
