//Library 
#include <FourDis_SevenSeg.h>

//Global Variables 
byte DISPLAY_PIN[] = {2, 3, 4, 5};
byte SEGMENTO_INT[] = {6, 7, 8, 9, 10, 11, 12, 13};
unsigned long previousMillis = 0;
unsigned long interval = 1000;
int counter = 100;
FourDis_SevenSeg fdss(DISPLAY_PIN, SEGMENTO_INT);

void setup() {

}

void loop() {

  unsigned long currentMillis = millis();
  fdss.showNumber(counter);
  if((currentMillis - previousMillis) >= interval)
  {
    previousMillis = currentMillis;
    counter = counter == 0 ? 100 : --counter;
  }

}
