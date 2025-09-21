#include <stdio.h>

int main() {

    int algo;
    printf("Fale algo para acontecer o algo: ");
    scanf("%d", algo);
    if (algo) {
        algo = "acontece";
    } 
    else {
        algo = 0;
    }
    return 0;
}