#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>

// ip addressing and routing packets to destination
// int socks endpoint hand
// this will try to listen to incoming connections

#define PORT 7777
#define BUFFER_SIZE 1024 //kilobyte - we can set for msg buffer max, not sure completely

int main() {
  char buffer[BUFFER_SIZE] = {0};
  int new_socket, server_file_descriptor;
  ssize_t nbyteread;
  return 0;
}
