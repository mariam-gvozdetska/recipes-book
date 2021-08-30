#pragma once
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <string>
#include <stdexcept>
#include <vector>

#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")

class Client
{
    const char* DEFAULT_PORT;
    const char* ADD_SERV;
    SOCKET ConnectSocket;
    struct addrinfo *result, *ptr, hints;
    int code_error;
    
public:
    Client();
    void ConnectToServer();
    void SendMessageToServer(const std::string& sendbuf);
    std::string RecieveMessageFromServer();
    ~Client();
};
