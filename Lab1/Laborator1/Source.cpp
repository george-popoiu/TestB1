#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

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
    fgets(my_str, 128, stdin);

    char* cuv = strtok(my_str, " ");
    char* cuvinte[128];
    int nr_cuv = 0;
    while (cuv != NULL) {        
        cuvinte[nr_cuv] = cuv;
        nr_cuv++;
        cuv = strtok(NULL, " ");        
    }

    for (int i = 0; i < nr_cuv; ++i) {
        printf("%s\n", cuvinte[i]);
    }

    return 0;
}