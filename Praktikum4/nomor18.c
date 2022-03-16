// Nama File    : Nomor18.c
// Deskripsi    : Menentukan faktor-faktor bilangan integer sembarang N>0
// Pembuat      : Ivan S Harianja - 24060121120007
// Tgl Pembuat  : 15 Maret 2022
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
        int N ;
        int i ;

    // Algoritma
        printf("Masukan Bilangan integer sembarang: ");
        scanf("%d", &N);
        if(N>0){
            for(i=1 ; i<=N ; i++){
            if (N % i == 0){
                printf("%d ", i);
            }
            }
        }
        else{
            printf("N harus positif");
        }
        return 0;
}
