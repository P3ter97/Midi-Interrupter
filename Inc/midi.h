/*
 * midi.h
 *
 *  Created on: Nov 8, 2018
 *      Author: Peter Hardeveld
 */

#ifndef MIDI_H_
#define MIDI_H_

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
#include "main.h"

struct MidiData {
  uint8_t command;
  uint8_t channel;
  uint8_t note;
  uint8_t velocity;
};

extern struct MidiData midiData;

extern void Split_Midi(uint8_t data[3]);


#endif /* MIDI_H_ */
