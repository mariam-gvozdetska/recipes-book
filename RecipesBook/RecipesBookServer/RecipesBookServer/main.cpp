#include <iostream>
#include <string>
#include "Server.h"
using namespace std;

int main()
{
	try
	{
		Server server;
		server.ConnectToClient();

		server.SendMessageToClient("Hello, client!");
		cout << "Client: " << server.RecieveMessageFromClient() << endl;
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}
}
