TL,DR: [firmware snapshot](https://rusefi.com/build_server/rusefi_bundle_mega100.zip)

[Documentation](https://github.com/rusefi/rusefi/wiki/mega100)

base example tune with pins selected: https://github.com/rusefi/fw-custom-mega100/blob/main/mega100_base_tune.msq

Younger sibling of https://github.com/rusefi/fw-custom-mega-legacy

See https://github.com/rusefi/rusefi/wiki/Custom-Firmware

## FAQ

### Q: What is this ?
A: This is an STM32F407VGT6 on an Arduino Mega socket board. It has 1 megabyte of flash, and can run both rusEFI and STM32Speeduino on existing installations that use Mega2560 board. There is a CAN PHY transciever on the board with CANTX/CANRX going to PD0/PD1, this is CAN0 ALT_2

### Q: What voltage dividers are used for analog inputs ?
A: 470 ohm and 1k ohm

### Q: What are the seven headers to solder?

A: the quick and lazy way: https://a.co/d/gqrhHuu,
![image](https://github.com/user-attachments/assets/a16d3751-98fb-4356-81a4-0b60ea74412e)

A2: There are FIVE 1x8 , ONE 1x10, ONE 2x18 headers, they can be made up of normal cut to length 1x headers, and a 2x header with enough pins.

### Q: Are all the pins connected ?
A: no, Mega D46 is not connected, on 0.4 board that's earmarked for WMI EMPTY indicator.

### Q: What is the proper orientation of the header ?

A: ![image](https://github.com/user-attachments/assets/56093289-822f-4563-945d-78ed3974e61b)

### Q: What's the intended use for this board ?

A: Upgrading any speeduino compatible board:
official 0.4 board:
![image](https://github.com/user-attachments/assets/42d13a18-f82e-4099-8cbe-4ce0f497a5e0)

wmtronics ua4c: 
![image](https://github.com/user-attachments/assets/a205657c-9981-40bf-862f-b4be591665de)

and others that are built around Mega2560 Socket

### Q: What's the pinout, what goes where !?

For 0.4 board:

![image](https://github.com/user-attachments/assets/9bf27266-6805-4cec-be03-d8e6f4a9e3a7)


for ua4c: 

![image](https://github.com/user-attachments/assets/5513b8ca-3588-40cb-ac08-f7716a8d7a15)


