#include "emulate_Branch.h"

// ====================== Branching Operation =================================

// Updates decodedArgs's offset and executePointer
void decodeBranching(int dInstruction, arguments *decodedArgs) {
  // Decode operation
  decodedArgs->executePointer = &execBranching;
  // Decode offset (still unsigned)
  uint32_t mask = MASK0_23;
  decodedArgs->offset = (dInstruction & mask);
}


// Executes branching operation
void execBranching(arguments *decodedArgs, processor *arm) {
  bool negative = ((decodedArgs->offset)>>(numberOfElements-1));

  uint32_t trueoffset;
  trueoffset = ((decodedArgs->offset)<<2);
  if (negative) {
    trueoffset = ~(signEx24to32(trueoffset));
    trueoffset++;
  }
  if (negative){
    arm->registers[PC] = ((arm->registers[PC])-(trueoffset));
  } else{
    arm->registers[PC] = ((arm->registers[PC])+(trueoffset));
  }
  arm->counter=0;
}
