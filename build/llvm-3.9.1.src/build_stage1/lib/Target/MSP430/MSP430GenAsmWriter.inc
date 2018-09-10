/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Writer Source Fragment                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// printInstruction - This method is automatically generated by tablegen
/// from the instruction set description.
void MSP430InstPrinter::printInstruction(const MCInst *MI, raw_ostream &O) {
  static const char AsmStrs[] = {
  /* 0 */ 'r', 'l', 'a', '.', 'b', 9, 0,
  /* 7 */ 'r', 'r', 'a', '.', 'b', 9, 0,
  /* 14 */ 's', 'u', 'b', '.', 'b', 9, 0,
  /* 21 */ 's', 'u', 'b', 'c', '.', 'b', 9, 0,
  /* 29 */ 'a', 'd', 'd', 'c', '.', 'b', 9, 0,
  /* 37 */ 'b', 'i', 'c', '.', 'b', 9, 0,
  /* 44 */ 'c', 'l', 'r', 'c', 10, 9, 'r', 'r', 'c', '.', 'b', 9, 0,
  /* 57 */ 'a', 'd', 'd', '.', 'b', 9, 0,
  /* 64 */ 'a', 'n', 'd', '.', 'b', 9, 0,
  /* 71 */ 'c', 'm', 'p', '.', 'b', 9, 0,
  /* 78 */ 'x', 'o', 'r', '.', 'b', 9, 0,
  /* 85 */ 'b', 'i', 's', '.', 'b', 9, 0,
  /* 92 */ 'b', 'i', 't', '.', 'b', 9, 0,
  /* 99 */ 'm', 'o', 'v', '.', 'b', 9, 0,
  /* 106 */ 's', 'w', 'p', 'b', 9, 0,
  /* 112 */ 'c', 'a', 'l', 'l', 9, 0,
  /* 118 */ 'j', 'm', 'p', 9, 0,
  /* 123 */ 'b', 'r', 9, 0,
  /* 127 */ 's', 'x', 't', 9, 0,
  /* 132 */ 'r', 'l', 'a', '.', 'w', 9, 0,
  /* 139 */ 'r', 'r', 'a', '.', 'w', 9, 0,
  /* 146 */ 's', 'u', 'b', '.', 'w', 9, 0,
  /* 153 */ 's', 'u', 'b', 'c', '.', 'w', 9, 0,
  /* 161 */ 'a', 'd', 'd', 'c', '.', 'w', 9, 0,
  /* 169 */ 'b', 'i', 'c', '.', 'w', 9, 0,
  /* 176 */ 'c', 'l', 'r', 'c', 10, 9, 'r', 'r', 'c', '.', 'w', 9, 0,
  /* 189 */ 'a', 'd', 'd', '.', 'w', 9, 0,
  /* 196 */ 'a', 'n', 'd', '.', 'w', 9, 0,
  /* 203 */ 'p', 'u', 's', 'h', '.', 'w', 9, 0,
  /* 211 */ 'c', 'm', 'p', '.', 'w', 9, 0,
  /* 218 */ 'p', 'o', 'p', '.', 'w', 9, 0,
  /* 225 */ 'x', 'o', 'r', '.', 'w', 9, 0,
  /* 232 */ 'b', 'i', 's', '.', 'w', 9, 0,
  /* 239 */ 'b', 'i', 't', '.', 'w', 9, 0,
  /* 246 */ 'm', 'o', 'v', '.', 'w', 9, 0,
  /* 253 */ '#', 32, 'X', 'R', 'a', 'y', 32, 'F', 'u', 'n', 'c', 't', 'i', 'o', 'n', 32, 'E', 'n', 't', 'e', 'r', '.', 0,
  /* 276 */ '#', 32, 'X', 'R', 'a', 'y', 32, 'F', 'u', 'n', 'c', 't', 'i', 'o', 'n', 32, 'E', 'x', 'i', 't', '.', 0,
  /* 298 */ 's', 'u', 'b', '.', 'b', 9, '@', 0,
  /* 306 */ 'a', 'd', 'd', '.', 'b', 9, '@', 0,
  /* 314 */ 'a', 'n', 'd', '.', 'b', 9, '@', 0,
  /* 322 */ 'x', 'o', 'r', '.', 'b', 9, '@', 0,
  /* 330 */ 'b', 'i', 's', '.', 'b', 9, '@', 0,
  /* 338 */ 'm', 'o', 'v', '.', 'b', 9, '@', 0,
  /* 346 */ 's', 'u', 'b', '.', 'w', 9, '@', 0,
  /* 354 */ 'a', 'd', 'd', '.', 'w', 9, '@', 0,
  /* 362 */ 'a', 'n', 'd', '.', 'w', 9, '@', 0,
  /* 370 */ 'x', 'o', 'r', '.', 'w', 9, '@', 0,
  /* 378 */ 'b', 'i', 's', '.', 'w', 9, '@', 0,
  /* 386 */ 'm', 'o', 'v', '.', 'w', 9, '@', 0,
  /* 394 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 407 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 414 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 424 */ '#', 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 442 */ '#', 32, 'S', 'r', 'a', '1', '6', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 457 */ '#', 32, 'S', 'h', 'l', '1', '6', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 472 */ '#', 32, 'S', 'r', 'l', '1', '6', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 487 */ '#', 32, 'S', 'e', 'l', 'e', 'c', 't', '1', '6', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 505 */ '#', 32, 'S', 'r', 'a', '8', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 519 */ '#', 32, 'S', 'h', 'l', '8', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 533 */ '#', 32, 'S', 'r', 'l', '8', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 547 */ '#', 32, 'S', 'e', 'l', 'e', 'c', 't', '8', 32, 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 564 */ '#', 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 580 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 595 */ 'r', 'e', 't', 'i', 0,
  /* 600 */ 'j', 0,
  /* 602 */ 'n', 'o', 'p', 0,
  /* 606 */ 'r', 'e', 't', 0,
  };

  static const uint16_t OpInfo0[] = {
    0U,	// PHI
    0U,	// INLINEASM
    0U,	// CFI_INSTRUCTION
    0U,	// EH_LABEL
    0U,	// GC_LABEL
    0U,	// KILL
    0U,	// EXTRACT_SUBREG
    0U,	// INSERT_SUBREG
    0U,	// IMPLICIT_DEF
    0U,	// SUBREG_TO_REG
    0U,	// COPY_TO_REGCLASS
    415U,	// DBG_VALUE
    0U,	// REG_SEQUENCE
    0U,	// COPY
    408U,	// BUNDLE
    581U,	// LIFETIME_START
    395U,	// LIFETIME_END
    0U,	// STACKMAP
    0U,	// PATCHPOINT
    0U,	// LOAD_STACK_GUARD
    0U,	// STATEPOINT
    0U,	// LOCAL_ESCAPE
    0U,	// FAULTING_LOAD_OP
    0U,	// PATCHABLE_OP
    254U,	// PATCHABLE_FUNCTION_ENTER
    277U,	// PATCHABLE_RET
    0U,	// G_ADD
    0U,	// G_OR
    0U,	// G_BR
    1186U,	// ADC16mi
    18594U,	// ADC16mm
    1186U,	// ADC16mr
    1186U,	// ADC16ri
    34978U,	// ADC16rm
    1186U,	// ADC16rr
    1054U,	// ADC8mi
    18462U,	// ADC8mm
    1054U,	// ADC8mr
    1054U,	// ADC8ri
    34846U,	// ADC8rm
    1054U,	// ADC8rr
    1214U,	// ADD16mi
    18622U,	// ADD16mm
    1214U,	// ADD16mr
    1214U,	// ADD16ri
    35006U,	// ADD16rm
    3427U,	// ADD16rm_POST
    1214U,	// ADD16rr
    1082U,	// ADD8mi
    18490U,	// ADD8mm
    1082U,	// ADD8mr
    1082U,	// ADD8ri
    34874U,	// ADD8rm
    3379U,	// ADD8rm_POST
    1082U,	// ADD8rr
    425U,	// ADJCALLSTACKDOWN
    565U,	// ADJCALLSTACKUP
    1221U,	// AND16mi
    18629U,	// AND16mm
    1221U,	// AND16mr
    1221U,	// AND16ri
    35013U,	// AND16rm
    3435U,	// AND16rm_POST
    1221U,	// AND16rr
    1089U,	// AND8mi
    18497U,	// AND8mm
    1089U,	// AND8mr
    1089U,	// AND8ri
    34881U,	// AND8rm
    3387U,	// AND8rm_POST
    1089U,	// AND8rr
    18602U,	// BIC16mm
    1194U,	// BIC16mr
    34986U,	// BIC16rm
    1194U,	// BIC16rr
    18470U,	// BIC8mm
    1062U,	// BIC8mr
    34854U,	// BIC8rm
    1062U,	// BIC8rr
    1264U,	// BIT16mi
    18672U,	// BIT16mm
    1264U,	// BIT16mr
    4336U,	// BIT16ri
    5360U,	// BIT16rm
    4336U,	// BIT16rr
    1117U,	// BIT8mi
    18525U,	// BIT8mm
    1117U,	// BIT8mr
    4189U,	// BIT8ri
    5213U,	// BIT8rm
    4189U,	// BIT8rr
    6268U,	// Bi
    7292U,	// Bm
    6268U,	// Br
    6257U,	// CALLi
    8305U,	// CALLm
    6257U,	// CALLr
    1236U,	// CMP16mi
    1236U,	// CMP16mr
    4308U,	// CMP16ri
    5332U,	// CMP16rm
    4308U,	// CMP16rr
    1096U,	// CMP8mi
    1096U,	// CMP8mr
    4168U,	// CMP8ri
    5192U,	// CMP8rm
    4168U,	// CMP8rr
    9817U,	// JCC
    10359U,	// JMP
    1271U,	// MOV16mi
    18679U,	// MOV16mm
    1271U,	// MOV16mr
    4343U,	// MOV16ri
    5367U,	// MOV16rm
    50563U,	// MOV16rm_POST
    4343U,	// MOV16rr
    1124U,	// MOV8mi
    18532U,	// MOV8mm
    1124U,	// MOV8mr
    4196U,	// MOV8ri
    5220U,	// MOV8rm
    50515U,	// MOV8rm_POST
    4196U,	// MOV8rr
    5220U,	// MOVZX16rm8
    4196U,	// MOVZX16rr8
    603U,	// NOP
    1257U,	// OR16mi
    18665U,	// OR16mm
    1257U,	// OR16mr
    1257U,	// OR16ri
    35049U,	// OR16rm
    3451U,	// OR16rm_POST
    1257U,	// OR16rr
    1110U,	// OR8mi
    18518U,	// OR8mm
    1110U,	// OR8mr
    1110U,	// OR8ri
    34902U,	// OR8rm
    3403U,	// OR8rm_POST
    1110U,	// OR8rr
    6363U,	// POP16r
    6348U,	// PUSH16r
    607U,	// RET
    596U,	// RETI
    6284U,	// SAR16r1
    6321U,	// SAR16r1c
    6152U,	// SAR8r1
    6189U,	// SAR8r1c
    1178U,	// SBC16mi
    18586U,	// SBC16mm
    1178U,	// SBC16mr
    1178U,	// SBC16ri
    34970U,	// SBC16rm
    1178U,	// SBC16rr
    1046U,	// SBC8mi
    18454U,	// SBC8mm
    1046U,	// SBC8mr
    1046U,	// SBC8ri
    34838U,	// SBC8rm
    1046U,	// SBC8rr
    6272U,	// SEXT16r
    6277U,	// SHL16r1
    6145U,	// SHL8r1
    1171U,	// SUB16mi
    18579U,	// SUB16mm
    1171U,	// SUB16mr
    1171U,	// SUB16ri
    34963U,	// SUB16rm
    3419U,	// SUB16rm_POST
    1171U,	// SUB16rr
    1039U,	// SUB8mi
    18447U,	// SUB8mm
    1039U,	// SUB8mr
    1039U,	// SUB8ri
    34831U,	// SUB8rm
    3371U,	// SUB8rm_POST
    1039U,	// SUB8rr
    6251U,	// SWPB16r
    488U,	// Select16
    548U,	// Select8
    458U,	// Shl16
    520U,	// Shl8
    443U,	// Sra16
    506U,	// Sra8
    473U,	// Srl16
    534U,	// Srl8
    1250U,	// XOR16mi
    18658U,	// XOR16mm
    1250U,	// XOR16mr
    1250U,	// XOR16ri
    35042U,	// XOR16rm
    3443U,	// XOR16rm_POST
    1250U,	// XOR16rr
    1103U,	// XOR8mi
    18511U,	// XOR8mm
    1103U,	// XOR8mr
    1103U,	// XOR8ri
    34895U,	// XOR8rm
    3395U,	// XOR8rm_POST
    1103U,	// XOR8rr
    4196U,	// ZEXT16r
  };

  static const uint8_t OpInfo1[] = {
    0U,	// PHI
    0U,	// INLINEASM
    0U,	// CFI_INSTRUCTION
    0U,	// EH_LABEL
    0U,	// GC_LABEL
    0U,	// KILL
    0U,	// EXTRACT_SUBREG
    0U,	// INSERT_SUBREG
    0U,	// IMPLICIT_DEF
    0U,	// SUBREG_TO_REG
    0U,	// COPY_TO_REGCLASS
    0U,	// DBG_VALUE
    0U,	// REG_SEQUENCE
    0U,	// COPY
    0U,	// BUNDLE
    0U,	// LIFETIME_START
    0U,	// LIFETIME_END
    0U,	// STACKMAP
    0U,	// PATCHPOINT
    0U,	// LOAD_STACK_GUARD
    0U,	// STATEPOINT
    0U,	// LOCAL_ESCAPE
    0U,	// FAULTING_LOAD_OP
    0U,	// PATCHABLE_OP
    0U,	// PATCHABLE_FUNCTION_ENTER
    0U,	// PATCHABLE_RET
    0U,	// G_ADD
    0U,	// G_OR
    0U,	// G_BR
    0U,	// ADC16mi
    0U,	// ADC16mm
    0U,	// ADC16mr
    1U,	// ADC16ri
    0U,	// ADC16rm
    1U,	// ADC16rr
    0U,	// ADC8mi
    0U,	// ADC8mm
    0U,	// ADC8mr
    1U,	// ADC8ri
    0U,	// ADC8rm
    1U,	// ADC8rr
    0U,	// ADD16mi
    0U,	// ADD16mm
    0U,	// ADD16mr
    1U,	// ADD16ri
    0U,	// ADD16rm
    0U,	// ADD16rm_POST
    1U,	// ADD16rr
    0U,	// ADD8mi
    0U,	// ADD8mm
    0U,	// ADD8mr
    1U,	// ADD8ri
    0U,	// ADD8rm
    0U,	// ADD8rm_POST
    1U,	// ADD8rr
    0U,	// ADJCALLSTACKDOWN
    0U,	// ADJCALLSTACKUP
    0U,	// AND16mi
    0U,	// AND16mm
    0U,	// AND16mr
    1U,	// AND16ri
    0U,	// AND16rm
    0U,	// AND16rm_POST
    1U,	// AND16rr
    0U,	// AND8mi
    0U,	// AND8mm
    0U,	// AND8mr
    1U,	// AND8ri
    0U,	// AND8rm
    0U,	// AND8rm_POST
    1U,	// AND8rr
    0U,	// BIC16mm
    0U,	// BIC16mr
    0U,	// BIC16rm
    1U,	// BIC16rr
    0U,	// BIC8mm
    0U,	// BIC8mr
    0U,	// BIC8rm
    1U,	// BIC8rr
    0U,	// BIT16mi
    0U,	// BIT16mm
    0U,	// BIT16mr
    0U,	// BIT16ri
    0U,	// BIT16rm
    0U,	// BIT16rr
    0U,	// BIT8mi
    0U,	// BIT8mm
    0U,	// BIT8mr
    0U,	// BIT8ri
    0U,	// BIT8rm
    0U,	// BIT8rr
    0U,	// Bi
    0U,	// Bm
    0U,	// Br
    0U,	// CALLi
    0U,	// CALLm
    0U,	// CALLr
    0U,	// CMP16mi
    0U,	// CMP16mr
    0U,	// CMP16ri
    0U,	// CMP16rm
    0U,	// CMP16rr
    0U,	// CMP8mi
    0U,	// CMP8mr
    0U,	// CMP8ri
    0U,	// CMP8rm
    0U,	// CMP8rr
    0U,	// JCC
    0U,	// JMP
    0U,	// MOV16mi
    0U,	// MOV16mm
    0U,	// MOV16mr
    0U,	// MOV16ri
    0U,	// MOV16rm
    0U,	// MOV16rm_POST
    0U,	// MOV16rr
    0U,	// MOV8mi
    0U,	// MOV8mm
    0U,	// MOV8mr
    0U,	// MOV8ri
    0U,	// MOV8rm
    0U,	// MOV8rm_POST
    0U,	// MOV8rr
    0U,	// MOVZX16rm8
    0U,	// MOVZX16rr8
    0U,	// NOP
    0U,	// OR16mi
    0U,	// OR16mm
    0U,	// OR16mr
    1U,	// OR16ri
    0U,	// OR16rm
    0U,	// OR16rm_POST
    1U,	// OR16rr
    0U,	// OR8mi
    0U,	// OR8mm
    0U,	// OR8mr
    1U,	// OR8ri
    0U,	// OR8rm
    0U,	// OR8rm_POST
    1U,	// OR8rr
    0U,	// POP16r
    0U,	// PUSH16r
    0U,	// RET
    0U,	// RETI
    0U,	// SAR16r1
    0U,	// SAR16r1c
    0U,	// SAR8r1
    0U,	// SAR8r1c
    0U,	// SBC16mi
    0U,	// SBC16mm
    0U,	// SBC16mr
    1U,	// SBC16ri
    0U,	// SBC16rm
    1U,	// SBC16rr
    0U,	// SBC8mi
    0U,	// SBC8mm
    0U,	// SBC8mr
    1U,	// SBC8ri
    0U,	// SBC8rm
    1U,	// SBC8rr
    0U,	// SEXT16r
    0U,	// SHL16r1
    0U,	// SHL8r1
    0U,	// SUB16mi
    0U,	// SUB16mm
    0U,	// SUB16mr
    1U,	// SUB16ri
    0U,	// SUB16rm
    0U,	// SUB16rm_POST
    1U,	// SUB16rr
    0U,	// SUB8mi
    0U,	// SUB8mm
    0U,	// SUB8mr
    1U,	// SUB8ri
    0U,	// SUB8rm
    0U,	// SUB8rm_POST
    1U,	// SUB8rr
    0U,	// SWPB16r
    0U,	// Select16
    0U,	// Select8
    0U,	// Shl16
    0U,	// Shl8
    0U,	// Sra16
    0U,	// Sra8
    0U,	// Srl16
    0U,	// Srl8
    0U,	// XOR16mi
    0U,	// XOR16mm
    0U,	// XOR16mr
    1U,	// XOR16ri
    0U,	// XOR16rm
    0U,	// XOR16rm_POST
    1U,	// XOR16rr
    0U,	// XOR8mi
    0U,	// XOR8mm
    0U,	// XOR8mr
    1U,	// XOR8ri
    0U,	// XOR8rm
    0U,	// XOR8rm_POST
    1U,	// XOR8rr
    0U,	// ZEXT16r
  };

  O << "\t";

  // Emit the opcode for the instruction.
  uint32_t Bits = 0;
  Bits |= OpInfo0[MI->getOpcode()] << 0;
  Bits |= OpInfo1[MI->getOpcode()] << 16;
  assert(Bits != 0 && "Cannot print this instruction.");
  O << AsmStrs+(Bits & 1023)-1;


  // Fragment 0 encoded into 4 bits for 11 unique commands.
  switch ((Bits >> 10) & 15) {
  default: llvm_unreachable("Invalid command number.");
  case 0:
    // DBG_VALUE, BUNDLE, LIFETIME_START, LIFETIME_END, PATCHABLE_FUNCTION_EN...
    return;
    break;
  case 1:
    // ADC16mi, ADC16mr, ADC16ri, ADC16rr, ADC8mi, ADC8mr, ADC8ri, ADC8rr, AD...
    printOperand(MI, 2, O);
    break;
  case 2:
    // ADC16mm, ADC16rm, ADC8mm, ADC8rm, ADD16mm, ADD16rm, ADD8mm, ADD8rm, AN...
    printSrcMemOperand(MI, 2, O);
    O << ", ";
    break;
  case 3:
    // ADD16rm_POST, ADD8rm_POST, AND16rm_POST, AND8rm_POST, OR16rm_POST, OR8...
    printOperand(MI, 3, O);
    O << "+, ";
    printOperand(MI, 0, O);
    return;
    break;
  case 4:
    // BIT16ri, BIT16rr, BIT8ri, BIT8rr, CMP16ri, CMP16rr, CMP8ri, CMP8rr, MO...
    printOperand(MI, 1, O);
    O << ", ";
    printOperand(MI, 0, O);
    return;
    break;
  case 5:
    // BIT16rm, BIT8rm, CMP16rm, CMP8rm, MOV16rm, MOV8rm, MOVZX16rm8
    printSrcMemOperand(MI, 1, O);
    O << ", ";
    printOperand(MI, 0, O);
    return;
    break;
  case 6:
    // Bi, Br, CALLi, CALLr, POP16r, PUSH16r, SAR16r1, SAR16r1c, SAR8r1, SAR8...
    printOperand(MI, 0, O);
    return;
    break;
  case 7:
    // Bm
    printSrcMemOperand(MI, 0, O);
    return;
    break;
  case 8:
    // CALLm
    printSrcMemOperand(MI, 0, O, "mem");
    return;
    break;
  case 9:
    // JCC
    printCCOperand(MI, 1, O);
    O << "\t";
    printPCRelImmOperand(MI, 0, O);
    return;
    break;
  case 10:
    // JMP
    printPCRelImmOperand(MI, 0, O);
    return;
    break;
  }


  // Fragment 1 encoded into 2 bits for 4 unique commands.
  switch ((Bits >> 14) & 3) {
  default: llvm_unreachable("Invalid command number.");
  case 0:
    // ADC16mi, ADC16mr, ADC16ri, ADC16rr, ADC8mi, ADC8mr, ADC8ri, ADC8rr, AD...
    O << ", ";
    break;
  case 1:
    // ADC16mm, ADC8mm, ADD16mm, ADD8mm, AND16mm, AND8mm, BIC16mm, BIC8mm, BI...
    printSrcMemOperand(MI, 0, O);
    return;
    break;
  case 2:
    // ADC16rm, ADC8rm, ADD16rm, ADD8rm, AND16rm, AND8rm, BIC16rm, BIC8rm, OR...
    printOperand(MI, 0, O);
    return;
    break;
  case 3:
    // MOV16rm_POST, MOV8rm_POST
    O << "+, ";
    printOperand(MI, 0, O);
    return;
    break;
  }


  // Fragment 2 encoded into 1 bits for 2 unique commands.
  if ((Bits >> 16) & 1) {
    // ADC16ri, ADC16rr, ADC8ri, ADC8rr, ADD16ri, ADD16rr, ADD8ri, ADD8rr, AN...
    printOperand(MI, 0, O);
    return;
  } else {
    // ADC16mi, ADC16mr, ADC8mi, ADC8mr, ADD16mi, ADD16mr, ADD8mi, ADD8mr, AN...
    printSrcMemOperand(MI, 0, O);
    return;
  }

}


