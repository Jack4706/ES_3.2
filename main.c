#include <stdio.h>

int main() {
   float a;

    printf("inserisci un numero:\n");
    scanf("%f", &a);

    if(a >= 0) {
        printf("il numero %.2f e' positivo",a);
    }
    else {
        printf("il numero %.2f e' negativo",a);
    }




    return 0;
}
