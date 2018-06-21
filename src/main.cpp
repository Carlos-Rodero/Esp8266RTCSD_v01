/*
 * Esp8266RTCDS_v01
 * Blink
 * Turns on a LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

void setup()
{
    // put your setup code here, to run once:
    // initialize LED digital pin as an output.
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    // put your main code here, to run repeatedly:
    // turn the LED on (HIGH is the voltage level)
    digitalWrite(LED_BUILTIN, HIGH);
    // wait for a second
    delay(1000);
    // turn the LED off by making the voltage LOW
    digitalWrite(LED_BUILTIN, LOW);
    // wait for a second
    delay(1000);
}