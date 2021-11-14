#include <iostream>
using namespace std;

int main() {
    int n=0,a=1,b=1,c;
    cin>>n;
    if(n<2){
        cout<<"errore"<<endl;
    }else{
        cout<<a<<"\n"<<b<<endl;
        for (int i=2; i<n; i++) {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<endl;
        }
    }
    // prof non so se è giusto, a un certo punto compaiono numeri negativi

    return 0;
}
