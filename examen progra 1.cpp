// examen progra 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main() {
    int opcion = 0;
    int cantidad = 0;
    int total = 0;
    int puntos = 0;
    const int valor_puntos = 10;
    //ciclo para la consola
    while (1) {
        printf("Bienvenido, te recordamos que cada 10 puntos son 10$\n");
        printf("1. Ingresar material para reciclar\n");
        printf("2. Ver total reciclado\n");
        printf("3. Ver puntos de reciclaje\n");
        printf("4. Salir\n");
        printf("Ingrese una opcion:");
        scanf("%d", &opcion);
        if (opcion == 1) {
            printf("Ingrese la cantidad de material reciclado: ");
            scanf("%d", &cantidad);
            total += cantidad;
            puntos += cantidad / 10;
            printf("El material reciclado se guardo.\n")

        }
        else if (opcion == 2) {
            printf("Total de material reciclado: %d\n", total);
        }
        else if (opcion == 3) {
            printf("Puntos de reciclaje: %d\n", puntos);
        }
        else if (opcion == 4) {
            printf("Gracias por ayudar al Planeta, vuelva pronto!\n");
            break;
        }
        else {
            printf("Opcion inválida. Intente de nuevo.\n");
        }
    }
    if (puntos >= 10) {
        int recompensa = (puntos / 10) * valor_puntos;
        printf("Gracias por la colaboracion, has ganado $%d por tu esfuerzo (%d puntos).\n", recompensa, puntos);
    }
    return 0;

}
        




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
