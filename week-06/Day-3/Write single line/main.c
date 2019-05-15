#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main ()
{
    FILE *file = fopen("my-file.txt", "w");
    fprintf(file, "Varga Jozsef\n");
    fclose(file);

    return 0;
}