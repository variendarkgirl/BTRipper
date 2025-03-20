/* BTRipper - Bluetooth Jammer for Red Teaming */

#include <stdio.h>
#include <stdlib.h>
#include "include/bluetooth_jammer.h"
#include "include/l2cap_flood.h"
#include "include/beacon_spoofing.h"
#include "include/channel_hopping.h"
#include "include/rssi_monitor.h"
#include "include/utils.h"

void print_banner() {
    printf("\n============================\n");
    printf("   BTRipper - Bluetooth Jammer\n");
    printf("   Disrupting Bluetooth Devices\n");
    printf("============================\n\n");
}

int main(int argc, char *argv[]) {
    print_banner();
    
    if (argc < 2) {
        printf("Usage: %s <mode>\n", argv[0]);
        printf("Modes:\n");
        printf("  1 - L2CAP Flood Attack\n");
        printf("  2 - Beacon Spoofing Attack\n");
        printf("  3 - Channel Hopping Jamming\n");
        printf("  4 - RSSI-Based Disruption\n");
        return 1;
    }
    
    int mode = atoi(argv[1]);
    switch (mode) {
        case 1:
            printf("[+] Launching L2CAP Flood Attack...\n");
            l2cap_flood();
            break;
        case 2:
            printf("[+] Launching Beacon Spoofing Attack...\n");
            beacon_spoof();
            break;
        case 3:
            printf("[+] Launching Channel Hopping Jamming...\n");
            channel_hop_jam();
            break;
        case 4:
            printf("[+] Launching RSSI-Based Disruption...\n");
            rssi_monitor();
            break;
        default:
            printf("[-] Invalid mode selected.\n");
            return 1;
    }
    
    return 0;
}

