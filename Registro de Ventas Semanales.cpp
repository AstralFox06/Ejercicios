#include <iostream> 
#include <string>   

using namespace std; 
int main() {
    // Array de cadenas de texto estático con los días de la semana
    string dias[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    double ventas[7]; // Array para guardar las ventas de los 7 días
    double total_ventas = 0; // Variable acumuladora de ventas totales
    bool hubo_dia_sin_ventas = false; // Bandera para rastrear días con ventas iguales a 0

    // Bucle para capturar las ventas de cada día
    for (int i = 0; i < 7; i++) {
        cout << "Ingresa las ventas del dia " << dias[i] << ": ";
        cin >> ventas[i]; // Almacena el valor en la posición correspondiente
        total_ventas += ventas[i]; // Suma la venta al acumulador general
        
        if (ventas[i] == 0) {
            hubo_dia_sin_ventas = true; // Activa la bandera si detecta ventas en cero
        }
    }

    // Inicializa variables para buscar el día con mayores ventas
    double max_venta = ventas[0];
    string dia_mayor_venta = dias[0];

    // Bucle para buscar el valor máximo registrado
    for (int i = 1; i < 7; i++) {
        if (ventas[i] > max_venta) { // Si encuentra una venta mayor
            max_venta = ventas[i];   // Actualiza el monto máximo
            dia_mayor_venta = dias[i]; // Guarda el nombre del día correspondiente
        }
    }

    // Muestra el reporte final de resultados
    cout << "\n--- Reporte Semanal de Ventas ---" << endl;
    cout << "Total de ventas de la semana: " << total_ventas << endl;
    cout << "Dia con mayores ventas: " << dia_mayor_venta << " (" << max_venta << ")" << endl;
    
    // Evalúa la bandera para imprimir si hubo o no días sin ventas
    if (hubo_dia_sin_ventas) {
        cout << "Alerta: Hubo al menos un dia sin ventas (ventas = 0)." << endl;
    } else {
        cout << "Todos los dias registraron ventas mayores a cero." << endl;
    }

    return 0; // Fin del programa con éxito
}
