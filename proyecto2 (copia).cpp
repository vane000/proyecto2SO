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

double formulaGenoma(double C, double G, double largo){
    return (C+G)/largo;
}

int main(){

    
    string prueba= "A,C,G,A,T,C,A,G,C,G,G,T";
    int largo = prueba.length();
    cout << largo<<endl;
    int a=reconeC(prueba);
    cout << a <<endl;
    int b=reconeG(prueba);
    cout << b <<endl;
    double umbral=formulaGenoma(a,b,largo);
    cout<< umbral<< endl;
 


    return 0;
}