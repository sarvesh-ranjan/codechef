#include <iostream>
#include <cmath>
using namespace std;

void solve(int cn){
	int l, p, c;
	scanf("%d%d%d", &l, &p, &c);
	long long prod=p-l*c;
	double ans=0;
	long long an=0;
	while(prod>0){
		an++;
		prod=prod-(l*c);
	}
	cout<<"Case #"<<cn<<": "<<an<<"\n";
}

int main()
{
    int t;
    scanf("%d", &t);
    int cn = 1;
    while(cn<=t){

    	solve(cn);
    	cn++;
    }
    return 0;
}
