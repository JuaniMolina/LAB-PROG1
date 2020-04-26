#include <iostream>
    using namespace std;


    int main() {
        int n, c, i, p=0, tp=0;

        for(c=1;c<=10;c++){
            cout<<"Ingrese un numero: ";
            cin>>n;
                for(i=1;i<=n;i++){
                    if(n%i==0) p++;
                    }
            if(p==2) tp++;
            p=0;
        }
        cout<<endl <<tp;

        return 0;
}
