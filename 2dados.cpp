//Diseñe un programa utilizando numeros aeleatorios
//simular el lanzamiento de de dos dados 
// El usuario  tiene 4 oportunidadea de ganar .
//El usuario gana cuando sale 2 o 4
//se lanza el dado cuando aparece el mensaje pulse ENTER para tirar"
#include<iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>

using namespace std;
int main() 
{
    //Insertando una semilla para que los número generados al azar
    //sean diferentes en cada ocación
    srand(time(NULL));
    
    cout<<endl<<"Pulsar <ENTER> para tirar el dado";
    
    char opcion;
    int oportunidades=2;
    while(oportunidades<=1)
    {

    }
    opcion = getch();
    int num = 1 + rand() % (4) ; //genera números aeleatorios entre 1 y 6
    cout<<endl<<"salio la cara de número"<<num;
if(num== 4 || num== 2)
{
    cout<<endl<<"ganaste un tablero de ajedrez :)";
}
else
{
    cout<<endl<<"perdiste :(";
}

    return 0;
}