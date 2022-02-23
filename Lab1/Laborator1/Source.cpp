#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* f = fopen("in.txt", "r");
    if (f == NULL) {
        printf("Cannot open\n");
        return 0;
    }
    char str[128];
    while(!feof(f)) {
        fscanf(f, "%s", str);
        printf("%s\n", str);
    }
    fclose(f);

    char my_str[128];
    printf("Introdu sirul: ");
    scanf("%s", my_str);

    return 0;
}