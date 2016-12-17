it:	all

PROGS	:=	setlogin
CFLAGS	+=	-Wall -pedantic -s

all:	$(PROGS)
clean:
	rm -f $(PROGS)
