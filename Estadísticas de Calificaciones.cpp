#include <iostream> // Para manejo de entrada y salida (cin, cout)
#include <vector>   // Para usar vectores dinámicos

using namespace std; // Evita usar el prefijo std::

int main() {
    int n; // Variable para almacenar la cantidad de estudiantes
    cout << "Ingresa la cantidad de estudiantes: ";
    cin >> n; // Lee la cantidad de estudiantes

    vector<double> calificaciones(n); // Crea un vector para almacenar las N calificaciones
    double suma = 0; // Variable para acumular la suma de todas las notas

    // Bucle para ingresar las calificaciones
    for (int i = 0; i < n; i++) {
        cout << "Ingresa la calificacion del estudiante " << i + 1 << ": ";
        cin >> calificaciones[i]; // Guarda la calificación en el vector
        suma += calificaciones[i]; // Acumula el valor para el promedio
    }

    // Inicializa las variables de mínimo y máximo con el primer elemento del vector
    double max_cal = calificaciones[0];
    double min_cal = calificaciones[0];
    int aprobados = 0, reprobados = 0; // Contadores de estado académico

    // Bucle para procesar estadísticas
    for (double cal : calificaciones) {
        if (cal > max_cal) max_cal = cal; // Actualiza el máximo si encuentra una nota mayor
        if (cal < min_cal) min_cal = cal; // Actualiza el mínimo si encuentra una nota menor
        
        if (cal >= 60) aprobados++; // Incrementa si la nota es aprobatoria (>= 60)
        else reprobados++;          // Incrementa si la nota es reprobatoria (< 60)
    }

    // Muestra los resultados en consola
    cout << "\n--- Estadisticas ---" << endl;
    cout << "Calificacion mas alta: " << max_cal << endl;
    cout << "Calificacion mas baja: " << min_cal << endl;
    cout << "Promedio de calificaciones: " << (suma / n) << endl; // Calcula el promedio al vuelo
    cout << "Estudiantes aprobados: " << aprobados << endl;
    cout << "Estudiantes reprobados: " << reprobados << endl;

    return 0; // Fin del programa con éxito
}
