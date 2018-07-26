#include <iostream>
#include <string>

#include "helper.h"

using namespace std;

int send(int socket, const char* data, size_t size) {
  cout 
    << "send " << string(data, size) 
    << " to " << socket
    << endl;
  return size;
}

int recv(int socket, char* buffer, size_t size) {
  cout
    << "recv message from " << socket
    << endl;
  return size;
}

int send_file(int socket, const char* filepath) {
  cout
    << "send a file names " << filepath
    << " to " << socket
    << endl;
}

int recv_file(char* buffer, size_t size) {
  cout
    << "recv file data"
    << endl;
  return size;
}

bool verify(const user& user) {
  cout
    << "implement verify function."
    << endl;
  return false;
}

int main(int argc, char** argv) {
  log0("start ... ");
  int dst = 1000;
  const char* msg = "hello,peerafe.";
  send(dst, msg, strlen(msg)); 

  char buffer[1024] = {0};
  recv(dst, buffer, 1024);

  user u = {"peersafe", "pwd000"};
  bool bok = verify(u);

  cout << "verify: " << u << endl;

  bok = send_file(dst, "/usr/test");
  cout << "send result: " << bok << endl;

  return 0;
}
