#include <iostream>

using namespace std;

int main()
{
    int t,x,y,k;
    cin >>t;
    for(int i=0;i<t;i++){
        cin >>x>>y;
        for(int j=0;j<x;j++){
            if(j==0||j==x-1){
                for(int k=0;k<y;k++){
                    cout <<"*";
                }
            }
            else{
                for(k=0;k<y;k++){
                if(k==0||k==y-1){
                    cout <<"*";
                }
                else{
                    cout <<".";
                }
                }
            }
            cout <<endl;
        }

    }
    return 0;
}
