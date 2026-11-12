#include <Arduino.h>
#include <LibRobus.h>
#include "features/my_speed_feature.h"

void setup() {
  Serial.begin(9600);
  BoardInit();
  
  my_speed_feature::begin();
}

void loop() {
  my_speed_feature::update();
}

