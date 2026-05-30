#include <iostream> 
include <vector>   

using namespace std; 

int main() {
    int n; // Variable para la cantidad de primos deseados
    cout << "Ingresa la cantidad de numeros primos a generar: ";
    cin >> n; // Lee la cantidad ingresada por el usuario

    vector<int> primos; // Vector dinámico para almacenar los números primos encontrados
    int numero_evaluar = 2; // Primer número entero a evaluar si es primo

    // Bucle principal: se ejecuta hasta que tengamos la cantidad N de primos requerida
    while (primos.size() < n) {
        bool es_primo = true; // Bandera para determinar el estado del número

        // Bucle para verificar divisores desde 2 hasta la mitad del número evaluado
        for (int i = 2; i * i <= numero_evaluar; i++) {
            if (numero_evaluar % i == 0) { // Si el residuo es 0, no es primo
                es_primo = false; // Cambia la bandera a falso
                break;            // Detiene el análisis de este número
            }
        }

        if (es_primo) {
            primos.push_back(numero_evaluar); // Si es primo, lo añade al vector
        }
        numero_evaluar++; // Pasa al siguiente número entero
    }

    // Muestra la lista de números primos encontrados
    cout << "Los primeros " << n << " numeros primos son: " << endl;
    for (int primo : primos) {
        cout << primo << " "; // Imprime cada primo separado por un espacio
    }
    cout << endl;

    return 0; // Fin del programa con éxito
}