/// getRegisterName - This method is automatically generated by tblgen
/// from the register set description.  This returns the assembler name
/// for the specified register.
const char *MSP430InstPrinter::getRegisterName(unsigned RegNo) {
  assert(RegNo && RegNo < 33 && "Invalid register number!");

  static const char AsmStrs[] = {
  /* 0 */ 'r', '1', '0', 0,
  /* 4 */ 'r', '0', 0,
  /* 7 */ 'r', '1', '1', 0,
  /* 11 */ 'r', '1', 0,
  /* 14 */ 'r', '1', '2', 0,
  /* 18 */ 'r', '2', 0,
  /* 21 */ 'r', '1', '3', 0,
  /* 25 */ 'r', '3', 0,
  /* 28 */ 'r', '1', '4', 0,
  /* 32 */ 'r', '4', 0,
  /* 35 */ 'r', '1', '5', 0,
  /* 39 */ 'r', '5', 0,
  /* 42 */ 'r', '6', 0,
  /* 45 */ 'r', '7', 0,
  /* 48 */ 'r', '8', 0,
  /* 51 */ 'r', '9', 0,
  };

  static const uint8_t RegAsmOffset[] = {
    25, 25, 32, 32, 4, 4, 11, 11, 18, 18, 39, 42, 45, 48, 
    51, 0, 7, 14, 21, 28, 35, 39, 42, 45, 48, 51, 0, 7, 
    14, 21, 28, 35, 
  };

  assert (*(AsmStrs+RegAsmOffset[RegNo-1]) &&
          "Invalid alt name index for register!");
  return AsmStrs+RegAsmOffset[RegNo-1];
}

#ifdef PRINT_ALIAS_INSTR
#undef PRINT_ALIAS_INSTR

bool MSP430InstPrinter::printAliasInstr(const MCInst *MI, raw_ostream &OS) {
  return false;
}

#endif // PRINT_ALIAS_INSTR