.PHONY:all
all:client server

client:client.c
	gcc -o $@ $^

server:server.c
	gcc -o $@ $^

.PHONY:clean
clean:
	rm -rf client server fifo
