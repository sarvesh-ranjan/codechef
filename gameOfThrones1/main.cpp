#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool flag=false;
bool isPalin(char s[]){
    int n=strlen(s);
    for(int i=0; i<n/2; i++){
        if(s[i]!=s[n-1-i]){
            return false;
        }
    }
    return true;
}

void swap( char *x, char *y){
    char temp=*x;
    *x=*y;
    *y=temp;
}
void permute(char a[], int l, int r)
{
   int i;
   if (l == r){
        if(isPalin(a)){
            flag=true;
        }
   }

   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
       }
   }
}
int main() {

    char s[10000];
    scanf("%s", s);
    permute(s, 0, strlen(s)-1);
    //cout<<permute(s, 0, s.size-1);
    if(flag)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
