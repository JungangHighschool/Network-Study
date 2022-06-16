#include <stdio.h>
#include <winsock.h>
#pragma comment(lib, "ws2_32.lib")

int main(void){
    WSADATA d;
    
    if (WSAStartup(MAKEWORD(2, 2), &d)){
        printf("Failed to initialize.\n");
    }

    WSACleanup();
    printf("Ok.\n");
    return 0;
}