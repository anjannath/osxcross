/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace MSP430 {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    PATCHPOINT	= 18,
    LOAD_STACK_GUARD	= 19,
    STATEPOINT	= 20,
    LOCAL_ESCAPE	= 21,
    FAULTING_LOAD_OP	= 22,
    PATCHABLE_OP	= 23,
    PATCHABLE_FUNCTION_ENTER	= 24,
    PATCHABLE_RET	= 25,
    G_ADD	= 26,
    G_OR	= 27,
    G_BR	= 28,
    ADC16mi	= 29,
    ADC16mm	= 30,
    ADC16mr	= 31,
    ADC16ri	= 32,
    ADC16rm	= 33,
    ADC16rr	= 34,
    ADC8mi	= 35,
    ADC8mm	= 36,
    ADC8mr	= 37,
    ADC8ri	= 38,
    ADC8rm	= 39,
    ADC8rr	= 40,
    ADD16mi	= 41,
    ADD16mm	= 42,
    ADD16mr	= 43,
    ADD16ri	= 44,
    ADD16rm	= 45,
    ADD16rm_POST	= 46,
    ADD16rr	= 47,
    ADD8mi	= 48,
    ADD8mm	= 49,
    ADD8mr	= 50,
    ADD8ri	= 51,
    ADD8rm	= 52,
    ADD8rm_POST	= 53,
    ADD8rr	= 54,
    ADJCALLSTACKDOWN	= 55,
    ADJCALLSTACKUP	= 56,
    AND16mi	= 57,
    AND16mm	= 58,
    AND16mr	= 59,
    AND16ri	= 60,
    AND16rm	= 61,
    AND16rm_POST	= 62,
    AND16rr	= 63,
    AND8mi	= 64,
    AND8mm	= 65,
    AND8mr	= 66,
    AND8ri	= 67,
    AND8rm	= 68,
    AND8rm_POST	= 69,
    AND8rr	= 70,
    BIC16mm	= 71,
    BIC16mr	= 72,
    BIC16rm	= 73,
    BIC16rr	= 74,
    BIC8mm	= 75,
    BIC8mr	= 76,
    BIC8rm	= 77,
    BIC8rr	= 78,
    BIT16mi	= 79,
    BIT16mm	= 80,
    BIT16mr	= 81,
    BIT16ri	= 82,
    BIT16rm	= 83,
    BIT16rr	= 84,
    BIT8mi	= 85,
    BIT8mm	= 86,
    BIT8mr	= 87,
    BIT8ri	= 88,
    BIT8rm	= 89,
    BIT8rr	= 90,
    Bi	= 91,
    Bm	= 92,
    Br	= 93,
    CALLi	= 94,
    CALLm	= 95,
    CALLr	= 96,
    CMP16mi	= 97,
    CMP16mr	= 98,
    CMP16ri	= 99,
    CMP16rm	= 100,
    CMP16rr	= 101,
    CMP8mi	= 102,
    CMP8mr	= 103,
    CMP8ri	= 104,
    CMP8rm	= 105,
    CMP8rr	= 106,
    JCC	= 107,
    JMP	= 108,
    MOV16mi	= 109,
    MOV16mm	= 110,
    MOV16mr	= 111,
    MOV16ri	= 112,
    MOV16rm	= 113,
    MOV16rm_POST	= 114,
    MOV16rr	= 115,
    MOV8mi	= 116,
    MOV8mm	= 117,
    MOV8mr	= 118,
    MOV8ri	= 119,
    MOV8rm	= 120,
    MOV8rm_POST	= 121,
    MOV8rr	= 122,
    MOVZX16rm8	= 123,
    MOVZX16rr8	= 124,
    NOP	= 125,
    OR16mi	= 126,
    OR16mm	= 127,
    OR16mr	= 128,
    OR16ri	= 129,
    OR16rm	= 130,
    OR16rm_POST	= 131,
    OR16rr	= 132,
    OR8mi	= 133,
    OR8mm	= 134,
    OR8mr	= 135,
    OR8ri	= 136,
    OR8rm	= 137,
    OR8rm_POST	= 138,
    OR8rr	= 139,
    POP16r	= 140,
    PUSH16r	= 141,
    RET	= 142,
    RETI	= 143,
    SAR16r1	= 144,
    SAR16r1c	= 145,
    SAR8r1	= 146,
    SAR8r1c	= 147,
    SBC16mi	= 148,
    SBC16mm	= 149,
    SBC16mr	= 150,
    SBC16ri	= 151,
    SBC16rm	= 152,
    SBC16rr	= 153,
    SBC8mi	= 154,
    SBC8mm	= 155,
    SBC8mr	= 156,
    SBC8ri	= 157,
    SBC8rm	= 158,
    SBC8rr	= 159,
    SEXT16r	= 160,
    SHL16r1	= 161,
    SHL8r1	= 162,
    SUB16mi	= 163,
    SUB16mm	= 164,
    SUB16mr	= 165,
    SUB16ri	= 166,
    SUB16rm	= 167,
    SUB16rm_POST	= 168,
    SUB16rr	= 169,
    SUB8mi	= 170,
    SUB8mm	= 171,
    SUB8mr	= 172,
    SUB8ri	= 173,
    SUB8rm	= 174,
    SUB8rm_POST	= 175,
    SUB8rr	= 176,
    SWPB16r	= 177,
    Select16	= 178,
    Select8	= 179,
    Shl16	= 180,
    Shl8	= 181,
    Sra16	= 182,
    Sra8	= 183,
    Srl16	= 184,
    Srl8	= 185,
    XOR16mi	= 186,
    XOR16mm	= 187,
    XOR16mr	= 188,
    XOR16ri	= 189,
    XOR16rm	= 190,
    XOR16rm_POST	= 191,
    XOR16rr	= 192,
    XOR8mi	= 193,
    XOR8mm	= 194,
    XOR8mr	= 195,
    XOR8ri	= 196,
    XOR8rm	= 197,
    XOR8rm_POST	= 198,
    XOR8rr	= 199,
    ZEXT16r	= 200,
    INSTRUCTION_LIST_END = 201
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end Sched namespace
} // end MSP430 namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { MSP430::SR, 0 };
static const MCPhysReg ImplicitList2[] = { MSP430::SP, 0 };
static const MCPhysReg ImplicitList3[] = { MSP430::SP, MSP430::SR, 0 };
static const MCPhysReg ImplicitList4[] = { MSP430::R12, MSP430::R13, MSP430::R14, MSP430::R15, MSP430::SR, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo24[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo25[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo34[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo35[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo37[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo38[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc MSP430Insts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #17 = STACKMAP
  { 18,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #19 = LOAD_STACK_GUARD
  { 20,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #20 = STATEPOINT
  { 21,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #21 = LOCAL_ESCAPE
  { 22,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #22 = FAULTING_LOAD_OP
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #23 = PATCHABLE_OP
  { 24,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #24 = PATCHABLE_FUNCTION_ENTER
  { 25,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #25 = PATCHABLE_RET
  { 26,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #26 = G_ADD
  { 27,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #27 = G_OR
  { 28,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #28 = G_BR
  { 29,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #29 = ADC16mi
  { 30,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #30 = ADC16mm
  { 31,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #31 = ADC16mr
  { 32,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #32 = ADC16ri
  { 33,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #33 = ADC16rm
  { 34,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #34 = ADC16rr
  { 35,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #35 = ADC8mi
  { 36,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #36 = ADC8mm
  { 37,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #37 = ADC8mr
  { 38,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #38 = ADC8ri
  { 39,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #39 = ADC8rm
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #40 = ADC8rr
  { 41,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #41 = ADD16mi
  { 42,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #42 = ADD16mm
  { 43,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #43 = ADD16mr
  { 44,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #44 = ADD16ri
  { 45,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #45 = ADD16rm
  { 46,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #46 = ADD16rm_POST
  { 47,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #47 = ADD16rr
  { 48,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #48 = ADD8mi
  { 49,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #49 = ADD8mm
  { 50,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #50 = ADD8mr
  { 51,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #51 = ADD8ri
  { 52,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #52 = ADD8rm
  { 53,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #53 = ADD8rm_POST
  { 54,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #54 = ADD8rr
  { 55,	1,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo3, -1 ,nullptr },  // Inst #55 = ADJCALLSTACKDOWN
  { 56,	2,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #56 = ADJCALLSTACKUP
  { 57,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #57 = AND16mi
  { 58,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #58 = AND16mm
  { 59,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #59 = AND16mr
  { 60,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #60 = AND16ri
  { 61,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #61 = AND16rm
  { 62,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #62 = AND16rm_POST
  { 63,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #63 = AND16rr
  { 64,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #64 = AND8mi
  { 65,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #65 = AND8mm
  { 66,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #66 = AND8mr
  { 67,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #67 = AND8ri
  { 68,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #68 = AND8rm
  { 69,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #69 = AND8rm_POST
  { 70,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #70 = AND8rr
  { 71,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #71 = BIC16mm
  { 72,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #72 = BIC16mr
  { 73,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #73 = BIC16rm
  { 74,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #74 = BIC16rr
  { 75,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #75 = BIC8mm
  { 76,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #76 = BIC8mr
  { 77,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #77 = BIC8rm
  { 78,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #78 = BIC8rr
  { 79,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #79 = BIT16mi
  { 80,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #80 = BIT16mm
  { 81,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #81 = BIT16mr
  { 82,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo25, -1 ,nullptr },  // Inst #82 = BIT16ri
  { 83,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #83 = BIT16rm
  { 84,	2,	0,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #84 = BIT16rr
  { 85,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #85 = BIT8mi
  { 86,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #86 = BIT8mm
  { 87,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #87 = BIT8mr
  { 88,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #88 = BIT8ri
  { 89,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #89 = BIT8rm
  { 90,	2,	0,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #90 = BIT8rr
  { 91,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #91 = Bi
  { 92,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #92 = Bm
  { 93,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xaULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #93 = Br
  { 94,	1,	0,	0,	0,	0|(1ULL<<MCID::Call), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo3, -1 ,nullptr },  // Inst #94 = CALLi
  { 95,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo31, -1 ,nullptr },  // Inst #95 = CALLm
  { 96,	1,	0,	0,	0,	0|(1ULL<<MCID::Call), 0x9ULL, ImplicitList2, ImplicitList4, OperandInfo32, -1 ,nullptr },  // Inst #96 = CALLr
  { 97,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #97 = CMP16mi
  { 98,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #98 = CMP16mr
  { 99,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo25, -1 ,nullptr },  // Inst #99 = CMP16ri
  { 100,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #100 = CMP16rm
  { 101,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #101 = CMP16rr
  { 102,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #102 = CMP8mi
  { 103,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #103 = CMP8mr
  { 104,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #104 = CMP8ri
  { 105,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #105 = CMP8rm
  { 106,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #106 = CMP8rr
  { 107,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0xbULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #107 = JCC
  { 108,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xbULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #108 = JMP
  { 109,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #109 = MOV16mi
  { 110,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #110 = MOV16mm
  { 111,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #111 = MOV16mr
  { 112,	2,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #112 = MOV16ri
  { 113,	3,	1,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #113 = MOV16rm
  { 114,	3,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #114 = MOV16rm_POST
  { 115,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #115 = MOV16rr
  { 116,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #116 = MOV8mi
  { 117,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #117 = MOV8mm
  { 118,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #118 = MOV8mr
  { 119,	2,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #119 = MOV8ri
  { 120,	3,	1,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #120 = MOV8rm
  { 121,	3,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #121 = MOV8rm_POST
  { 122,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #122 = MOV8rr
  { 123,	3,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #123 = MOVZX16rm8
  { 124,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #124 = MOVZX16rr8
  { 125,	0,	0,	0,	0,	0, 0x4ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #125 = NOP
  { 126,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #126 = OR16mi
  { 127,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #127 = OR16mm
  { 128,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #128 = OR16mr
  { 129,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #129 = OR16ri
  { 130,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #130 = OR16rm
  { 131,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #131 = OR16rm_POST
  { 132,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #132 = OR16rr
  { 133,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #133 = OR8mi
  { 134,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #134 = OR8mm
  { 135,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #135 = OR8mr
  { 136,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #136 = OR8ri
  { 137,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #137 = OR8rm
  { 138,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #138 = OR8rm_POST
  { 139,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #139 = OR8rr
  { 140,	1,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xaULL, ImplicitList2, ImplicitList2, OperandInfo32, -1 ,nullptr },  // Inst #140 = POP16r
  { 141,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x9ULL, ImplicitList2, ImplicitList2, OperandInfo32, -1 ,nullptr },  // Inst #141 = PUSH16r
  { 142,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xaULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #142 = RET
  { 143,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x9ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #143 = RETI
  { 144,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #144 = SAR16r1
  { 145,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #145 = SAR16r1c
  { 146,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #146 = SAR8r1
  { 147,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #147 = SAR8r1c
  { 148,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #148 = SBC16mi
  { 149,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #149 = SBC16mm
  { 150,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #150 = SBC16mr
  { 151,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #151 = SBC16ri
  { 152,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #152 = SBC16rm
  { 153,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #153 = SBC16rr
  { 154,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #154 = SBC8mi
  { 155,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #155 = SBC8mm
  { 156,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #156 = SBC8mr
  { 157,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #157 = SBC8ri
  { 158,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #158 = SBC8rm
  { 159,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #159 = SBC8rr
  { 160,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #160 = SEXT16r
  { 161,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #161 = SHL16r1
  { 162,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #162 = SHL8r1
  { 163,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #163 = SUB16mi
  { 164,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #164 = SUB16mm
  { 165,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #165 = SUB16mr
  { 166,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #166 = SUB16ri
  { 167,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #167 = SUB16rm
  { 168,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #168 = SUB16rm_POST
  { 169,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #169 = SUB16rr
  { 170,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #170 = SUB8mi
  { 171,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #171 = SUB8mm
  { 172,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #172 = SUB8mr
  { 173,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #173 = SUB8ri
  { 174,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #174 = SUB8rm
  { 175,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #175 = SUB8rm_POST
  { 176,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #176 = SUB8rr
  { 177,	2,	1,	0,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #177 = SWPB16r
  { 178,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #178 = Select16
  { 179,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #179 = Select8
  { 180,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #180 = Shl16
  { 181,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #181 = Shl8
  { 182,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #182 = Sra16
  { 183,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #183 = Sra8
  { 184,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #184 = Srl16
  { 185,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #185 = Srl8
  { 186,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #186 = XOR16mi
  { 187,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #187 = XOR16mm
  { 188,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #188 = XOR16mr
  { 189,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #189 = XOR16ri
  { 190,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #190 = XOR16rm
  { 191,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #191 = XOR16rm_POST
  { 192,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo18, -1 ,nullptr },  // Inst #192 = XOR16rr
  { 193,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #193 = XOR8mi
  { 194,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #194 = XOR8mm
  { 195,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo19, -1 ,nullptr },  // Inst #195 = XOR8mr
  { 196,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #196 = XOR8ri
  { 197,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #197 = XOR8rm
  { 198,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #198 = XOR8rm_POST
  { 199,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #199 = XOR8rr
  { 200,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #200 = ZEXT16r
};

extern const char MSP430InstrNameData[] = {
  /* 0 */ 'S', 'H', 'L', '1', '6', 'r', '1', 0,
  /* 8 */ 'S', 'A', 'R', '1', '6', 'r', '1', 0,
  /* 16 */ 'S', 'H', 'L', '8', 'r', '1', 0,
  /* 23 */ 'S', 'A', 'R', '8', 'r', '1', 0,
  /* 30 */ 'S', 'r', 'a', '1', '6', 0,
  /* 36 */ 'S', 'h', 'l', '1', '6', 0,
  /* 42 */ 'S', 'r', 'l', '1', '6', 0,
  /* 48 */ 'S', 'e', 'l', 'e', 'c', 't', '1', '6', 0,
  /* 57 */ 'S', 'r', 'a', '8', 0,
  /* 62 */ 'S', 'h', 'l', '8', 0,
  /* 67 */ 'S', 'r', 'l', '8', 0,
  /* 72 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'm', '8', 0,
  /* 83 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'r', '8', 0,
  /* 94 */ 'S', 'e', 'l', 'e', 'c', 't', '8', 0,
  /* 102 */ 'J', 'C', 'C', 0,
  /* 106 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 112 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 125 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 142 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 155 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 162 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 175 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 185 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 198 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 213 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 227 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 241 */ 'P', 'H', 'I', 0,
  /* 245 */ 'R', 'E', 'T', 'I', 0,
  /* 250 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 259 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 268 */ 'K', 'I', 'L', 'L', 0,
  /* 273 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 283 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 299 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 316 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 325 */ 'J', 'M', 'P', 0,
  /* 329 */ 'N', 'O', 'P', 0,
  /* 333 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'L', 'O', 'A', 'D', '_', 'O', 'P', 0,
  /* 350 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 363 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 378 */ 'G', '_', 'B', 'R', 0,
  /* 383 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 408 */ 'G', '_', 'O', 'R', 0,
  /* 413 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 430 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 444 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 455 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 466 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 481 */ 'S', 'U', 'B', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 494 */ 'A', 'D', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 507 */ 'A', 'N', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 520 */ 'X', 'O', 'R', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 533 */ 'M', 'O', 'V', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 546 */ 'S', 'U', 'B', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 558 */ 'A', 'D', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 570 */ 'A', 'N', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 582 */ 'X', 'O', 'R', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 594 */ 'M', 'O', 'V', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 606 */ 'C', 'O', 'P', 'Y', 0,
  /* 611 */ 'S', 'A', 'R', '1', '6', 'r', '1', 'c', 0,
  /* 620 */ 'S', 'A', 'R', '8', 'r', '1', 'c', 0,
  /* 628 */ 'B', 'i', 0,
  /* 631 */ 'C', 'A', 'L', 'L', 'i', 0,
  /* 637 */ 'S', 'U', 'B', '1', '6', 'm', 'i', 0,
  /* 645 */ 'S', 'B', 'C', '1', '6', 'm', 'i', 0,
  /* 653 */ 'A', 'D', 'C', '1', '6', 'm', 'i', 0,
  /* 661 */ 'A', 'D', 'D', '1', '6', 'm', 'i', 0,
  /* 669 */ 'A', 'N', 'D', '1', '6', 'm', 'i', 0,
  /* 677 */ 'C', 'M', 'P', '1', '6', 'm', 'i', 0,
  /* 685 */ 'X', 'O', 'R', '1', '6', 'm', 'i', 0,
  /* 693 */ 'B', 'I', 'T', '1', '6', 'm', 'i', 0,
  /* 701 */ 'M', 'O', 'V', '1', '6', 'm', 'i', 0,
  /* 709 */ 'S', 'U', 'B', '8', 'm', 'i', 0,
  /* 716 */ 'S', 'B', 'C', '8', 'm', 'i', 0,
  /* 723 */ 'A', 'D', 'C', '8', 'm', 'i', 0,
  /* 730 */ 'A', 'D', 'D', '8', 'm', 'i', 0,
  /* 737 */ 'A', 'N', 'D', '8', 'm', 'i', 0,
  /* 744 */ 'C', 'M', 'P', '8', 'm', 'i', 0,
  /* 751 */ 'X', 'O', 'R', '8', 'm', 'i', 0,
  /* 758 */ 'B', 'I', 'T', '8', 'm', 'i', 0,
  /* 765 */ 'M', 'O', 'V', '8', 'm', 'i', 0,
  /* 772 */ 'S', 'U', 'B', '1', '6', 'r', 'i', 0,
  /* 780 */ 'S', 'B', 'C', '1', '6', 'r', 'i', 0,
  /* 788 */ 'A', 'D', 'C', '1', '6', 'r', 'i', 0,
  /* 796 */ 'A', 'D', 'D', '1', '6', 'r', 'i', 0,
  /* 804 */ 'A', 'N', 'D', '1', '6', 'r', 'i', 0,
  /* 812 */ 'C', 'M', 'P', '1', '6', 'r', 'i', 0,
  /* 820 */ 'X', 'O', 'R', '1', '6', 'r', 'i', 0,
  /* 828 */ 'B', 'I', 'T', '1', '6', 'r', 'i', 0,
  /* 836 */ 'M', 'O', 'V', '1', '6', 'r', 'i', 0,
  /* 844 */ 'S', 'U', 'B', '8', 'r', 'i', 0,
  /* 851 */ 'S', 'B', 'C', '8', 'r', 'i', 0,
  /* 858 */ 'A', 'D', 'C', '8', 'r', 'i', 0,
  /* 865 */ 'A', 'D', 'D', '8', 'r', 'i', 0,
  /* 872 */ 'A', 'N', 'D', '8', 'r', 'i', 0,
  /* 879 */ 'C', 'M', 'P', '8', 'r', 'i', 0,
  /* 886 */ 'X', 'O', 'R', '8', 'r', 'i', 0,
  /* 893 */ 'B', 'I', 'T', '8', 'r', 'i', 0,
  /* 900 */ 'M', 'O', 'V', '8', 'r', 'i', 0,
  /* 907 */ 'B', 'm', 0,
  /* 910 */ 'C', 'A', 'L', 'L', 'm', 0,
  /* 916 */ 'S', 'U', 'B', '1', '6', 'm', 'm', 0,
  /* 924 */ 'S', 'B', 'C', '1', '6', 'm', 'm', 0,
  /* 932 */ 'A', 'D', 'C', '1', '6', 'm', 'm', 0,
  /* 940 */ 'B', 'I', 'C', '1', '6', 'm', 'm', 0,
  /* 948 */ 'A', 'D', 'D', '1', '6', 'm', 'm', 0,
  /* 956 */ 'A', 'N', 'D', '1', '6', 'm', 'm', 0,
  /* 964 */ 'X', 'O', 'R', '1', '6', 'm', 'm', 0,
  /* 972 */ 'B', 'I', 'T', '1', '6', 'm', 'm', 0,
  /* 980 */ 'M', 'O', 'V', '1', '6', 'm', 'm', 0,
  /* 988 */ 'S', 'U', 'B', '8', 'm', 'm', 0,
  /* 995 */ 'S', 'B', 'C', '8', 'm', 'm', 0,
  /* 1002 */ 'A', 'D', 'C', '8', 'm', 'm', 0,
  /* 1009 */ 'B', 'I', 'C', '8', 'm', 'm', 0,
  /* 1016 */ 'A', 'D', 'D', '8', 'm', 'm', 0,
  /* 1023 */ 'A', 'N', 'D', '8', 'm', 'm', 0,
  /* 1030 */ 'X', 'O', 'R', '8', 'm', 'm', 0,
  /* 1037 */ 'B', 'I', 'T', '8', 'm', 'm', 0,
  /* 1044 */ 'M', 'O', 'V', '8', 'm', 'm', 0,
  /* 1051 */ 'S', 'U', 'B', '1', '6', 'r', 'm', 0,
  /* 1059 */ 'S', 'B', 'C', '1', '6', 'r', 'm', 0,
  /* 1067 */ 'A', 'D', 'C', '1', '6', 'r', 'm', 0,
  /* 1075 */ 'B', 'I', 'C', '1', '6', 'r', 'm', 0,
  /* 1083 */ 'A', 'D', 'D', '1', '6', 'r', 'm', 0,
  /* 1091 */ 'A', 'N', 'D', '1', '6', 'r', 'm', 0,
  /* 1099 */ 'C', 'M', 'P', '1', '6', 'r', 'm', 0,
  /* 1107 */ 'X', 'O', 'R', '1', '6', 'r', 'm', 0,
  /* 1115 */ 'B', 'I', 'T', '1', '6', 'r', 'm', 0,
  /* 1123 */ 'M', 'O', 'V', '1', '6', 'r', 'm', 0,
  /* 1131 */ 'S', 'U', 'B', '8', 'r', 'm', 0,
  /* 1138 */ 'S', 'B', 'C', '8', 'r', 'm', 0,
  /* 1145 */ 'A', 'D', 'C', '8', 'r', 'm', 0,
  /* 1152 */ 'B', 'I', 'C', '8', 'r', 'm', 0,
  /* 1159 */ 'A', 'D', 'D', '8', 'r', 'm', 0,
  /* 1166 */ 'A', 'N', 'D', '8', 'r', 'm', 0,
  /* 1173 */ 'C', 'M', 'P', '8', 'r', 'm', 0,
  /* 1180 */ 'X', 'O', 'R', '8', 'r', 'm', 0,
  /* 1187 */ 'B', 'I', 'T', '8', 'r', 'm', 0,
  /* 1194 */ 'M', 'O', 'V', '8', 'r', 'm', 0,
  /* 1201 */ 'S', 'W', 'P', 'B', '1', '6', 'r', 0,
  /* 1209 */ 'P', 'U', 'S', 'H', '1', '6', 'r', 0,
  /* 1217 */ 'P', 'O', 'P', '1', '6', 'r', 0,
  /* 1224 */ 'S', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 1232 */ 'Z', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 1240 */ 'B', 'r', 0,
  /* 1243 */ 'C', 'A', 'L', 'L', 'r', 0,
  /* 1249 */ 'S', 'U', 'B', '1', '6', 'm', 'r', 0,
  /* 1257 */ 'S', 'B', 'C', '1', '6', 'm', 'r', 0,
  /* 1265 */ 'A', 'D', 'C', '1', '6', 'm', 'r', 0,
  /* 1273 */ 'B', 'I', 'C', '1', '6', 'm', 'r', 0,
  /* 1281 */ 'A', 'D', 'D', '1', '6', 'm', 'r', 0,
  /* 1289 */ 'A', 'N', 'D', '1', '6', 'm', 'r', 0,
  /* 1297 */ 'C', 'M', 'P', '1', '6', 'm', 'r', 0,
  /* 1305 */ 'X', 'O', 'R', '1', '6', 'm', 'r', 0,
  /* 1313 */ 'B', 'I', 'T', '1', '6', 'm', 'r', 0,
  /* 1321 */ 'M', 'O', 'V', '1', '6', 'm', 'r', 0,
  /* 1329 */ 'S', 'U', 'B', '8', 'm', 'r', 0,
  /* 1336 */ 'S', 'B', 'C', '8', 'm', 'r', 0,
  /* 1343 */ 'A', 'D', 'C', '8', 'm', 'r', 0,
  /* 1350 */ 'B', 'I', 'C', '8', 'm', 'r', 0,
  /* 1357 */ 'A', 'D', 'D', '8', 'm', 'r', 0,
  /* 1364 */ 'A', 'N', 'D', '8', 'm', 'r', 0,
  /* 1371 */ 'C', 'M', 'P', '8', 'm', 'r', 0,
  /* 1378 */ 'X', 'O', 'R', '8', 'm', 'r', 0,
  /* 1385 */ 'B', 'I', 'T', '8', 'm', 'r', 0,
  /* 1392 */ 'M', 'O', 'V', '8', 'm', 'r', 0,
  /* 1399 */ 'S', 'U', 'B', '1', '6', 'r', 'r', 0,
  /* 1407 */ 'S', 'B', 'C', '1', '6', 'r', 'r', 0,
  /* 1415 */ 'A', 'D', 'C', '1', '6', 'r', 'r', 0,
  /* 1423 */ 'B', 'I', 'C', '1', '6', 'r', 'r', 0,
  /* 1431 */ 'A', 'D', 'D', '1', '6', 'r', 'r', 0,
  /* 1439 */ 'A', 'N', 'D', '1', '6', 'r', 'r', 0,
  /* 1447 */ 'C', 'M', 'P', '1', '6', 'r', 'r', 0,
  /* 1455 */ 'X', 'O', 'R', '1', '6', 'r', 'r', 0,
  /* 1463 */ 'B', 'I', 'T', '1', '6', 'r', 'r', 0,
  /* 1471 */ 'M', 'O', 'V', '1', '6', 'r', 'r', 0,
  /* 1479 */ 'S', 'U', 'B', '8', 'r', 'r', 0,
  /* 1486 */ 'S', 'B', 'C', '8', 'r', 'r', 0,
  /* 1493 */ 'A', 'D', 'C', '8', 'r', 'r', 0,
  /* 1500 */ 'B', 'I', 'C', '8', 'r', 'r', 0,
  /* 1507 */ 'A', 'D', 'D', '8', 'r', 'r', 0,
  /* 1514 */ 'A', 'N', 'D', '8', 'r', 'r', 0,
  /* 1521 */ 'C', 'M', 'P', '8', 'r', 'r', 0,
  /* 1528 */ 'X', 'O', 'R', '8', 'r', 'r', 0,
  /* 1535 */ 'B', 'I', 'T', '8', 'r', 'r', 0,
  /* 1542 */ 'M', 'O', 'V', '8', 'r', 'r', 0,
};

extern const unsigned MSP430InstrNameIndices[] = {
    241U, 273U, 283U, 259U, 250U, 268U, 198U, 213U, 
    185U, 227U, 413U, 175U, 142U, 606U, 155U, 466U, 
    112U, 316U, 455U, 125U, 444U, 162U, 333U, 350U, 
    383U, 430U, 106U, 408U, 378U, 653U, 932U, 1265U, 
    788U, 1067U, 1415U, 723U, 1002U, 1343U, 858U, 1145U, 
    1493U, 661U, 948U, 1281U, 796U, 1083U, 494U, 1431U, 
    730U, 1016U, 1357U, 865U, 1159U, 558U, 1507U, 299U, 
    363U, 669U, 956U, 1289U, 804U, 1091U, 507U, 1439U, 
    737U, 1023U, 1364U, 872U, 1166U, 570U, 1514U, 940U, 
    1273U, 1075U, 1423U, 1009U, 1350U, 1152U, 1500U, 693U, 
    972U, 1313U, 828U, 1115U, 1463U, 758U, 1037U, 1385U, 
    893U, 1187U, 1535U, 628U, 907U, 1240U, 631U, 910U, 
    1243U, 677U, 1297U, 812U, 1099U, 1447U, 744U, 1371U, 
    879U, 1173U, 1521U, 102U, 325U, 701U, 980U, 1321U, 
    836U, 1123U, 533U, 1471U, 765U, 1044U, 1392U, 900U, 
    1194U, 594U, 1542U, 72U, 83U, 329U, 686U, 965U, 
    1306U, 821U, 1108U, 521U, 1456U, 752U, 1031U, 1379U, 
    887U, 1181U, 583U, 1529U, 1217U, 1209U, 440U, 245U, 
    8U, 611U, 23U, 620U, 645U, 924U, 1257U, 780U, 
    1059U, 1407U, 716U, 995U, 1336U, 851U, 1138U, 1486U, 
    1224U, 0U, 16U, 637U, 916U, 1249U, 772U, 1051U, 
    481U, 1399U, 709U, 988U, 1329U, 844U, 1131U, 546U, 
    1479U, 1201U, 48U, 94U, 36U, 62U, 30U, 57U, 
    42U, 67U, 685U, 964U, 1305U, 820U, 1107U, 520U, 
    1455U, 751U, 1030U, 1378U, 886U, 1180U, 582U, 1528U, 
    1232U, 
};

static inline void InitMSP430MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 201);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MSP430GenInstrInfo : public TargetInstrInfo {
  explicit MSP430GenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~MSP430GenInstrInfo() override {}
};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MSP430Insts[];
extern const unsigned MSP430InstrNameIndices[];
extern const char MSP430InstrNameData[];
MSP430GenInstrInfo::MSP430GenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 201);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace MSP430 {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace MSP430 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace MSP430 {
namespace OpTypes {
enum OperandType {
  cc = 0,
  f32imm = 1,
  f64imm = 2,
  i16imm = 3,
  i1imm = 4,
  i32imm = 5,
  i64imm = 6,
  i8imm = 7,
  jmptarget = 8,
  memdst = 9,
  memsrc = 10,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

