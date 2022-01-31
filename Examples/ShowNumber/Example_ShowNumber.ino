//Library 
#include <FourDis_SevenSeg.h>

//Global Variables 
byte DISPLAY_PIN[] = {2, 3, 4, 5};
byte SEGMENTO_INT[] = {6, 7, 8, 9, 10, 11, 12, 13};
FourDis_SevenSeg fdss(DISPLAY_PIN, SEGMENTO_INT);

void setup() {
  
}
void loop() {
  fdss.showNumber(2022);
}
