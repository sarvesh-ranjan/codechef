#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    int noOfLines;
    int cost=0;
    cin>>t;
    while(t--){
        cin>>noOfLines;
        vector< vector<int> > arr(noOfLines, vector<int>(noOfLines, -1) );
        for(int i=0; i<noOfLines ; i++){
            for(int j=0;j<=i;j++){
                cin>>arr[i][j];
            }
        }

            for(int i=0; i<noOfLines; i++){
            for(int j=0;j<=i;j++){
                cout<<arr[i][j];
            }
        }

}
    return 0;
}
