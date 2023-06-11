
void RunningLights(byte red, byte green, byte blue, int WaveDelay) {
  int Position=0;
 
  for(int j=0; j<strip.numPixels()*2; j++)
  {
      Position++; // = 0; //Position + Rate;
      for(int i=0; i<strip.numPixels(); i++) {
        if (i<240){
        // sine wave, 3 offset waves make a rainbow!
        //float level = sin(i+Position) * 127 + 128;
        //setPixel(i,level,0,0);
        //float level = sin(i+Position) * 127 + 128;
        strip.setPixelColor (i,((sin(i+Position) * 127 + 128)/255)*red,
                            ((sin(i+Position) * 127 + 128)/255)*green,
                            ((sin(i+Position) * 127 + 128)/255)*blue);
        strip.show();
        delay(WaveDelay);
        }
        else{
        for (int y=0; y<8; y++){
          for (int p=0; p<32; p++){
            strip.setPixelColor(row_array[y][p],((sin(i+Position) * 127 + 128)/255)*red,
                            ((sin(i+Position) * 127 + 128)/255)*green,
                            ((sin(i+Position) * 127 + 128)/255)*blue);
        }
      }
      strip.show();
      delay(WaveDelay);
  }}}
}