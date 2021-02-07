/*
 * Application template for lora-dev-board
 * ---------------------------------------
 * Board version: 1.0
 * Board config: Arduino Pro Mini + RFM95W
 * ---------------------------------------
 */

// ------- LoRaWAN configuration

// ABP mode - set DevAddr and session keys
// How to get DevAddr and session keys? Read: https://www.thethingsnetwork.org/docs/devices/registration.html
static const PROGMEM u1_t NWKSKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const PROGMEM u1_t APPSKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static const u4_t DEVADDR = 0x00000000;
