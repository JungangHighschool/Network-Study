#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0600
#endif

#include <winsock2.h>
#include <iphlpapi.h>
#include <WS2tcpip.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    WSADATA d;
    if(WSAStartup(MAKEWORD(2, 2), &d)){
        printf("Failed to initialize.\n");
        return -1;
    }
    DWORD asize
}