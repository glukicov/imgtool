BOARD_INC = include/imperial_mmc/fc7/r0
#----------------------------------------------------------

CC=gcc-4.9
CFLAGS=-g -Wall -DSTANDALONE -Wno-format
INCLUDES=-Iinclude \
	 -I$(BOARD_INC)
LDFLAGS=
LIBS=
OBJS=obj/imgtool.o obj/avr32_sfwfs.o obj/avr32_sha1.o
TARGET=bin/imgtool

#---------------------------------------------------------
.PHONY: all _all clean _cleanall

default: all

clean: _cleanall

board_test:
	@if [ "${BOARDID}" == "NOBOARD" ]; then \
		echo "INVALID BOARD OR NO BOARD CHOSEN. PLEASE SELECT BOARD BY COMPILING USING 'make Board=T5_{0,1,2}' OR 'make Board=MP7_{0,1}'"; \
		exit 1; \
	fi;
all: _all
_all: 	clean \
	board_test \
	$(TARGET)


$(TARGET): $(OBJS)
	mkdir -p bin
	$(CC) $(LDFLAGS) $(INCLUDES) -o $(TARGET) $(OBJS) $(LIBS)

obj/%.o: src/common/%.c
	mkdir -p obj
	$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<


_cleanall:
	rm -rf bin obj

