target=app
object=main.o stack.o queue.o minPQ.o
CC=g++
$(target):$(object)
	$(CC) -o $@ $^
main.o:main.cpp
	$(CC) -c $<
Stack.o:Stack.cpp
	$(CC) -c $<



.PHONY:
clean:
	rm $(object) $(target)
