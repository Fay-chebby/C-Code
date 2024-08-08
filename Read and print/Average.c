#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    int num, count = 0;
    double sum = 0.0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Cannot open file \n");
        return 1;
    }

    while (fscanf(fptr, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fptr);

    if (count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        printf("Average: %.2f\n", sum / count);
    }

    return 0;
}
