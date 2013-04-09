/* sat bitmap file for GLCD library */
/* Bitmap created from sat.bmp      */
/* Date: 17 Mar 2013      */
/* Image Pixels = 256    */
/* Image Bytes  = 32     */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef sat_H
#define sat_H

static uint8_t sat[] PROGMEM = {
  16, // width
  16, // height

  /* page 0 (lines 0-7) */
  0x0,0x0,0x0,0x80,0xec,0xc,0x10,0x64,0xc4,0xc2,0xe2,0xf2,0x7e,0x1e,0x0,0x0,
  
  /* page 1 (lines 8-15) */
  0x0,0x0,0x0,0x87,0xc4,0xc6,0xc6,0xdf,0xff,0xff,0x73,0x1,0x0,0x0,0x0,0x0,
  
};
#endif