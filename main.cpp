#include <iostream>
#include "FileCacheManager.h"
#include "Solver.h"
#include "MyTestClientHandler.h"
#include "MySerialServer.h"

using namespace std;

int main() {
    CacheManager<string, string> *cacheManager = new FileCacheManager();
    Solver<string, string> *solver = new Solver<string, string>();
    ClientHandler *clientHandler = new MyTestClientHandler(cacheManager, solver);
//    Server *server = new MySerialServer();
    Server* server = new MySerialServer();
    server->open(5400, clientHandler);
    return 0;
}