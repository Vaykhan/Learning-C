#include <stdio.h>
#include <windows.h>

int main(void) {
    printf("This will be erased...\n");
    Sleep(2500);
    printf("\033[F");   
    printf("\033[K");   
    Sleep(10);
    printf("replaced\n");
    return 0;
}
