#include <stdio.h>

// Fungsi untuk menampilkan pertanyaan dan rekomendasi makanan
void tanyaRasa(char rasa[], char makanan[][30], int jumlah) {
    int jawab, pilihan;

    printf("\napa kamu lagi pengen makan %s?\n", rasa);
    printf("1. iyaa\n");
    printf("2. tidak\n");
    printf("Masukkan pilihan (1/2): ");
    scanf("%d", &jawab);

    if (jawab == 1) {
        printf("\naku rekomendasiin makanan %s:\n", rasa);
        for (int i = 0; i < jumlah; i++) {
            printf("%d. %s\n", i + 1, makanan[i]);
        }

        printf("Masukkan pilihan (1-%d): ", jumlah);
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= jumlah) {
            printf("\nselamat makan sayangg 🍜 😘\n");
            return; // keluar dari fungsi langsung
        } else {
            printf("\nInput tidak valid.\n");
        }
    } else if (jawab == 2) {
        printf("\noke, kita cari yang lain yaa!\n");
    } else {
        printf("\nInput tidak valid.\n");
    }
}

int main() {
    int lapar;

    // Array makanan
    char makananPedas[3][30] = {"Ayam Geprek", "Seblak", "Mie Gacoan"};
    char makananAsin[3][30] = {"Kentang Goreng", "Keju", "Tahu Bulat"};
    char makananManis[3][30] = {"Martabak", "Es Krim", "Donat"};

    printf("Selamat datang di program rekomendasi Makan apa yaa hari inii ✨\n");

    printf("\napakah kamu sedang lapar?🤔\n");
    printf("1. iyaa\n");
    printf("2. tidak\n");
    printf("Masukkan pilihan (1/2): ");
    scanf("%d", &lapar);

    if (lapar == 1) {
        tanyaRasa("pedas", makananPedas, 3);
        tanyaRasa("asin", makananAsin, 3);
        tanyaRasa("manis", makananManis, 3);
    } else if (lapar == 2) {
        printf("\noke, mungkin nanti aja yaa makannya!\n");
    } else {
        printf("\nInput tidak valid.\n");
    }

    return 0;
}
