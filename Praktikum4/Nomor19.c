// Nama File    : Nomor19.c
// Deskripsi    : Menentukan bilangan prima atau tidak dari bilangan integer sembarang (N>0)
// Pembuat      : Ivan S Harianja - 24060121120007
// Tgl Pembuat  : 16 Maret 2022
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
        int N ;
        int i ;
        int X=0 ;

    // Algoritma
        printf("Masukan Bilangan integer sembarang: ");
        scanf("%d", &N);
        if(N>0){
            for(i=1 ; i<=N ; i++){
                if (N % i == 0){
                    X= X + 1 ;
                }
            }
            if (X == 2){
                printf("%d adalah bilangan prima", N);
            }
            else {
                printf("%d adalah bukan bilangan prima", N);
            }
        }
        else{
            printf("N harus bilangan positif");
        }
        return 0;
}
