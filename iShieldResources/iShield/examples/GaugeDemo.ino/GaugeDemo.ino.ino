

/*

Copyright (c) 2012-2014 RedBearLab

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

/*
 *    HelloWorld
 *
 *    HelloWorld sketch, work with the Chat iOS/Android App.
 *    It will send "Hello World" string to the App every 1 sec.
 *
 */

//"services.h/spi.h/boards.h" is needed in every new project
#include <SPI.h>
#include <boards.h>
#include <RBL_nRF8001.h>
#include <iShield.h>


iShield myiShield;
int potPin = 0;
int val;

void setup()
{
    // Init. and start BLE library.
  ble_begin();
    Serial.begin(9600); 
    ble_set_name("BLEShield");
}

void loop()
{
  //val = (analogRead(potPin)/4);
  //Serial.println(val);
  for(int i = 0;i<256;i++){
    myiShield.setGaugeValue(i);
    delay(100);
  }
  //myiShield.setGaugeValue(val);

}
