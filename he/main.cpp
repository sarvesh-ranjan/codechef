#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int t;
	cin>>t;
	//cin.ignore();
	while(t--){
		char *a=(char *)malloc(sizeof(char)*256);

		char b[100];
    	//string b;
    	scanf("%s", a);
    	//cout<<a<<endl;
    	bool flag=true;
    	int n=strlen(a);
    	//cout<<n<<endl;
    	//for(int i=0; i<n; i++)
    		//b[n-i-1]=a[i];
    	//cout<<b<<endl;
    	for(int i=0; i<n; i++){
                //cout<<i<<endl;
    		if(abs(a[0]-a[i]-1)!=abs(a[n-1]-a[n-1-i]-1)){
    			flag=false;
    			break;
    		}
    	}
    	string ans;
    	if(flag)
    		ans="Funny";
    	else ans="Not Funny";
    	cout<<ans<<endl;
	}

    return 0;
}
