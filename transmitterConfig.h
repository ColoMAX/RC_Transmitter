#ifndef transmitterConfig_h
#define transmitterConfig_h

#include "Arduino.h"

#define CONFIG_3_CH // <- Select the correct transmitter configuration here before uploading!

//
// =======================================================================================================
// TRANSMITTEER SPECIFIC CONFIGURATIONS
// =======================================================================================================
//

// Configuration for the standard "Micro RC" transmitter with 4 channels and IR support----------------------
#ifdef CONFIG_MICRO_RC
// Battery type
const float cutoffVoltage = 4.4; // 4 x Eneloop cell
const float diodeDrop = 0.72;

// Channels, we have
#define CH1
#define CH2
#define CH3
#define CH4

// Infrared
boolean infrared = true;

// Board type
const float boardVersion = 1.0; // Board revision (MUST MATCH WITH YOUR BOARD REVISION!!)

// Joystick range (usually 1023)
// Some transmitters have a smaller mechanical working range. If so, define it here (from 600 to 1023)
int range = 1023;

#endif

// Configuration for a 2 channel transmitter with steering wheel. No IR support----------------------
#ifdef CONFIG_2_CH
// Battery type
const float cutoffVoltage = 4.4; // 4 x Eneloop cell
const float diodeDrop = 0.3;

// Channels, we have
#define CH1
#define CH3

// Infrared
boolean infrared = false;

// Board type
const float boardVersion = 1.1; // Board revision (MUST MATCH WITH YOUR BOARD REVISION!!)

// Joystick range (usually 1023)
// Some transmitters have a smaller mechanical working range. If so, define it here (from 600 to 1023)
int range = 820;

#endif

// Configuration for a 2+1 channel transmitter with steering wheel. No IR support----------------------
#ifdef CONFIG_3_CH
// Battery type
const float cutoffVoltage = 4.4; // 4 x Eneloop cell
const float diodeDrop = 0.3;

// Channels, we have
#define CH1
#define CH2 // switch with one resistor to gnd and one to vcc (for 3 speed gearbox) 
#define CH3

// 3 position switches, we have (= no auto calibtation for these channels during startup)
#define CH2Switch

// Infrared
boolean infrared = false;

// Board type
const float boardVersion = 1.1; // Board revision (MUST MATCH WITH YOUR BOARD REVISION!!)

// Joystick range (usually 1023)
// Some transmitters have a smaller mechanical working range. If so, define it here (from 600 to 1023)
int range = 820;

#endif



#endif
