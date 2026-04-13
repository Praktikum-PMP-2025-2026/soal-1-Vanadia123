/* 
Nama : Vanadia Valianti
NIM : 13224011
SOAL 1
Deskripsi : Sebuah gerbang keamanan memproses data satu peneliti. Tentukan status akhir peneliti berdasarkan level izin, suhu tubuh, kadar radiasi, dan jam kedatangan. 
*/

#include <stdio.h>

int main(){
    int izin, suhu, radiasi, jam;
    int status; //status = 0 artinya TOLAK, status = 1 artinya MASUK, status = 2 artinya KARANTINA, status = 3 artinya PEMERIKSAAN

    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);

    printf("\n");
    
    if (izin<1 || izin>3 || radiasi < 0 || jam < 0 || jam > 23){
        printf("Input tidak valid\n");
        return 0;
    }

    if (radiasi >= 6){
        status = 0;
    }

    else if (suhu >= 390){
        status = 2;
    }

    else if (izin == 1 && jam < 6 || jam > 20){
        status = 0;
    }
    
    else if (izin == 1){
        status  = 1;
    }

    else if (izin == 2 && radiasi <= 2 && jam >= 8 && jam <= 18){
        status = 1;
    }

    else if (izin == 2){
        status = 3;
    }

    else if (izin == 3 && radiasi == 0 && suhu<380){
        status = 1;
    }

    else{
        status = 0;
    }


    switch (status){
        case 0:
            printf("TOLAK\n");
            break;
        case 1:
            printf("MASUK\n");
            break;
        case 2:
            printf("KARANTINA\n");
            break;
        case 3:
            printf("PEMERIKSAAN\n");
            break;
    }
    return 0;
}
