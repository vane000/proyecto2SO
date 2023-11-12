#include <iostream>
#include <string>

using namespace std;

int reconeC(string cadena){
    int letraC=0, largo= cadena.length();
    for(int i=0;i<largo;i++){
        if(cadena[i]=='C'|| cadena[i]=='c'){
            letraC++;
        }
    }
    return letraC;
}
int reconeG(string cadena){
    int letraG=0, largo= cadena.length();
    for(int i=0;i<largo;i++){
        if(cadena[i]=='G' || cadena[i]=='g'){
            letraG++;
        }
    }
    return letraG;
}

int main(){
    string prueba= "A,C,G,A,T,C,A,G,C,G,G,T";
    int a=reconeC(prueba);
    cout << a <<endl;
    int b=reconeG(prueba);
    cout << b <<endl;
    return 0;
}