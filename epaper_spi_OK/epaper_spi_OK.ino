#include <ESP8266WiFi.h>
#include <GxEPD.h>
#include "weeping.h"
#include "weepingj.h"
#include "hlogo.h"
#include "hlogoj.h"

#include <imglib/gridicons_bell.h>
#include <imglib/gridicons_offline.h>
#include <imglib/gridicons_history.h>

#include <GxGDEW0213Z16/GxGDEW0213Z16.h>

// FreeFonts from Adafruit_GFX
#include <Fonts/FreeMono9pt7b.h>
#include <Fonts/FreeMonoBold9pt7b.h>
#include <Fonts/FreeMonoBold12pt7b.h>
#include <Fonts/FreeMonoBold18pt7b.h>
#include <Fonts/FreeMonoBold24pt7b.h>

#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>

// type, CS, DC, RST
GxIO_Class io(SPI, SS, 4, 5);
// obj, RST, BUSY
GxEPD_Class display(io, 5, 16);

void setup()
{
  WiFi.disconnect();
  WiFi.mode(WIFI_OFF);

  Serial.begin(115200);
  Serial.println();
  Serial.println("setup");

  display.init(115200); // enable diagnostic output on Serial

  Serial.println("setup done");
 
  display.fillScreen(GxEPD_WHITE);
  display.setFont(&FreeMonoBold9pt7b);
  display.drawPicture(weeping_bits, weepingj_bits, sizeof(weeping_bits), sizeof(weepingj_bits), GxEPD::bm_invert_red|GxEPD::bm_invert|GxEPD::bm_xbm);
  //display.drawPicture(hlogo_bits, hlogoj_bits, sizeof(hlogo_bits), sizeof(hlogoj_bits), GxEPD::bm_invert_red|GxEPD::bm_invert|GxEPD::bm_xbm);
  
  //display.drawBitmap(weeping_bits, 0, 0, 122, 250, GxEPD_RED, GxEPD::bm_xbm);
  //display.drawPicture(weeping_bits, weepingj_bits, sizeof(weeping_bits), sizeof(weepingj_bits), GxEPD::bm_invert_red|GxEPD::bm_invert);

  /*
  display.drawBitmap(gridicons_bell,    10, 6, 24, 24, GxEPD_RED, GxEPD::bm_invert);
  display.setCursor(3+10+24, 6+24-8);
  display.setTextColor(GxEPD_RED);
  display.println("Alerte");
  display.drawBitmap(gridicons_offline, 10, 6+((24+10)*1), 24, 24, GxEPD_BLACK, GxEPD::bm_invert);
  display.setCursor(3+10+24, 6+(10*1+24*2)-8);
  display.setTextColor(GxEPD_BLACK);
  display.println("Hackable 27");
  display.drawBitmap(gridicons_history, 10, 6+((24+10)*2), 24, 24, GxEPD_RED, GxEPD::bm_invert);
  display.setCursor(3+10+24, 6+(10*2+24*3)-8);
  display.setTextColor(GxEPD_RED);
  display.println("En attente...");
  */

/*
  display.fillCircle(GxGDEW0213Z16_HEIGHT/2-1, 
    GxGDEW0213Z16_WIDTH/2-1, 20, GxEPD_BLACK);
  display.writeLine(0, 0, GxGDEW0213Z16_HEIGHT-1,
    GxGDEW0213Z16_WIDTH-1, GxEPD_RED);
  display.writeLine(GxGDEW0213Z16_HEIGHT-1, 0, 0,
    GxGDEW0213Z16_WIDTH-1, GxEPD_RED);
*/
  //display.update();

  Serial.println("Display done.");
}

void loop()
{
  delay(1000);
}
