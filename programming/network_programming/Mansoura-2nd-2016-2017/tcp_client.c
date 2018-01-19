#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>
int main() {

	char request[256] = "Test Data";


	// create the socket
	int sock;
	sock = socket(AF_INET, SOCK_STREAM, 0);

	//setup an address
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_addr.s_addr = INADDR_ANY;
	server_address.sin_port = htons(3001);

	connect(sock, (struct sockaddr *) &server_address, sizeof(server_address));

	send(sock, request, sizeof(request), 0);

	char buf[256];
	recv(sock, &buf, sizeof(buf), 0);

	printf("\n %s \n", buf);
	close(sock);

	return 0;
}
