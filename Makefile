.PHONY: all clean install

VPATH = ./src
DEPS = libnlp.h
CC = g++
CFLAGS = -c -Wall -Iinclude
LIBFLAGS = -shared -Wl,-out-implib,libnlp.a
EXEFLAGS = -Wl,-rpath=. -L. -lnlp -Iinclude
SRC = libnlp.cpp


info:
  $(info $(OS))

%.o: %.cpp
	$(CC) -c $< $(CFLAGS) -o $@




	
#libnlp.o: libnlp.cpp main.cpp
#	$(CC) -c libnlp.cpp main.cpp

#libnlp.dll: libnlp.o
#	$(CC) -shared -o libnlp.dll -Wl,-out-implib,libnlp.a libnlp.o
	
#libnlp.exe: main.o libnlp.dll
#	gcc main.o  -Wl,-rpath=. -L. -lnlp -o main.exe




#clean:
#	rm -f *.o
#	rm -f *.so

#libnlp.so: libnlp.o
#	g++ -shared -o libnlp	.cpp - libnlp.o

#-W1,-export-all-symbols-Wl,-enable-auto-image-base
#	g++ -c libnlp.cpp -o libnlp.o
#	
#install:
#	mkdir -p $(DESTDIR)/usr/lib
#	mkdir -p $(DESTDIR)/usr/include
#	cp libnlp.so $(DESTDIR)/usr/lib/
#	cp libnlp.h $(DESTDIR)/usr/include/


#all: libnlp.exe clean
#	
#build: libnlp.exe
#
#rebuild: clean-all all
#	
#libnlp.exe: main.o libnlp.dll
#	$(CC) main.o $(EXEFLAGS) -o libnlp.exe
#
#libnlp.dll: libnlp.o
#	$(CC) libnlp.o $(LIBFLAGS) -o libnlp.dll 
#
#%.o: %.cpp
#	$(CC) -c $< $(CFLAGS) -o $@
#
#clean-all:
#	rm -f *.o *.a *.dll *.exe
#
#clean:
#	rm -f *.o *.a 
	
