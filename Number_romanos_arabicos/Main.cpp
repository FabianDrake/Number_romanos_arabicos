#include <stdlib.h>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Calcular {
private:
    string numero_romano;
public:
    Calcular(string romann);
    int Romanitos();
};

Calcular::Calcular(string romann) {
    this-> numero_romano = romann;
}

int Calcular::Romanitos() {
    int value[100];
    int n, i, number = 0;
    char* r_num = const_cast <char*> (numero_romano.c_str());
    n = strlen(r_num);
    for (i = 0; i < n; i++) {
        if (r_num[i] == 'I' || r_num[i] == 'i') value[i] = 1;
        if (r_num[i] == 'V' || r_num[i] == 'v') value[i] = 5;
        if (r_num[i] == 'X' || r_num[i] == 'x') value[i] = 10;
        if (r_num[i] == 'L' || r_num[i] == 'l') value[i] = 50;
        if (r_num[i] == 'C' || r_num[i] == 'c') value[i] = 100;
        if (r_num[i] == 'D' || r_num[i] == 'd') value[i] = 500;
        if (r_num[i] == 'M' || r_num[i] == 'm') value[i] = 1000;
    }
    for (i = 0; i < n; i++) {
        if (i == n - 1) number += value[i];
        else if (value[i] >= value[i + 1]) number += value[i];
        else number -= value[i];
    }
    return number;
}


int main() {
    int opcion, resultado;
    string roman_number;
    do {
        cout << "Que quieres hacer? \n";
        cout << "--------------------------------- \n";
        cout << "1 - Convertir numero Romano a Arabigo \n";
        cout << "2 - Salir\n";
        cout << "---------------------------------- \n";
        cout << "Opcion: "; cin >> opcion;
        


        switch (opcion) {
        case 1:
            cout << "---------------------------------- \n";
            cout << "Digite el numero Romano: ";
            cin >> roman_number;
            Calcular num(roman_number);
            resultado = num.Romanitos();
            if (resultado > 0) {
                /*
                cout << "Numero romano ingresado: " << roman_number << endl;
                */
                cout << "---------------------------------- \n";
                cout << "Su numero es: " << resultado << endl;
                
            }
            else cout << "ERROR DIGITE UN NUMERO" << endl;

            cout << "\n---------------------------------------- \n";
            cout << "\nQuiere regresar al menu? Si = 1 No = 2 \n";
            cout << "Opcion: "; cin >> opcion;
            cout << "\n---------------------------------------- \n";
            if (opcion == 1) {
                break;
            }
            else {
                return 0;
            }
        }

    } while (opcion != 2);

    }