#include<iostream>
using namespace std;

int main(){
    int s;
    for (int i = 1; i < 11; i++){
        cout<<endl<<endl<<"TABLA DE MULTIPLICAR DEL "<<i<<endl;
          for (int n = 1; n < 11; n++){
                 s=i*n;
             cout<<i<<" x "<<n<<" = "<<s<<endl;
            }
    }
}