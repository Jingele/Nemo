target= app
object=main.o util.o bubble.o selector.o insert.o shell.o merge.o heap.o
CC=gcc
$(target):$(object)
	$(CC) -o $@ $^
.c.o:
	$(CC) -c $<

.PHONY:
clean:
	rm $(target) $(object)
