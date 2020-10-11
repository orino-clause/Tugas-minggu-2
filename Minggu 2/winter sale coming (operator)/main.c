#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nama[20];
    int bulan_lahir;
    int total_belanja;
    int diskon1;
    int diskon2;

    printf("masukan nama : ", nama);
    fgets(nama, 20, stdin);
    strtok(nama, "\n");

    printf("masukan bulan lahir : ", bulan_lahir);
    scanf("%i", &bulan_lahir);

    printf("berapa banyak nominal uang yang ingin anda habiskan : ", total_belanja);
    scanf("%i", &total_belanja);

    diskon1 = (20 * total_belanja) / 100;//potongan total persen
    diskon2 = total_belanja - diskon1;//potongan nilai total

    printf("nama pelanggan : %s\n", nama);
    printf("bulan lahir pelanggan : %i\n", bulan_lahir);
    printf("uang yang dihabiskan Rp %i\n", total_belanja);
    printf("anda mendapatkan diskon senilai Rp %i \n", diskon1);
    printf("total keseluruhan %i\n", diskon2);
    printf("terima kasih :)");








}
