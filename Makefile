CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGET = btripper

SRCS = main.c \
       src/bluetooth_jammer.c \
       src/l2cap_flood.c \
       src/beacon_spoofing.c \
       src/channel_hopping.c \
       src/rssi_monitor.c \
       src/utils.c

OBJS = $(SRCS:.c=.o)
INCLUDE_DIRS = -Iinclude

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

run:
	./btripper
