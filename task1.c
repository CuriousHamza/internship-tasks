#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("test.txt", "a");     // Creating a text file named "test.txt" using append mode
    fclose(ptr);                      // closing the file
    ptr = fopen("test.txt", "w");     // opening file in write mode
    fputs("zainab is a piddi", ptr);  // writing a string to the file
    fclose(ptr);                      // file closed
    ptr = fopen("test.txt", "r");     // opening the file in read mode
    while ((ch = fgetc(ptr)) != EOF){ // writing in the file
        printf("%c", ch);
    }
    return 0;
}