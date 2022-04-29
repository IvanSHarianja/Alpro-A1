// Nama file    : SelectionSort.c
// Nama /NIM    : Ivan S Harianja / 24060121120007
// Tgl. Pembuat : 29 April 2022
// Deskripsi    : Menampilkan urutan array mulai dari terkecil sampai besar menggunakan Selection Sort

#include<stdio.h>

void SelectionSort(int array[], int n)
{
    //Kamus Lokal
    int i ;
    int min ;
    int temp ;
    int j ;

    //Algoritma
    for(i = 0; i < n; i++) {
        min = i ;
        for(j = i+1; j < n; j++){
            if (array[j] < array[min]){
                min = j ;
            }
        }
        temp = array[min] ;
        array[min] = array[i] ;
        array[i] = temp ;
    }

}

//PROGRAM UTAMA
int main()
{
    //Kamus
    int i ;
    int n ;
    int array[] = {100,81,53,10,2,33,60,43,31,6} ;

    //Algoritma
    n = sizeof(array) / sizeof(array[0]);
    SelectionSort(array, n) ;
    for(i = 0; i < n; i ++){
        printf("%d ", array[i]) ;
    }

    return 0 ;
}
