#include <stdio.h>
#include <stdlib.h>

int main() {
    int length1, length2;
    printf("length1 = ");
    scanf("%d", &length1);
    printf("length2 = ");
    scanf("%d", &length2);
    int numbers1[length1];
    int numbers2[length2];
    int length = length1 + length2;
    int result[length];

    int i;
    for (i = 0; i < length1; i++) {
        scanf("%d", &numbers1[i]);
    }

    int j;
    for (j = 0; j < length2; j++) {
        scanf("%d", &numbers2[j]);

    }

    int k;
    int index = 0;
    for (k = 0; k < length1; k++) {
        result[index] = numbers1[k];
        index++;
    }
    int l;
    for (l = 0; l < length2; l++) {
        result[index] = numbers2[l];
        index++;
    }

    int f;
    for (f = 0; f < length - 1; f++) {
        int d;
        for (d = 0; d < (length - f) - 1; d++) {
            if (result[d] > result[d + 1]) {
                result[d] = result[d] ^ result[d + 1];
                result[d + 1] = result[d] ^ result[d + 1];
                result[d] = result[d] ^ result[d + 1];
            }
        }
    }

    int unique[length];
    int t;
    int ind = 1;
    unique[0] = result[0];
    for (t = 0; t < length - 1; t++) {
        if (result[t] != result[t + 1]) {
            unique[ind++] = result[t + 1];
        }
    }

    array_print(unique, ind);
    return (EXIT_SUCCESS);
}

