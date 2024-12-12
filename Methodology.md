METHODOLOGY
COMPONENTS REQUIRED
1. Arduino UNO R3
2. HC-05 Bluetooth module
3. Breadboard
4. Jumper Cables
5. 330 ohm resistors
6. LEDs
7. Cable
8. Power bank

CONNECTIONS

- HC-05 has 6 pins: 
  1.STATE
  2. RXD
  3. TXD
  4. GND
  5. VCC
  6. EN
- We will be using only VCC, GND, RXD and TXD pins
- The VCC pin of the Bluetooth module is connected to +3.3V of Arduino
- The GND pin of Bluetooth module is connected to GND of Arduino. For this first a jumper is taken from GND of Arduino to the side border pin line of breadboard to create a common GND line in the breadboard.
- To this line the GND of BT module is connected.
- Such common ground points are made to avoid 'Ground Loops' (Voltage difference between two ground points causing instability).
- TXD pin of the BT module is connected to digital pin 0 (RXD) of Arduino.
- RXD pin of BT module is connected to digital pin 1 (TXD) of Arduino.
- Next is the connection of LEDs.
- Connect the short end of the LED to the common ground line on breadboard
- Connect long end of the LED to 330 ohm resistor.
- Connect other end of 330 ohm resistor to digital pin 5 of arduino.
- Resistor is connected because for digital '1' output, +5V output is given out. LED withstands within the range of only 1.2 to 3.6V.
- Below this range it wont glow and above it, LED will be damaged.
- To reduce this voltage, a voltage drop is introduced using the 330 ohm resistor.
- Next is the connection of power supply.
- A +5V power supply is connected (ie, the power bank) to the arduino usinga cable. USB port of PC can also be used for power supply.
- Hardware part is now complete. Next using Arduino IDE, the code for this project is to be entered, compiled and uploaded to the Arduino.
 
