#ifndef _monimage_
#define _monimage_

#include <pgmspace.h>

#define weeping_width 104
#define weeping_height 212
const unsigned char weeping_bits[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x0C, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9C, 
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xE6, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x1A, 0x8C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x03, 0xC2, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x31, 0x82, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x70, 0x1B, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xE8, 0x15, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x6C, 0xDA, 0x03, 0x00, 0xFC, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x01, 0x40, 0x1A, 0x20, 0x03, 0x00, 
  0x03, 0x04, 0x00, 0x00, 0x00, 0x80, 0x01, 0x06, 0x40, 0x0F, 0xC0, 0x03, 
  0x80, 0x00, 0x18, 0x00, 0x00, 0x00, 0x80, 0x00, 0x04, 0xC0, 0x03, 0x80, 
  0x03, 0xC0, 0xC0, 0x30, 0x00, 0x00, 0x00, 0x40, 0x08, 0x08, 0xC0, 0x07, 
  0x00, 0x03, 0x40, 0xF0, 0x27, 0x00, 0x00, 0x00, 0x30, 0x7F, 0x18, 0x80, 
  0x95, 0x54, 0x03, 0x60, 0xF8, 0x4F, 0x00, 0x00, 0x00, 0xB0, 0x7F, 0x18, 
  0x80, 0x11, 0x06, 0x02, 0x60, 0xF8, 0x4F, 0x00, 0x00, 0x00, 0xD8, 0xFF, 
  0x1C, 0xC0, 0x53, 0xA6, 0x0A, 0x60, 0xF8, 0x9F, 0x00, 0x00, 0x00, 0xC8, 
  0xFF, 0x1C, 0xC0, 0x52, 0x21, 0x00, 0x60, 0xF8, 0xBF, 0x01, 0x00, 0x00, 
  0xE8, 0xFF, 0x1C, 0xC0, 0x42, 0x09, 0x09, 0x60, 0xF8, 0xBF, 0x01, 0x00, 
  0x00, 0xE4, 0xFF, 0x1C, 0xC0, 0x42, 0x01, 0x09, 0x60, 0xF8, 0x3F, 0x01, 
  0x00, 0x00, 0xF4, 0xFF, 0x1C, 0x40, 0x2A, 0x41, 0x08, 0x60, 0xF8, 0x7C, 
  0x03, 0x00, 0x00, 0xF6, 0xFD, 0x1C, 0x40, 0x2A, 0x51, 0x08, 0x60, 0xF8, 
  0x78, 0x02, 0x00, 0x00, 0xFE, 0xF8, 0x18, 0x40, 0x2A, 0x13, 0x08, 0x60, 
  0x78, 0x78, 0x02, 0x00, 0x00, 0x7A, 0xF0, 0x38, 0x40, 0x00, 0x03, 0x08, 
  0x30, 0x7C, 0xF0, 0x02, 0x00, 0x00, 0x7A, 0xF0, 0x38, 0x00, 0x00, 0x03, 
  0x08, 0x30, 0x3C, 0xF0, 0x02, 0x00, 0x00, 0x7B, 0xF0, 0x38, 0x00, 0x00, 
  0x03, 0x08, 0x30, 0x3C, 0xE0, 0x05, 0x00, 0x00, 0x3D, 0xE0, 0x39, 0x80, 
  0x00, 0x07, 0x0C, 0x10, 0x3C, 0xC0, 0x05, 0x00, 0x00, 0x1D, 0xE0, 0x31, 
  0x80, 0x00, 0x07, 0x04, 0x10, 0x1C, 0x84, 0x05, 0x00, 0x00, 0x0D, 0xE0, 
  0x71, 0x00, 0x01, 0x07, 0x04, 0x18, 0x1E, 0x0C, 0x05, 0x00, 0x00, 0x05, 
  0xC1, 0x63, 0x00, 0x00, 0x07, 0x00, 0x0C, 0xFE, 0x1E, 0x0D, 0x00, 0x00, 
  0x85, 0xC1, 0xE3, 0x00, 0x00, 0x0F, 0x00, 0x0C, 0xCE, 0x7B, 0x0D, 0x00, 
  0x00, 0xC5, 0x9B, 0xC3, 0x00, 0x02, 0x0F, 0x04, 0x0E, 0xC7, 0xE8, 0x0D, 
  0x00, 0x80, 0xF5, 0x1D, 0xE7, 0xFF, 0x81, 0x1F, 0x78, 0xB0, 0x63, 0x58, 
  0x08, 0x00, 0x80, 0xBC, 0x11, 0x37, 0x98, 0x81, 0x1F, 0x78, 0xE0, 0x3B, 
  0x78, 0x08, 0x00, 0x80, 0xC0, 0x31, 0x1E, 0x80, 0x81, 0x1F, 0x78, 0xC0, 
  0x0F, 0x78, 0x08, 0x00, 0x80, 0xD0, 0xE0, 0x0F, 0x80, 0x80, 0x1F, 0x78, 
  0xC0, 0x0F, 0xC8, 0x08, 0x00, 0x80, 0xF0, 0x90, 0x0F, 0x88, 0x80, 0x1F, 
  0x78, 0xC0, 0x0F, 0x88, 0x0D, 0x00, 0x80, 0xB8, 0x90, 0x0F, 0xC8, 0x80, 
  0x1F, 0xF8, 0x83, 0x0F, 0x90, 0x0B, 0x00, 0x80, 0x89, 0x80, 0x07, 0x78, 
  0xC0, 0x1F, 0xF0, 0x81, 0x27, 0x10, 0x18, 0x00, 0x80, 0x8E, 0x80, 0x07, 
  0x7C, 0xC0, 0x1F, 0xF0, 0x81, 0x67, 0x34, 0x18, 0x00, 0xC0, 0x42, 0x21, 
  0x07, 0x7C, 0xC0, 0x3F, 0xF0, 0x80, 0xE7, 0x23, 0x18, 0x00, 0xC0, 0x52, 
  0x32, 0x07, 0x38, 0xE0, 0x3F, 0xE0, 0x80, 0x83, 0x43, 0x1C, 0x00, 0xC0, 
  0x32, 0x3E, 0x07, 0x38, 0xE0, 0x3F, 0x40, 0x80, 0x03, 0x02, 0x1C, 0x00, 
  0xC0, 0x31, 0x4E, 0x06, 0x18, 0xE0, 0x3F, 0x40, 0x80, 0x13, 0xC6, 0x1C, 
  0x00, 0xC0, 0x11, 0x4A, 0x06, 0x08, 0x00, 0x3F, 0x80, 0xC0, 0x0B, 0xC7, 
  0x17, 0x00, 0xC0, 0x19, 0x0A, 0x06, 0x00, 0x00, 0x00, 0x80, 0xC1, 0x0F, 
  0x45, 0x13, 0x00, 0xC0, 0x1D, 0x8A, 0x06, 0x04, 0xF0, 0x3F, 0x00, 0xC1, 
  0x13, 0x0D, 0x10, 0x00, 0xC0, 0x1E, 0x0B, 0x0F, 0x04, 0xF0, 0x37, 0x00, 
  0xC2, 0x13, 0x8D, 0x10, 0x00, 0xC0, 0x10, 0x89, 0x0E, 0x00, 0xF0, 0x37, 
  0x00, 0xC2, 0x13, 0x99, 0x11, 0x00, 0xC0, 0x80, 0x89, 0x0E, 0x00, 0xF0, 
  0x25, 0x00, 0xC4, 0x13, 0x71, 0x11, 0x00, 0xC0, 0x80, 0x89, 0x1F, 0x00, 
  0xF0, 0x35, 0x00, 0xE4, 0x33, 0x31, 0x11, 0x00, 0xC0, 0xF0, 0x88, 0x1F, 
  0x00, 0xF8, 0x39, 0x00, 0xE0, 0xD3, 0x21, 0x11, 0x00, 0xC0, 0x40, 0xAC, 
  0x1F, 0x00, 0xD8, 0x29, 0x00, 0xE0, 0x13, 0x1D, 0x19, 0x00, 0xC0, 0x40, 
  0x9C, 0x3F, 0x00, 0xCC, 0x29, 0x00, 0xE0, 0x13, 0x99, 0x19, 0x00, 0xC0, 
  0x48, 0x8D, 0x3F, 0x00, 0xCC, 0x29, 0x01, 0xF0, 0x13, 0x11, 0x19, 0x00, 
  0xC0, 0xC8, 0x85, 0x7E, 0x00, 0xDE, 0x23, 0x00, 0xF0, 0x37, 0x09, 0x19, 
  0x00, 0xC0, 0x80, 0x84, 0xFE, 0x00, 0xDE, 0x23, 0x02, 0xF0, 0xBB, 0x07, 
  0x19, 0x00, 0xC0, 0x00, 0xAD, 0xFF, 0x00, 0xDF, 0x37, 0x06, 0xF8, 0xF3, 
  0x07, 0x19, 0x00, 0xC0, 0x00, 0xFE, 0xFE, 0x81, 0xDF, 0x75, 0x06, 0xFC, 
  0x2B, 0x87, 0x19, 0x00, 0x80, 0x04, 0xFE, 0xFE, 0xC2, 0xDB, 0x55, 0x06, 
  0xFE, 0x29, 0x86, 0x19, 0x00, 0x80, 0x14, 0x4E, 0xFD, 0xFC, 0xD3, 0x55, 
  0x96, 0xF3, 0x25, 0x06, 0x19, 0x00, 0x80, 0x0D, 0x4A, 0x7E, 0xB0, 0xD7, 
  0x55, 0xB6, 0xF3, 0x33, 0x0E, 0x1B, 0x00, 0x80, 0x0D, 0x4A, 0x7E, 0x00, 
  0xD7, 0x55, 0xB6, 0xF3, 0x33, 0x7C, 0x1B, 0x00, 0x80, 0x9D, 0x43, 0x7C, 
  0x00, 0xA7, 0x54, 0xA6, 0xF3, 0x13, 0x18, 0x1B, 0x00, 0x80, 0xF5, 0xC3, 
  0x7C, 0x02, 0x8E, 0x54, 0x86, 0xF3, 0x93, 0x08, 0x1B, 0x00, 0x80, 0xC5, 
  0xC1, 0x7C, 0x02, 0x8E, 0x54, 0x84, 0xFF, 0x93, 0x08, 0x1B, 0x00, 0x80, 
  0x8D, 0x91, 0x7C, 0x06, 0x8E, 0x54, 0x84, 0xFF, 0x93, 0x08, 0x0B, 0x00, 
  0x80, 0x8D, 0x91, 0x3C, 0x06, 0x8E, 0x54, 0x84, 0xFD, 0x93, 0x00, 0x0F, 
  0x00, 0x80, 0x8D, 0x91, 0x3C, 0x06, 0x84, 0x54, 0xC4, 0xFD, 0x92, 0x00, 
  0x0F, 0x00, 0x00, 0x8D, 0x90, 0x3C, 0x04, 0x80, 0x54, 0xC4, 0xFD, 0x92, 
  0x10, 0x0F, 0x00, 0x00, 0x8D, 0x90, 0x38, 0x0C, 0x8C, 0x54, 0xC4, 0xED, 
  0x90, 0x10, 0x0F, 0x00, 0x00, 0x8D, 0x90, 0x18, 0x8C, 0x8C, 0x40, 0xC4, 
  0x2D, 0x98, 0x98, 0x0F, 0x00, 0x00, 0x8D, 0x91, 0x00, 0x8C, 0x04, 0x40, 
  0xC4, 0x1D, 0x98, 0x58, 0x0F, 0x00, 0x00, 0x9F, 0x91, 0x00, 0x8C, 0x04, 
  0x08, 0xC4, 0x5C, 0x88, 0x38, 0x0F, 0x00, 0x00, 0xBF, 0x11, 0x00, 0x8C, 
  0x00, 0x29, 0xE4, 0x3C, 0xC8, 0x38, 0x0F, 0x00, 0x00, 0xCF, 0x11, 0x01, 
  0x89, 0x22, 0x39, 0x64, 0x3C, 0xCA, 0x38, 0x0E, 0x00, 0x00, 0xCF, 0x11, 
  0x01, 0x39, 0x12, 0x92, 0x62, 0x3E, 0xCA, 0x28, 0x0E, 0x00, 0x00, 0x4F, 
  0x10, 0x01, 0x71, 0x1E, 0xD2, 0x30, 0x37, 0xCA, 0x48, 0x0E, 0x00, 0x00, 
  0x4F, 0x30, 0x01, 0x42, 0x4E, 0xE2, 0x9E, 0x33, 0xCA, 0x80, 0x04, 0x00, 
  0x00, 0x6E, 0x20, 0xC5, 0x06, 0x7C, 0x63, 0xEF, 0x71, 0xCC, 0x00, 0x04, 
  0x00, 0x00, 0x3E, 0x20, 0xC5, 0x06, 0x3E, 0x6B, 0xF7, 0x3F, 0x40, 0x04, 
  0x06, 0x00, 0x00, 0x06, 0x20, 0x43, 0x4F, 0x9E, 0xBF, 0xFF, 0x1F, 0x40, 
  0x02, 0x06, 0x00, 0x00, 0x06, 0x22, 0x83, 0xF5, 0xFF, 0xFF, 0xFF, 0x1F, 
  0x40, 0x01, 0x06, 0x00, 0x00, 0x06, 0x2E, 0x02, 0xF4, 0xFF, 0x27, 0xFF, 
  0x1F, 0x44, 0x00, 0x06, 0x00, 0x00, 0x06, 0x2A, 0x82, 0xB2, 0x9C, 0x64, 
  0xEF, 0x1F, 0x44, 0x04, 0x02, 0x00, 0x00, 0x06, 0x62, 0x82, 0xB2, 0x88, 
  0x64, 0xED, 0x3E, 0x44, 0x14, 0x02, 0x00, 0x00, 0x06, 0x62, 0x02, 0xB2, 
  0x88, 0x44, 0xED, 0x3E, 0x44, 0x1C, 0x02, 0x00, 0x00, 0x04, 0x62, 0x42, 
  0xB2, 0x89, 0x4C, 0xCD, 0x2E, 0x04, 0x04, 0x02, 0x00, 0x00, 0x0C, 0x43, 
  0x42, 0xA2, 0x89, 0x4C, 0xCD, 0x6F, 0x24, 0x04, 0x02, 0x00, 0x00, 0x0C, 
  0x40, 0x42, 0xA0, 0x99, 0x4C, 0xCD, 0x6D, 0x24, 0x04, 0x02, 0x00, 0x00, 
  0x0C, 0x44, 0x02, 0xA0, 0x99, 0x48, 0xCD, 0x6D, 0x24, 0x02, 0x03, 0x00, 
  0x00, 0x08, 0x44, 0x01, 0xA1, 0x91, 0x48, 0xCD, 0x4D, 0x24, 0x02, 0x03, 
  0x00, 0x00, 0x08, 0x04, 0x21, 0xA1, 0x91, 0xC8, 0xCD, 0xCD, 0x38, 0x02, 
  0x01, 0x00, 0x00, 0x08, 0x84, 0x21, 0x21, 0x91, 0x88, 0xCD, 0xCD, 0x00, 
  0x02, 0x01, 0x00, 0x00, 0x08, 0x0C, 0x20, 0x21, 0x11, 0x89, 0xCD, 0x8D, 
  0x00, 0x02, 0x01, 0x00, 0x00, 0x08, 0x08, 0x00, 0x21, 0x11, 0x89, 0xCD, 
  0x8D, 0x00, 0x00, 0x01, 0x00, 0x00, 0x18, 0x88, 0x00, 0x20, 0x11, 0x89, 
  0xCD, 0x99, 0x01, 0x88, 0x01, 0x00, 0x00, 0x10, 0x88, 0x10, 0x20, 0x11, 
  0x89, 0x8D, 0x99, 0x81, 0x86, 0x01, 0x00, 0x00, 0x10, 0x08, 0x90, 0x20, 
  0x13, 0x89, 0x8D, 0x9B, 0x71, 0x81, 0x01, 0x00, 0x00, 0x10, 0x2C, 0x90, 
  0x20, 0x03, 0x89, 0x85, 0x9B, 0x11, 0x81, 0x00, 0x00, 0x00, 0x30, 0xC8, 
  0x98, 0x20, 0x23, 0x89, 0x85, 0x1B, 0x13, 0x81, 0x00, 0x00, 0x00, 0x30, 
  0x10, 0x88, 0x20, 0x23, 0x09, 0x85, 0x13, 0x13, 0x81, 0x00, 0x00, 0x00, 
  0x30, 0x10, 0xC8, 0x20, 0x23, 0x09, 0x85, 0x13, 0x13, 0x81, 0x00, 0x00, 
  0x00, 0x20, 0x10, 0xC9, 0x20, 0x23, 0x09, 0x85, 0x13, 0x13, 0x00, 0x00, 
  0x00, 0x00, 0x20, 0x10, 0x49, 0x20, 0x23, 0x09, 0x85, 0x13, 0x13, 0x40, 
  0x00, 0x00, 0x00, 0x20, 0x10, 0x49, 0x20, 0x23, 0x09, 0x81, 0x13, 0x93, 
  0x40, 0x00, 0x00, 0x00, 0x20, 0x10, 0x49, 0x60, 0x66, 0x49, 0x81, 0x13, 
  0x92, 0x40, 0x00, 0x00, 0x00, 0x40, 0x20, 0x45, 0x60, 0x66, 0x49, 0x81, 
  0xF3, 0x92, 0x40, 0x00, 0x00, 0x00, 0x40, 0x20, 0x45, 0x60, 0x66, 0x69, 
  0x0B, 0xE7, 0x92, 0x40, 0x00, 0x00, 0x00, 0x40, 0x20, 0x25, 0x60, 0x66, 
  0x6B, 0x0B, 0xE7, 0xF6, 0x00, 0x00, 0x00, 0x00, 0x40, 0x60, 0x24, 0x60, 
  0x46, 0x7B, 0x0B, 0xE7, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x24, 
  0x60, 0x44, 0x7B, 0x0B, 0xE7, 0xC4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x60, 
  0x24, 0x60, 0x4C, 0x7B, 0x0B, 0xE7, 0x44, 0x20, 0x00, 0x00, 0x00, 0x80, 
  0x40, 0x24, 0x20, 0x4C, 0x3B, 0x0B, 0xE7, 0x44, 0x20, 0x00, 0x00, 0x00, 
  0x80, 0x40, 0x04, 0x00, 0x4C, 0x3B, 0x0B, 0xE7, 0x45, 0x10, 0x00, 0x00, 
  0x00, 0x80, 0x40, 0x06, 0x00, 0x4C, 0x3B, 0x03, 0xE7, 0x45, 0x10, 0x00, 
  0x00, 0x00, 0x00, 0x41, 0x02, 0x00, 0x4C, 0x3B, 0x06, 0xE6, 0x41, 0x10, 
  0x00, 0x00, 0x00, 0x00, 0x41, 0x02, 0x00, 0x4C, 0x33, 0x06, 0xE6, 0x49, 
  0x08, 0x00, 0x00, 0x00, 0x00, 0x41, 0x02, 0x00, 0x4C, 0x33, 0x06, 0xE6, 
  0x49, 0x08, 0x00, 0x00, 0x00, 0x00, 0x42, 0x02, 0x00, 0x4C, 0x33, 0x06, 
  0xEE, 0x49, 0x04, 0x00, 0x00, 0x00, 0x00, 0x42, 0x03, 0x00, 0x5C, 0x73, 
  0x06, 0xCE, 0xC9, 0x06, 0x00, 0x00, 0x00, 0x00, 0x44, 0x03, 0x00, 0x5C, 
  0x73, 0x06, 0xCE, 0x89, 0x03, 0x00, 0x00, 0x00, 0x00, 0x68, 0x03, 0x00, 
  0x58, 0x72, 0x06, 0xCE, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x03, 
  0x00, 0x58, 0x72, 0x06, 0xCE, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x03, 0x00, 0x58, 0x72, 0x06, 0xCE, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0x00, 0x18, 0xF2, 0x06, 0xCE, 0x1B, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x00, 0x18, 0xF2, 0x06, 0xCE, 0x13, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x00, 0x98, 0xF2, 0x04, 0xCE, 0x13, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xB8, 0xF2, 0x0C, 0xCE, 0x13, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xB0, 0xF2, 0x0C, 0x8C, 0x12, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xB0, 0xF2, 0x0C, 0x8C, 
  0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xB0, 0xE6, 0x0C, 
  0x8C, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xF0, 0xE6, 
  0x0C, 0x8C, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xF0, 
  0xE6, 0x0C, 0x8C, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 
  0xF0, 0xE6, 0x0C, 0x8C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 
  0x00, 0xF0, 0xE6, 0x08, 0x9C, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x01, 0x00, 0xF0, 0xE6, 0x08, 0x9C, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0x01, 0x00, 0xF0, 0xE6, 0x09, 0x9C, 0x24, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xC0, 0x00, 0x00, 0xF0, 0xE6, 0x19, 0x9C, 0x25, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xC0, 0x04, 0x00, 0xF0, 0xE6, 0x19, 0x98, 0x2D, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xC0, 0x04, 0x00, 0xE0, 0xE6, 0x19, 0x98, 0x2D, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x04, 0x00, 0xE0, 0xE6, 0x19, 0x98, 0x29, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x04, 0x00, 0xF0, 0xE6, 0x19, 0x98, 
  0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x04, 0x00, 0xF0, 0xE6, 0x31, 
  0x18, 0x2B, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x0C, 0x00, 0xF0, 0xC6, 
  0x31, 0x18, 0x2B, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x0C, 0x00, 0xF0, 
  0xCE, 0x31, 0x10, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x0C, 0x00, 
  0xF8, 0xCE, 0x31, 0x10, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x0C, 
  0x00, 0xF8, 0xCE, 0x33, 0x10, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 
  0x0C, 0x00, 0xF8, 0xCE, 0x73, 0x10, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xE0, 0x0C, 0x00, 0xFC, 0xCC, 0x73, 0x10, 0x43, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x0C, 0x00, 0xFC, 0xCC, 0x67, 0x10, 0x47, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x0C, 0x00, 0xFC, 0xDE, 0x67, 0x10, 0x47, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x60, 0x1C, 0x00, 0xFC, 0xDC, 0x67, 0x10, 0xC7, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x60, 0x1C, 0x00, 0xFC, 0x9C, 0xE7, 0x10, 0xC7, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x1E, 0x00, 0xFE, 0x9C, 0xE7, 0x00, 
  0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x1E, 0x00, 0xFE, 0x9C, 0xC7, 
  0x00, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0E, 0x00, 0xFE, 0x9C, 
  0xC7, 0x00, 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0E, 0x00, 0xFE, 
  0x9C, 0xCF, 0x01, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0E, 0x08, 
  0xFE, 0xBD, 0xCF, 0x01, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0E, 
  0x08, 0xFF, 0xBD, 0xCF, 0x01, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 
  0x0E, 0x08, 0xFF, 0x3D, 0xCF, 0x01, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x30, 0x0F, 0x0C, 0xFF, 0x3D, 0x8F, 0x01, 0x8E, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x30, 0x0F, 0x8C, 0xFF, 0x3D, 0x8F, 0x03, 0x8E, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x30, 0x0F, 0x8C, 0xFF, 0x3C, 0x8F, 0x03, 0x8E, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x38, 0x07, 0x8E, 0xFF, 0x3C, 0x8F, 0x03, 0x0E, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x38, 0x07, 0x86, 0xFF, 0x3C, 0x8F, 0x03, 0x0E, 
  0x0F, 0x00, 0x00, 0x00, 0x00, 0x38, 0x07, 0x86, 0xFF, 0x2C, 0x9F, 0x13, 
  0x0C, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x98, 0x07, 0xC7, 0xBD, 0x2C, 0x1F, 
  0x07, 0x0C, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x98, 0x07, 0xC7, 0xBD, 0x6C, 
  0x1F, 0x07, 0x0C, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x9C, 0x03, 0xC7, 0xBF, 
  0x6C, 0x1F, 0x07, 0x1C, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x9C, 0x83, 0xE3, 
  0xBE, 0x4C, 0x1F, 0x06, 0x1C, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x9C, 0x83, 
  0xE3, 0xBE, 0x4C, 0x1F, 0x0E, 0x1C, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0xDC, 
  0xC1, 0x61, 0xBE, 0x4C, 0x3F, 0x0E, 0x1C, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
  0xDC, 0xC1, 0x71, 0xBB, 0x4C, 0x3E, 0x0E, 0x1C, 0xFF, 0x0F, 0x00, 0x00, 
  0x00, 0xDE, 0xC0, 0x31, 0x9B, 0x4C, 0x3E, 0x0E, 0x1C, 0xFE, 0x03, 0x00, 
  0x00, 0x00, 0xFF, 0xE0, 0xB1, 0x9D, 0x4C, 0x3E, 0x0E, 0x1C, 0xFE, 0x00, 
  0x00, 0x00, 0x80, 0xEF, 0xE0, 0xB8, 0x9D, 0x48, 0x3E, 0x1C, 0x1C, 0x7E, 
  0x00, 0x00, 0x00, 0xC0, 0x7F, 0xE0, 0x98, 0x9D, 0x49, 0x3E, 0x1C, 0x1C, 
  0x7E, 0x00, 0x00, 0x00, 0xE0, 0x7F, 0xF0, 0x98, 0x9C, 0xC9, 0x3E, 0x1C, 
  0x1C, 0x3E, 0x00, 0x00, 0x00, 0xE0, 0x3F, 0x78, 0xCC, 0x9E, 0xC9, 0x76, 
  0x1C, 0x1C, 0x7E, 0x00, 0x00, 0x00, 0xF0, 0x1F, 0x38, 0x4C, 0x9E, 0xC9, 
  0x7E, 0x38, 0x18, 0xFE, 0x00, 0x00, 0x00, 0xF0, 0x1F, 0x3C, 0x46, 0x9E, 
  0xC9, 0x6E, 0x38, 0x38, 0xFC, 0x01, 0x00, 0x00, 0xF0, 0x0F, 0x1E, 0x26, 
  0x5E, 0xD9, 0x4E, 0x78, 0x78, 0xFC, 0x03, 0x00, 0x00, 0xE0, 0x0F, 0x1E, 
  0x32, 0x4F, 0xD9, 0x4E, 0x70, 0xF8, 0xFC, 0x03, 0x00, 0x00, 0xE0, 0x07, 
  0x0F, 0x11, 0x4F, 0x99, 0x0E, 0x70, 0xF8, 0xF8, 0x03, 0x00, 0x00, 0xE0, 
  0x03, 0x07, 0x99, 0x47, 0x99, 0x0F, 0xF0, 0xF0, 0xF9, 0x03, 0x00, 0x00, 
  0xE0, 0x83, 0x87, 0x88, 0x47, 0x99, 0x0D, 0xF0, 0xF0, 0xF9, 0x03, 0x00, 
  0x00, 0xE0, 0xC1, 0x43, 0xCC, 0x43, 0x93, 0x0D, 0xE6, 0xE1, 0xFF, 0x03, 
  0x00, 0x00, 0xE0, 0xE3, 0x01, 0xE6, 0x41, 0x33, 0x0D, 0xEC, 0xE3, 0xFF, 
  0x01, 0x00, 0x00, 0xE0, 0xF7, 0x00, 0xE3, 0x41, 0x33, 0x8D, 0xCD, 0xFB, 
  0xFF, 0x01, 0x00, 0x00, 0x80, 0x7F, 0x80, 0xF1, 0x60, 0x23, 0x8B, 0x9F, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0x80, 0x1F, 0x40, 0x38, 0x50, 0x23, 0x0B, 
  0x7F, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x80, 0x0F, 0x10, 0x3E, 0x50, 0x63, 
  0x16, 0xFE, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0F, 0x40, 
  0x47, 0x36, 0xFC, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x02, 0xE0, 0x01, 
  0x60, 0x06, 0x4C, 0xF8, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x06, 0x38, 
  0x00, 0x60, 0x06, 0x98, 0xF0, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x0E, 
  0x00, 0x00, 0xF8, 0x0C, 0x30, 0xE0, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x7C, 0xF0, 0xFF, 0xFF, 0x1C, 0x60, 0xC0, 0xFF, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0x3F, 0x40, 0x80, 0x3F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xC0, 0xFF, 0x03, 0xE0, 0xFF, 0x00, 0x80, 0x0F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xC3, 0xFF, 0x07, 0xFF, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xEF, 0x1F, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
#endif