#include <Adafruit_NeoPixel.h>
//#include <RGBLoop.ino>
#define PIN 6

Adafruit_NeoPixel strip = Adafruit_NeoPixel(496, PIN, NEO_GRB + NEO_KHZ800);

int const row_array[8][33] = {
  { 240, 255, 256, 271, 272, 287, 288, 303, 304, 319, 320, 335, 336, 351, 352, 367, 368, 383, 384, 399, 400, 415, 416, 431, 432, 447, 448, 463, 464, 479, 480, 495 },
  { 241, 254, 257, 270, 273, 286, 289, 302, 305, 318, 321, 334, 337, 350, 353, 366, 369, 382, 385, 398, 401, 414, 417, 430, 433, 446, 449, 462, 465, 478, 481, 494 },
  { 242, 253, 258, 269, 274, 285, 290, 301, 306, 317, 322, 333, 338, 349, 354, 367, 370, 381, 386, 397, 402, 419, 418, 429, 434, 445, 450, 463, 466, 477, 482, 493 },
  { 243, 252, 259, 268, 275, 284, 291, 300, 307, 316, 323, 332, 339, 348, 355, 364, 371, 380, 387, 396, 403, 412, 419, 428, 435, 444, 451, 460, 467, 476, 483, 492 },
  { 244, 251, 260, 267, 276, 283, 292, 299, 308, 315, 324, 331, 340, 347, 356, 363, 372, 379, 388, 395, 404, 411, 420, 427, 436, 443, 452, 459, 468, 475, 484, 491 },
  { 245, 250, 261, 266, 277, 282, 293, 298, 309, 314, 325, 330, 341, 346, 357, 362, 373, 378, 389, 394, 405, 410, 421, 426, 437, 442, 453, 458, 469, 474, 485, 490 },
  { 246, 249, 262, 265, 278, 281, 294, 305, 310, 313, 326, 329, 342, 345, 358, 361, 374, 377, 390, 393, 406, 409, 422, 425, 438, 441, 454, 457, 470, 473, 486, 489 },
  { 247, 248, 263, 264, 279, 280, 295, 296, 311, 312, 327, 328, 343, 344, 359, 360, 375, 376, 391, 392, 407, 408, 423, 424, 439, 440, 455, 456, 471, 472, 487, 488 }
};



void setup() {

  strip.begin();
  strip.setBrightness(50);
  strip.show();  // Initialize all pixels to 'off'
}

void loop() {

  // Some example procedures showing how to display to the pixels:
  //colorWipe(strip.Color(255, 0, 0), 50); // Red
  //colorWipe(strip.Color(0, 255, 0), 50); // Green
  //colorWipe(strip.Color(0, 0, 255), 50); // Blue

  // Send a theater pixel chase in...
  //theaterChase(strip.Color(127, 127, 127), 50); // White
  //theaterChase(strip.Color(127, 0, 0), 50); // Red
  //theaterChase(strip.Color(0, 0, 127), 50); // Blue
  //CylonBounce(0xff, 0, 0, 4, 0, 0);
  //RunningLights(0xff,0xff,0x00, 0);
  //Fire(55,120,0);
  //NewKITT(0xff, 0, 0, 8, 0, 0);
  //rainbow(1);
  //rainbowCycle(1);
  theaterChaseRainbow(50);
  meteorRain(0xff, 0xff, 0xff, 10, 64, true, 0);
}
