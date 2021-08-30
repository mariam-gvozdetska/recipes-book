#pragma once

#define WIN32_LEAN_AND_MEAN

#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmake>


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
