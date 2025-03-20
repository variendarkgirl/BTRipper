#include <stdio.h>
#include <stdlib.h>
#include "include/bluetooth_jammer.h"

void init_bluetooth() {
    printf("[*] Initializing Bluetooth interface...\n");
    system("hciconfig hci0 up");
}

void disable_bluetooth() {
    printf("[*] Disabling Bluetooth interface...\n");
    system("hciconfig hci0 down");
}

void enable_bluetooth() {
    printf("[*] Enabling Bluetooth interface...\n");
    system("hciconfig hci0 up");
}

