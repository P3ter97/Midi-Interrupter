/*
 * midi.c
 *
 *  Created on: Nov 8, 2018
 *      Author: Peter Hardeveld
 */


#include "midi.h"

struct MidiData midiData;

void Split_Midi(uint8_t data[3])
{
  uint8_t buffer = 0;

  buffer = data[0] >> 4;
  buffer = buffer << 4;

  midiData.command  = data[0] & buffer;
  midiData.channel  = data[0] ^ buffer;
  midiData.note     = data[1];
  midiData.velocity = data[2];
}
