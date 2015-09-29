#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student{
	string name;
	string marks;
};

bool fun(student a, student b){
	if(a.marks==b.marks)
		return a.name<b.name;
	else return a.marks>b.marks;
}

void solve(){
	int n;
	cin>>n;
	string s;
	int a;
	vector< pair<string, int> > students;
	for(int i=0; i<n; i++){
		cin>>s>>a;
		students.push_back(make_pair(s,a));
	}
	sort(students.begin(), students.end());
	for(vector<pair<string, int> >::iterator it=students.begin(); it!=students.end(); it++)
		cout<<(*it).first<<" "<<-1*(*it).second<<endl;

}

int main()
{

    solve();
    return 0;
}
