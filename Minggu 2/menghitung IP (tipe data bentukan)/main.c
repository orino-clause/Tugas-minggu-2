#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
 int   sks1, sks2, sks3, sks4, sks5, jumlahsks;
 int jumlahnilai;
 float ip;
 int  nilai1, nilai2, nilai3, nilai4, nilai5;
 char nama[20];

 printf("Masukan nama mahasiswa : ");
 fgets(nama, 20, stdin);
 strtok(nama, "\n");

 printf("Mata Kuliah Pemograman(dalam bobot) \n");
 printf("Masukkan Nilai = ", nilai1);
 scanf ("%i", &nilai1);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks1);

 printf("Mata Kuliah Kalkulus(dalam bobot) \n");
 printf("Masukkan Nilai = ", nilai2);
 scanf ("%i", &nilai2);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks2);

 printf("Mata Kuliah Fisika(dalam bobot) \n");
 printf("Masukkan Nilai = ", nilai3);
 scanf ("%i", &nilai3);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks3);

 printf("Mata Kuliah Sistem Operasi(dalam bobot) \n");
 printf("Masukkan Nilai = ", nilai4);
 scanf ("%i", &nilai4);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks4);

 printf("Mata Kuliah Basis Data(dalam bobot) \n");
 printf("Masukkan Nilai = ", nilai5);
 scanf ("%i", &nilai5);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks5);
 printf("\n");



 jumlahsks    = sks1 + sks2 + sks3 + sks4 + sks5;
 jumlahnilai  = (nilai1*sks1) + (nilai2*sks2) + (nilai3*sks3) + (nilai4*sks4) + (nilai5*sks5);
 ip = (float) jumlahnilai/jumlahsks;

 printf("Nama mahasiswa : %s\n", nama);
 printf("IP Semester ini = %f\n ", ip);


}
