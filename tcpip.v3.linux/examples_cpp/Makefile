RM = rm -f
CXX = g++
INCLUDE = -I../common
CXXFLAGS = -Wall -g -O2 -D_BSD_SOURCE ${INCLUDE}
LIBS = 
VPATH = ../common

PROGS =	TCPecho TCPdaytime TCPtecho UDPecho UDPtime \
		TCPdaytimed TCPechod TCPmechod UDPtimed daytimed \
		superd TCPmtechod

all:	${PROGS}

TCPecho: TCPecho.o connectTCP.o connectsock.o errexit.o
		${CXX} ${CXXFLAGS} -o $@ $^ ${LIBS}

TCPdaytime: TCPdaytime.o connectTCP.o connectsock.o errexit.o
		${CXX} ${CXXFLAGS} -o $@ $^ ${LIBS}

TCPtecho: TCPtecho.o connectTCP.o connectsock.o errexit.o
		${CXX} ${CXXFLAGS} -o $@ $^ ${LIBS}

UDPecho: UDPecho.o connectUDP.o connectsock.o errexit.o
		${CXX} ${CXXFLAGS} -o $@ $^ ${LIBS}

UDPtime: UDPtime.o connectUDP.o connectsock.o errexit.o
		${CXX} ${CXXFLAGS} -o $@ $^ ${LIBS}

TCPdaytimed: TCPdaytimed.o passiveTCP.o passivesock.o errexit.o
		${CXX} ${CXXFLAGS} -o $@ $^ ${LIBS}

TCPechod: TCPechod.o passiveTCP.o passivesock.o errexit.o
		${CXX} ${CXXFLAGS} -o $@ $^ ${LIBS}

TCPmechod: TCPmechod.o passiveTCP.o passivesock.o errexit.o
		${CXX} ${CXXFLAGS} -o $@ $^ ${LIBS}

UDPtimed: UDPtimed.o passiveUDP.o passivesock.o errexit.o
		${CXX} ${CXXFLAGS} -o $@ $^ ${LIBS}

daytimed: daytimed.o passiveTCP.o passiveUDP.o passivesock.o errexit.o
		${CXX} ${CXXFLAGS} -o $@ $^ ${LIBS}

superd: superd.o sv_funcs.o passiveTCP.o passiveUDP.o passivesock.o errexit.o
		${CXX} ${CXXFLAGS} -o $@ $^ ${LIBS}

TCPmtechod: TCPmtechod.o passiveTCP.o passivesock.o errexit.o
		${CXX} ${CXXFLAGS} -o $@ $^ ${LIBS} -lpthread

clean:
		rm -f ${PROGS} ${CLEANFILES} *.o

distclean:
		rm -f ${PROGS} ${CLEANFILES} *.o
