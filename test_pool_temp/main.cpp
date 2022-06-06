#include "threadpool.h"
#include "testpoll.h"
#include "locker.h"

int main()
{
    threadpool<testpoll>* pool=NULL;
    try
    {
        pool=new threadpool<testpoll>;
    }
    catch(...)
    {
        return 1;
    }
    testpoll* uesrs=new testpoll[5];
    for(int i=0;i<5;++i)
    {
        char t[]="hello";
        uesrs[i].work_s(t);
        printf("this is %d try\n",i);
        pool->append(uesrs+i);
    }
    sleep(2);
    delete []uesrs;
    delete pool;
    return 0;
}