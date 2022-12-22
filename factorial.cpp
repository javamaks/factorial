#include <iostream>
using namespace std;
int Factorial(int n){
    int f=1;
    for(int i=1; i<=n; i++){
        f*=i;
     }
    return f;
  }    
int main(){
    int n, a;
    cin >> n;
    a=Factorial(n);
    cout<<a;
}
