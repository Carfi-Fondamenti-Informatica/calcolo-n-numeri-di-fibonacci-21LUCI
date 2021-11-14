#include <iostream>
using namespace std;

int main() {
    int n,a=1,b=1,c;
    cin>>n;
    if(n<2){
        cout<<"errore"<<endl;
    }else{
        cout<<a<<"\n"<<b<<endl;
        for (int i=0; i<n; i++) {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<endl;
        }
    }

    return 0;
}
// prof non so se è giusto, a un certo punto compaiono numeri negativi
