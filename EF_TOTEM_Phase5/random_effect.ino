// Fill the dots one after the other with a color
void Random_effect(uint32_t c, uint8_t wait) {
  uint16_t i, j, p, y;

  for(uint16_t i=0; i<strip.numPixels(); i++) {
    if(i<240){
      strip.setPixelColor(i, random(255));
      strip.show();
      delay(0);
    }
      else {
        for (y=0; y<9; y++){
          for (p=0; p<33; p++){
            strip.setPixelColor(row_array[y][p], random(255));
            strip.show();
            delay(1);
      }}}
  }
}