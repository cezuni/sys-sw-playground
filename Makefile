all: lineno

lineno: lineno.c
	gcc -Wall -o $@ $<

clean:
	rm -f lineno *.o
