# METHODOLOGY
## COMPONENTS REQUIRED
1. Arduino UNO R3
2. HC-05 Bluetooth module
3. Breadboard
4. Jumper Cables
5. 330 ohm resistors
6. LEDs
7. Cable
8. Power bank

## CONNECTIONS

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

## PROCEDURE
- Using the cable transfer (upload) the code to the Arduino board.
- WHile uploading make sure the wires on digital 0 (RxD) and/or wires on digital 1 (TxD) of Arduino are disconnected.
- Uploading while its connected can cause error in the IDE. After uploading reconnect the wires on the TxD and RxD.
- Now remove cable from the PC
- Hold the 'key' / 'reset' button on the HC-05 while connecting the power supply to the Arduino.
- It is done to trigger the HC-05 module into a special configuration mode known as AT mode.
- AT mode is a command mode that allows you to interact with HC-05 module using a series of test commands sent over a serial connection.
- Thses commands  (AT commands) enable you tom configure various settings of the module like its name, baud rate and bluetooth role (master/slave).
- At first, the LED on the module has short rapid blinks, meaning its in standard pairing mode.
- After releasing the button, the LED show long, delayed slow blinks showing that its now in AT mode.
- AT mode is short for 'Attention mode', used to configure and give commands to the module.
- Its visible to nearby devices or can be connected to any device only in this mode.
- Install 'Arduino Bluetooth Control App' to control the LEDs
- Pair 'HC-05' with the phone using bluetooth. Passkey is '1234'.
- Google speech-to-text converter converts the voice to text and serially transmits it to the bluetooth module.
- It is transferred to the Arduino, the Arduino decides to light up the LED or not.
- Click the mic button and say "switch on the lights". The LED should trun on.
- Click the mic button and say "switch off the lights". The LED should turn off.

## TROUBLESHOOTING
- If code upload issue: Try removing jumper wires from digital pin 0 and pin 1, or either one of them and then upload. Reconnect after uploading.
- In case not working: Long press the reset button on the Arduino. This clears the program and temporary glitches on the board.
- If the LED sometimes lights ON but sometimes not (Instability) : can be caused by 'Ground loops' or poor grounding.
- Change the pin on breadboard from which common ground line is connected to Arduino GND pin. The breadboard pin may be faulty.
- Try creating a commmon ground line on the breadboard instead of multiple grounds to the Arduino, thus reducing the possibility of Ground loops.
- Stand such that phone is facing the antenna (Coil like copper strip on top of the HC module) for more clear communication.
- Look for loose jumper connections, fused bulbs, short resistors, or non working breadbaord pins.
- Blow out dust, if any in the circuit.
- If nothing is working, try reassembling the circuit from scratch.
- Change or reinstall the app.
- Check if the cable is connected correctly and tightly.
- Change the HC-05 module if its not working.
- Keep Arduino on some paper or cloth to avoid dragging its bottom and scratching on the table.
 
