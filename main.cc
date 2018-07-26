#include <iostream>
#include <string>

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

int main(int argc, char** argv) {
  cout << "hello peersafe." << endl;
  return 0;
}
