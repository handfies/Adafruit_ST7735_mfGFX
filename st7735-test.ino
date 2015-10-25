
#define cs   A2
#define dc   D0
#define rst  NO_RST_PIN

#include "Adafruit_mfGFX.h"    // Core graphics library
#include "Adafruit_ST7735.h" // Hardware-specific library


Adafruit_ST7735 tft = Adafruit_ST7735(cs, dc, rst); // hardware spi

void setup() {
    Serial.println("Begin Setup");
    // handfies: initR for 1.44"
    tft.initR(INITR_144GREENTAB);
    tft.fillScreen(ST7735_BLACK);
     delay(1000);
     tft.setCursor(0, 0);
     tft.setTextColor(ST7735_WHITE);
     tft.setTextWrap(true);
     tft.print("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur adipiscing ante sed nibh tincidunt feugiat. Maecenas enim massa, fringilla");

     tft.drawLine(0, 0, tft.width()-1, tft.height()-1, ST7735_YELLOW);
     tft.drawLine(tft.width()-1, 0, 0, tft.height()-1, ST7735_YELLOW);

     tft.drawPixel(0, tft.height()/2, ST7735_GREEN);
}

void loop() {
 Serial.println("Hello");

 delay(2000);
}
