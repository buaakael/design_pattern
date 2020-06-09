objects = main.o
CPP = g++
CPPFLAGS = -std=c++11

test : $(objects)
	$(CPP) $(CPPFLAGS) $(objects) -o test

main.o : translator.h

.PHONY : clean
clean:
	-rm $(objects)
