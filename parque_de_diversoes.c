#include <stdio.h>

int main() {
    float quilos[3] = {40.50, 50.00, 32.20};
    int q;
    for(q = 0; q < 3; q++) {
        if(quilos[q] >= 40.00) {
            printf("pode andar no brinquedo\n");
        }
        else {
            printf("não pode andar no brinquedo\n");
        }
    }
    return 0;
}
