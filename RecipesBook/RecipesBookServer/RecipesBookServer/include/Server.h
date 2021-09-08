#pragma once

#define WIN32_LEAN_AND_MEAN

#ifdef _WIN32
    #include <windows.h>
    #include <winsock2.h>
    #include <ws2tcpip.h>
#else
    #include <sys/socket.h>
    #include <sys/types.h>
    #include <netinet/in.h>
    #include <arpa/inet.h>
    #include <unistd.h>
#endif

#include <string>
#include <stdexcept>
#include <vector>

// Need to link with Ws2_32.lib
#pragma comment (lib, "Ws2_32.lib")

class Server
{
    const char* DEFAULT_PORT;
    SOCKET ListenSocket, ClientSocket;
    struct addrinfo* result, hints;
    int code_error;
public:
    Server();
    void ConnectToClient();
	void SendMessageToClient(const std::string& sendbuf);
    std::string RecieveMessageFromClient();
    ~Server();
};