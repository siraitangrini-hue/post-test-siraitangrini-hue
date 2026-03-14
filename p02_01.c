#include <stdio.h>
#include <string.h>

int main(){

    char kode[4];
    float beratButet;
    float beratUcok;
    float totalBerat;
    int ongkir;
    float totalBayar;

    printf("Struk Pembayaran DEL EXPRESS\n");

    printf("Masukkan kode kota (MDN/BLG/JKT/SBY): ");
    scanf("%s", kode);

    printf("Masukkan berat paket Butet (kg): ");
    scanf("%f",&beratButet);

    beratUcok = 1.5 * beratButet;

    totalBerat = beratButet + beratUcok;

    if(strcmp(kode,"MDN")==0){
        ongkir = 8000;
    }
    else if(strcmp(kode,"BLG")==0){
        ongkir = 5000;
    }
    else if(strcmp(kode,"JKT")==0){
        ongkir = 12000;
    }
    else if(strcmp(kode,"SBY")==0){
        ongkir = 13000;
    }
    else{
        printf("Kode salah");
        return 0;
    }

    totalBayar = totalBerat * ongkir;

    if(totalBerat > 10 && (strcmp(kode,"JKT")==0 || strcmp(kode,"SBY")==0)){
        totalBayar = totalBayar - (0.1 * totalBayar);
        printf("Promo didapat: Diskon 10%% + Asuransi gratis\n");
    }
    else{
        printf("Promo tidak ada\n");
    }

    printf("Berat Butet = %.2f kg\n",beratButet);
    printf("Berat Ucok = %.2f kg\n",beratUcok);
    printf("Total berat = %.2f kg\n",totalBerat);
    printf("Total ongkir = Rp %.0f\n",totalBayar);

    return 0;
}