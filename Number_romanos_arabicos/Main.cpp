#include <stdlib.h>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int romanitos(char f[]) {
    int i, valor;
    int resultado = 0;

    for (i = 0; i < strlen(f); i++) {

        if (f[i] == 'I' && f[i + 1] == 'V' && strlen(f) == 2) {
            resultado = 4;
            break;
        }
        else if (f[i] == 'V' && f[i + 1] == 'I' && strlen(f) == 2) {
            resultado = 6;
            break;
        }

        if (f[i] == 'I' && f[i + 1] == 'X' && strlen(f) == 2) {
            resultado = 9;
            break;
        }
        else if (f[i] == 'X' && f[i + 1] == 'I' && strlen(f) == 2) {
            resultado = 11;
            break;
        }

        switch (f[i]) {
        case 'I': valor = 1; break;
            
        case 'V': valor = 5; break;
            
        case 'X': valor = 10; break;
            
        case 'L': valor = 50; break;
            
        case 'C': valor = 100; break;
            
        case 'D': valor = 500; break;
            
        case 'M': valor = 1000; break;
            
        }

            resultado += valor;   
    }
    return resultado;
}



void run() {
    char cadena[20];
    int decimal;

    cout << "Escribe tu numero en romano: "; cin >> cadena;
    decimal = romanitos(cadena);

    cout << "\n El valor de su numero es:  " << decimal;
}




int main() {
    int opcion;
    do {
        cout << "Que quieres hacer? \n";
        cout << "--------------------------------- \n";
        cout << "1 - Convertir numero Romano a Arabigo \n";
        cout << "2 - Salir\n";
        cout << "---------------------------------- \n";
        cout << "Opcion: "; cin >> opcion;


        switch (opcion) {
        case 1:
            run();
            cout << "\n---------------------------------------- \n";
            cout << "\nQuiere regresar al menu? Si = 1 No = 2 \n";
            cout << "Opcion: "; cin >> opcion;
            if (opcion == 1) {
                break;
            }
            else {
                return 0;
            }

        case 2:
            return 0;

        default:
            cout << "\nOpcion No disponible\n";
            break;
        }
    } while (opcion != 2);

}