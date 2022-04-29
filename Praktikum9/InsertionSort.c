// Nama file    : InsertionSort.c
// Nama /NIM    : Ivan S Harianja / 24060121120007
// Tgl. Pembuat : 29 April 2022
// Deskripsi    : Menampilkan urutan array mulai dari terkecil sampai besar menggunakan Insertion Sort

#include<stdio.h>

void InsertionSort(int array[], int n)
{
    //Kamus Lokal
    int i ;
    int temp ;
    int j ;

    //Algoritma
    for(i = 1; i < n; i++) {
        temp = array[i];
        j = i - 1 ;
        while (j>=0 && array[j] > temp){
            array[j + 1] = array[j];
            j = j - 1 ;
        }
        array[j + 1] = temp ;
    }

}

//PROGRAM UTAMA
int main()
{
    //Kamus
    int i ;
    int n ;
    int array[] = {90,8,73,10,12,34,50,43,21,6} ;

    //Algoritma
    n = sizeof(array) / sizeof(array[0]);
    InsertionSort(array, n) ;
    for(i = 0; i < n; i ++){
        printf("%d ", array[i]) ;
    }

    return 0 ;
}
