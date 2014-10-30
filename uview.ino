void setup_uview() {
  uView.begin();
  uView.clear(PAGE);
  uView.setCursor(0, 0);
  uView.print("ENC");
  widget = new MicroViewGauge(40, 24, 0, 255, WIDGETSTYLE1);
  // widget = new MicroViewGauge(32, 24, 0, 240, WIDGETSTYLE1 + WIDGETNOVALUE);
  widget->setValue(0);
  uView.display();
}
