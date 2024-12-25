#include <SoftwareSerial.h>

SoftwareSerial BLU(0,1);

String voice;

int LED = 5; //Connect To Pin #5

void setup()
{

Serial.begin(9600);

BLU.begin(9600);

pinMode(LED, OUTPUT);

}

void loop()
{

while (Serial.available()) //Check if there is an available byte to read

{ delay(10); //Delay added to make thing stable

char c = Serial.read(); //Conduct a serial read

if (c == '#')

{

break; //Exit the loop when the # is detected after the word

}

voice += c;

}

if (voice.length() > 0)

{

if(voice == "switch on the lights")

{
digitalWrite(LED,HIGH);
}


else if(voice == "switch off the lights")

{
digitalWrite(LED,LOW);
}

voice=""; //Reset variable

}

}
