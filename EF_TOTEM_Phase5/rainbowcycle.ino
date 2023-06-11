// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  uint16_t i, j, p, y;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip.numPixels()-256; i++) {
      if (i<240){
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
      strip.show();
      delay(wait);
      }
      else {
        for (y=0; y<8; y++){
          for (p=0; p<32; p++){
            strip.setPixelColor(row_array[y][p], Wheel(((i * 256 / strip.numPixels()) + j) & 255));
            i++;
            strip.show();
            delay(wait);
      }}}
    }
  }
    
}