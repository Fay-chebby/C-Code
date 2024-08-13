#include <stdio.h>
#include <sys/stat.h>

int main() {
    struct stat fileStat;
    if (stat("example.txt", &fileStat) == -1) {
        perror("Error getting file status");
        return 1;
    }

    printf("File size: %ld bytes\n", fileStat.st_size);
    printf("Permissions: %o\n", fileStat.st_mode & 0777);
    return 0;
}

