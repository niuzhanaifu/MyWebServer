#include "testpoll.h"

testpoll::testpoll(const char* p) :max_size(8)
{
	s = new char[strlen(p)+1];
	strcpy(s, p);
}
testpoll::testpoll() : max_size(8)
{
	s=new char[20];
	strcpy(s,"hi");
}
testpoll::~testpoll()
{
	//delete []s;
}
void testpoll::process()
{
	for (int i = 0; i<max_size; ++i)
	{
		printf("%s %d\n", s,i);
	}
	//printf("isconing");
	//printf("%s\n",s);
}
void testpoll::work_s(char* temp)
{
	strcpy(s, temp);
}