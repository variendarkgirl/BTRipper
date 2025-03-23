#!/bin/bash

echo "=== BTRipper - Bluetooth Jammer ==="
echo "1. L2CAP Flood Attack"
echo "2. Bluetooth Beacon Spoofing"
echo "3. Channel Hopping Interference"
echo "4. RSSI-Based Disruption"
echo "5. Exit"
read -p "Select an attack mode: " mode
case $mode in
    1) ./btripper 1 ;;
    2) ./btripper 2 ;;
    3) ./btripper 3 ;;
    4) ./btripper 4 ;;
    5) echo "Exiting..."; exit ;;
    *) echo "Invalid selection";;
esac
