#include <iostream>

    using namespace std;

    int main() {
        int n, g, maxp=0, maxi=0, neg=0, pos=0, nt=0, pt=0;
        bool par=true, imp=true;
        float posi, nega;

        for(g=1;g<=3;g++){
            cout<<"Ingrese un Numero: ";
            cin>>n;
            nt=pos=neg=0;
            while(n!=0){
                nt++;
                if(n%2==0){
                    if(par==true){
                        maxp=n;
                        par=false;
                    }
                    else{
                        if(n>maxp) maxp=n;
                    }
                }
                else{
                    if(imp==true){
                        maxi=n;
                        imp=false;
                    }
                    else{
                        if(n>maxi) maxi=n;
                    }
                }
                if(n>0){
                    pos++;
                    pt++;
                }
                else{
                    if(n<0) neg++;
                }
            cout<<"Ingrese un Numero: ";
            cin>>n;
            }
            posi=pos*100/nt;
            nega=neg*100/nt;

            cout<<endl;
            cout<< "Grupo: " <<g <<endl;
            cout<< "Maximo Par             : " <<maxp <<endl;
            cout<< "Maximo Impar           : " <<maxi <<endl;
            cout<< "Porcentaje de Negativos: " <<nega <<endl;
            cout<< "Porcentaje de Positivos: " <<posi <<endl;
            cout<<endl<<endl;
        }
        cout<< "Positivos totales: " <<pt <<endl;
        cout<<endl;

    return 0;
}