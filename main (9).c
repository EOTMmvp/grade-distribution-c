
#include <stdio.h>

int main()
{
       int calificacion,A = 0,B = 0,C = 0,D = 0,F = 0;
    for (int i = 0; i < 7; i++) {
        printf("Ingrese la calificación #%d (0-100): ", i + 1);
        scanf("%d", &calificacion);

        if (calificacion < 0 || calificacion > 100) {
            printf("Calificación inválida. Intente nuevamente.\n");
            i--;  // repetir intento
            continue;
        }

        if (calificacion >= 91)
            A++;
        else if (calificacion >= 81)
            B++;
        else if (calificacion >= 71)
            C++;
        else if (calificacion >= 61)
            D++;
        else
            F++;
    }

    printf("\nResultados:\n");
    printf("Cantidad de A: %d\n", A);
    printf("Cantidad de B: %d\n", B);
    printf("Cantidad de C: %d\n", C);
    printf("Cantidad de D: %d\n", D);
    printf("Cantidad de F: %d\n", F);

    return 0;
}
