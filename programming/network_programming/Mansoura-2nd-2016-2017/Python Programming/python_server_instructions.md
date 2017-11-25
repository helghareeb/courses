To list the TCP ports that are being listened on, and the name of each listener’s daemon and its PID, run the following command:

$ sudo netstat -plnt


1 - Run the Server using Python 3 (must be Python 3)
$python3 server.py

2 - In another terminal, run
$nc -vv localhost 8000

When you send a message, you receive the same message back again. 
Now, leave the connection open, open another terminal, start a new netcat
$nc -vv localhost 8000

You will be surprised that the messages you send will not be echoed. 
Now, terminate the first connection. You will suddenly receive all the messages.
This is the problem with sequential servers.

In this Demo, we can show the Process ID of the running Python script.
In another terminal, use the command

$ ps -ef | grep python

First, run this command before executing the python script of the server. You will get a list of current executing python processes or python realted processses.

Then, start the server, and then run the same command. 
You will get the PID of the python server. You will find the name of the process, something like this:

helghar+ 14295 13835  1 22:36 pts/4    00:00:00 python3 AsyncIO_server.py

Note that: first no. is: PID, second no. is PPID (Parent Process ID). We need and will use the first number.

In another terminal, and beffore any client connections, run the command:

$ ps -T -p <PID>

This command displays the threads in PID. Note that, before connecting to the server, we don't have any running threads. However, with each client connection using nc, we get a new thread.

So, run this command everytime you create a new connection.

Now, can we use $kill SPID ? Answer is No, we can't. Besides, light-weight threads use amount of memory (8 MB in Linux) for each thread.

Now, let's move to AsyncIO.


