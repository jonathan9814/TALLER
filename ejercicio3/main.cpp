#include <iostream>

using namespace std;

int main()
{
     int m=0,suma=0;
    float promedio=0.0,estatura=0.0;

    cout<<"el programa esta diseñado para una cantidad de estaturas n"<<endl;
    cout<<"si en algun momento desea cerrar el programa digite el numero '1' en cualquier linea"<<endl;

    for(int i=1; ; i++){
        suma=suma+estatura;
        cout<<"digite  estatura #"<<i<<" en metros: "<<endl;
        cin>>estatura;
        if (estatura==4)
        {
            m=i-1;
            break;
        }
    }
    promedio=(suma/m);
    cout<<"promedio: "<<promedio<<endl;
    return 0;
}
