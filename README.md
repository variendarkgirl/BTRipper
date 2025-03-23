# BTRipper - Bluetooth Jamming Tool

## Overview
BTRipper is a Bluetooth jamming tool designed for red teaming activities. It disrupts Bluetooth connections by executing various attack techniques, such as L2CAP flooding, beacon spoofing, and channel hopping interference.

 **Disclaimer:** This tool is for educational and research purposes only. Unauthorized use may violate laws and regulations.

## Features
- **L2CAP Flood Attack** - Overloads Bluetooth connections with excessive packets.
- **Beacon Spoofing** - Broadcasts fake Bluetooth device names.
- **Channel Hopping Jamming** - Rapidly switches channels to interfere with signals.
- **RSSI-Based Disruption** - Blocks specific devices based on signal strength.

## 🛠 Installation
Ensure you have the necessary dependencies installed:
```bash
sudo apt update && sudo apt install -y bluez libbluetooth-dev build-essential
```

Clone the repository and build the tool:
```bash
git clone https://github.com/yourusername/BTRipper.git
cd BTRipper
make
```

## Usage
Run BTRipper and select an attack mode:
```bash
./btripper
```
Alternatively, use the bash script for an interactive menu:
```bash
chmod +x btripper.sh
./btripper.sh
```

## 🚨 Legal Disclaimer
This tool is intended for **educational purposes only**. The author is **not responsible** for any misuse. Ensure you have explicit permission before testing on any device.

##  License
BTRipper is released under the MIT License.

