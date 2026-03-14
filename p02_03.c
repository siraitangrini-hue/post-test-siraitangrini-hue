#include <stdio.h>

int main(){

    int N;
    int stok[100];
    int i;
    int kategori;
    int total = 0;

    printf("Jumlah data: ");
    scanf("%d",&N);

    printf("Data stok: ");
    for(i=0;i<N;i++){
        scanf("%d",&stok[i]);
    }

    printf("Kode kategori: ");
    scanf("%d",&kategori);

    for(i=0;i<N;i++){
        if(i % 3 == kategori){
            total += stok[i];
        }
    }

    printf("Total stok: %d\n",total);

    return 0;
}