#include <MicroView.h>

MicroViewWidget *widget;

uint8_t counter = 0;      //this variable will be changed by encoder input

void setup() {
  //  Serial.begin(57600);
  setup_uview();
  setup_encoder();
}

void loop() {
  loop_encoder();
  widget->setValue(counter);
  uView.display();
}
