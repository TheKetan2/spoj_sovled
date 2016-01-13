
#include <iostream.h>
using namespace std;
int main(){
      int a[10],i=0,j;
      while(a[i]!=42){
        cin >> a[i];
        i++;
      }
      for(j=0; j<=i; j++){
        cout << a[i] << endl;
      }
      }
    return 0;
}
