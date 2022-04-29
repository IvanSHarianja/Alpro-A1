// Nama file    : CountingSort.c
// Nama /NIM    : Ivan S Harianja / 24060121120007
// Tgl. Pembuat : 29 April 2022
// Deskripsi    : Menampilkan urutan array mulai dari terkecil sampai besar menggunakan Counting Sort


#include <stdio.h>

void counting_sort(int arr1[],int n,int max, int min){
    //Kamus Lokal
    int count[100]={0},i,j;

    //Algoritma
    for(i=0;i<n;++i)
        count[arr1[i]-min]=count[arr1[i]-min]+1;
    for(i=0;i<=max-min;++i)
        for(j=1;j<=count[i];++j)
            printf("%d ",i+min);
}

//PROGRAM UTAMA
int main(){
    //Kamus
    int i, n, *arr, max=0, min=1;

    //Algoritma
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        printf("Masukan nilai array n ke-%d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array sebelum disorting: ");
    for(i = 0; i < n; i++){
        if(arr[i]>max)
            max=arr[i];
        (arr[i]<min)? min=arr[i] : min;
        printf("%d ", arr[i]);
    }

    printf("\nArray setelah disorting: ");
    counting_sort(arr,n,max, min);
    return 0;
}

