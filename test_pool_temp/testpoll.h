#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/epoll.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <assert.h>
#include <sys/stat.h>
#include <string.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <stdarg.h>
#include <errno.h>
#include <vector>
#include "locker.h"

class testpoll
{
private:
	int max_size;
	char* s;
public:
	testpoll(const char* p);
	testpoll();
	~testpoll();
	void process();
	void work_s(char* temp);
};