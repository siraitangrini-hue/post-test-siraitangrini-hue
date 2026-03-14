#include <stdio.h>

int main(){

    int N;
    int i;
    int stok[100];
    int kategori;
    int total = 0;

    printf("Masukkan jumlah data: ");
    scanf("%d",&N);

    printf("Masukkan deret stok:\n");
    for(i=0;i<N;i++){
        scanf("%d",&stok[i]);
    }

    printf("Masukkan kode kategori: ");
    scanf("%d",&kategori);

    for(i=0;i<N;i++){
        if(i % 3 == kategori){  
            total = total + stok[i];
        }
    }

    printf("Total stok kategori = %d", total);

    return 0;
}