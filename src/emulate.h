#ifndef EMULATE_H
#define EMULATE_H

uint32_t setBit(uint32_t word, bool set, uint8_t position);
uint32_t fetch(struct processor arm);

#endif