#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int matriks [3][3];
    int diagonal;

    matriks[0][1];
    matriks[0][2];
    matriks[0][3];

    matriks[1][1];
    matriks[1][2];
    matriks[1][3];

    matriks[2][1];
    matriks[2][2];
    matriks[2][3];

    printf("baris 1 kolom 1 = ", matriks[0][1]);
    scanf("%i", &matriks[0][1]);

    printf("baris 1 kolom 2 = ", matriks[0][2]);
    scanf("%i", &matriks[0][2]);

    printf("baris 1 kolom 3 = ", matriks[0][3]);
    scanf("%i", &matriks[0][3]);


    printf("baris 2 kolom 1 = ", matriks[0][1]);
    scanf("%i", &matriks[1][1]);

    printf("baris 2 kolom 2 = ", matriks[0][2]);
    scanf("%i", &matriks[1][2]);

    printf("baris 2 kolom 3 = ", matriks[0][3]);
    scanf("%i", &matriks[1][3]);


    printf("baris 3 kolom 1 = ", matriks[0][1]);
    scanf("%i", &matriks[2][1]);

    printf("baris 3 kolom 2 = ", matriks[0][2]);
    scanf("%i", &matriks[2][2]);

    printf("baris 3 kolom 3 = ", matriks[0][3]);
    scanf("%i", &matriks[2][3]);

    diagonal = matriks[0][1] + matriks[1][2] + matriks[2][3];

    printf("matriks :\n");
    printf("%i %i %i\n", matriks[0][1], matriks[0][2], matriks[0][3]);
    printf("%i %i %i\n", matriks[1][1], matriks[1][2], matriks[1][3]);
    printf("%i %i %i\n", matriks[2][1], matriks[2][2], matriks[2][3]);

    printf("jumlah diagonal = %i\n", diagonal);



}
