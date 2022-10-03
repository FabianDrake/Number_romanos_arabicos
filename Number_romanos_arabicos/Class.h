#include <stdlib.h>
#include <string>
#include <iostream>
#include <sstream>


using namespace std;

int mapa;

int mamada (string romano) {
	int resultado = 0;
	int n = romano.length();
	for (int i = 0; i < n; i++) {
		if (i + 1 < n && mapa[romano[i]] < mapa) {
			resultado += (mapa[romano[i + 1]] - mapa[romano[i]]);
		}
	}
}