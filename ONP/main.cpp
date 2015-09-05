#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        stack<char> s;
        int len = str.size();
        for(int i=0; i< len; i++){
            if(str[i]=='(')
               s.push('(');
            else if(str[i]>='a' && str[i]<='z')
                cout<<str[i];
            else if(str[i]==')'){
                while(s.top() != '('){
                        cout<<s.top();
                        s.pop();
                      }
                s.pop();
            }
            else
                s.push(str[i]);
            }
            cout<<endl;
        }

    return 0;
}
