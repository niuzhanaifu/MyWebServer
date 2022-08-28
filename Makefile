main: main.o http_conn.o
	g++ -o main main.o http_conn.o -lpthread
main.o: ./src/main.cpp ./include/locker.h ./include/threadpool.h ./include/http_conn.h 
	g++ -c ./src/main.cpp 
http_conn.o: ./src/http_conn.cpp ./include/locker.h
	g++ -c ./src/http_conn.cpp

clean:
	rm *.o
