import socket

def server():
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    server.bind(('', 8000))
    server.listen(5)

    while True:
        client, addr = server.accept()
        if client:
            print("Got connection: {!r}".format(addr))
            handler(client)

def handler(client):
    with client:
        while True:
            data = client.recv(1000)
            if not data:
                break
            client.send(data)

if __name__ == '__main__':
    server()

