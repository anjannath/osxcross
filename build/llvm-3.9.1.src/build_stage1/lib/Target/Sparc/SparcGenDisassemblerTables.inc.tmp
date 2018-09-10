/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Sparc Disassembler                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTableSparc32[] = {
/* 0 */       MCD::OPC_ExtractField, 30, 2,  // Inst{31-30} ...
/* 3 */       MCD::OPC_FilterValue, 0, 34, 2, // Skip to: 553
/* 7 */       MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 10 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 24
/* 14 */      MCD::OPC_CheckField, 25, 5, 0, 181, 26, // Skip to: 6857
/* 20 */      MCD::OPC_Decode, 141, 4, 0, // Opcode: UNIMP
/* 24 */      MCD::OPC_FilterValue, 1, 103, 0, // Skip to: 131
/* 28 */      MCD::OPC_ExtractField, 19, 3,  // Inst{21-19} ...
/* 31 */      MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 60
/* 35 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 38 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 49
/* 42 */      MCD::OPC_CheckPredicate, 0, 155, 26, // Skip to: 6857
/* 46 */      MCD::OPC_Decode, 80, 1, // Opcode: BPICCNT
/* 49 */      MCD::OPC_FilterValue, 1, 148, 26, // Skip to: 6857
/* 53 */      MCD::OPC_CheckPredicate, 0, 144, 26, // Skip to: 6857
/* 57 */      MCD::OPC_Decode, 79, 1, // Opcode: BPICCANT
/* 60 */      MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 89
/* 64 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 67 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 78
/* 71 */      MCD::OPC_CheckPredicate, 0, 126, 26, // Skip to: 6857
/* 75 */      MCD::OPC_Decode, 77, 1, // Opcode: BPICC
/* 78 */      MCD::OPC_FilterValue, 1, 119, 26, // Skip to: 6857
/* 82 */      MCD::OPC_CheckPredicate, 0, 115, 26, // Skip to: 6857
/* 86 */      MCD::OPC_Decode, 78, 1, // Opcode: BPICCA
/* 89 */      MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 110
/* 93 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 96 */      MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 103
/* 100 */     MCD::OPC_Decode, 96, 1, // Opcode: BPXCCNT
/* 103 */     MCD::OPC_FilterValue, 1, 94, 26, // Skip to: 6857
/* 107 */     MCD::OPC_Decode, 95, 1, // Opcode: BPXCCANT
/* 110 */     MCD::OPC_FilterValue, 5, 87, 26, // Skip to: 6857
/* 114 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 117 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 124
/* 121 */     MCD::OPC_Decode, 93, 1, // Opcode: BPXCC
/* 124 */     MCD::OPC_FilterValue, 1, 73, 26, // Skip to: 6857
/* 128 */     MCD::OPC_Decode, 94, 1, // Opcode: BPXCCA
/* 131 */     MCD::OPC_FilterValue, 2, 26, 0, // Skip to: 161
/* 135 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 138 */     MCD::OPC_FilterValue, 0, 12, 0, // Skip to: 154
/* 142 */     MCD::OPC_CheckField, 25, 4, 8, 3, 0, // Skip to: 151
/* 148 */     MCD::OPC_Decode, 59, 0, // Opcode: BA
/* 151 */     MCD::OPC_Decode, 60, 2, // Opcode: BCOND
/* 154 */     MCD::OPC_FilterValue, 1, 43, 26, // Skip to: 6857
/* 158 */     MCD::OPC_Decode, 61, 2, // Opcode: BCONDA
/* 161 */     MCD::OPC_FilterValue, 3, 255, 0, // Skip to: 420
/* 165 */     MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 168 */     MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 189
/* 172 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 175 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 182
/* 179 */     MCD::OPC_Decode, 99, 3, // Opcode: BPZnapn
/* 182 */     MCD::OPC_FilterValue, 1, 15, 26, // Skip to: 6857
/* 186 */     MCD::OPC_Decode, 100, 3, // Opcode: BPZnapt
/* 189 */     MCD::OPC_FilterValue, 2, 17, 0, // Skip to: 210
/* 193 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 196 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 203
/* 200 */     MCD::OPC_Decode, 83, 3, // Opcode: BPLEZnapn
/* 203 */     MCD::OPC_FilterValue, 1, 250, 25, // Skip to: 6857
/* 207 */     MCD::OPC_Decode, 84, 3, // Opcode: BPLEZnapt
/* 210 */     MCD::OPC_FilterValue, 3, 17, 0, // Skip to: 231
/* 214 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 217 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 224
/* 221 */     MCD::OPC_Decode, 87, 3, // Opcode: BPLZnapn
/* 224 */     MCD::OPC_FilterValue, 1, 229, 25, // Skip to: 6857
/* 228 */     MCD::OPC_Decode, 88, 3, // Opcode: BPLZnapt
/* 231 */     MCD::OPC_FilterValue, 5, 17, 0, // Skip to: 252
/* 235 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 238 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 245
/* 242 */     MCD::OPC_Decode, 91, 3, // Opcode: BPNZnapn
/* 245 */     MCD::OPC_FilterValue, 1, 208, 25, // Skip to: 6857
/* 249 */     MCD::OPC_Decode, 92, 3, // Opcode: BPNZnapt
/* 252 */     MCD::OPC_FilterValue, 6, 17, 0, // Skip to: 273
/* 256 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 259 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 266
/* 263 */     MCD::OPC_Decode, 75, 3, // Opcode: BPGZnapn
/* 266 */     MCD::OPC_FilterValue, 1, 187, 25, // Skip to: 6857
/* 270 */     MCD::OPC_Decode, 76, 3, // Opcode: BPGZnapt
/* 273 */     MCD::OPC_FilterValue, 7, 17, 0, // Skip to: 294
/* 277 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 280 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 287
/* 284 */     MCD::OPC_Decode, 71, 3, // Opcode: BPGEZnapn
/* 287 */     MCD::OPC_FilterValue, 1, 166, 25, // Skip to: 6857
/* 291 */     MCD::OPC_Decode, 72, 3, // Opcode: BPGEZnapt
/* 294 */     MCD::OPC_FilterValue, 17, 17, 0, // Skip to: 315
/* 298 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 301 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 308
/* 305 */     MCD::OPC_Decode, 97, 3, // Opcode: BPZapn
/* 308 */     MCD::OPC_FilterValue, 1, 145, 25, // Skip to: 6857
/* 312 */     MCD::OPC_Decode, 98, 3, // Opcode: BPZapt
/* 315 */     MCD::OPC_FilterValue, 18, 17, 0, // Skip to: 336
/* 319 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 322 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 329
/* 326 */     MCD::OPC_Decode, 81, 3, // Opcode: BPLEZapn
/* 329 */     MCD::OPC_FilterValue, 1, 124, 25, // Skip to: 6857
/* 333 */     MCD::OPC_Decode, 82, 3, // Opcode: BPLEZapt
/* 336 */     MCD::OPC_FilterValue, 19, 17, 0, // Skip to: 357
/* 340 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 343 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 350
/* 347 */     MCD::OPC_Decode, 85, 3, // Opcode: BPLZapn
/* 350 */     MCD::OPC_FilterValue, 1, 103, 25, // Skip to: 6857
/* 354 */     MCD::OPC_Decode, 86, 3, // Opcode: BPLZapt
/* 357 */     MCD::OPC_FilterValue, 21, 17, 0, // Skip to: 378
/* 361 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 364 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 371
/* 368 */     MCD::OPC_Decode, 89, 3, // Opcode: BPNZapn
/* 371 */     MCD::OPC_FilterValue, 1, 82, 25, // Skip to: 6857
/* 375 */     MCD::OPC_Decode, 90, 3, // Opcode: BPNZapt
/* 378 */     MCD::OPC_FilterValue, 22, 17, 0, // Skip to: 399
/* 382 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 385 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 392
/* 389 */     MCD::OPC_Decode, 73, 3, // Opcode: BPGZapn
/* 392 */     MCD::OPC_FilterValue, 1, 61, 25, // Skip to: 6857
/* 396 */     MCD::OPC_Decode, 74, 3, // Opcode: BPGZapt
/* 399 */     MCD::OPC_FilterValue, 23, 54, 25, // Skip to: 6857
/* 403 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 406 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 413
/* 410 */     MCD::OPC_Decode, 69, 3, // Opcode: BPGEZapn
/* 413 */     MCD::OPC_FilterValue, 1, 40, 25, // Skip to: 6857
/* 417 */     MCD::OPC_Decode, 70, 3, // Opcode: BPGEZapt
/* 420 */     MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 444
/* 424 */     MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 440
/* 430 */     MCD::OPC_CheckField, 0, 22, 0, 4, 0, // Skip to: 440
/* 436 */     MCD::OPC_Decode, 247, 2, 4, // Opcode: NOP
/* 440 */     MCD::OPC_Decode, 163, 3, 5, // Opcode: SETHIi
/* 444 */     MCD::OPC_FilterValue, 5, 61, 0, // Skip to: 509
/* 448 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 451 */     MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 480
/* 455 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 458 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 469
/* 462 */     MCD::OPC_CheckPredicate, 0, 247, 24, // Skip to: 6857
/* 466 */     MCD::OPC_Decode, 68, 6, // Opcode: BPFCCNT
/* 469 */     MCD::OPC_FilterValue, 1, 240, 24, // Skip to: 6857
/* 473 */     MCD::OPC_CheckPredicate, 0, 236, 24, // Skip to: 6857
/* 477 */     MCD::OPC_Decode, 67, 6, // Opcode: BPFCCANT
/* 480 */     MCD::OPC_FilterValue, 1, 229, 24, // Skip to: 6857
/* 484 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 487 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 498
/* 491 */     MCD::OPC_CheckPredicate, 0, 218, 24, // Skip to: 6857
/* 495 */     MCD::OPC_Decode, 65, 6, // Opcode: BPFCC
/* 498 */     MCD::OPC_FilterValue, 1, 211, 24, // Skip to: 6857
/* 502 */     MCD::OPC_CheckPredicate, 0, 207, 24, // Skip to: 6857
/* 506 */     MCD::OPC_Decode, 66, 6, // Opcode: BPFCCA
/* 509 */     MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 532
/* 513 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 516 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 524
/* 520 */     MCD::OPC_Decode, 145, 1, 2, // Opcode: FBCOND
/* 524 */     MCD::OPC_FilterValue, 1, 185, 24, // Skip to: 6857
/* 528 */     MCD::OPC_Decode, 146, 1, 2, // Opcode: FBCONDA
/* 532 */     MCD::OPC_FilterValue, 7, 177, 24, // Skip to: 6857
/* 536 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 539 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 546
/* 543 */     MCD::OPC_Decode, 109, 2, // Opcode: CBCOND
/* 546 */     MCD::OPC_FilterValue, 1, 163, 24, // Skip to: 6857
/* 550 */     MCD::OPC_Decode, 110, 2, // Opcode: CBCONDA
/* 553 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 560
/* 557 */     MCD::OPC_Decode, 102, 7, // Opcode: CALL
/* 560 */     MCD::OPC_FilterValue, 2, 115, 19, // Skip to: 5543
/* 564 */     MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 567 */     MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 594
/* 571 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 574 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 587
/* 578 */     MCD::OPC_CheckField, 5, 8, 0, 129, 24, // Skip to: 6857
/* 584 */     MCD::OPC_Decode, 40, 8, // Opcode: ADDrr
/* 587 */     MCD::OPC_FilterValue, 1, 122, 24, // Skip to: 6857
/* 591 */     MCD::OPC_Decode, 39, 9, // Opcode: ADDri
/* 594 */     MCD::OPC_FilterValue, 1, 23, 0, // Skip to: 621
/* 598 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 601 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 614
/* 605 */     MCD::OPC_CheckField, 5, 8, 0, 102, 24, // Skip to: 6857
/* 611 */     MCD::OPC_Decode, 55, 8, // Opcode: ANDrr
/* 614 */     MCD::OPC_FilterValue, 1, 95, 24, // Skip to: 6857
/* 618 */     MCD::OPC_Decode, 54, 9, // Opcode: ANDri
/* 621 */     MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 650
/* 625 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 628 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 642
/* 632 */     MCD::OPC_CheckField, 5, 8, 0, 75, 24, // Skip to: 6857
/* 638 */     MCD::OPC_Decode, 130, 3, 8, // Opcode: ORrr
/* 642 */     MCD::OPC_FilterValue, 1, 67, 24, // Skip to: 6857
/* 646 */     MCD::OPC_Decode, 129, 3, 9, // Opcode: ORri
/* 650 */     MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 679
/* 654 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 657 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 671
/* 661 */     MCD::OPC_CheckField, 5, 8, 0, 46, 24, // Skip to: 6857
/* 667 */     MCD::OPC_Decode, 175, 4, 8, // Opcode: XORrr
/* 671 */     MCD::OPC_FilterValue, 1, 38, 24, // Skip to: 6857
/* 675 */     MCD::OPC_Decode, 174, 4, 9, // Opcode: XORri
/* 679 */     MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 708
/* 683 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 686 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 700
/* 690 */     MCD::OPC_CheckField, 5, 8, 0, 17, 24, // Skip to: 6857
/* 696 */     MCD::OPC_Decode, 231, 3, 8, // Opcode: SUBrr
/* 700 */     MCD::OPC_FilterValue, 1, 9, 24, // Skip to: 6857
/* 704 */     MCD::OPC_Decode, 230, 3, 9, // Opcode: SUBri
/* 708 */     MCD::OPC_FilterValue, 5, 23, 0, // Skip to: 735
/* 712 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 715 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 728
/* 719 */     MCD::OPC_CheckField, 5, 8, 0, 244, 23, // Skip to: 6857
/* 725 */     MCD::OPC_Decode, 50, 8, // Opcode: ANDNrr
/* 728 */     MCD::OPC_FilterValue, 1, 237, 23, // Skip to: 6857
/* 732 */     MCD::OPC_Decode, 49, 9, // Opcode: ANDNri
/* 735 */     MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 764
/* 739 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 742 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 756
/* 746 */     MCD::OPC_CheckField, 5, 8, 0, 217, 23, // Skip to: 6857
/* 752 */     MCD::OPC_Decode, 253, 2, 8, // Opcode: ORNrr
/* 756 */     MCD::OPC_FilterValue, 1, 209, 23, // Skip to: 6857
/* 760 */     MCD::OPC_Decode, 252, 2, 9, // Opcode: ORNri
/* 764 */     MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 793
/* 768 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 771 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 785
/* 775 */     MCD::OPC_CheckField, 5, 8, 0, 188, 23, // Skip to: 6857
/* 781 */     MCD::OPC_Decode, 169, 4, 8, // Opcode: XNORrr
/* 785 */     MCD::OPC_FilterValue, 1, 180, 23, // Skip to: 6857
/* 789 */     MCD::OPC_Decode, 168, 4, 9, // Opcode: XNORri
/* 793 */     MCD::OPC_FilterValue, 8, 23, 0, // Skip to: 820
/* 797 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 800 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 813
/* 804 */     MCD::OPC_CheckField, 5, 8, 0, 159, 23, // Skip to: 6857
/* 810 */     MCD::OPC_Decode, 32, 8, // Opcode: ADDCrr
/* 813 */     MCD::OPC_FilterValue, 1, 152, 23, // Skip to: 6857
/* 817 */     MCD::OPC_Decode, 31, 9, // Opcode: ADDCri
/* 820 */     MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 849
/* 824 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 827 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 841
/* 831 */     MCD::OPC_CheckField, 5, 8, 0, 132, 23, // Skip to: 6857
/* 837 */     MCD::OPC_Decode, 246, 2, 10, // Opcode: MULXrr
/* 841 */     MCD::OPC_FilterValue, 1, 124, 23, // Skip to: 6857
/* 845 */     MCD::OPC_Decode, 245, 2, 11, // Opcode: MULXri
/* 849 */     MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 878
/* 853 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 856 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 870
/* 860 */     MCD::OPC_CheckField, 5, 8, 0, 103, 23, // Skip to: 6857
/* 866 */     MCD::OPC_Decode, 140, 4, 8, // Opcode: UMULrr
/* 870 */     MCD::OPC_FilterValue, 1, 95, 23, // Skip to: 6857
/* 874 */     MCD::OPC_Decode, 139, 4, 9, // Opcode: UMULri
/* 878 */     MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 907
/* 882 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 885 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 899
/* 889 */     MCD::OPC_CheckField, 5, 8, 0, 74, 23, // Skip to: 6857
/* 895 */     MCD::OPC_Decode, 175, 3, 8, // Opcode: SMULrr
/* 899 */     MCD::OPC_FilterValue, 1, 66, 23, // Skip to: 6857
/* 903 */     MCD::OPC_Decode, 174, 3, 9, // Opcode: SMULri
/* 907 */     MCD::OPC_FilterValue, 12, 25, 0, // Skip to: 936
/* 911 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 914 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 928
/* 918 */     MCD::OPC_CheckField, 5, 8, 0, 45, 23, // Skip to: 6857
/* 924 */     MCD::OPC_Decode, 225, 3, 8, // Opcode: SUBCrr
/* 928 */     MCD::OPC_FilterValue, 1, 37, 23, // Skip to: 6857
/* 932 */     MCD::OPC_Decode, 224, 3, 9, // Opcode: SUBCri
/* 936 */     MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 965
/* 940 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 943 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 957
/* 947 */     MCD::OPC_CheckField, 5, 8, 0, 16, 23, // Skip to: 6857
/* 953 */     MCD::OPC_Decode, 131, 4, 10, // Opcode: UDIVXrr
/* 957 */     MCD::OPC_FilterValue, 1, 8, 23, // Skip to: 6857
/* 961 */     MCD::OPC_Decode, 130, 4, 11, // Opcode: UDIVXri
/* 965 */     MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 994
/* 969 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 972 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 986
/* 976 */     MCD::OPC_CheckField, 5, 8, 0, 243, 22, // Skip to: 6857
/* 982 */     MCD::OPC_Decode, 133, 4, 8, // Opcode: UDIVrr
/* 986 */     MCD::OPC_FilterValue, 1, 235, 22, // Skip to: 6857
/* 990 */     MCD::OPC_Decode, 132, 4, 9, // Opcode: UDIVri
/* 994 */     MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 1023
/* 998 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1001 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1015
/* 1005 */    MCD::OPC_CheckField, 5, 8, 0, 214, 22, // Skip to: 6857
/* 1011 */    MCD::OPC_Decode, 152, 3, 8, // Opcode: SDIVrr
/* 1015 */    MCD::OPC_FilterValue, 1, 206, 22, // Skip to: 6857
/* 1019 */    MCD::OPC_Decode, 151, 3, 9, // Opcode: SDIVri
/* 1023 */    MCD::OPC_FilterValue, 16, 23, 0, // Skip to: 1050
/* 1027 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1030 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1043
/* 1034 */    MCD::OPC_CheckField, 5, 8, 0, 185, 22, // Skip to: 6857
/* 1040 */    MCD::OPC_Decode, 30, 8, // Opcode: ADDCCrr
/* 1043 */    MCD::OPC_FilterValue, 1, 178, 22, // Skip to: 6857
/* 1047 */    MCD::OPC_Decode, 29, 9, // Opcode: ADDCCri
/* 1050 */    MCD::OPC_FilterValue, 17, 23, 0, // Skip to: 1077
/* 1054 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1057 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1070
/* 1061 */    MCD::OPC_CheckField, 5, 8, 0, 158, 22, // Skip to: 6857
/* 1067 */    MCD::OPC_Decode, 46, 8, // Opcode: ANDCCrr
/* 1070 */    MCD::OPC_FilterValue, 1, 151, 22, // Skip to: 6857
/* 1074 */    MCD::OPC_Decode, 45, 9, // Opcode: ANDCCri
/* 1077 */    MCD::OPC_FilterValue, 18, 25, 0, // Skip to: 1106
/* 1081 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1084 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1098
/* 1088 */    MCD::OPC_CheckField, 5, 8, 0, 131, 22, // Skip to: 6857
/* 1094 */    MCD::OPC_Decode, 249, 2, 8, // Opcode: ORCCrr
/* 1098 */    MCD::OPC_FilterValue, 1, 123, 22, // Skip to: 6857
/* 1102 */    MCD::OPC_Decode, 248, 2, 9, // Opcode: ORCCri
/* 1106 */    MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 1135
/* 1110 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1113 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1127
/* 1117 */    MCD::OPC_CheckField, 5, 8, 0, 102, 22, // Skip to: 6857
/* 1123 */    MCD::OPC_Decode, 171, 4, 8, // Opcode: XORCCrr
/* 1127 */    MCD::OPC_FilterValue, 1, 94, 22, // Skip to: 6857
/* 1131 */    MCD::OPC_Decode, 170, 4, 9, // Opcode: XORCCri
/* 1135 */    MCD::OPC_FilterValue, 20, 44, 0, // Skip to: 1183
/* 1139 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1142 */    MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 1166
/* 1146 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 1149 */    MCD::OPC_FilterValue, 0, 72, 22, // Skip to: 6857
/* 1153 */    MCD::OPC_CheckField, 25, 5, 0, 3, 0, // Skip to: 1162
/* 1159 */    MCD::OPC_Decode, 115, 12, // Opcode: CMPrr
/* 1162 */    MCD::OPC_Decode, 223, 3, 8, // Opcode: SUBCCrr
/* 1166 */    MCD::OPC_FilterValue, 1, 55, 22, // Skip to: 6857
/* 1170 */    MCD::OPC_CheckField, 25, 5, 0, 3, 0, // Skip to: 1179
/* 1176 */    MCD::OPC_Decode, 114, 13, // Opcode: CMPri
/* 1179 */    MCD::OPC_Decode, 222, 3, 9, // Opcode: SUBCCri
/* 1183 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1210
/* 1187 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1190 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1203
/* 1194 */    MCD::OPC_CheckField, 5, 8, 0, 25, 22, // Skip to: 6857
/* 1200 */    MCD::OPC_Decode, 48, 8, // Opcode: ANDNCCrr
/* 1203 */    MCD::OPC_FilterValue, 1, 18, 22, // Skip to: 6857
/* 1207 */    MCD::OPC_Decode, 47, 9, // Opcode: ANDNCCri
/* 1210 */    MCD::OPC_FilterValue, 22, 25, 0, // Skip to: 1239
/* 1214 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1217 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1231
/* 1221 */    MCD::OPC_CheckField, 5, 8, 0, 254, 21, // Skip to: 6857
/* 1227 */    MCD::OPC_Decode, 251, 2, 8, // Opcode: ORNCCrr
/* 1231 */    MCD::OPC_FilterValue, 1, 246, 21, // Skip to: 6857
/* 1235 */    MCD::OPC_Decode, 250, 2, 9, // Opcode: ORNCCri
/* 1239 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 1268
/* 1243 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1246 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1260
/* 1250 */    MCD::OPC_CheckField, 5, 8, 0, 225, 21, // Skip to: 6857
/* 1256 */    MCD::OPC_Decode, 166, 4, 8, // Opcode: XNORCCrr
/* 1260 */    MCD::OPC_FilterValue, 1, 217, 21, // Skip to: 6857
/* 1264 */    MCD::OPC_Decode, 165, 4, 9, // Opcode: XNORCCri
/* 1268 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1295
/* 1272 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1275 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1288
/* 1279 */    MCD::OPC_CheckField, 5, 8, 0, 196, 21, // Skip to: 6857
/* 1285 */    MCD::OPC_Decode, 34, 8, // Opcode: ADDErr
/* 1288 */    MCD::OPC_FilterValue, 1, 189, 21, // Skip to: 6857
/* 1292 */    MCD::OPC_Decode, 33, 9, // Opcode: ADDEri
/* 1295 */    MCD::OPC_FilterValue, 26, 25, 0, // Skip to: 1324
/* 1299 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1302 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1316
/* 1306 */    MCD::OPC_CheckField, 5, 8, 0, 169, 21, // Skip to: 6857
/* 1312 */    MCD::OPC_Decode, 137, 4, 8, // Opcode: UMULCCrr
/* 1316 */    MCD::OPC_FilterValue, 1, 161, 21, // Skip to: 6857
/* 1320 */    MCD::OPC_Decode, 136, 4, 9, // Opcode: UMULCCri
/* 1324 */    MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 1353
/* 1328 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1331 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1345
/* 1335 */    MCD::OPC_CheckField, 5, 8, 0, 140, 21, // Skip to: 6857
/* 1341 */    MCD::OPC_Decode, 173, 3, 8, // Opcode: SMULCCrr
/* 1345 */    MCD::OPC_FilterValue, 1, 132, 21, // Skip to: 6857
/* 1349 */    MCD::OPC_Decode, 172, 3, 9, // Opcode: SMULCCri
/* 1353 */    MCD::OPC_FilterValue, 28, 25, 0, // Skip to: 1382
/* 1357 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1360 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1374
/* 1364 */    MCD::OPC_CheckField, 5, 8, 0, 111, 21, // Skip to: 6857
/* 1370 */    MCD::OPC_Decode, 227, 3, 8, // Opcode: SUBErr
/* 1374 */    MCD::OPC_FilterValue, 1, 103, 21, // Skip to: 6857
/* 1378 */    MCD::OPC_Decode, 226, 3, 9, // Opcode: SUBEri
/* 1382 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 1411
/* 1386 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1389 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1403
/* 1393 */    MCD::OPC_CheckField, 5, 8, 0, 82, 21, // Skip to: 6857
/* 1399 */    MCD::OPC_Decode, 129, 4, 8, // Opcode: UDIVCCrr
/* 1403 */    MCD::OPC_FilterValue, 1, 74, 21, // Skip to: 6857
/* 1407 */    MCD::OPC_Decode, 128, 4, 9, // Opcode: UDIVCCri
/* 1411 */    MCD::OPC_FilterValue, 31, 25, 0, // Skip to: 1440
/* 1415 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1418 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1432
/* 1422 */    MCD::OPC_CheckField, 5, 8, 0, 53, 21, // Skip to: 6857
/* 1428 */    MCD::OPC_Decode, 148, 3, 8, // Opcode: SDIVCCrr
/* 1432 */    MCD::OPC_FilterValue, 1, 45, 21, // Skip to: 6857
/* 1436 */    MCD::OPC_Decode, 147, 3, 9, // Opcode: SDIVCCri
/* 1440 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 1469
/* 1444 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1447 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1461
/* 1451 */    MCD::OPC_CheckField, 5, 8, 0, 24, 21, // Skip to: 6857
/* 1457 */    MCD::OPC_Decode, 240, 3, 8, // Opcode: TADDCCrr
/* 1461 */    MCD::OPC_FilterValue, 1, 16, 21, // Skip to: 6857
/* 1465 */    MCD::OPC_Decode, 239, 3, 9, // Opcode: TADDCCri
/* 1469 */    MCD::OPC_FilterValue, 33, 25, 0, // Skip to: 1498
/* 1473 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1476 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1490
/* 1480 */    MCD::OPC_CheckField, 5, 8, 0, 251, 20, // Skip to: 6857
/* 1486 */    MCD::OPC_Decode, 253, 3, 8, // Opcode: TSUBCCrr
/* 1490 */    MCD::OPC_FilterValue, 1, 243, 20, // Skip to: 6857
/* 1494 */    MCD::OPC_Decode, 252, 3, 9, // Opcode: TSUBCCri
/* 1498 */    MCD::OPC_FilterValue, 34, 25, 0, // Skip to: 1527
/* 1502 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1505 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1519
/* 1509 */    MCD::OPC_CheckField, 5, 8, 0, 222, 20, // Skip to: 6857
/* 1515 */    MCD::OPC_Decode, 238, 3, 8, // Opcode: TADDCCTVrr
/* 1519 */    MCD::OPC_FilterValue, 1, 214, 20, // Skip to: 6857
/* 1523 */    MCD::OPC_Decode, 237, 3, 9, // Opcode: TADDCCTVri
/* 1527 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 1556
/* 1531 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1534 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1548
/* 1538 */    MCD::OPC_CheckField, 5, 8, 0, 193, 20, // Skip to: 6857
/* 1544 */    MCD::OPC_Decode, 251, 3, 8, // Opcode: TSUBCCTVrr
/* 1548 */    MCD::OPC_FilterValue, 1, 185, 20, // Skip to: 6857
/* 1552 */    MCD::OPC_Decode, 250, 3, 9, // Opcode: TSUBCCTVri
/* 1556 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 1585
/* 1560 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1563 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1577
/* 1567 */    MCD::OPC_CheckField, 5, 8, 0, 164, 20, // Skip to: 6857
/* 1573 */    MCD::OPC_Decode, 244, 2, 8, // Opcode: MULSCCrr
/* 1577 */    MCD::OPC_FilterValue, 1, 156, 20, // Skip to: 6857
/* 1581 */    MCD::OPC_Decode, 243, 2, 9, // Opcode: MULSCCri
/* 1585 */    MCD::OPC_FilterValue, 37, 50, 0, // Skip to: 1639
/* 1589 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1592 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1621
/* 1596 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1599 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1613
/* 1603 */    MCD::OPC_CheckField, 5, 7, 0, 128, 20, // Skip to: 6857
/* 1609 */    MCD::OPC_Decode, 169, 3, 8, // Opcode: SLLrr
/* 1613 */    MCD::OPC_FilterValue, 1, 120, 20, // Skip to: 6857
/* 1617 */    MCD::OPC_Decode, 167, 3, 14, // Opcode: SLLXrr
/* 1621 */    MCD::OPC_FilterValue, 1, 112, 20, // Skip to: 6857
/* 1625 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1635
/* 1631 */    MCD::OPC_Decode, 166, 3, 15, // Opcode: SLLXri
/* 1635 */    MCD::OPC_Decode, 168, 3, 9, // Opcode: SLLri
/* 1639 */    MCD::OPC_FilterValue, 38, 50, 0, // Skip to: 1693
/* 1643 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1646 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1675
/* 1650 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1653 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1667
/* 1657 */    MCD::OPC_CheckField, 5, 7, 0, 74, 20, // Skip to: 6857
/* 1663 */    MCD::OPC_Decode, 183, 3, 8, // Opcode: SRLrr
/* 1667 */    MCD::OPC_FilterValue, 1, 66, 20, // Skip to: 6857
/* 1671 */    MCD::OPC_Decode, 181, 3, 14, // Opcode: SRLXrr
/* 1675 */    MCD::OPC_FilterValue, 1, 58, 20, // Skip to: 6857
/* 1679 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1689
/* 1685 */    MCD::OPC_Decode, 180, 3, 15, // Opcode: SRLXri
/* 1689 */    MCD::OPC_Decode, 182, 3, 9, // Opcode: SRLri
/* 1693 */    MCD::OPC_FilterValue, 39, 50, 0, // Skip to: 1747
/* 1697 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1700 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1729
/* 1704 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1707 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1721
/* 1711 */    MCD::OPC_CheckField, 5, 7, 0, 20, 20, // Skip to: 6857
/* 1717 */    MCD::OPC_Decode, 179, 3, 8, // Opcode: SRArr
/* 1721 */    MCD::OPC_FilterValue, 1, 12, 20, // Skip to: 6857
/* 1725 */    MCD::OPC_Decode, 177, 3, 14, // Opcode: SRAXrr
/* 1729 */    MCD::OPC_FilterValue, 1, 4, 20, // Skip to: 6857
/* 1733 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1743
/* 1739 */    MCD::OPC_Decode, 176, 3, 15, // Opcode: SRAXri
/* 1743 */    MCD::OPC_Decode, 178, 3, 9, // Opcode: SRAri
/* 1747 */    MCD::OPC_FilterValue, 40, 58, 0, // Skip to: 1809
/* 1751 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1754 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 1785
/* 1758 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1761 */    MCD::OPC_FilterValue, 0, 228, 19, // Skip to: 6857
/* 1765 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 1781
/* 1771 */    MCD::OPC_CheckField, 14, 5, 15, 4, 0, // Skip to: 1781
/* 1777 */    MCD::OPC_Decode, 185, 3, 4, // Opcode: STBAR
/* 1781 */    MCD::OPC_Decode, 134, 3, 16, // Opcode: RDASR
/* 1785 */    MCD::OPC_FilterValue, 1, 204, 19, // Skip to: 6857
/* 1789 */    MCD::OPC_CheckPredicate, 0, 200, 19, // Skip to: 6857
/* 1793 */    MCD::OPC_CheckField, 25, 5, 0, 194, 19, // Skip to: 6857
/* 1799 */    MCD::OPC_CheckField, 14, 5, 15, 188, 19, // Skip to: 6857
/* 1805 */    MCD::OPC_Decode, 219, 2, 17, // Opcode: MEMBARi
/* 1809 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 1823
/* 1813 */    MCD::OPC_CheckField, 0, 19, 0, 174, 19, // Skip to: 6857
/* 1819 */    MCD::OPC_Decode, 136, 3, 18, // Opcode: RDPSR
/* 1823 */    MCD::OPC_FilterValue, 42, 25, 0, // Skip to: 1852
/* 1827 */    MCD::OPC_ExtractField, 0, 14,  // Inst{13-0} ...
/* 1830 */    MCD::OPC_FilterValue, 0, 159, 19, // Skip to: 6857
/* 1834 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, // Skip to: 1844
/* 1840 */    MCD::OPC_Decode, 138, 3, 18, // Opcode: RDWIM
/* 1844 */    MCD::OPC_CheckPredicate, 0, 145, 19, // Skip to: 6857
/* 1848 */    MCD::OPC_Decode, 135, 3, 19, // Opcode: RDPR
/* 1852 */    MCD::OPC_FilterValue, 43, 25, 0, // Skip to: 1881
/* 1856 */    MCD::OPC_ExtractField, 0, 19,  // Inst{18-0} ...
/* 1859 */    MCD::OPC_FilterValue, 0, 130, 19, // Skip to: 6857
/* 1863 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1877
/* 1867 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1877
/* 1873 */    MCD::OPC_Decode, 178, 1, 4, // Opcode: FLUSHW
/* 1877 */    MCD::OPC_Decode, 137, 3, 18, // Opcode: RDTBR
/* 1881 */    MCD::OPC_FilterValue, 44, 123, 0, // Skip to: 2008
/* 1885 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1888 */    MCD::OPC_FilterValue, 0, 56, 0, // Skip to: 1948
/* 1892 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1895 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 1921
/* 1899 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1913
/* 1903 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 1913
/* 1909 */    MCD::OPC_Decode, 222, 2, 20, // Opcode: MOVFCCrr
/* 1913 */    MCD::OPC_CheckPredicate, 0, 76, 19, // Skip to: 6857
/* 1917 */    MCD::OPC_Decode, 152, 4, 21, // Opcode: V9MOVFCCrr
/* 1921 */    MCD::OPC_FilterValue, 1, 68, 19, // Skip to: 6857
/* 1925 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 1928 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1940
/* 1932 */    MCD::OPC_CheckPredicate, 0, 57, 19, // Skip to: 6857
/* 1936 */    MCD::OPC_Decode, 224, 2, 20, // Opcode: MOVICCrr
/* 1940 */    MCD::OPC_FilterValue, 2, 49, 19, // Skip to: 6857
/* 1944 */    MCD::OPC_Decode, 241, 2, 20, // Opcode: MOVXCCrr
/* 1948 */    MCD::OPC_FilterValue, 1, 41, 19, // Skip to: 6857
/* 1952 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1955 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 1981
/* 1959 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1973
/* 1963 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 1973
/* 1969 */    MCD::OPC_Decode, 221, 2, 22, // Opcode: MOVFCCri
/* 1973 */    MCD::OPC_CheckPredicate, 0, 16, 19, // Skip to: 6857
/* 1977 */    MCD::OPC_Decode, 151, 4, 23, // Opcode: V9MOVFCCri
/* 1981 */    MCD::OPC_FilterValue, 1, 8, 19, // Skip to: 6857
/* 1985 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 1988 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2000
/* 1992 */    MCD::OPC_CheckPredicate, 0, 253, 18, // Skip to: 6857
/* 1996 */    MCD::OPC_Decode, 223, 2, 22, // Opcode: MOVICCri
/* 2000 */    MCD::OPC_FilterValue, 2, 245, 18, // Skip to: 6857
/* 2004 */    MCD::OPC_Decode, 240, 2, 22, // Opcode: MOVXCCri
/* 2008 */    MCD::OPC_FilterValue, 45, 25, 0, // Skip to: 2037
/* 2012 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2015 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2029
/* 2019 */    MCD::OPC_CheckField, 5, 8, 0, 224, 18, // Skip to: 6857
/* 2025 */    MCD::OPC_Decode, 150, 3, 10, // Opcode: SDIVXrr
/* 2029 */    MCD::OPC_FilterValue, 1, 216, 18, // Skip to: 6857
/* 2033 */    MCD::OPC_Decode, 149, 3, 11, // Opcode: SDIVXri
/* 2037 */    MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 2055
/* 2041 */    MCD::OPC_CheckPredicate, 0, 204, 18, // Skip to: 6857
/* 2045 */    MCD::OPC_CheckField, 5, 14, 0, 198, 18, // Skip to: 6857
/* 2051 */    MCD::OPC_Decode, 133, 3, 24, // Opcode: POPCrr
/* 2055 */    MCD::OPC_FilterValue, 47, 135, 0, // Skip to: 2194
/* 2059 */    MCD::OPC_ExtractField, 10, 4,  // Inst{13-10} ...
/* 2062 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2076
/* 2066 */    MCD::OPC_CheckField, 5, 5, 0, 177, 18, // Skip to: 6857
/* 2072 */    MCD::OPC_Decode, 236, 2, 14, // Opcode: MOVRRZrr
/* 2076 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 2090
/* 2080 */    MCD::OPC_CheckField, 5, 5, 0, 163, 18, // Skip to: 6857
/* 2086 */    MCD::OPC_Decode, 230, 2, 14, // Opcode: MOVRLEZrr
/* 2090 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 2104
/* 2094 */    MCD::OPC_CheckField, 5, 5, 0, 149, 18, // Skip to: 6857
/* 2100 */    MCD::OPC_Decode, 232, 2, 14, // Opcode: MOVRLZrr
/* 2104 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2118
/* 2108 */    MCD::OPC_CheckField, 5, 5, 0, 135, 18, // Skip to: 6857
/* 2114 */    MCD::OPC_Decode, 234, 2, 14, // Opcode: MOVRNZrr
/* 2118 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2132
/* 2122 */    MCD::OPC_CheckField, 5, 5, 0, 121, 18, // Skip to: 6857
/* 2128 */    MCD::OPC_Decode, 228, 2, 14, // Opcode: MOVRGZrr
/* 2132 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2146
/* 2136 */    MCD::OPC_CheckField, 5, 5, 0, 107, 18, // Skip to: 6857
/* 2142 */    MCD::OPC_Decode, 226, 2, 14, // Opcode: MOVRGEZrr
/* 2146 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2154
/* 2150 */    MCD::OPC_Decode, 235, 2, 25, // Opcode: MOVRRZri
/* 2154 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2162
/* 2158 */    MCD::OPC_Decode, 229, 2, 25, // Opcode: MOVRLEZri
/* 2162 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2170
/* 2166 */    MCD::OPC_Decode, 231, 2, 25, // Opcode: MOVRLZri
/* 2170 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2178
/* 2174 */    MCD::OPC_Decode, 233, 2, 25, // Opcode: MOVRNZri
/* 2178 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2186
/* 2182 */    MCD::OPC_Decode, 227, 2, 25, // Opcode: MOVRGZri
/* 2186 */    MCD::OPC_FilterValue, 15, 59, 18, // Skip to: 6857
/* 2190 */    MCD::OPC_Decode, 225, 2, 25, // Opcode: MOVRGEZri
/* 2194 */    MCD::OPC_FilterValue, 48, 25, 0, // Skip to: 2223
/* 2198 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2201 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2215
/* 2205 */    MCD::OPC_CheckField, 5, 8, 0, 38, 18, // Skip to: 6857
/* 2211 */    MCD::OPC_Decode, 154, 4, 26, // Opcode: WRASRrr
/* 2215 */    MCD::OPC_FilterValue, 1, 30, 18, // Skip to: 6857
/* 2219 */    MCD::OPC_Decode, 153, 4, 27, // Opcode: WRASRri
/* 2223 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 2264
/* 2227 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2230 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2250
/* 2234 */    MCD::OPC_CheckField, 25, 5, 0, 9, 18, // Skip to: 6857
/* 2240 */    MCD::OPC_CheckField, 5, 8, 0, 3, 18, // Skip to: 6857
/* 2246 */    MCD::OPC_Decode, 158, 4, 12, // Opcode: WRPSRrr
/* 2250 */    MCD::OPC_FilterValue, 1, 251, 17, // Skip to: 6857
/* 2254 */    MCD::OPC_CheckField, 25, 5, 0, 245, 17, // Skip to: 6857
/* 2260 */    MCD::OPC_Decode, 157, 4, 13, // Opcode: WRPSRri
/* 2264 */    MCD::OPC_FilterValue, 50, 54, 0, // Skip to: 2322
/* 2268 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2271 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 2300
/* 2275 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 2278 */    MCD::OPC_FilterValue, 0, 223, 17, // Skip to: 6857
/* 2282 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 2292
/* 2288 */    MCD::OPC_Decode, 162, 4, 12, // Opcode: WRWIMrr
/* 2292 */    MCD::OPC_CheckPredicate, 0, 209, 17, // Skip to: 6857
/* 2296 */    MCD::OPC_Decode, 156, 4, 28, // Opcode: WRPRrr
/* 2300 */    MCD::OPC_FilterValue, 1, 201, 17, // Skip to: 6857
/* 2304 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 2314
/* 2310 */    MCD::OPC_Decode, 161, 4, 13, // Opcode: WRWIMri
/* 2314 */    MCD::OPC_CheckPredicate, 0, 187, 17, // Skip to: 6857
/* 2318 */    MCD::OPC_Decode, 155, 4, 29, // Opcode: WRPRri
/* 2322 */    MCD::OPC_FilterValue, 51, 37, 0, // Skip to: 2363
/* 2326 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2329 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2349
/* 2333 */    MCD::OPC_CheckField, 25, 5, 0, 166, 17, // Skip to: 6857
/* 2339 */    MCD::OPC_CheckField, 5, 8, 0, 160, 17, // Skip to: 6857
/* 2345 */    MCD::OPC_Decode, 160, 4, 12, // Opcode: WRTBRrr
/* 2349 */    MCD::OPC_FilterValue, 1, 152, 17, // Skip to: 6857
/* 2353 */    MCD::OPC_CheckField, 25, 5, 0, 146, 17, // Skip to: 6857
/* 2359 */    MCD::OPC_Decode, 159, 4, 13, // Opcode: WRTBRri
/* 2363 */    MCD::OPC_FilterValue, 52, 197, 2, // Skip to: 3076
/* 2367 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 2370 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2384
/* 2374 */    MCD::OPC_CheckField, 14, 5, 0, 125, 17, // Skip to: 6857
/* 2380 */    MCD::OPC_Decode, 208, 1, 30, // Opcode: FMOVS
/* 2384 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2402
/* 2388 */    MCD::OPC_CheckPredicate, 0, 113, 17, // Skip to: 6857
/* 2392 */    MCD::OPC_CheckField, 14, 5, 0, 107, 17, // Skip to: 6857
/* 2398 */    MCD::OPC_Decode, 182, 1, 31, // Opcode: FMOVD
/* 2402 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2420
/* 2406 */    MCD::OPC_CheckPredicate, 0, 95, 17, // Skip to: 6857
/* 2410 */    MCD::OPC_CheckField, 14, 5, 0, 89, 17, // Skip to: 6857
/* 2416 */    MCD::OPC_Decode, 186, 1, 32, // Opcode: FMOVQ
/* 2420 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2434
/* 2424 */    MCD::OPC_CheckField, 14, 5, 0, 75, 17, // Skip to: 6857
/* 2430 */    MCD::OPC_Decode, 228, 1, 30, // Opcode: FNEGS
/* 2434 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2452
/* 2438 */    MCD::OPC_CheckPredicate, 0, 63, 17, // Skip to: 6857
/* 2442 */    MCD::OPC_CheckField, 14, 5, 0, 57, 17, // Skip to: 6857
/* 2448 */    MCD::OPC_Decode, 226, 1, 31, // Opcode: FNEGD
/* 2452 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2470
/* 2456 */    MCD::OPC_CheckPredicate, 0, 45, 17, // Skip to: 6857
/* 2460 */    MCD::OPC_CheckField, 14, 5, 0, 39, 17, // Skip to: 6857
/* 2466 */    MCD::OPC_Decode, 227, 1, 32, // Opcode: FNEGQ
/* 2470 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2484
/* 2474 */    MCD::OPC_CheckField, 14, 5, 0, 25, 17, // Skip to: 6857
/* 2480 */    MCD::OPC_Decode, 134, 1, 30, // Opcode: FABSS
/* 2484 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 2502
/* 2488 */    MCD::OPC_CheckPredicate, 0, 13, 17, // Skip to: 6857
/* 2492 */    MCD::OPC_CheckField, 14, 5, 0, 7, 17, // Skip to: 6857
/* 2498 */    MCD::OPC_Decode, 132, 1, 31, // Opcode: FABSD
/* 2502 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 2520
/* 2506 */    MCD::OPC_CheckPredicate, 0, 251, 16, // Skip to: 6857
/* 2510 */    MCD::OPC_CheckField, 14, 5, 0, 245, 16, // Skip to: 6857
/* 2516 */    MCD::OPC_Decode, 133, 1, 32, // Opcode: FABSQ
/* 2520 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 2534
/* 2524 */    MCD::OPC_CheckField, 14, 5, 0, 231, 16, // Skip to: 6857
/* 2530 */    MCD::OPC_Decode, 144, 2, 30, // Opcode: FSQRTS
/* 2534 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 2548
/* 2538 */    MCD::OPC_CheckField, 14, 5, 0, 217, 16, // Skip to: 6857
/* 2544 */    MCD::OPC_Decode, 142, 2, 31, // Opcode: FSQRTD
/* 2548 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 2562
/* 2552 */    MCD::OPC_CheckField, 14, 5, 0, 203, 16, // Skip to: 6857
/* 2558 */    MCD::OPC_Decode, 143, 2, 32, // Opcode: FSQRTQ
/* 2562 */    MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 2570
/* 2566 */    MCD::OPC_Decode, 137, 1, 33, // Opcode: FADDS
/* 2570 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 2578
/* 2574 */    MCD::OPC_Decode, 135, 1, 34, // Opcode: FADDD
/* 2578 */    MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 2586
/* 2582 */    MCD::OPC_Decode, 136, 1, 35, // Opcode: FADDQ
/* 2586 */    MCD::OPC_FilterValue, 69, 4, 0, // Skip to: 2594
/* 2590 */    MCD::OPC_Decode, 159, 2, 33, // Opcode: FSUBS
/* 2594 */    MCD::OPC_FilterValue, 70, 4, 0, // Skip to: 2602
/* 2598 */    MCD::OPC_Decode, 157, 2, 34, // Opcode: FSUBD
/* 2602 */    MCD::OPC_FilterValue, 71, 4, 0, // Skip to: 2610
/* 2606 */    MCD::OPC_Decode, 158, 2, 35, // Opcode: FSUBQ
/* 2610 */    MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 2618
/* 2614 */    MCD::OPC_Decode, 221, 1, 33, // Opcode: FMULS
/* 2618 */    MCD::OPC_FilterValue, 74, 4, 0, // Skip to: 2626
/* 2622 */    MCD::OPC_Decode, 217, 1, 34, // Opcode: FMULD
/* 2626 */    MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 2634
/* 2630 */    MCD::OPC_Decode, 220, 1, 35, // Opcode: FMULQ
/* 2634 */    MCD::OPC_FilterValue, 77, 4, 0, // Skip to: 2642
/* 2638 */    MCD::OPC_Decode, 161, 1, 33, // Opcode: FDIVS
/* 2642 */    MCD::OPC_FilterValue, 78, 4, 0, // Skip to: 2650
/* 2646 */    MCD::OPC_Decode, 159, 1, 34, // Opcode: FDIVD
/* 2650 */    MCD::OPC_FilterValue, 79, 4, 0, // Skip to: 2658
/* 2654 */    MCD::OPC_Decode, 160, 1, 35, // Opcode: FDIVQ
/* 2658 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 2670
/* 2662 */    MCD::OPC_CheckPredicate, 1, 95, 16, // Skip to: 6857
/* 2666 */    MCD::OPC_Decode, 223, 1, 34, // Opcode: FNADDS
/* 2670 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 2682
/* 2674 */    MCD::OPC_CheckPredicate, 1, 83, 16, // Skip to: 6857
/* 2678 */    MCD::OPC_Decode, 222, 1, 34, // Opcode: FNADDD
/* 2682 */    MCD::OPC_FilterValue, 89, 8, 0, // Skip to: 2694
/* 2686 */    MCD::OPC_CheckPredicate, 1, 71, 16, // Skip to: 6857
/* 2690 */    MCD::OPC_Decode, 232, 1, 34, // Opcode: FNMULS
/* 2694 */    MCD::OPC_FilterValue, 90, 8, 0, // Skip to: 2706
/* 2698 */    MCD::OPC_CheckPredicate, 1, 59, 16, // Skip to: 6857
/* 2702 */    MCD::OPC_Decode, 231, 1, 34, // Opcode: FNMULD
/* 2706 */    MCD::OPC_FilterValue, 97, 8, 0, // Skip to: 2718
/* 2710 */    MCD::OPC_CheckPredicate, 1, 47, 16, // Skip to: 6857
/* 2714 */    MCD::OPC_Decode, 169, 1, 34, // Opcode: FHADDS
/* 2718 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 2730
/* 2722 */    MCD::OPC_CheckPredicate, 1, 35, 16, // Skip to: 6857
/* 2726 */    MCD::OPC_Decode, 168, 1, 34, // Opcode: FHADDD
/* 2730 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 2742
/* 2734 */    MCD::OPC_CheckPredicate, 1, 23, 16, // Skip to: 6857
/* 2738 */    MCD::OPC_Decode, 171, 1, 34, // Opcode: FHSUBS
/* 2742 */    MCD::OPC_FilterValue, 102, 8, 0, // Skip to: 2754
/* 2746 */    MCD::OPC_CheckPredicate, 1, 11, 16, // Skip to: 6857
/* 2750 */    MCD::OPC_Decode, 170, 1, 34, // Opcode: FHSUBD
/* 2754 */    MCD::OPC_FilterValue, 105, 4, 0, // Skip to: 2762
/* 2758 */    MCD::OPC_Decode, 141, 2, 36, // Opcode: FSMULD
/* 2762 */    MCD::OPC_FilterValue, 110, 4, 0, // Skip to: 2770
/* 2766 */    MCD::OPC_Decode, 162, 1, 37, // Opcode: FDMULQ
/* 2770 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 2782
/* 2774 */    MCD::OPC_CheckPredicate, 1, 239, 15, // Skip to: 6857
/* 2778 */    MCD::OPC_Decode, 230, 1, 34, // Opcode: FNHADDS
/* 2782 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 2794
/* 2786 */    MCD::OPC_CheckPredicate, 1, 227, 15, // Skip to: 6857
/* 2790 */    MCD::OPC_Decode, 229, 1, 34, // Opcode: FNHADDD
/* 2794 */    MCD::OPC_FilterValue, 121, 8, 0, // Skip to: 2806
/* 2798 */    MCD::OPC_CheckPredicate, 1, 215, 15, // Skip to: 6857
/* 2802 */    MCD::OPC_Decode, 239, 1, 34, // Opcode: FNSMULD
/* 2806 */    MCD::OPC_FilterValue, 129, 1, 10, 0, // Skip to: 2821
/* 2811 */    MCD::OPC_CheckField, 14, 5, 0, 200, 15, // Skip to: 6857
/* 2817 */    MCD::OPC_Decode, 156, 2, 38, // Opcode: FSTOX
/* 2821 */    MCD::OPC_FilterValue, 130, 1, 10, 0, // Skip to: 2836
/* 2826 */    MCD::OPC_CheckField, 14, 5, 0, 185, 15, // Skip to: 6857
/* 2832 */    MCD::OPC_Decode, 166, 1, 31, // Opcode: FDTOX
/* 2836 */    MCD::OPC_FilterValue, 131, 1, 10, 0, // Skip to: 2851
/* 2841 */    MCD::OPC_CheckField, 14, 5, 0, 170, 15, // Skip to: 6857
/* 2847 */    MCD::OPC_Decode, 136, 2, 39, // Opcode: FQTOX
/* 2851 */    MCD::OPC_FilterValue, 132, 1, 10, 0, // Skip to: 2866
/* 2856 */    MCD::OPC_CheckField, 14, 5, 0, 155, 15, // Skip to: 6857
/* 2862 */    MCD::OPC_Decode, 166, 2, 40, // Opcode: FXTOS
/* 2866 */    MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 2881
/* 2871 */    MCD::OPC_CheckField, 14, 5, 0, 140, 15, // Skip to: 6857
/* 2877 */    MCD::OPC_Decode, 164, 2, 31, // Opcode: FXTOD
/* 2881 */    MCD::OPC_FilterValue, 140, 1, 10, 0, // Skip to: 2896
/* 2886 */    MCD::OPC_CheckField, 14, 5, 0, 125, 15, // Skip to: 6857
/* 2892 */    MCD::OPC_Decode, 165, 2, 41, // Opcode: FXTOQ
/* 2896 */    MCD::OPC_FilterValue, 196, 1, 10, 0, // Skip to: 2911
/* 2901 */    MCD::OPC_CheckField, 14, 5, 0, 110, 15, // Skip to: 6857
/* 2907 */    MCD::OPC_Decode, 174, 1, 30, // Opcode: FITOS
/* 2911 */    MCD::OPC_FilterValue, 198, 1, 10, 0, // Skip to: 2926
/* 2916 */    MCD::OPC_CheckField, 14, 5, 0, 95, 15, // Skip to: 6857
/* 2922 */    MCD::OPC_Decode, 165, 1, 40, // Opcode: FDTOS
/* 2926 */    MCD::OPC_FilterValue, 199, 1, 10, 0, // Skip to: 2941
/* 2931 */    MCD::OPC_CheckField, 14, 5, 0, 80, 15, // Skip to: 6857
/* 2937 */    MCD::OPC_Decode, 135, 2, 42, // Opcode: FQTOS
/* 2941 */    MCD::OPC_FilterValue, 200, 1, 10, 0, // Skip to: 2956
/* 2946 */    MCD::OPC_CheckField, 14, 5, 0, 65, 15, // Skip to: 6857
/* 2952 */    MCD::OPC_Decode, 172, 1, 38, // Opcode: FITOD
/* 2956 */    MCD::OPC_FilterValue, 201, 1, 10, 0, // Skip to: 2971
/* 2961 */    MCD::OPC_CheckField, 14, 5, 0, 50, 15, // Skip to: 6857
/* 2967 */    MCD::OPC_Decode, 153, 2, 38, // Opcode: FSTOD
/* 2971 */    MCD::OPC_FilterValue, 203, 1, 10, 0, // Skip to: 2986
/* 2976 */    MCD::OPC_CheckField, 14, 5, 0, 35, 15, // Skip to: 6857
/* 2982 */    MCD::OPC_Decode, 133, 2, 39, // Opcode: FQTOD
/* 2986 */    MCD::OPC_FilterValue, 204, 1, 10, 0, // Skip to: 3001
/* 2991 */    MCD::OPC_CheckField, 14, 5, 0, 20, 15, // Skip to: 6857
/* 2997 */    MCD::OPC_Decode, 173, 1, 43, // Opcode: FITOQ
/* 3001 */    MCD::OPC_FilterValue, 205, 1, 10, 0, // Skip to: 3016
/* 3006 */    MCD::OPC_CheckField, 14, 5, 0, 5, 15, // Skip to: 6857
/* 3012 */    MCD::OPC_Decode, 155, 2, 43, // Opcode: FSTOQ
/* 3016 */    MCD::OPC_FilterValue, 206, 1, 10, 0, // Skip to: 3031
/* 3021 */    MCD::OPC_CheckField, 14, 5, 0, 246, 14, // Skip to: 6857
/* 3027 */    MCD::OPC_Decode, 164, 1, 41, // Opcode: FDTOQ
/* 3031 */    MCD::OPC_FilterValue, 209, 1, 10, 0, // Skip to: 3046
/* 3036 */    MCD::OPC_CheckField, 14, 5, 0, 231, 14, // Skip to: 6857
/* 3042 */    MCD::OPC_Decode, 154, 2, 30, // Opcode: FSTOI
/* 3046 */    MCD::OPC_FilterValue, 210, 1, 10, 0, // Skip to: 3061
/* 3051 */    MCD::OPC_CheckField, 14, 5, 0, 216, 14, // Skip to: 6857
/* 3057 */    MCD::OPC_Decode, 163, 1, 40, // Opcode: FDTOI
/* 3061 */    MCD::OPC_FilterValue, 211, 1, 207, 14, // Skip to: 6857
/* 3066 */    MCD::OPC_CheckField, 14, 5, 0, 201, 14, // Skip to: 6857
/* 3072 */    MCD::OPC_Decode, 134, 2, 42, // Opcode: FQTOI
/* 3076 */    MCD::OPC_FilterValue, 53, 70, 2, // Skip to: 3662
/* 3080 */    MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 3083 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 3162
/* 3087 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3090 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3123
/* 3094 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3097 */    MCD::OPC_FilterValue, 0, 172, 14, // Skip to: 6857
/* 3101 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3115
/* 3105 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3115
/* 3111 */    MCD::OPC_Decode, 209, 1, 44, // Opcode: FMOVS_FCC
/* 3115 */    MCD::OPC_CheckPredicate, 0, 154, 14, // Skip to: 6857
/* 3119 */    MCD::OPC_Decode, 150, 4, 45, // Opcode: V9FMOVS_FCC
/* 3123 */    MCD::OPC_FilterValue, 1, 146, 14, // Skip to: 6857
/* 3127 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3130 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3148
/* 3134 */    MCD::OPC_CheckPredicate, 0, 135, 14, // Skip to: 6857
/* 3138 */    MCD::OPC_CheckField, 18, 1, 0, 129, 14, // Skip to: 6857
/* 3144 */    MCD::OPC_Decode, 210, 1, 44, // Opcode: FMOVS_ICC
/* 3148 */    MCD::OPC_FilterValue, 2, 121, 14, // Skip to: 6857
/* 3152 */    MCD::OPC_CheckField, 18, 1, 0, 115, 14, // Skip to: 6857
/* 3158 */    MCD::OPC_Decode, 211, 1, 44, // Opcode: FMOVS_XCC
/* 3162 */    MCD::OPC_FilterValue, 2, 75, 0, // Skip to: 3241
/* 3166 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3169 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3202
/* 3173 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3176 */    MCD::OPC_FilterValue, 0, 93, 14, // Skip to: 6857
/* 3180 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3194
/* 3184 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3194
/* 3190 */    MCD::OPC_Decode, 183, 1, 46, // Opcode: FMOVD_FCC
/* 3194 */    MCD::OPC_CheckPredicate, 0, 75, 14, // Skip to: 6857
/* 3198 */    MCD::OPC_Decode, 148, 4, 47, // Opcode: V9FMOVD_FCC
/* 3202 */    MCD::OPC_FilterValue, 1, 67, 14, // Skip to: 6857
/* 3206 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3209 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3227
/* 3213 */    MCD::OPC_CheckPredicate, 0, 56, 14, // Skip to: 6857
/* 3217 */    MCD::OPC_CheckField, 18, 1, 0, 50, 14, // Skip to: 6857
/* 3223 */    MCD::OPC_Decode, 184, 1, 46, // Opcode: FMOVD_ICC
/* 3227 */    MCD::OPC_FilterValue, 2, 42, 14, // Skip to: 6857
/* 3231 */    MCD::OPC_CheckField, 18, 1, 0, 36, 14, // Skip to: 6857
/* 3237 */    MCD::OPC_Decode, 185, 1, 46, // Opcode: FMOVD_XCC
/* 3241 */    MCD::OPC_FilterValue, 3, 75, 0, // Skip to: 3320
/* 3245 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3248 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3281
/* 3252 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3255 */    MCD::OPC_FilterValue, 0, 14, 14, // Skip to: 6857
/* 3259 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3273
/* 3263 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3273
/* 3269 */    MCD::OPC_Decode, 187, 1, 48, // Opcode: FMOVQ_FCC
/* 3273 */    MCD::OPC_CheckPredicate, 0, 252, 13, // Skip to: 6857
/* 3277 */    MCD::OPC_Decode, 149, 4, 49, // Opcode: V9FMOVQ_FCC
/* 3281 */    MCD::OPC_FilterValue, 1, 244, 13, // Skip to: 6857
/* 3285 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3288 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3306
/* 3292 */    MCD::OPC_CheckPredicate, 0, 233, 13, // Skip to: 6857
/* 3296 */    MCD::OPC_CheckField, 18, 1, 0, 227, 13, // Skip to: 6857
/* 3302 */    MCD::OPC_Decode, 188, 1, 48, // Opcode: FMOVQ_ICC
/* 3306 */    MCD::OPC_FilterValue, 2, 219, 13, // Skip to: 6857
/* 3310 */    MCD::OPC_CheckField, 18, 1, 0, 213, 13, // Skip to: 6857
/* 3316 */    MCD::OPC_Decode, 189, 1, 48, // Opcode: FMOVQ_XCC
/* 3320 */    MCD::OPC_FilterValue, 5, 27, 0, // Skip to: 3351
/* 3324 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3327 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3339
/* 3331 */    MCD::OPC_CheckPredicate, 0, 194, 13, // Skip to: 6857
/* 3335 */    MCD::OPC_Decode, 198, 1, 50, // Opcode: FMOVRLEZS
/* 3339 */    MCD::OPC_FilterValue, 3, 186, 13, // Skip to: 6857
/* 3343 */    MCD::OPC_CheckPredicate, 0, 182, 13, // Skip to: 6857
/* 3347 */    MCD::OPC_Decode, 195, 1, 50, // Opcode: FMOVRGZS
/* 3351 */    MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 3382
/* 3355 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3358 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3370
/* 3362 */    MCD::OPC_CheckPredicate, 0, 163, 13, // Skip to: 6857
/* 3366 */    MCD::OPC_Decode, 196, 1, 50, // Opcode: FMOVRLEZD
/* 3370 */    MCD::OPC_FilterValue, 3, 155, 13, // Skip to: 6857
/* 3374 */    MCD::OPC_CheckPredicate, 0, 151, 13, // Skip to: 6857
/* 3378 */    MCD::OPC_Decode, 193, 1, 50, // Opcode: FMOVRGZD
/* 3382 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 3413
/* 3386 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3389 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3401
/* 3393 */    MCD::OPC_CheckPredicate, 0, 132, 13, // Skip to: 6857
/* 3397 */    MCD::OPC_Decode, 197, 1, 50, // Opcode: FMOVRLEZQ
/* 3401 */    MCD::OPC_FilterValue, 3, 124, 13, // Skip to: 6857
/* 3405 */    MCD::OPC_CheckPredicate, 0, 120, 13, // Skip to: 6857
/* 3409 */    MCD::OPC_Decode, 194, 1, 50, // Opcode: FMOVRGZQ
/* 3413 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 3427
/* 3417 */    MCD::OPC_CheckField, 11, 3, 1, 106, 13, // Skip to: 6857
/* 3423 */    MCD::OPC_Decode, 147, 4, 51, // Opcode: V9FCMPS
/* 3427 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 3441
/* 3431 */    MCD::OPC_CheckField, 11, 3, 1, 92, 13, // Skip to: 6857
/* 3437 */    MCD::OPC_Decode, 142, 4, 52, // Opcode: V9FCMPD
/* 3441 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 3455
/* 3445 */    MCD::OPC_CheckField, 11, 3, 1, 78, 13, // Skip to: 6857
/* 3451 */    MCD::OPC_Decode, 146, 4, 53, // Opcode: V9FCMPQ
/* 3455 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 3469
/* 3459 */    MCD::OPC_CheckField, 11, 3, 1, 64, 13, // Skip to: 6857
/* 3465 */    MCD::OPC_Decode, 145, 4, 51, // Opcode: V9FCMPES
/* 3469 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 3483
/* 3473 */    MCD::OPC_CheckField, 11, 3, 1, 50, 13, // Skip to: 6857
/* 3479 */    MCD::OPC_Decode, 143, 4, 52, // Opcode: V9FCMPED
/* 3483 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 3497
/* 3487 */    MCD::OPC_CheckField, 11, 3, 1, 36, 13, // Skip to: 6857
/* 3493 */    MCD::OPC_Decode, 144, 4, 53, // Opcode: V9FCMPEQ
/* 3497 */    MCD::OPC_FilterValue, 37, 51, 0, // Skip to: 3552
/* 3501 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3504 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3516
/* 3508 */    MCD::OPC_CheckPredicate, 0, 17, 13, // Skip to: 6857
/* 3512 */    MCD::OPC_Decode, 207, 1, 50, // Opcode: FMOVRZS
/* 3516 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3528
/* 3520 */    MCD::OPC_CheckPredicate, 0, 5, 13, // Skip to: 6857
/* 3524 */    MCD::OPC_Decode, 201, 1, 50, // Opcode: FMOVRLZS
/* 3528 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3540
/* 3532 */    MCD::OPC_CheckPredicate, 0, 249, 12, // Skip to: 6857
/* 3536 */    MCD::OPC_Decode, 204, 1, 50, // Opcode: FMOVRNZS
/* 3540 */    MCD::OPC_FilterValue, 3, 241, 12, // Skip to: 6857
/* 3544 */    MCD::OPC_CheckPredicate, 0, 237, 12, // Skip to: 6857
/* 3548 */    MCD::OPC_Decode, 192, 1, 50, // Opcode: FMOVRGEZS
/* 3552 */    MCD::OPC_FilterValue, 38, 51, 0, // Skip to: 3607
/* 3556 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3559 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3571
/* 3563 */    MCD::OPC_CheckPredicate, 0, 218, 12, // Skip to: 6857
/* 3567 */    MCD::OPC_Decode, 205, 1, 50, // Opcode: FMOVRZD
/* 3571 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3583
/* 3575 */    MCD::OPC_CheckPredicate, 0, 206, 12, // Skip to: 6857
/* 3579 */    MCD::OPC_Decode, 199, 1, 50, // Opcode: FMOVRLZD
/* 3583 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3595
/* 3587 */    MCD::OPC_CheckPredicate, 0, 194, 12, // Skip to: 6857
/* 3591 */    MCD::OPC_Decode, 202, 1, 50, // Opcode: FMOVRNZD
/* 3595 */    MCD::OPC_FilterValue, 3, 186, 12, // Skip to: 6857
/* 3599 */    MCD::OPC_CheckPredicate, 0, 182, 12, // Skip to: 6857
/* 3603 */    MCD::OPC_Decode, 190, 1, 50, // Opcode: FMOVRGEZD
/* 3607 */    MCD::OPC_FilterValue, 39, 174, 12, // Skip to: 6857
/* 3611 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3614 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3626
/* 3618 */    MCD::OPC_CheckPredicate, 0, 163, 12, // Skip to: 6857
/* 3622 */    MCD::OPC_Decode, 206, 1, 50, // Opcode: FMOVRZQ
/* 3626 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3638
/* 3630 */    MCD::OPC_CheckPredicate, 0, 151, 12, // Skip to: 6857
/* 3634 */    MCD::OPC_Decode, 200, 1, 50, // Opcode: FMOVRLZQ
/* 3638 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3650
/* 3642 */    MCD::OPC_CheckPredicate, 0, 139, 12, // Skip to: 6857
/* 3646 */    MCD::OPC_Decode, 203, 1, 50, // Opcode: FMOVRNZQ
/* 3650 */    MCD::OPC_FilterValue, 3, 131, 12, // Skip to: 6857
/* 3654 */    MCD::OPC_CheckPredicate, 0, 127, 12, // Skip to: 6857
/* 3658 */    MCD::OPC_Decode, 191, 1, 50, // Opcode: FMOVRGEZQ
/* 3662 */    MCD::OPC_FilterValue, 54, 8, 6, // Skip to: 5210
/* 3666 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 3669 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 3680
/* 3673 */    MCD::OPC_CheckPredicate, 2, 108, 12, // Skip to: 6857
/* 3677 */    MCD::OPC_Decode, 124, 10, // Opcode: EDGE8
/* 3680 */    MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 3691
/* 3684 */    MCD::OPC_CheckPredicate, 3, 97, 12, // Skip to: 6857
/* 3688 */    MCD::OPC_Decode, 127, 10, // Opcode: EDGE8N
/* 3691 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 3702
/* 3695 */    MCD::OPC_CheckPredicate, 2, 86, 12, // Skip to: 6857
/* 3699 */    MCD::OPC_Decode, 125, 10, // Opcode: EDGE8L
/* 3702 */    MCD::OPC_FilterValue, 3, 7, 0, // Skip to: 3713
/* 3706 */    MCD::OPC_CheckPredicate, 3, 75, 12, // Skip to: 6857
/* 3710 */    MCD::OPC_Decode, 126, 10, // Opcode: EDGE8LN
/* 3713 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 3724
/* 3717 */    MCD::OPC_CheckPredicate, 2, 64, 12, // Skip to: 6857
/* 3721 */    MCD::OPC_Decode, 116, 10, // Opcode: EDGE16
/* 3724 */    MCD::OPC_FilterValue, 5, 7, 0, // Skip to: 3735
/* 3728 */    MCD::OPC_CheckPredicate, 3, 53, 12, // Skip to: 6857
/* 3732 */    MCD::OPC_Decode, 119, 10, // Opcode: EDGE16N
/* 3735 */    MCD::OPC_FilterValue, 6, 7, 0, // Skip to: 3746
/* 3739 */    MCD::OPC_CheckPredicate, 2, 42, 12, // Skip to: 6857
/* 3743 */    MCD::OPC_Decode, 117, 10, // Opcode: EDGE16L
/* 3746 */    MCD::OPC_FilterValue, 7, 7, 0, // Skip to: 3757
/* 3750 */    MCD::OPC_CheckPredicate, 3, 31, 12, // Skip to: 6857
/* 3754 */    MCD::OPC_Decode, 118, 10, // Opcode: EDGE16LN
/* 3757 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 3768
/* 3761 */    MCD::OPC_CheckPredicate, 2, 20, 12, // Skip to: 6857
/* 3765 */    MCD::OPC_Decode, 120, 10, // Opcode: EDGE32
/* 3768 */    MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 3779
/* 3772 */    MCD::OPC_CheckPredicate, 3, 9, 12, // Skip to: 6857
/* 3776 */    MCD::OPC_Decode, 123, 10, // Opcode: EDGE32N
/* 3779 */    MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 3790
/* 3783 */    MCD::OPC_CheckPredicate, 2, 254, 11, // Skip to: 6857
/* 3787 */    MCD::OPC_Decode, 121, 10, // Opcode: EDGE32L
/* 3790 */    MCD::OPC_FilterValue, 11, 7, 0, // Skip to: 3801
/* 3794 */    MCD::OPC_CheckPredicate, 3, 243, 11, // Skip to: 6857
/* 3798 */    MCD::OPC_Decode, 122, 10, // Opcode: EDGE32LN
/* 3801 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 3812
/* 3805 */    MCD::OPC_CheckPredicate, 2, 232, 11, // Skip to: 6857
/* 3809 */    MCD::OPC_Decode, 58, 10, // Opcode: ARRAY8
/* 3812 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 3823
/* 3816 */    MCD::OPC_CheckPredicate, 1, 221, 11, // Skip to: 6857
/* 3820 */    MCD::OPC_Decode, 35, 10, // Opcode: ADDXC
/* 3823 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 3834
/* 3827 */    MCD::OPC_CheckPredicate, 2, 210, 11, // Skip to: 6857
/* 3831 */    MCD::OPC_Decode, 56, 10, // Opcode: ARRAY16
/* 3834 */    MCD::OPC_FilterValue, 19, 7, 0, // Skip to: 3845
/* 3838 */    MCD::OPC_CheckPredicate, 1, 199, 11, // Skip to: 6857
/* 3842 */    MCD::OPC_Decode, 36, 10, // Opcode: ADDXCCC
/* 3845 */    MCD::OPC_FilterValue, 20, 7, 0, // Skip to: 3856
/* 3849 */    MCD::OPC_CheckPredicate, 2, 188, 11, // Skip to: 6857
/* 3853 */    MCD::OPC_Decode, 57, 10, // Opcode: ARRAY32
/* 3856 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3868
/* 3860 */    MCD::OPC_CheckPredicate, 1, 177, 11, // Skip to: 6857
/* 3864 */    MCD::OPC_Decode, 138, 4, 10, // Opcode: UMULXHI
/* 3868 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 3886
/* 3872 */    MCD::OPC_CheckPredicate, 1, 165, 11, // Skip to: 6857
/* 3876 */    MCD::OPC_CheckField, 14, 5, 0, 159, 11, // Skip to: 6857
/* 3882 */    MCD::OPC_Decode, 218, 2, 54, // Opcode: LZCNT
/* 3886 */    MCD::OPC_FilterValue, 24, 7, 0, // Skip to: 3897
/* 3890 */    MCD::OPC_CheckPredicate, 2, 147, 11, // Skip to: 6857
/* 3894 */    MCD::OPC_Decode, 43, 10, // Opcode: ALIGNADDR
/* 3897 */    MCD::OPC_FilterValue, 25, 7, 0, // Skip to: 3908
/* 3901 */    MCD::OPC_CheckPredicate, 3, 136, 11, // Skip to: 6857
/* 3905 */    MCD::OPC_Decode, 64, 10, // Opcode: BMASK
/* 3908 */    MCD::OPC_FilterValue, 26, 7, 0, // Skip to: 3919
/* 3912 */    MCD::OPC_CheckPredicate, 2, 125, 11, // Skip to: 6857
/* 3916 */    MCD::OPC_Decode, 44, 10, // Opcode: ALIGNADDRL
/* 3919 */    MCD::OPC_FilterValue, 27, 19, 0, // Skip to: 3942
/* 3923 */    MCD::OPC_CheckPredicate, 1, 114, 11, // Skip to: 6857
/* 3927 */    MCD::OPC_CheckField, 25, 5, 0, 108, 11, // Skip to: 6857
/* 3933 */    MCD::OPC_CheckField, 14, 5, 0, 102, 11, // Skip to: 6857
/* 3939 */    MCD::OPC_Decode, 113, 55, // Opcode: CMASK8
/* 3942 */    MCD::OPC_FilterValue, 28, 7, 0, // Skip to: 3953
/* 3946 */    MCD::OPC_CheckPredicate, 3, 91, 11, // Skip to: 6857
/* 3950 */    MCD::OPC_Decode, 101, 34, // Opcode: BSHUFFLE
/* 3953 */    MCD::OPC_FilterValue, 29, 19, 0, // Skip to: 3976
/* 3957 */    MCD::OPC_CheckPredicate, 1, 80, 11, // Skip to: 6857
/* 3961 */    MCD::OPC_CheckField, 25, 5, 0, 74, 11, // Skip to: 6857
/* 3967 */    MCD::OPC_CheckField, 14, 5, 0, 68, 11, // Skip to: 6857
/* 3973 */    MCD::OPC_Decode, 111, 55, // Opcode: CMASK16
/* 3976 */    MCD::OPC_FilterValue, 31, 19, 0, // Skip to: 3999
/* 3980 */    MCD::OPC_CheckPredicate, 1, 57, 11, // Skip to: 6857
/* 3984 */    MCD::OPC_CheckField, 25, 5, 0, 51, 11, // Skip to: 6857
/* 3990 */    MCD::OPC_CheckField, 14, 5, 0, 45, 11, // Skip to: 6857
/* 3996 */    MCD::OPC_Decode, 112, 55, // Opcode: CMASK32
/* 3999 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 4011
/* 4003 */    MCD::OPC_CheckPredicate, 2, 34, 11, // Skip to: 6857
/* 4007 */    MCD::OPC_Decode, 153, 1, 56, // Opcode: FCMPLE16
/* 4011 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 4023
/* 4015 */    MCD::OPC_CheckPredicate, 1, 22, 11, // Skip to: 6857
/* 4019 */    MCD::OPC_Decode, 139, 2, 34, // Opcode: FSLL16
/* 4023 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 4035
/* 4027 */    MCD::OPC_CheckPredicate, 2, 10, 11, // Skip to: 6857
/* 4031 */    MCD::OPC_Decode, 155, 1, 56, // Opcode: FCMPNE16
/* 4035 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 4047
/* 4039 */    MCD::OPC_CheckPredicate, 1, 254, 10, // Skip to: 6857
/* 4043 */    MCD::OPC_Decode, 151, 2, 34, // Opcode: FSRL16
/* 4047 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 4059
/* 4051 */    MCD::OPC_CheckPredicate, 2, 242, 10, // Skip to: 6857
/* 4055 */    MCD::OPC_Decode, 154, 1, 56, // Opcode: FCMPLE32
/* 4059 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4071
/* 4063 */    MCD::OPC_CheckPredicate, 1, 230, 10, // Skip to: 6857
/* 4067 */    MCD::OPC_Decode, 140, 2, 34, // Opcode: FSLL32
/* 4071 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4083
/* 4075 */    MCD::OPC_CheckPredicate, 2, 218, 10, // Skip to: 6857
/* 4079 */    MCD::OPC_Decode, 156, 1, 56, // Opcode: FCMPNE32
/* 4083 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 4095
/* 4087 */    MCD::OPC_CheckPredicate, 1, 206, 10, // Skip to: 6857
/* 4091 */    MCD::OPC_Decode, 152, 2, 34, // Opcode: FSRL32
/* 4095 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 4107
/* 4099 */    MCD::OPC_CheckPredicate, 2, 194, 10, // Skip to: 6857
/* 4103 */    MCD::OPC_Decode, 151, 1, 56, // Opcode: FCMPGT16
/* 4107 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 4119
/* 4111 */    MCD::OPC_CheckPredicate, 1, 182, 10, // Skip to: 6857
/* 4115 */    MCD::OPC_Decode, 137, 2, 34, // Opcode: FSLAS16
/* 4119 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 4131
/* 4123 */    MCD::OPC_CheckPredicate, 2, 170, 10, // Skip to: 6857
/* 4127 */    MCD::OPC_Decode, 149, 1, 56, // Opcode: FCMPEQ16
/* 4131 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 4143
/* 4135 */    MCD::OPC_CheckPredicate, 1, 158, 10, // Skip to: 6857
/* 4139 */    MCD::OPC_Decode, 145, 2, 34, // Opcode: FSRA16
/* 4143 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 4155
/* 4147 */    MCD::OPC_CheckPredicate, 2, 146, 10, // Skip to: 6857
/* 4151 */    MCD::OPC_Decode, 152, 1, 56, // Opcode: FCMPGT32
/* 4155 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 4167
/* 4159 */    MCD::OPC_CheckPredicate, 1, 134, 10, // Skip to: 6857
/* 4163 */    MCD::OPC_Decode, 138, 2, 34, // Opcode: FSLAS32
/* 4167 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4179
/* 4171 */    MCD::OPC_CheckPredicate, 2, 122, 10, // Skip to: 6857
/* 4175 */    MCD::OPC_Decode, 150, 1, 56, // Opcode: FCMPEQ32
/* 4179 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 4191
/* 4183 */    MCD::OPC_CheckPredicate, 1, 110, 10, // Skip to: 6857
/* 4187 */    MCD::OPC_Decode, 146, 2, 34, // Opcode: FSRA32
/* 4191 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 4203
/* 4195 */    MCD::OPC_CheckPredicate, 2, 98, 10, // Skip to: 6857
/* 4199 */    MCD::OPC_Decode, 214, 1, 34, // Opcode: FMUL8X16
/* 4203 */    MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 4215
/* 4207 */    MCD::OPC_CheckPredicate, 2, 86, 10, // Skip to: 6857
/* 4211 */    MCD::OPC_Decode, 216, 1, 34, // Opcode: FMUL8X16AU
/* 4215 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4227
/* 4219 */    MCD::OPC_CheckPredicate, 2, 74, 10, // Skip to: 6857
/* 4223 */    MCD::OPC_Decode, 215, 1, 34, // Opcode: FMUL8X16AL
/* 4227 */    MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 4239
/* 4231 */    MCD::OPC_CheckPredicate, 2, 62, 10, // Skip to: 6857
/* 4235 */    MCD::OPC_Decode, 212, 1, 34, // Opcode: FMUL8SUX16
/* 4239 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 4251
/* 4243 */    MCD::OPC_CheckPredicate, 2, 50, 10, // Skip to: 6857
/* 4247 */    MCD::OPC_Decode, 213, 1, 34, // Opcode: FMUL8ULX16
/* 4251 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 4263
/* 4255 */    MCD::OPC_CheckPredicate, 2, 38, 10, // Skip to: 6857
/* 4259 */    MCD::OPC_Decode, 218, 1, 34, // Opcode: FMULD8SUX16
/* 4263 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 4275
/* 4267 */    MCD::OPC_CheckPredicate, 2, 26, 10, // Skip to: 6857
/* 4271 */    MCD::OPC_Decode, 219, 1, 34, // Opcode: FMULD8ULX16
/* 4275 */    MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 4287
/* 4279 */    MCD::OPC_CheckPredicate, 2, 14, 10, // Skip to: 6857
/* 4283 */    MCD::OPC_Decode, 249, 1, 34, // Opcode: FPACK32
/* 4287 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 4305
/* 4291 */    MCD::OPC_CheckPredicate, 2, 2, 10, // Skip to: 6857
/* 4295 */    MCD::OPC_CheckField, 14, 5, 0, 252, 9, // Skip to: 6857
/* 4301 */    MCD::OPC_Decode, 248, 1, 31, // Opcode: FPACK16
/* 4305 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 4323
/* 4309 */    MCD::OPC_CheckPredicate, 2, 240, 9, // Skip to: 6857
/* 4313 */    MCD::OPC_CheckField, 14, 5, 0, 234, 9, // Skip to: 6857
/* 4319 */    MCD::OPC_Decode, 250, 1, 31, // Opcode: FPACKFIX
/* 4323 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4335
/* 4327 */    MCD::OPC_CheckPredicate, 2, 222, 9, // Skip to: 6857
/* 4331 */    MCD::OPC_Decode, 131, 3, 34, // Opcode: PDIST
/* 4335 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4347
/* 4339 */    MCD::OPC_CheckPredicate, 1, 210, 9, // Skip to: 6857
/* 4343 */    MCD::OPC_Decode, 132, 3, 34, // Opcode: PDISTN
/* 4347 */    MCD::OPC_FilterValue, 64, 8, 0, // Skip to: 4359
/* 4351 */    MCD::OPC_CheckPredicate, 1, 198, 9, // Skip to: 6857
/* 4355 */    MCD::OPC_Decode, 181, 1, 34, // Opcode: FMEAN16
/* 4359 */    MCD::OPC_FilterValue, 66, 8, 0, // Skip to: 4371
/* 4363 */    MCD::OPC_CheckPredicate, 1, 186, 9, // Skip to: 6857
/* 4367 */    MCD::OPC_Decode, 255, 1, 34, // Opcode: FPADD64
/* 4371 */    MCD::OPC_FilterValue, 68, 8, 0, // Skip to: 4383
/* 4375 */    MCD::OPC_CheckPredicate, 1, 174, 9, // Skip to: 6857
/* 4379 */    MCD::OPC_Decode, 147, 1, 34, // Opcode: FCHKSM16
/* 4383 */    MCD::OPC_FilterValue, 72, 8, 0, // Skip to: 4395
/* 4387 */    MCD::OPC_CheckPredicate, 2, 162, 9, // Skip to: 6857
/* 4391 */    MCD::OPC_Decode, 138, 1, 34, // Opcode: FALIGNADATA
/* 4395 */    MCD::OPC_FilterValue, 75, 8, 0, // Skip to: 4407
/* 4399 */    MCD::OPC_CheckPredicate, 2, 150, 9, // Skip to: 6857
/* 4403 */    MCD::OPC_Decode, 128, 2, 34, // Opcode: FPMERGE
/* 4407 */    MCD::OPC_FilterValue, 77, 14, 0, // Skip to: 4425
/* 4411 */    MCD::OPC_CheckPredicate, 2, 138, 9, // Skip to: 6857
/* 4415 */    MCD::OPC_CheckField, 14, 5, 0, 132, 9, // Skip to: 6857
/* 4421 */    MCD::OPC_Decode, 167, 1, 31, // Opcode: FEXPAND
/* 4425 */    MCD::OPC_FilterValue, 80, 8, 0, // Skip to: 4437
/* 4429 */    MCD::OPC_CheckPredicate, 2, 120, 9, // Skip to: 6857
/* 4433 */    MCD::OPC_Decode, 251, 1, 34, // Opcode: FPADD16
/* 4437 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 4449
/* 4441 */    MCD::OPC_CheckPredicate, 2, 108, 9, // Skip to: 6857
/* 4445 */    MCD::OPC_Decode, 252, 1, 34, // Opcode: FPADD16S
/* 4449 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 4461
/* 4453 */    MCD::OPC_CheckPredicate, 2, 96, 9, // Skip to: 6857
/* 4457 */    MCD::OPC_Decode, 253, 1, 34, // Opcode: FPADD32
/* 4461 */    MCD::OPC_FilterValue, 83, 8, 0, // Skip to: 4473
/* 4465 */    MCD::OPC_CheckPredicate, 2, 84, 9, // Skip to: 6857
/* 4469 */    MCD::OPC_Decode, 254, 1, 34, // Opcode: FPADD32S
/* 4473 */    MCD::OPC_FilterValue, 84, 8, 0, // Skip to: 4485
/* 4477 */    MCD::OPC_CheckPredicate, 2, 72, 9, // Skip to: 6857
/* 4481 */    MCD::OPC_Decode, 129, 2, 34, // Opcode: FPSUB16
/* 4485 */    MCD::OPC_FilterValue, 85, 8, 0, // Skip to: 4497
/* 4489 */    MCD::OPC_CheckPredicate, 2, 60, 9, // Skip to: 6857
/* 4493 */    MCD::OPC_Decode, 130, 2, 34, // Opcode: FPSUB16S
/* 4497 */    MCD::OPC_FilterValue, 86, 8, 0, // Skip to: 4509
/* 4501 */    MCD::OPC_CheckPredicate, 2, 48, 9, // Skip to: 6857
/* 4505 */    MCD::OPC_Decode, 131, 2, 34, // Opcode: FPSUB32
/* 4509 */    MCD::OPC_FilterValue, 87, 8, 0, // Skip to: 4521
/* 4513 */    MCD::OPC_CheckPredicate, 2, 36, 9, // Skip to: 6857
/* 4517 */    MCD::OPC_Decode, 132, 2, 34, // Opcode: FPSUB32S
/* 4521 */    MCD::OPC_FilterValue, 96, 20, 0, // Skip to: 4545
/* 4525 */    MCD::OPC_CheckPredicate, 2, 24, 9, // Skip to: 6857
/* 4529 */    MCD::OPC_CheckField, 14, 5, 0, 18, 9, // Skip to: 6857
/* 4535 */    MCD::OPC_CheckField, 0, 5, 0, 12, 9, // Skip to: 6857
/* 4541 */    MCD::OPC_Decode, 167, 2, 57, // Opcode: FZERO
/* 4545 */    MCD::OPC_FilterValue, 97, 20, 0, // Skip to: 4569
/* 4549 */    MCD::OPC_CheckPredicate, 2, 0, 9, // Skip to: 6857
/* 4553 */    MCD::OPC_CheckField, 14, 5, 0, 250, 8, // Skip to: 6857
/* 4559 */    MCD::OPC_CheckField, 0, 5, 0, 244, 8, // Skip to: 6857
/* 4565 */    MCD::OPC_Decode, 168, 2, 58, // Opcode: FZEROS
/* 4569 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 4581
/* 4573 */    MCD::OPC_CheckPredicate, 2, 232, 8, // Skip to: 6857
/* 4577 */    MCD::OPC_Decode, 233, 1, 34, // Opcode: FNOR
/* 4581 */    MCD::OPC_FilterValue, 99, 8, 0, // Skip to: 4593
/* 4585 */    MCD::OPC_CheckPredicate, 2, 220, 8, // Skip to: 6857
/* 4589 */    MCD::OPC_Decode, 234, 1, 33, // Opcode: FNORS
/* 4593 */    MCD::OPC_FilterValue, 100, 8, 0, // Skip to: 4605
/* 4597 */    MCD::OPC_CheckPredicate, 2, 208, 8, // Skip to: 6857
/* 4601 */    MCD::OPC_Decode, 142, 1, 34, // Opcode: FANDNOT2
/* 4605 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 4617
/* 4609 */    MCD::OPC_CheckPredicate, 2, 196, 8, // Skip to: 6857
/* 4613 */    MCD::OPC_Decode, 143, 1, 33, // Opcode: FANDNOT2S
/* 4617 */    MCD::OPC_FilterValue, 102, 14, 0, // Skip to: 4635
/* 4621 */    MCD::OPC_CheckPredicate, 2, 184, 8, // Skip to: 6857
/* 4625 */    MCD::OPC_CheckField, 14, 5, 0, 178, 8, // Skip to: 6857
/* 4631 */    MCD::OPC_Decode, 237, 1, 31, // Opcode: FNOT2
/* 4635 */    MCD::OPC_FilterValue, 103, 14, 0, // Skip to: 4653
/* 4639 */    MCD::OPC_CheckPredicate, 2, 166, 8, // Skip to: 6857
/* 4643 */    MCD::OPC_CheckField, 14, 5, 0, 160, 8, // Skip to: 6857
/* 4649 */    MCD::OPC_Decode, 238, 1, 30, // Opcode: FNOT2S
/* 4653 */    MCD::OPC_FilterValue, 104, 8, 0, // Skip to: 4665
/* 4657 */    MCD::OPC_CheckPredicate, 2, 148, 8, // Skip to: 6857
/* 4661 */    MCD::OPC_Decode, 140, 1, 34, // Opcode: FANDNOT1
/* 4665 */    MCD::OPC_FilterValue, 105, 8, 0, // Skip to: 4677
/* 4669 */    MCD::OPC_CheckPredicate, 2, 136, 8, // Skip to: 6857
/* 4673 */    MCD::OPC_Decode, 141, 1, 33, // Opcode: FANDNOT1S
/* 4677 */    MCD::OPC_FilterValue, 106, 14, 0, // Skip to: 4695
/* 4681 */    MCD::OPC_CheckPredicate, 2, 124, 8, // Skip to: 6857
/* 4685 */    MCD::OPC_CheckField, 0, 5, 0, 118, 8, // Skip to: 6857
/* 4691 */    MCD::OPC_Decode, 235, 1, 59, // Opcode: FNOT1
/* 4695 */    MCD::OPC_FilterValue, 107, 14, 0, // Skip to: 4713
/* 4699 */    MCD::OPC_CheckPredicate, 2, 106, 8, // Skip to: 6857
/* 4703 */    MCD::OPC_CheckField, 0, 5, 0, 100, 8, // Skip to: 6857
/* 4709 */    MCD::OPC_Decode, 236, 1, 60, // Opcode: FNOT1S
/* 4713 */    MCD::OPC_FilterValue, 108, 8, 0, // Skip to: 4725
/* 4717 */    MCD::OPC_CheckPredicate, 2, 88, 8, // Skip to: 6857
/* 4721 */    MCD::OPC_Decode, 162, 2, 34, // Opcode: FXOR
/* 4725 */    MCD::OPC_FilterValue, 109, 8, 0, // Skip to: 4737
/* 4729 */    MCD::OPC_CheckPredicate, 2, 76, 8, // Skip to: 6857
/* 4733 */    MCD::OPC_Decode, 163, 2, 33, // Opcode: FXORS
/* 4737 */    MCD::OPC_FilterValue, 110, 8, 0, // Skip to: 4749
/* 4741 */    MCD::OPC_CheckPredicate, 2, 64, 8, // Skip to: 6857
/* 4745 */    MCD::OPC_Decode, 224, 1, 34, // Opcode: FNAND
/* 4749 */    MCD::OPC_FilterValue, 111, 8, 0, // Skip to: 4761
/* 4753 */    MCD::OPC_CheckPredicate, 2, 52, 8, // Skip to: 6857
/* 4757 */    MCD::OPC_Decode, 225, 1, 33, // Opcode: FNANDS
/* 4761 */    MCD::OPC_FilterValue, 112, 8, 0, // Skip to: 4773
/* 4765 */    MCD::OPC_CheckPredicate, 2, 40, 8, // Skip to: 6857
/* 4769 */    MCD::OPC_Decode, 139, 1, 34, // Opcode: FAND
/* 4773 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 4785
/* 4777 */    MCD::OPC_CheckPredicate, 2, 28, 8, // Skip to: 6857
/* 4781 */    MCD::OPC_Decode, 144, 1, 33, // Opcode: FANDS
/* 4785 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 4797
/* 4789 */    MCD::OPC_CheckPredicate, 2, 16, 8, // Skip to: 6857
/* 4793 */    MCD::OPC_Decode, 160, 2, 34, // Opcode: FXNOR
/* 4797 */    MCD::OPC_FilterValue, 115, 8, 0, // Skip to: 4809
/* 4801 */    MCD::OPC_CheckPredicate, 2, 4, 8, // Skip to: 6857
/* 4805 */    MCD::OPC_Decode, 161, 2, 33, // Opcode: FXNORS
/* 4809 */    MCD::OPC_FilterValue, 116, 14, 0, // Skip to: 4827
/* 4813 */    MCD::OPC_CheckPredicate, 2, 248, 7, // Skip to: 6857
/* 4817 */    MCD::OPC_CheckField, 0, 5, 0, 242, 7, // Skip to: 6857
/* 4823 */    MCD::OPC_Decode, 147, 2, 59, // Opcode: FSRC1
/* 4827 */    MCD::OPC_FilterValue, 117, 14, 0, // Skip to: 4845
/* 4831 */    MCD::OPC_CheckPredicate, 2, 230, 7, // Skip to: 6857
/* 4835 */    MCD::OPC_CheckField, 0, 5, 0, 224, 7, // Skip to: 6857
/* 4841 */    MCD::OPC_Decode, 148, 2, 60, // Opcode: FSRC1S
/* 4845 */    MCD::OPC_FilterValue, 118, 8, 0, // Skip to: 4857
/* 4849 */    MCD::OPC_CheckPredicate, 2, 212, 7, // Skip to: 6857
/* 4853 */    MCD::OPC_Decode, 245, 1, 34, // Opcode: FORNOT2
/* 4857 */    MCD::OPC_FilterValue, 119, 8, 0, // Skip to: 4869
/* 4861 */    MCD::OPC_CheckPredicate, 2, 200, 7, // Skip to: 6857
/* 4865 */    MCD::OPC_Decode, 246, 1, 33, // Opcode: FORNOT2S
/* 4869 */    MCD::OPC_FilterValue, 120, 14, 0, // Skip to: 4887
/* 4873 */    MCD::OPC_CheckPredicate, 2, 188, 7, // Skip to: 6857
/* 4877 */    MCD::OPC_CheckField, 14, 5, 0, 182, 7, // Skip to: 6857
/* 4883 */    MCD::OPC_Decode, 149, 2, 31, // Opcode: FSRC2
/* 4887 */    MCD::OPC_FilterValue, 121, 14, 0, // Skip to: 4905
/* 4891 */    MCD::OPC_CheckPredicate, 2, 170, 7, // Skip to: 6857
/* 4895 */    MCD::OPC_CheckField, 14, 5, 0, 164, 7, // Skip to: 6857
/* 4901 */    MCD::OPC_Decode, 150, 2, 30, // Opcode: FSRC2S
/* 4905 */    MCD::OPC_FilterValue, 122, 8, 0, // Skip to: 4917
/* 4909 */    MCD::OPC_CheckPredicate, 2, 152, 7, // Skip to: 6857
/* 4913 */    MCD::OPC_Decode, 243, 1, 34, // Opcode: FORNOT1
/* 4917 */    MCD::OPC_FilterValue, 123, 8, 0, // Skip to: 4929
/* 4921 */    MCD::OPC_CheckPredicate, 2, 140, 7, // Skip to: 6857
/* 4925 */    MCD::OPC_Decode, 244, 1, 33, // Opcode: FORNOT1S
/* 4929 */    MCD::OPC_FilterValue, 124, 8, 0, // Skip to: 4941
/* 4933 */    MCD::OPC_CheckPredicate, 2, 128, 7, // Skip to: 6857
/* 4937 */    MCD::OPC_Decode, 242, 1, 34, // Opcode: FOR
/* 4941 */    MCD::OPC_FilterValue, 125, 8, 0, // Skip to: 4953
/* 4945 */    MCD::OPC_CheckPredicate, 2, 116, 7, // Skip to: 6857
/* 4949 */    MCD::OPC_Decode, 247, 1, 33, // Opcode: FORS
/* 4953 */    MCD::OPC_FilterValue, 126, 20, 0, // Skip to: 4977
/* 4957 */    MCD::OPC_CheckPredicate, 2, 104, 7, // Skip to: 6857
/* 4961 */    MCD::OPC_CheckField, 14, 5, 0, 98, 7, // Skip to: 6857
/* 4967 */    MCD::OPC_CheckField, 0, 5, 0, 92, 7, // Skip to: 6857
/* 4973 */    MCD::OPC_Decode, 240, 1, 57, // Opcode: FONE
/* 4977 */    MCD::OPC_FilterValue, 127, 20, 0, // Skip to: 5001
/* 4981 */    MCD::OPC_CheckPredicate, 2, 80, 7, // Skip to: 6857
/* 4985 */    MCD::OPC_CheckField, 14, 5, 0, 74, 7, // Skip to: 6857
/* 4991 */    MCD::OPC_CheckField, 0, 5, 0, 68, 7, // Skip to: 6857
/* 4997 */    MCD::OPC_Decode, 241, 1, 58, // Opcode: FONES
/* 5001 */    MCD::OPC_FilterValue, 128, 1, 26, 0, // Skip to: 5032
/* 5006 */    MCD::OPC_CheckPredicate, 2, 55, 7, // Skip to: 6857
/* 5010 */    MCD::OPC_CheckField, 25, 5, 0, 49, 7, // Skip to: 6857
/* 5016 */    MCD::OPC_CheckField, 14, 5, 0, 43, 7, // Skip to: 6857
/* 5022 */    MCD::OPC_CheckField, 0, 5, 0, 37, 7, // Skip to: 6857
/* 5028 */    MCD::OPC_Decode, 164, 3, 4, // Opcode: SHUTDOWN
/* 5032 */    MCD::OPC_FilterValue, 129, 1, 26, 0, // Skip to: 5063
/* 5037 */    MCD::OPC_CheckPredicate, 3, 24, 7, // Skip to: 6857
/* 5041 */    MCD::OPC_CheckField, 25, 5, 0, 18, 7, // Skip to: 6857
/* 5047 */    MCD::OPC_CheckField, 14, 5, 0, 12, 7, // Skip to: 6857
/* 5053 */    MCD::OPC_CheckField, 0, 5, 0, 6, 7, // Skip to: 6857
/* 5059 */    MCD::OPC_Decode, 165, 3, 4, // Opcode: SIAM
/* 5063 */    MCD::OPC_FilterValue, 144, 2, 14, 0, // Skip to: 5082
/* 5068 */    MCD::OPC_CheckPredicate, 1, 249, 6, // Skip to: 6857
/* 5072 */    MCD::OPC_CheckField, 14, 5, 0, 243, 6, // Skip to: 6857
/* 5078 */    MCD::OPC_Decode, 220, 2, 61, // Opcode: MOVDTOX
/* 5082 */    MCD::OPC_FilterValue, 145, 2, 14, 0, // Skip to: 5101
/* 5087 */    MCD::OPC_CheckPredicate, 1, 230, 6, // Skip to: 6857
/* 5091 */    MCD::OPC_CheckField, 14, 5, 0, 224, 6, // Skip to: 6857
/* 5097 */    MCD::OPC_Decode, 238, 2, 61, // Opcode: MOVSTOUW
/* 5101 */    MCD::OPC_FilterValue, 147, 2, 14, 0, // Skip to: 5120
/* 5106 */    MCD::OPC_CheckPredicate, 1, 211, 6, // Skip to: 6857
/* 5110 */    MCD::OPC_CheckField, 14, 5, 0, 205, 6, // Skip to: 6857
/* 5116 */    MCD::OPC_Decode, 237, 2, 61, // Opcode: MOVSTOSW
/* 5120 */    MCD::OPC_FilterValue, 149, 2, 8, 0, // Skip to: 5133
/* 5125 */    MCD::OPC_CheckPredicate, 1, 192, 6, // Skip to: 6857
/* 5129 */    MCD::OPC_Decode, 163, 4, 10, // Opcode: XMULX
/* 5133 */    MCD::OPC_FilterValue, 151, 2, 8, 0, // Skip to: 5146
/* 5138 */    MCD::OPC_CheckPredicate, 1, 179, 6, // Skip to: 6857
/* 5142 */    MCD::OPC_Decode, 164, 4, 10, // Opcode: XMULXHI
/* 5146 */    MCD::OPC_FilterValue, 152, 2, 14, 0, // Skip to: 5165
/* 5151 */    MCD::OPC_CheckPredicate, 1, 166, 6, // Skip to: 6857
/* 5155 */    MCD::OPC_CheckField, 14, 5, 0, 160, 6, // Skip to: 6857
/* 5161 */    MCD::OPC_Decode, 242, 2, 62, // Opcode: MOVXTOD
/* 5165 */    MCD::OPC_FilterValue, 153, 2, 14, 0, // Skip to: 5184
/* 5170 */    MCD::OPC_CheckPredicate, 1, 147, 6, // Skip to: 6857
/* 5174 */    MCD::OPC_CheckField, 14, 5, 0, 141, 6, // Skip to: 6857
/* 5180 */    MCD::OPC_Decode, 239, 2, 62, // Opcode: MOVWTOS
/* 5184 */    MCD::OPC_FilterValue, 209, 2, 8, 0, // Skip to: 5197
/* 5189 */    MCD::OPC_CheckPredicate, 1, 128, 6, // Skip to: 6857
/* 5193 */    MCD::OPC_Decode, 176, 1, 52, // Opcode: FLCMPS
/* 5197 */    MCD::OPC_FilterValue, 210, 2, 119, 6, // Skip to: 6857
/* 5202 */    MCD::OPC_CheckPredicate, 1, 115, 6, // Skip to: 6857
/* 5206 */    MCD::OPC_Decode, 175, 1, 52, // Opcode: FLCMPD
/* 5210 */    MCD::OPC_FilterValue, 56, 25, 0, // Skip to: 5239
/* 5214 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5217 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5231
/* 5221 */    MCD::OPC_CheckField, 5, 8, 0, 94, 6, // Skip to: 6857
/* 5227 */    MCD::OPC_Decode, 171, 2, 63, // Opcode: JMPLrr
/* 5231 */    MCD::OPC_FilterValue, 1, 86, 6, // Skip to: 6857
/* 5235 */    MCD::OPC_Decode, 170, 2, 63, // Opcode: JMPLri
/* 5239 */    MCD::OPC_FilterValue, 57, 37, 0, // Skip to: 5280
/* 5243 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5246 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5266
/* 5250 */    MCD::OPC_CheckField, 25, 5, 0, 65, 6, // Skip to: 6857
/* 5256 */    MCD::OPC_CheckField, 5, 8, 0, 59, 6, // Skip to: 6857
/* 5262 */    MCD::OPC_Decode, 144, 3, 64, // Opcode: RETTrr
/* 5266 */    MCD::OPC_FilterValue, 1, 51, 6, // Skip to: 6857
/* 5270 */    MCD::OPC_CheckField, 25, 5, 0, 45, 6, // Skip to: 6857
/* 5276 */    MCD::OPC_Decode, 143, 3, 64, // Opcode: RETTri
/* 5280 */    MCD::OPC_FilterValue, 58, 84, 0, // Skip to: 5368
/* 5284 */    MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 5287 */    MCD::OPC_FilterValue, 16, 16, 0, // Skip to: 5307
/* 5291 */    MCD::OPC_CheckField, 29, 1, 0, 24, 6, // Skip to: 6857
/* 5297 */    MCD::OPC_CheckField, 5, 3, 0, 18, 6, // Skip to: 6857
/* 5303 */    MCD::OPC_Decode, 255, 3, 65, // Opcode: TXCCrr
/* 5307 */    MCD::OPC_FilterValue, 32, 43, 0, // Skip to: 5354
/* 5311 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 5314 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 5334
/* 5318 */    MCD::OPC_CheckField, 25, 5, 0, 253, 5, // Skip to: 6857
/* 5324 */    MCD::OPC_CheckField, 14, 5, 1, 247, 5, // Skip to: 6857
/* 5330 */    MCD::OPC_Decode, 235, 3, 4, // Opcode: TA3
/* 5334 */    MCD::OPC_FilterValue, 5, 239, 5, // Skip to: 6857
/* 5338 */    MCD::OPC_CheckField, 25, 5, 8, 233, 5, // Skip to: 6857
/* 5344 */    MCD::OPC_CheckField, 14, 5, 0, 227, 5, // Skip to: 6857
/* 5350 */    MCD::OPC_Decode, 236, 3, 4, // Opcode: TA5
/* 5354 */    MCD::OPC_FilterValue, 48, 219, 5, // Skip to: 6857
/* 5358 */    MCD::OPC_CheckField, 29, 1, 0, 213, 5, // Skip to: 6857
/* 5364 */    MCD::OPC_Decode, 254, 3, 66, // Opcode: TXCCri
/* 5368 */    MCD::OPC_FilterValue, 59, 55, 0, // Skip to: 5427
/* 5372 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5375 */    MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 5413
/* 5379 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 5382 */    MCD::OPC_FilterValue, 0, 191, 5, // Skip to: 6857
/* 5386 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 5389 */    MCD::OPC_FilterValue, 0, 184, 5, // Skip to: 6857
/* 5393 */    MCD::OPC_CheckField, 14, 5, 0, 10, 0, // Skip to: 5409
/* 5399 */    MCD::OPC_CheckField, 0, 5, 0, 4, 0, // Skip to: 5409
/* 5405 */    MCD::OPC_Decode, 177, 1, 4, // Opcode: FLUSH
/* 5409 */    MCD::OPC_Decode, 180, 1, 4, // Opcode: FLUSHrr
/* 5413 */    MCD::OPC_FilterValue, 1, 160, 5, // Skip to: 6857
/* 5417 */    MCD::OPC_CheckField, 25, 5, 0, 154, 5, // Skip to: 6857
/* 5423 */    MCD::OPC_Decode, 179, 1, 4, // Opcode: FLUSHri
/* 5427 */    MCD::OPC_FilterValue, 60, 25, 0, // Skip to: 5456
/* 5431 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5434 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5448
/* 5438 */    MCD::OPC_CheckField, 5, 8, 0, 133, 5, // Skip to: 6857
/* 5444 */    MCD::OPC_Decode, 146, 3, 8, // Opcode: SAVErr
/* 5448 */    MCD::OPC_FilterValue, 1, 125, 5, // Skip to: 6857
/* 5452 */    MCD::OPC_Decode, 145, 3, 9, // Opcode: SAVEri
/* 5456 */    MCD::OPC_FilterValue, 61, 25, 0, // Skip to: 5485
/* 5460 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5463 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5477
/* 5467 */    MCD::OPC_CheckField, 5, 8, 0, 104, 5, // Skip to: 6857
/* 5473 */    MCD::OPC_Decode, 140, 3, 8, // Opcode: RESTORErr
/* 5477 */    MCD::OPC_FilterValue, 1, 96, 5, // Skip to: 6857
/* 5481 */    MCD::OPC_Decode, 139, 3, 9, // Opcode: RESTOREri
/* 5485 */    MCD::OPC_FilterValue, 62, 25, 0, // Skip to: 5514
/* 5489 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5492 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5506
/* 5496 */    MCD::OPC_CheckField, 5, 8, 0, 75, 5, // Skip to: 6857
/* 5502 */    MCD::OPC_Decode, 135, 4, 8, // Opcode: UMACrr
/* 5506 */    MCD::OPC_FilterValue, 1, 67, 5, // Skip to: 6857
/* 5510 */    MCD::OPC_Decode, 134, 4, 9, // Opcode: UMACri
/* 5514 */    MCD::OPC_FilterValue, 63, 59, 5, // Skip to: 6857
/* 5518 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5521 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5535
/* 5525 */    MCD::OPC_CheckField, 5, 8, 0, 46, 5, // Skip to: 6857
/* 5531 */    MCD::OPC_Decode, 171, 3, 8, // Opcode: SMACrr
/* 5535 */    MCD::OPC_FilterValue, 1, 38, 5, // Skip to: 6857
/* 5539 */    MCD::OPC_Decode, 170, 3, 9, // Opcode: SMACri
/* 5543 */    MCD::OPC_FilterValue, 3, 30, 5, // Skip to: 6857
/* 5547 */    MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 5550 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 5579
/* 5554 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5557 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5571
/* 5561 */    MCD::OPC_CheckField, 5, 8, 0, 10, 5, // Skip to: 6857
/* 5567 */    MCD::OPC_Decode, 215, 2, 67, // Opcode: LDrr
/* 5571 */    MCD::OPC_FilterValue, 1, 2, 5, // Skip to: 6857
/* 5575 */    MCD::OPC_Decode, 214, 2, 67, // Opcode: LDri
/* 5579 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 5608
/* 5583 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5586 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5600
/* 5590 */    MCD::OPC_CheckField, 5, 8, 0, 237, 4, // Skip to: 6857
/* 5596 */    MCD::OPC_Decode, 206, 2, 67, // Opcode: LDUBrr
/* 5600 */    MCD::OPC_FilterValue, 1, 229, 4, // Skip to: 6857
/* 5604 */    MCD::OPC_Decode, 205, 2, 67, // Opcode: LDUBri
/* 5608 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 5637
/* 5612 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5615 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5629
/* 5619 */    MCD::OPC_CheckField, 5, 8, 0, 208, 4, // Skip to: 6857
/* 5625 */    MCD::OPC_Decode, 209, 2, 67, // Opcode: LDUHrr
/* 5629 */    MCD::OPC_FilterValue, 1, 200, 4, // Skip to: 6857
/* 5633 */    MCD::OPC_Decode, 208, 2, 67, // Opcode: LDUHri
/* 5637 */    MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 5666
/* 5641 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5644 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5658
/* 5648 */    MCD::OPC_CheckField, 5, 8, 0, 179, 4, // Skip to: 6857
/* 5654 */    MCD::OPC_Decode, 184, 2, 68, // Opcode: LDDrr
/* 5658 */    MCD::OPC_FilterValue, 1, 171, 4, // Skip to: 6857
/* 5662 */    MCD::OPC_Decode, 183, 2, 68, // Opcode: LDDri
/* 5666 */    MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 5695
/* 5670 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5673 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5687
/* 5677 */    MCD::OPC_CheckField, 5, 8, 0, 150, 4, // Skip to: 6857
/* 5683 */    MCD::OPC_Decode, 221, 3, 69, // Opcode: STrr
/* 5687 */    MCD::OPC_FilterValue, 1, 142, 4, // Skip to: 6857
/* 5691 */    MCD::OPC_Decode, 220, 3, 69, // Opcode: STri
/* 5695 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 5724
/* 5699 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5702 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5716
/* 5706 */    MCD::OPC_CheckField, 5, 8, 0, 121, 4, // Skip to: 6857
/* 5712 */    MCD::OPC_Decode, 188, 3, 69, // Opcode: STBrr
/* 5716 */    MCD::OPC_FilterValue, 1, 113, 4, // Skip to: 6857
/* 5720 */    MCD::OPC_Decode, 187, 3, 69, // Opcode: STBri
/* 5724 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 5753
/* 5728 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5731 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5745
/* 5735 */    MCD::OPC_CheckField, 5, 8, 0, 92, 4, // Skip to: 6857
/* 5741 */    MCD::OPC_Decode, 212, 3, 69, // Opcode: STHrr
/* 5745 */    MCD::OPC_FilterValue, 1, 84, 4, // Skip to: 6857
/* 5749 */    MCD::OPC_Decode, 211, 3, 69, // Opcode: STHri
/* 5753 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 5782
/* 5757 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5760 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5774
/* 5764 */    MCD::OPC_CheckField, 5, 8, 0, 63, 4, // Skip to: 6857
/* 5770 */    MCD::OPC_Decode, 204, 3, 70, // Opcode: STDrr
/* 5774 */    MCD::OPC_FilterValue, 1, 55, 4, // Skip to: 6857
/* 5778 */    MCD::OPC_Decode, 203, 3, 70, // Opcode: STDri
/* 5782 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 5811
/* 5786 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5789 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5803
/* 5793 */    MCD::OPC_CheckField, 5, 8, 0, 34, 4, // Skip to: 6857
/* 5799 */    MCD::OPC_Decode, 203, 2, 67, // Opcode: LDSWrr
/* 5803 */    MCD::OPC_FilterValue, 1, 26, 4, // Skip to: 6857
/* 5807 */    MCD::OPC_Decode, 202, 2, 67, // Opcode: LDSWri
/* 5811 */    MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 5840
/* 5815 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5818 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5832
/* 5822 */    MCD::OPC_CheckField, 5, 8, 0, 5, 4, // Skip to: 6857
/* 5828 */    MCD::OPC_Decode, 195, 2, 67, // Opcode: LDSBrr
/* 5832 */    MCD::OPC_FilterValue, 1, 253, 3, // Skip to: 6857
/* 5836 */    MCD::OPC_Decode, 194, 2, 67, // Opcode: LDSBri
/* 5840 */    MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 5869
/* 5844 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5847 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5861
/* 5851 */    MCD::OPC_CheckField, 5, 8, 0, 232, 3, // Skip to: 6857
/* 5857 */    MCD::OPC_Decode, 198, 2, 67, // Opcode: LDSHrr
/* 5861 */    MCD::OPC_FilterValue, 1, 224, 3, // Skip to: 6857
/* 5865 */    MCD::OPC_Decode, 197, 2, 67, // Opcode: LDSHri
/* 5869 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 5898
/* 5873 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5876 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5890
/* 5880 */    MCD::OPC_CheckField, 5, 8, 0, 203, 3, // Skip to: 6857
/* 5886 */    MCD::OPC_Decode, 213, 2, 67, // Opcode: LDXrr
/* 5890 */    MCD::OPC_FilterValue, 1, 195, 3, // Skip to: 6857
/* 5894 */    MCD::OPC_Decode, 212, 2, 67, // Opcode: LDXri
/* 5898 */    MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 5927
/* 5902 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5905 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5919
/* 5909 */    MCD::OPC_CheckField, 5, 8, 0, 174, 3, // Skip to: 6857
/* 5915 */    MCD::OPC_Decode, 201, 2, 4, // Opcode: LDSTUBrr
/* 5919 */    MCD::OPC_FilterValue, 1, 166, 3, // Skip to: 6857
/* 5923 */    MCD::OPC_Decode, 200, 2, 4, // Opcode: LDSTUBri
/* 5927 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 5956
/* 5931 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5934 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5948
/* 5938 */    MCD::OPC_CheckField, 5, 8, 0, 145, 3, // Skip to: 6857
/* 5944 */    MCD::OPC_Decode, 219, 3, 69, // Opcode: STXrr
/* 5948 */    MCD::OPC_FilterValue, 1, 137, 3, // Skip to: 6857
/* 5952 */    MCD::OPC_Decode, 218, 3, 69, // Opcode: STXri
/* 5956 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 5985
/* 5960 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5963 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5977
/* 5967 */    MCD::OPC_CheckField, 5, 8, 0, 116, 3, // Skip to: 6857
/* 5973 */    MCD::OPC_Decode, 234, 3, 71, // Opcode: SWAPrr
/* 5977 */    MCD::OPC_FilterValue, 1, 108, 3, // Skip to: 6857
/* 5981 */    MCD::OPC_Decode, 233, 3, 71, // Opcode: SWAPri
/* 5985 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 5999
/* 5989 */    MCD::OPC_CheckField, 13, 1, 0, 94, 3, // Skip to: 6857
/* 5995 */    MCD::OPC_Decode, 172, 2, 67, // Opcode: LDArr
/* 5999 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 6013
/* 6003 */    MCD::OPC_CheckField, 13, 1, 0, 80, 3, // Skip to: 6857
/* 6009 */    MCD::OPC_Decode, 204, 2, 67, // Opcode: LDUBArr
/* 6013 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6027
/* 6017 */    MCD::OPC_CheckField, 13, 1, 0, 66, 3, // Skip to: 6857
/* 6023 */    MCD::OPC_Decode, 207, 2, 67, // Opcode: LDUHArr
/* 6027 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 6041
/* 6031 */    MCD::OPC_CheckField, 13, 1, 0, 52, 3, // Skip to: 6857
/* 6037 */    MCD::OPC_Decode, 177, 2, 68, // Opcode: LDDArr
/* 6041 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6055
/* 6045 */    MCD::OPC_CheckField, 13, 1, 0, 38, 3, // Skip to: 6857
/* 6051 */    MCD::OPC_Decode, 184, 3, 69, // Opcode: STArr
/* 6055 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 6069
/* 6059 */    MCD::OPC_CheckField, 13, 1, 0, 24, 3, // Skip to: 6857
/* 6065 */    MCD::OPC_Decode, 186, 3, 69, // Opcode: STBArr
/* 6069 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 6083
/* 6073 */    MCD::OPC_CheckField, 13, 1, 0, 10, 3, // Skip to: 6857
/* 6079 */    MCD::OPC_Decode, 210, 3, 69, // Opcode: STHArr
/* 6083 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 6097
/* 6087 */    MCD::OPC_CheckField, 13, 1, 0, 252, 2, // Skip to: 6857
/* 6093 */    MCD::OPC_Decode, 193, 3, 70, // Opcode: STDArr
/* 6097 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 6111
/* 6101 */    MCD::OPC_CheckField, 13, 1, 0, 238, 2, // Skip to: 6857
/* 6107 */    MCD::OPC_Decode, 193, 2, 67, // Opcode: LDSBArr
/* 6111 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6125
/* 6115 */    MCD::OPC_CheckField, 13, 1, 0, 224, 2, // Skip to: 6857
/* 6121 */    MCD::OPC_Decode, 196, 2, 67, // Opcode: LDSHArr
/* 6125 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 6139
/* 6129 */    MCD::OPC_CheckField, 13, 1, 0, 210, 2, // Skip to: 6857
/* 6135 */    MCD::OPC_Decode, 199, 2, 72, // Opcode: LDSTUBArr
/* 6139 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 6153
/* 6143 */    MCD::OPC_CheckField, 13, 1, 0, 196, 2, // Skip to: 6857
/* 6149 */    MCD::OPC_Decode, 232, 3, 71, // Opcode: SWAPArr
/* 6153 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 6182
/* 6157 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6160 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6174
/* 6164 */    MCD::OPC_CheckField, 5, 8, 0, 175, 2, // Skip to: 6857
/* 6170 */    MCD::OPC_Decode, 189, 2, 73, // Opcode: LDFrr
/* 6174 */    MCD::OPC_FilterValue, 1, 167, 2, // Skip to: 6857
/* 6178 */    MCD::OPC_Decode, 188, 2, 73, // Opcode: LDFri
/* 6182 */    MCD::OPC_FilterValue, 33, 69, 0, // Skip to: 6255
/* 6186 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6189 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6228
/* 6193 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6196 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6210
/* 6200 */    MCD::OPC_CheckField, 5, 8, 0, 139, 2, // Skip to: 6857
/* 6206 */    MCD::OPC_Decode, 187, 2, 73, // Opcode: LDFSRrr
/* 6210 */    MCD::OPC_FilterValue, 1, 131, 2, // Skip to: 6857
/* 6214 */    MCD::OPC_CheckPredicate, 0, 127, 2, // Skip to: 6857
/* 6218 */    MCD::OPC_CheckField, 5, 8, 0, 121, 2, // Skip to: 6857
/* 6224 */    MCD::OPC_Decode, 211, 2, 73, // Opcode: LDXFSRrr
/* 6228 */    MCD::OPC_FilterValue, 1, 113, 2, // Skip to: 6857
/* 6232 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6235 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6243
/* 6239 */    MCD::OPC_Decode, 186, 2, 73, // Opcode: LDFSRri
/* 6243 */    MCD::OPC_FilterValue, 1, 98, 2, // Skip to: 6857
/* 6247 */    MCD::OPC_CheckPredicate, 0, 94, 2, // Skip to: 6857
/* 6251 */    MCD::OPC_Decode, 210, 2, 73, // Opcode: LDXFSRri
/* 6255 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 6292
/* 6259 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6262 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 6280
/* 6266 */    MCD::OPC_CheckPredicate, 0, 75, 2, // Skip to: 6857
/* 6270 */    MCD::OPC_CheckField, 5, 8, 0, 69, 2, // Skip to: 6857
/* 6276 */    MCD::OPC_Decode, 192, 2, 74, // Opcode: LDQFrr
/* 6280 */    MCD::OPC_FilterValue, 1, 61, 2, // Skip to: 6857
/* 6284 */    MCD::OPC_CheckPredicate, 0, 57, 2, // Skip to: 6857
/* 6288 */    MCD::OPC_Decode, 191, 2, 74, // Opcode: LDQFri
/* 6292 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 6321
/* 6296 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6299 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6313
/* 6303 */    MCD::OPC_CheckField, 5, 8, 0, 36, 2, // Skip to: 6857
/* 6309 */    MCD::OPC_Decode, 182, 2, 75, // Opcode: LDDFrr
/* 6313 */    MCD::OPC_FilterValue, 1, 28, 2, // Skip to: 6857
/* 6317 */    MCD::OPC_Decode, 181, 2, 75, // Opcode: LDDFri
/* 6321 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 6350
/* 6325 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6328 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6342
/* 6332 */    MCD::OPC_CheckField, 5, 8, 0, 7, 2, // Skip to: 6857
/* 6338 */    MCD::OPC_Decode, 209, 3, 76, // Opcode: STFrr
/* 6342 */    MCD::OPC_FilterValue, 1, 255, 1, // Skip to: 6857
/* 6346 */    MCD::OPC_Decode, 208, 3, 76, // Opcode: STFri
/* 6350 */    MCD::OPC_FilterValue, 37, 69, 0, // Skip to: 6423
/* 6354 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6357 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6396
/* 6361 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6364 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6378
/* 6368 */    MCD::OPC_CheckField, 5, 8, 0, 227, 1, // Skip to: 6857
/* 6374 */    MCD::OPC_Decode, 207, 3, 76, // Opcode: STFSRrr
/* 6378 */    MCD::OPC_FilterValue, 1, 219, 1, // Skip to: 6857
/* 6382 */    MCD::OPC_CheckPredicate, 0, 215, 1, // Skip to: 6857
/* 6386 */    MCD::OPC_CheckField, 5, 8, 0, 209, 1, // Skip to: 6857
/* 6392 */    MCD::OPC_Decode, 217, 3, 76, // Opcode: STXFSRrr
/* 6396 */    MCD::OPC_FilterValue, 1, 201, 1, // Skip to: 6857
/* 6400 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6403 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6411
/* 6407 */    MCD::OPC_Decode, 206, 3, 76, // Opcode: STFSRri
/* 6411 */    MCD::OPC_FilterValue, 1, 186, 1, // Skip to: 6857
/* 6415 */    MCD::OPC_CheckPredicate, 0, 182, 1, // Skip to: 6857
/* 6419 */    MCD::OPC_Decode, 216, 3, 76, // Opcode: STXFSRri
/* 6423 */    MCD::OPC_FilterValue, 38, 54, 0, // Skip to: 6481
/* 6427 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6430 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 6459
/* 6434 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6437 */    MCD::OPC_FilterValue, 0, 160, 1, // Skip to: 6857
/* 6441 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 6451
/* 6447 */    MCD::OPC_Decode, 200, 3, 76, // Opcode: STDFQrr
/* 6451 */    MCD::OPC_CheckPredicate, 0, 146, 1, // Skip to: 6857
/* 6455 */    MCD::OPC_Decode, 215, 3, 77, // Opcode: STQFrr
/* 6459 */    MCD::OPC_FilterValue, 1, 138, 1, // Skip to: 6857
/* 6463 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 6473
/* 6469 */    MCD::OPC_Decode, 199, 3, 76, // Opcode: STDFQri
/* 6473 */    MCD::OPC_CheckPredicate, 0, 124, 1, // Skip to: 6857
/* 6477 */    MCD::OPC_Decode, 214, 3, 77, // Opcode: STQFri
/* 6481 */    MCD::OPC_FilterValue, 39, 25, 0, // Skip to: 6510
/* 6485 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6488 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6502
/* 6492 */    MCD::OPC_CheckField, 5, 8, 0, 103, 1, // Skip to: 6857
/* 6498 */    MCD::OPC_Decode, 202, 3, 78, // Opcode: STDFrr
/* 6502 */    MCD::OPC_FilterValue, 1, 95, 1, // Skip to: 6857
/* 6506 */    MCD::OPC_Decode, 201, 3, 78, // Opcode: STDFri
/* 6510 */    MCD::OPC_FilterValue, 48, 33, 0, // Skip to: 6547
/* 6514 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6517 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6539
/* 6521 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6531
/* 6527 */    MCD::OPC_Decode, 176, 2, 79, // Opcode: LDCrr
/* 6531 */    MCD::OPC_CheckPredicate, 0, 66, 1, // Skip to: 6857
/* 6535 */    MCD::OPC_Decode, 185, 2, 73, // Opcode: LDFArr
/* 6539 */    MCD::OPC_FilterValue, 1, 58, 1, // Skip to: 6857
/* 6543 */    MCD::OPC_Decode, 175, 2, 79, // Opcode: LDCri
/* 6547 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 6588
/* 6551 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6554 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6574
/* 6558 */    MCD::OPC_CheckField, 25, 5, 0, 37, 1, // Skip to: 6857
/* 6564 */    MCD::OPC_CheckField, 5, 8, 0, 31, 1, // Skip to: 6857
/* 6570 */    MCD::OPC_Decode, 174, 2, 79, // Opcode: LDCSRrr
/* 6574 */    MCD::OPC_FilterValue, 1, 23, 1, // Skip to: 6857
/* 6578 */    MCD::OPC_CheckField, 25, 5, 0, 17, 1, // Skip to: 6857
/* 6584 */    MCD::OPC_Decode, 173, 2, 79, // Opcode: LDCSRri
/* 6588 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 6606
/* 6592 */    MCD::OPC_CheckPredicate, 0, 5, 1, // Skip to: 6857
/* 6596 */    MCD::OPC_CheckField, 13, 1, 0, 255, 0, // Skip to: 6857
/* 6602 */    MCD::OPC_Decode, 190, 2, 74, // Opcode: LDQFArr
/* 6606 */    MCD::OPC_FilterValue, 51, 33, 0, // Skip to: 6643
/* 6610 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6613 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6635
/* 6617 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6627
/* 6623 */    MCD::OPC_Decode, 179, 2, 80, // Opcode: LDDCrr
/* 6627 */    MCD::OPC_CheckPredicate, 0, 226, 0, // Skip to: 6857
/* 6631 */    MCD::OPC_Decode, 180, 2, 75, // Opcode: LDDFArr
/* 6635 */    MCD::OPC_FilterValue, 1, 218, 0, // Skip to: 6857
/* 6639 */    MCD::OPC_Decode, 178, 2, 80, // Opcode: LDDCri
/* 6643 */    MCD::OPC_FilterValue, 52, 33, 0, // Skip to: 6680
/* 6647 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6650 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6672
/* 6654 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6664
/* 6660 */    MCD::OPC_Decode, 192, 3, 81, // Opcode: STCrr
/* 6664 */    MCD::OPC_CheckPredicate, 0, 189, 0, // Skip to: 6857
/* 6668 */    MCD::OPC_Decode, 205, 3, 76, // Opcode: STFArr
/* 6672 */    MCD::OPC_FilterValue, 1, 181, 0, // Skip to: 6857
/* 6676 */    MCD::OPC_Decode, 191, 3, 81, // Opcode: STCri
/* 6680 */    MCD::OPC_FilterValue, 53, 37, 0, // Skip to: 6721
/* 6684 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6687 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6707
/* 6691 */    MCD::OPC_CheckField, 25, 5, 0, 160, 0, // Skip to: 6857
/* 6697 */    MCD::OPC_CheckField, 5, 8, 0, 154, 0, // Skip to: 6857
/* 6703 */    MCD::OPC_Decode, 190, 3, 81, // Opcode: STCSRrr
/* 6707 */    MCD::OPC_FilterValue, 1, 146, 0, // Skip to: 6857
/* 6711 */    MCD::OPC_CheckField, 25, 5, 0, 140, 0, // Skip to: 6857
/* 6717 */    MCD::OPC_Decode, 189, 3, 81, // Opcode: STCSRri
/* 6721 */    MCD::OPC_FilterValue, 54, 45, 0, // Skip to: 6770
/* 6725 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6728 */    MCD::OPC_FilterValue, 0, 24, 0, // Skip to: 6756
/* 6732 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 6748
/* 6738 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6748
/* 6744 */    MCD::OPC_Decode, 195, 3, 81, // Opcode: STDCQrr
/* 6748 */    MCD::OPC_CheckPredicate, 0, 105, 0, // Skip to: 6857
/* 6752 */    MCD::OPC_Decode, 213, 3, 77, // Opcode: STQFArr
/* 6756 */    MCD::OPC_FilterValue, 1, 97, 0, // Skip to: 6857
/* 6760 */    MCD::OPC_CheckField, 25, 5, 0, 91, 0, // Skip to: 6857
/* 6766 */    MCD::OPC_Decode, 194, 3, 81, // Opcode: STDCQri
/* 6770 */    MCD::OPC_FilterValue, 55, 33, 0, // Skip to: 6807
/* 6774 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6777 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6799
/* 6781 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6791
/* 6787 */    MCD::OPC_Decode, 197, 3, 82, // Opcode: STDCrr
/* 6791 */    MCD::OPC_CheckPredicate, 0, 62, 0, // Skip to: 6857
/* 6795 */    MCD::OPC_Decode, 198, 3, 78, // Opcode: STDFArr
/* 6799 */    MCD::OPC_FilterValue, 1, 54, 0, // Skip to: 6857
/* 6803 */    MCD::OPC_Decode, 196, 3, 82, // Opcode: STDCri
/* 6807 */    MCD::OPC_FilterValue, 60, 32, 0, // Skip to: 6843
/* 6811 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6814 */    MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 6857
/* 6818 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6821 */    MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 6828
/* 6825 */    MCD::OPC_Decode, 105, 83, // Opcode: CASAasi10
/* 6828 */    MCD::OPC_FilterValue, 128, 1, 7, 0, // Skip to: 6840
/* 6833 */    MCD::OPC_CheckPredicate, 0, 3, 0, // Skip to: 6840
/* 6837 */    MCD::OPC_Decode, 108, 83, // Opcode: CASrr
/* 6840 */    MCD::OPC_Decode, 106, 84, // Opcode: CASArr
/* 6843 */    MCD::OPC_FilterValue, 62, 10, 0, // Skip to: 6857
/* 6847 */    MCD::OPC_CheckField, 5, 9, 128, 1, 3, 0, // Skip to: 6857
/* 6854 */    MCD::OPC_Decode, 107, 85, // Opcode: CASXrr
/* 6857 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV832[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 29
/* 7 */       MCD::OPC_CheckField, 29, 3, 4, 36, 0, // Skip to: 49
/* 13 */      MCD::OPC_CheckField, 19, 6, 58, 30, 0, // Skip to: 49
/* 19 */      MCD::OPC_CheckField, 5, 3, 0, 24, 0, // Skip to: 49
/* 25 */      MCD::OPC_Decode, 249, 3, 86, // Opcode: TRAPrr
/* 29 */      MCD::OPC_FilterValue, 32, 16, 0, // Skip to: 49
/* 33 */      MCD::OPC_CheckField, 29, 3, 4, 10, 0, // Skip to: 49
/* 39 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, // Skip to: 49
/* 45 */      MCD::OPC_Decode, 248, 3, 86, // Opcode: TRAPri
/* 49 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV932[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 26, 0, // Skip to: 33
/* 7 */       MCD::OPC_CheckPredicate, 0, 46, 0, // Skip to: 57
/* 11 */      MCD::OPC_CheckField, 29, 3, 4, 40, 0, // Skip to: 57
/* 17 */      MCD::OPC_CheckField, 19, 6, 58, 34, 0, // Skip to: 57
/* 23 */      MCD::OPC_CheckField, 5, 3, 0, 28, 0, // Skip to: 57
/* 29 */      MCD::OPC_Decode, 242, 3, 86, // Opcode: TICCrr
/* 33 */      MCD::OPC_FilterValue, 32, 20, 0, // Skip to: 57
/* 37 */      MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 57
/* 41 */      MCD::OPC_CheckField, 29, 3, 4, 10, 0, // Skip to: 57
/* 47 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 241, 3, 86, // Opcode: TICCri
/* 57 */      MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Sparc::FeatureV9]);
  case 1:
    return (Bits[Sparc::FeatureVIS3]);
  case 2:
    return (Bits[Sparc::FeatureVIS]);
  case 3:
    return (Bits[Sparc::FeatureVIS2]);
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 14) << 0;
    tmp |= fieldFromInstruction(insn, 20, 2) << 14;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 4:
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 20, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 0, 30);
    if (DecodeCall(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    if (DecodeJMPL(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    if (DecodeReturn(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    if (DecodeLoadInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 68:
    if (DecodeLoadIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    if (DecodeStoreInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 70:
    if (DecodeStoreIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 71:
    if (DecodeSWAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 73:
    if (DecodeLoadFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    if (DecodeLoadQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    if (DecodeLoadDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    if (DecodeStoreFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    if (DecodeStoreQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    if (DecodeStoreDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 79:
    if (DecodeLoadCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    if (DecodeLoadCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    if (DecodeStoreCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    if (DecodeStoreCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    if (DecodeTRAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset& Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
