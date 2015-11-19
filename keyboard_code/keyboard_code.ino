
#include <usb_keyboard.h>

void setup() {

  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);

}

void loop() {

  Keyboard.set_modifier(0);
  
  if (digitalRead(0) == 0) {
   Keyboard.set_key1(KEY_0);
  }
  else {
   Keyboard.set_key1(0);
  }
  if (digitalRead(1) == 0) {
   Keyboard.set_key2(KEY_9);
  }
  else {
   Keyboard.set_key2(0);
  }
  if (digitalRead(2) == 0) {
   Keyboard.set_key3(KEY_7);
  }
  else {
   Keyboard.set_key3(0);
  }
  if (digitalRead(3) == 0) {
   Keyboard.set_key4(KEY_8);
  }
  else {
   Keyboard.set_key4(0);
  }  

  delay(20);

  Keyboard.send_now();
}


