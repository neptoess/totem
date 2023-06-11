
void NewKITT(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay){
  RightToLeft(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  LeftToRight(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  OutsideToCenter(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  CenterToOutside(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  LeftToRight(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  RightToLeft(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  OutsideToCenter(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  CenterToOutside(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
}

void CenterToOutside(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for(int i =((strip.numPixels()-EyeSize)/2); i>=0; i--) {
    if(i<240){
      strip.show();
    
      strip.setPixelColor(i, red/10, green/10, blue/10);
      for(int j = 1; j <= EyeSize; j++) {
        strip.setPixelColor(i+j, red, green, blue);
      }
      strip.setPixelColor(i+EyeSize+1, red/10, green/10, blue/10);
    
      strip.setPixelColor(strip.numPixels()-i, red/10, green/10, blue/10);
      for(int j = 1; j <= EyeSize; j++) {
        strip.setPixelColor(strip.numPixels()-i-j, red, green, blue);
      }
      strip.setPixelColor(strip.numPixels()-i-EyeSize-1, red/10, green/10, blue/10);
    
      strip.show();
      delay(SpeedDelay);
      }
    else{
      for (int y=0; y<8; y++){
        for (int p=0; p<32; p++){
          strip.show();
          strip.setPixelColor(row_array[y][p], red/10, green/10, blue/10);
          for(int j = 1; j <= EyeSize; j++) {
            strip.setPixelColor(row_array[y][p]+j, red, green, blue);
          }
          strip.setPixelColor(row_array[y][p]+EyeSize+1, red/10, green/10, blue/10);
        
          strip.setPixelColor(strip.numPixels()-row_array[y][p], red/10, green/10, blue/10);
          for(int j = 1; j <= EyeSize; j++) {
            strip.setPixelColor(strip.numPixels()-row_array[y][p]-j, red, green, blue);
          }
          strip.setPixelColor(strip.numPixels()-row_array[y][p]-EyeSize-1, red/10, green/10, blue/10);
          strip.show();
          delay(SpeedDelay);
        }}
    }}
  delay(ReturnDelay);
}

void OutsideToCenter(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for(int i = 0; i<=((strip.numPixels()-EyeSize)/2); i++) {
    if (i<240){
      strip.show();
    
      strip.setPixelColor(i, red/10, green/10, blue/10);
      for(int j = 1; j <= EyeSize; j++) {
        strip.setPixelColor(i+j, red, green, blue);
      }
      strip.setPixelColor(i+EyeSize+1, red/10, green/10, blue/10);
    
      strip.setPixelColor(strip.numPixels()-i, red/10, green/10, blue/10);
      for(int j = 1; j <= EyeSize; j++) {
        strip.setPixelColor(strip.numPixels()-i-j, red, green, blue);
      }
      strip.setPixelColor(strip.numPixels()-i-EyeSize-1, red/10, green/10, blue/10);
    
      strip.show();
      delay(SpeedDelay);
    }
    else{
      for (int y=0; y<8; y++){
        for (int p=0; p<32; p++){
              strip.show();
              strip.setPixelColor(row_array[y][p], red/10, green/10, blue/10);
              for(int j = 1; j <= EyeSize; j++) {
                strip.setPixelColor(row_array[y][p]+j, red, green, blue);
              }
              strip.setPixelColor(row_array[y][p]+EyeSize+1, red/10, green/10, blue/10);
            
              strip.setPixelColor(strip.numPixels()-row_array[y][p], red/10, green/10, blue/10);
              for(int j = 1; j <= EyeSize; j++) {
                strip.setPixelColor(strip.numPixels()-row_array[y][p]-j, red, green, blue);
              }
              strip.setPixelColor(strip.numPixels()-row_array[y][p]-EyeSize-1, red/10, green/10, blue/10);
            
              strip.show();
              delay(SpeedDelay);
            }
  }}
  //delay(ReturnDelay);
}}

void LeftToRight(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for(int i = 0; i < strip.numPixels()-EyeSize-2; i++) {
    if(i<240){
    strip.show();
    strip.setPixelColor(i, red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      strip.setPixelColor(i+j, red, green, blue);
    }
    strip.setPixelColor(i+EyeSize+1, red/10, green/10, blue/10);
    strip.show();
    delay(SpeedDelay);
  }
  else{
    for (int y=0; y<8; y++){
          for (int p=0; p<32; p++){
            strip.show();
            strip.setPixelColor(row_array[y][p], red/10, green/10, blue/10);
            for(int j = 1; j <= EyeSize; j++) {
              strip.setPixelColor(row_array[y][p]+j, red, green, blue);
            }
            strip.setPixelColor(row_array[y][p]+EyeSize+1, red/10, green/10, blue/10);
            strip.show();
            delay(SpeedDelay);
  }}}

  delay(ReturnDelay);
}}

void RightToLeft(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for(int i = strip.numPixels()-EyeSize-2; i > 0; i--) {
    if (i<240){
    strip.show();
    strip.setPixelColor(i, red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      strip.setPixelColor(i+j, red, green, blue);
    }
    strip.setPixelColor(i+EyeSize+1, red/10, green/10, blue/10);
    strip.show();
    delay(SpeedDelay);
  }
    else{
        for (int y=0; y<8; y++){
          for (int p=0; p<32; p++){
             strip.show();
              strip.setPixelColor(row_array[y][p], red/10, green/10, blue/10);
          for(int j = 1; j <= EyeSize; j++) {
          strip.setPixelColor(row_array[y][p]+j, red, green, blue);
          }
          strip.setPixelColor(row_array[y][p]+EyeSize+1, red/10, green/10, blue/10);
          strip.show();
          delay(SpeedDelay);
  }}}
  delay(ReturnDelay);
  }
}