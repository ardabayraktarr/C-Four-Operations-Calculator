
#include <stdio.h>

int main() {
    int Number1;
    int Number2;
    char karakter;

    printf("Ýlk sayýyý girin: ");
    scanf("%d", &Number1);

    printf("Ýkinci sayýyý girin: ");
    scanf("%d", &Number2);

    printf("Yapmak istediðiniz iþlemi girin (+, -, *, /): ");
    scanf(" %c", &karakter);

    switch (karakter) {
        case '+':
            printf("Sonuç: %d\n", Number1 + Number2);
            break;

        case '-':
            printf("Sonuç: %d\n", Number1 - Number2);
            break;

        case '*':
            printf("Sonuç: %d\n", Number1 * Number2);
            break;

        case '/':
            if (Number2 != 0) {
                printf("Sonuç: %.2f\n", (float)Number1 / Number2);
            } else {
                printf("Hata: Sýfýra bölme yapýlamaz.\n");
            }
            break;

        default:
            printf("Geçersiz iþlem girdiniz.\n");
    }

    return 0;
}

