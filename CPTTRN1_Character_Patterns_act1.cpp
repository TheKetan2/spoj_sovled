#include <iostream>

using namespace std;

int main()
{
    int t,x,y;
    cin >>t;
    for(int i=0;i<t;i++){
        cin >>x>>y;
        for(int i=0;i<x;i++){

            if(i%2==0){
                for(int j=0;j<y;j++)
            {
                if(j%2==0)
                {
                    cout<<"*";
                }
                else
                cout<<".";
            }

            cout<<endl;
            }
            else{
                for(int j=0;j<y;j++)
            {
                if(j%2==0)
                {
                    cout<<".";
                }
                else
                cout<<"*";
            }

            cout<<endl;
            }
        }}
    return 0;
}
