#include <TFT_eSPI.h>
#include "files/yt.h";
#include "files/video.h";
TFT_eSPI tft = TFT_eSPI();


void setup() {
   tft.init();
   tft.setRotation(1);
   
   tft.setSwapBytes(true);
   tft.pushImage(0,0,320,170,yt);
   tft.fillRect(7,44,188,104,TFT_BLACK);
}

int i=0;

void loop() {

  tft.pushImage(7,56,188,82,logo2[i]);
  i++;
  if(i==95)
  i=0;
  delay(56);
}
