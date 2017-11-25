import socket
import asyncio

loop = asyncio.get_event_loop()

async def server():
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    server.bind(('', 8000))
    server.listen(5)
    server.setblocking(False)

    while True:
        client, addr = await loop.sock_accept(server)
        if client:
            print("Got connection: {!r}".format(addr))
            loop.create_task(handler(client))


async def handler(client):
    with client:
        while True:
            data = await loop.sock_recv(client,1000)
            if not data:
                break
            await loop.sock_sendall(client, data)

if __name__ == '__main__':
    loop.create_task(server())
    loop.run_forever()

