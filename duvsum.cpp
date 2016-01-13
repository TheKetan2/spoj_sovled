#include <iostream>

using namespace std;

int main()
{
    int input[123456],num,i,j,sum;
    cin >>num;
    for(i=0;i<num;i++){
        sum=0;
        cin >>input[i];
        for(j=1;j<input[i];j++){
            if(input[i]%j==0){
                sum=sum+j;
                //cout <<j<<" full diviser"<<endl;
            }
        }
        cout << sum<<endl;
    }
    return 0;
}
//time limit exceeded
