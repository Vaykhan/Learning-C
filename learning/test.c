#include <stdio.h>

int main() {
    char buffer[100]; 
    int c;
    int i = 0;

    printf("Enter text (max 99 chars):\n");

    while (i < sizeof(buffer) - 1) { 
        c = getchar();
        if (c == EOF) break;          
        buffer[i++] = (char)c;        
    }

    buffer[i] = '\0'; 
    printf("You entered: %s\n", buffer);

    return 0;
}
