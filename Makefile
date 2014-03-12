CC=arm-linux-gnueabi-gcc
CXX=arm-linux-gnueabi-g++
LD=arm-linux-gnueabi-ld
CFLAGS=-I/opt/bcm-rootfs/usr/include/ -Wdeclaration-after-statement -I/opt/bcm-rootfs/usr/include/

OBJECTS=core.o
libEGL.so: ${OBJECTS}
	${LD} -o $@ ${OBJECTS} -shared
core.o: core.cpp

%.o: %.cpp
	${CXX} -c -o $@ $< ${CFLAGS}
