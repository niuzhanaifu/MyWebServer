main: main.o http_conn.o
	g++ -o main main.o http_conn.o -lpthread
15-6main.o: main.cpp locker.h threadpool.h http_conn.h 
	g++ -c 15-6main.cpp 
http_conn.o: http_conn.cpp locker.h
	g++ -c http_conn.cpp

clean:
	rm *.o
