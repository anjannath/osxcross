/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * XCore Disassembler                                                      *|
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

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 0, 109, 0, // Skip to: 116
/* 7 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 10 */      MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 250, 1, 0, // Opcode: WAITEU_0R
/* 19 */      MCD::OPC_FilterValue, 237, 15, 3, 0, // Skip to: 27
/* 24 */      MCD::OPC_Decode, 66, 0, // Opcode: CLRE_0R
/* 27 */      MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 36
/* 32 */      MCD::OPC_Decode, 225, 1, 0, // Opcode: SSYNC_0r
/* 36 */      MCD::OPC_FilterValue, 239, 15, 3, 0, // Skip to: 44
/* 41 */      MCD::OPC_Decode, 100, 0, // Opcode: FREET_0R
/* 44 */      MCD::OPC_FilterValue, 252, 15, 3, 0, // Skip to: 52
/* 49 */      MCD::OPC_Decode, 75, 0, // Opcode: DCALL_0R
/* 52 */      MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 61
/* 57 */      MCD::OPC_Decode, 132, 1, 0, // Opcode: KRET_0R
/* 61 */      MCD::OPC_FilterValue, 254, 15, 3, 0, // Skip to: 69
/* 66 */      MCD::OPC_Decode, 81, 0, // Opcode: DRET_0R
/* 69 */      MCD::OPC_FilterValue, 255, 15, 4, 0, // Skip to: 78
/* 74 */      MCD::OPC_Decode, 206, 1, 0, // Opcode: SETKEP_0R
/* 78 */      MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 81 */      MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 88
/* 85 */      MCD::OPC_Decode, 84, 1, // Opcode: EDU_1r
/* 88 */      MCD::OPC_FilterValue, 127, 3, 0, // Skip to: 95
/* 92 */      MCD::OPC_Decode, 87, 1, // Opcode: EEU_1r
/* 95 */      MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 98 */      MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 105
/* 102 */     MCD::OPC_Decode, 118, 2, // Opcode: INITPC_2r
/* 105 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 112
/* 109 */     MCD::OPC_Decode, 112, 2, // Opcode: GETST_2r
/* 112 */     MCD::OPC_Decode, 237, 1, 3, // Opcode: STW_2rus
/* 116 */     MCD::OPC_FilterValue, 1, 114, 0, // Skip to: 234
/* 120 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 123 */     MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 132
/* 128 */     MCD::OPC_Decode, 159, 1, 0, // Opcode: LDSPC_0R
/* 132 */     MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 141
/* 137 */     MCD::OPC_Decode, 230, 1, 0, // Opcode: STSPC_0R
/* 141 */     MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 150
/* 146 */     MCD::OPC_Decode, 160, 1, 0, // Opcode: LDSSR_0R
/* 150 */     MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 159
/* 155 */     MCD::OPC_Decode, 231, 1, 0, // Opcode: STSSR_0R
/* 159 */     MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 168
/* 164 */     MCD::OPC_Decode, 229, 1, 0, // Opcode: STSED_0R
/* 168 */     MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 177
/* 173 */     MCD::OPC_Decode, 228, 1, 0, // Opcode: STET_0R
/* 177 */     MCD::OPC_FilterValue, 254, 15, 3, 0, // Skip to: 185
/* 182 */     MCD::OPC_Decode, 102, 0, // Opcode: GETED_0R
/* 185 */     MCD::OPC_FilterValue, 255, 15, 3, 0, // Skip to: 193
/* 190 */     MCD::OPC_Decode, 103, 0, // Opcode: GETET_0R
/* 193 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 196 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 204
/* 200 */     MCD::OPC_Decode, 249, 1, 1, // Opcode: WAITET_1R
/* 204 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 212
/* 208 */     MCD::OPC_Decode, 248, 1, 1, // Opcode: WAITEF_1R
/* 212 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 215 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 222
/* 219 */     MCD::OPC_Decode, 116, 2, // Opcode: INITDP_2r
/* 222 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 230
/* 226 */     MCD::OPC_Decode, 190, 1, 4, // Opcode: OUTT_2r
/* 230 */     MCD::OPC_Decode, 170, 1, 3, // Opcode: LDW_2rus
/* 234 */     MCD::OPC_FilterValue, 2, 100, 0, // Skip to: 338
/* 238 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 241 */     MCD::OPC_FilterValue, 236, 15, 3, 0, // Skip to: 249
/* 246 */     MCD::OPC_Decode, 76, 0, // Opcode: DENTSP_0R
/* 249 */     MCD::OPC_FilterValue, 237, 15, 3, 0, // Skip to: 257
/* 254 */     MCD::OPC_Decode, 80, 0, // Opcode: DRESTSP_0R
/* 257 */     MCD::OPC_FilterValue, 238, 15, 3, 0, // Skip to: 265
/* 262 */     MCD::OPC_Decode, 104, 0, // Opcode: GETID_0R
/* 265 */     MCD::OPC_FilterValue, 239, 15, 3, 0, // Skip to: 273
/* 270 */     MCD::OPC_Decode, 105, 0, // Opcode: GETKEP_0R
/* 273 */     MCD::OPC_FilterValue, 252, 15, 3, 0, // Skip to: 281
/* 278 */     MCD::OPC_Decode, 106, 0, // Opcode: GETKSP_0R
/* 281 */     MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 290
/* 286 */     MCD::OPC_Decode, 158, 1, 0, // Opcode: LDSED_0R
/* 290 */     MCD::OPC_FilterValue, 254, 15, 4, 0, // Skip to: 299
/* 295 */     MCD::OPC_Decode, 156, 1, 0, // Opcode: LDET_0R
/* 299 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 302 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 309
/* 306 */     MCD::OPC_Decode, 99, 1, // Opcode: FREER_1r
/* 309 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 317
/* 313 */     MCD::OPC_Decode, 178, 1, 1, // Opcode: MJOIN_1r
/* 317 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 320 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 327
/* 324 */     MCD::OPC_Decode, 119, 2, // Opcode: INITSP_2r
/* 327 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 335
/* 331 */     MCD::OPC_Decode, 204, 1, 4, // Opcode: SETD_2r
/* 335 */     MCD::OPC_Decode, 30, 5, // Opcode: ADD_3r
/* 338 */     MCD::OPC_FilterValue, 3, 41, 0, // Skip to: 383
/* 342 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 345 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 353
/* 349 */     MCD::OPC_Decode, 247, 1, 1, // Opcode: TSTART_1R
/* 353 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 361
/* 357 */     MCD::OPC_Decode, 181, 1, 1, // Opcode: MSYNC_1r
/* 361 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 364 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 371
/* 368 */     MCD::OPC_Decode, 115, 2, // Opcode: INITCP_2r
/* 371 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 379
/* 375 */     MCD::OPC_Decode, 245, 1, 6, // Opcode: TSETMR_2r
/* 379 */     MCD::OPC_Decode, 240, 1, 5, // Opcode: SUB_3r
/* 383 */     MCD::OPC_FilterValue, 4, 30, 0, // Skip to: 417
/* 387 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 390 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 397
/* 394 */     MCD::OPC_Decode, 43, 1, // Opcode: BLA_1r
/* 397 */     MCD::OPC_FilterValue, 127, 3, 0, // Skip to: 404
/* 401 */     MCD::OPC_Decode, 37, 1, // Opcode: BAU_1r
/* 404 */     MCD::OPC_CheckField, 4, 1, 1, 3, 0, // Skip to: 413
/* 410 */     MCD::OPC_Decode, 86, 2, // Opcode: EET_2r
/* 413 */     MCD::OPC_Decode, 222, 1, 5, // Opcode: SHL_3r
/* 417 */     MCD::OPC_FilterValue, 5, 39, 0, // Skip to: 460
/* 421 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 424 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 431
/* 428 */     MCD::OPC_Decode, 60, 1, // Opcode: BRU_1r
/* 431 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 439
/* 435 */     MCD::OPC_Decode, 212, 1, 1, // Opcode: SETSP_1r
/* 439 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 442 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 449
/* 446 */     MCD::OPC_Decode, 33, 7, // Opcode: ANDNOT_2r
/* 449 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 456
/* 453 */     MCD::OPC_Decode, 85, 2, // Opcode: EEF_2r
/* 456 */     MCD::OPC_Decode, 224, 1, 5, // Opcode: SHR_3r
/* 460 */     MCD::OPC_FilterValue, 6, 41, 0, // Skip to: 505
/* 464 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 467 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 475
/* 471 */     MCD::OPC_Decode, 203, 1, 1, // Opcode: SETDP_1r
/* 475 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 483
/* 479 */     MCD::OPC_Decode, 199, 1, 1, // Opcode: SETCP_1r
/* 483 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 486 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 494
/* 490 */     MCD::OPC_Decode, 219, 1, 7, // Opcode: SEXT_2r
/* 494 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 502
/* 498 */     MCD::OPC_Decode, 220, 1, 8, // Opcode: SEXT_rus
/* 502 */     MCD::OPC_Decode, 93, 5, // Opcode: EQ_3r
/* 505 */     MCD::OPC_FilterValue, 7, 39, 0, // Skip to: 548
/* 509 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 512 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 519
/* 516 */     MCD::OPC_Decode, 77, 1, // Opcode: DGETREG_1r
/* 519 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 527
/* 523 */     MCD::OPC_Decode, 205, 1, 1, // Opcode: SETEV_1r
/* 527 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 530 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 537
/* 534 */     MCD::OPC_Decode, 113, 2, // Opcode: GETTS_2r
/* 537 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 545
/* 541 */     MCD::OPC_Decode, 210, 1, 4, // Opcode: SETPT_2r
/* 545 */     MCD::OPC_Decode, 34, 5, // Opcode: AND_3r
/* 548 */     MCD::OPC_FilterValue, 8, 41, 0, // Skip to: 593
/* 552 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 555 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 562
/* 559 */     MCD::OPC_Decode, 125, 1, // Opcode: KCALL_1r
/* 562 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 570
/* 566 */     MCD::OPC_Decode, 218, 1, 1, // Opcode: SETV_1r
/* 570 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 573 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 581
/* 577 */     MCD::OPC_Decode, 252, 1, 7, // Opcode: ZEXT_2r
/* 581 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 589
/* 585 */     MCD::OPC_Decode, 253, 1, 8, // Opcode: ZEXT_rus
/* 589 */     MCD::OPC_Decode, 185, 1, 5, // Opcode: OR_3r
/* 593 */     MCD::OPC_FilterValue, 9, 40, 0, // Skip to: 637
/* 597 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 600 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 607
/* 604 */     MCD::OPC_Decode, 82, 1, // Opcode: ECALLF_1r
/* 607 */     MCD::OPC_FilterValue, 127, 3, 0, // Skip to: 614
/* 611 */     MCD::OPC_Decode, 83, 1, // Opcode: ECALLT_1r
/* 614 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 617 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 625
/* 621 */     MCD::OPC_Decode, 186, 1, 2, // Opcode: OUTCT_2r
/* 625 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 633
/* 629 */     MCD::OPC_Decode, 187, 1, 9, // Opcode: OUTCT_rus
/* 633 */     MCD::OPC_Decode, 171, 1, 5, // Opcode: LDW_3r
/* 637 */     MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 660
/* 641 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 644 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 652
/* 648 */     MCD::OPC_Decode, 233, 1, 10, // Opcode: STWDP_ru6
/* 652 */     MCD::OPC_FilterValue, 1, 57, 2, // Skip to: 1225
/* 656 */     MCD::OPC_Decode, 236, 1, 10, // Opcode: STWSP_ru6
/* 660 */     MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 683
/* 664 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 667 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 675
/* 671 */     MCD::OPC_Decode, 166, 1, 10, // Opcode: LDWDP_ru6
/* 675 */     MCD::OPC_FilterValue, 1, 34, 2, // Skip to: 1225
/* 679 */     MCD::OPC_Decode, 169, 1, 10, // Opcode: LDWSP_ru6
/* 683 */     MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 706
/* 687 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 690 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 698
/* 694 */     MCD::OPC_Decode, 148, 1, 10, // Opcode: LDAWDP_ru6
/* 698 */     MCD::OPC_FilterValue, 1, 11, 2, // Skip to: 1225
/* 702 */     MCD::OPC_Decode, 153, 1, 10, // Opcode: LDAWSP_ru6
/* 706 */     MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 729
/* 710 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 713 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 721
/* 717 */     MCD::OPC_Decode, 155, 1, 10, // Opcode: LDC_ru6
/* 721 */     MCD::OPC_FilterValue, 1, 244, 1, // Skip to: 1225
/* 725 */     MCD::OPC_Decode, 163, 1, 10, // Opcode: LDWCP_ru6
/* 729 */     MCD::OPC_FilterValue, 14, 80, 0, // Skip to: 813
/* 733 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 736 */     MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 774
/* 740 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 743 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 750
/* 747 */     MCD::OPC_Decode, 59, 11, // Opcode: BRFU_u6
/* 750 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 757
/* 754 */     MCD::OPC_Decode, 42, 11, // Opcode: BLAT_u6
/* 757 */     MCD::OPC_FilterValue, 14, 3, 0, // Skip to: 764
/* 761 */     MCD::OPC_Decode, 95, 11, // Opcode: EXTDP_u6
/* 764 */     MCD::OPC_FilterValue, 15, 3, 0, // Skip to: 771
/* 768 */     MCD::OPC_Decode, 127, 11, // Opcode: KCALL_u6
/* 771 */     MCD::OPC_Decode, 57, 12, // Opcode: BRFT_ru6
/* 774 */     MCD::OPC_FilterValue, 1, 191, 1, // Skip to: 1225
/* 778 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 781 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 788
/* 785 */     MCD::OPC_Decode, 53, 13, // Opcode: BRBU_u6
/* 788 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 795
/* 792 */     MCD::OPC_Decode, 91, 11, // Opcode: ENTSP_u6
/* 795 */     MCD::OPC_FilterValue, 14, 3, 0, // Skip to: 802
/* 799 */     MCD::OPC_Decode, 97, 11, // Opcode: EXTSP_u6
/* 802 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 810
/* 806 */     MCD::OPC_Decode, 196, 1, 11, // Opcode: RETSP_u6
/* 810 */     MCD::OPC_Decode, 51, 14, // Opcode: BRBT_ru6
/* 813 */     MCD::OPC_FilterValue, 15, 69, 0, // Skip to: 886
/* 817 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 820 */     MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 861
/* 824 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 827 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 834
/* 831 */     MCD::OPC_Decode, 71, 11, // Opcode: CLRSR_u6
/* 834 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 842
/* 838 */     MCD::OPC_Decode, 216, 1, 11, // Opcode: SETSR_u6
/* 842 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 850
/* 846 */     MCD::OPC_Decode, 129, 1, 11, // Opcode: KENTSP_u6
/* 850 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 858
/* 854 */     MCD::OPC_Decode, 131, 1, 11, // Opcode: KRESTSP_u6
/* 858 */     MCD::OPC_Decode, 55, 12, // Opcode: BRFF_ru6
/* 861 */     MCD::OPC_FilterValue, 1, 104, 1, // Skip to: 1225
/* 865 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 868 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 875
/* 872 */     MCD::OPC_Decode, 111, 11, // Opcode: GETSR_u6
/* 875 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 883
/* 879 */     MCD::OPC_Decode, 146, 1, 11, // Opcode: LDAWCP_u6
/* 883 */     MCD::OPC_Decode, 49, 14, // Opcode: BRBF_ru6
/* 886 */     MCD::OPC_FilterValue, 16, 39, 0, // Skip to: 929
/* 890 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 893 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 900
/* 897 */     MCD::OPC_Decode, 67, 1, // Opcode: CLRPT_1R
/* 900 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 908
/* 904 */     MCD::OPC_Decode, 241, 1, 1, // Opcode: SYNCR_1r
/* 908 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 911 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 918
/* 915 */     MCD::OPC_Decode, 109, 9, // Opcode: GETR_rus
/* 918 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 925
/* 922 */     MCD::OPC_Decode, 114, 2, // Opcode: INCT_2r
/* 925 */     MCD::OPC_Decode, 134, 1, 5, // Opcode: LD16S_3r
/* 929 */     MCD::OPC_FilterValue, 17, 22, 0, // Skip to: 955
/* 933 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 936 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 944
/* 940 */     MCD::OPC_Decode, 184, 1, 2, // Opcode: NOT
/* 944 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 951
/* 948 */     MCD::OPC_Decode, 122, 2, // Opcode: INT_2r
/* 951 */     MCD::OPC_Decode, 135, 1, 5, // Opcode: LD8U_3r
/* 955 */     MCD::OPC_FilterValue, 18, 21, 0, // Skip to: 980
/* 959 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 962 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 970
/* 966 */     MCD::OPC_Decode, 183, 1, 2, // Opcode: NEG
/* 970 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 977
/* 974 */     MCD::OPC_Decode, 89, 2, // Opcode: ENDIN_2r
/* 977 */     MCD::OPC_Decode, 29, 3, // Opcode: ADD_2rus
/* 980 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 988
/* 984 */     MCD::OPC_Decode, 239, 1, 3, // Opcode: SUB_2rus
/* 988 */     MCD::OPC_FilterValue, 20, 23, 0, // Skip to: 1015
/* 992 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 995 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1003
/* 999 */     MCD::OPC_Decode, 179, 1, 2, // Opcode: MKMSK_2r
/* 1003 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1011
/* 1007 */    MCD::OPC_Decode, 180, 1, 15, // Opcode: MKMSK_rus
/* 1011 */    MCD::OPC_Decode, 221, 1, 16, // Opcode: SHL_2rus
/* 1015 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1042
/* 1019 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1022 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1030
/* 1026 */    MCD::OPC_Decode, 191, 1, 4, // Opcode: OUT_2r
/* 1030 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1038
/* 1034 */    MCD::OPC_Decode, 189, 1, 7, // Opcode: OUTSHR_2r
/* 1038 */    MCD::OPC_Decode, 223, 1, 16, // Opcode: SHR_2rus
/* 1042 */    MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 1066
/* 1046 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1049 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1056
/* 1053 */    MCD::OPC_Decode, 123, 2, // Opcode: IN_2r
/* 1056 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 1063
/* 1060 */    MCD::OPC_Decode, 121, 7, // Opcode: INSHR_2r
/* 1063 */    MCD::OPC_Decode, 92, 3, // Opcode: EQ_2rus
/* 1066 */    MCD::OPC_FilterValue, 23, 23, 0, // Skip to: 1093
/* 1070 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1073 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1081
/* 1077 */    MCD::OPC_Decode, 192, 1, 2, // Opcode: PEEK_2r
/* 1081 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1089
/* 1085 */    MCD::OPC_Decode, 242, 1, 2, // Opcode: TESTCT_2r
/* 1089 */    MCD::OPC_Decode, 246, 1, 17, // Opcode: TSETR_3r
/* 1093 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1120
/* 1097 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1100 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1108
/* 1104 */    MCD::OPC_Decode, 208, 1, 4, // Opcode: SETPSC_2r
/* 1108 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1116
/* 1112 */    MCD::OPC_Decode, 244, 1, 2, // Opcode: TESTWCT_2r
/* 1116 */    MCD::OPC_Decode, 173, 1, 5, // Opcode: LSS_3r
/* 1120 */    MCD::OPC_FilterValue, 25, 21, 0, // Skip to: 1145
/* 1124 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1127 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1134
/* 1131 */    MCD::OPC_Decode, 64, 2, // Opcode: CHKCT_2r
/* 1134 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 1141
/* 1138 */    MCD::OPC_Decode, 65, 15, // Opcode: CHKCT_rus
/* 1141 */    MCD::OPC_Decode, 175, 1, 5, // Opcode: LSU_3r
/* 1145 */    MCD::OPC_FilterValue, 26, 17, 0, // Skip to: 1166
/* 1149 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1152 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1159
/* 1156 */    MCD::OPC_Decode, 47, 18, // Opcode: BLRF_u10
/* 1159 */    MCD::OPC_FilterValue, 1, 62, 0, // Skip to: 1225
/* 1163 */    MCD::OPC_Decode, 45, 19, // Opcode: BLRB_u10
/* 1166 */    MCD::OPC_FilterValue, 27, 19, 0, // Skip to: 1189
/* 1170 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1173 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1181
/* 1177 */    MCD::OPC_Decode, 142, 1, 18, // Opcode: LDAPF_u10
/* 1181 */    MCD::OPC_FilterValue, 1, 40, 0, // Skip to: 1225
/* 1185 */    MCD::OPC_Decode, 139, 1, 19, // Opcode: LDAPB_u10
/* 1189 */    MCD::OPC_FilterValue, 28, 18, 0, // Skip to: 1211
/* 1193 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 1196 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1203
/* 1200 */    MCD::OPC_Decode, 40, 18, // Opcode: BLACP_u10
/* 1203 */    MCD::OPC_FilterValue, 1, 18, 0, // Skip to: 1225
/* 1207 */    MCD::OPC_Decode, 164, 1, 18, // Opcode: LDWCP_u10
/* 1211 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1225
/* 1215 */    MCD::OPC_CheckField, 10, 1, 0, 4, 0, // Skip to: 1225
/* 1221 */    MCD::OPC_Decode, 202, 1, 12, // Opcode: SETC_ru6
/* 1225 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 3 */       MCD::OPC_FilterValue, 0, 90, 0, // Skip to: 97
/* 7 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 10 */      MCD::OPC_FilterValue, 31, 219, 3, // Skip to: 1001
/* 14 */      MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 17 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 31
/* 21 */      MCD::OPC_CheckField, 16, 11, 236, 15, 17, 0, // Skip to: 45
/* 28 */      MCD::OPC_Decode, 38, 20, // Opcode: BITREV_l2r
/* 31 */      MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 45
/* 35 */      MCD::OPC_CheckField, 16, 11, 236, 15, 3, 0, // Skip to: 45
/* 42 */      MCD::OPC_Decode, 63, 20, // Opcode: BYTEREV_l2r
/* 45 */      MCD::OPC_CheckField, 16, 11, 236, 15, 4, 0, // Skip to: 56
/* 52 */      MCD::OPC_Decode, 238, 1, 21, // Opcode: STW_l3r
/* 56 */      MCD::OPC_ExtractField, 20, 7,  // Inst{26-20} ...
/* 59 */      MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 66
/* 63 */      MCD::OPC_Decode, 73, 22, // Opcode: CRC8_l4r
/* 66 */      MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 177, 1, 23, // Opcode: MACCU_l4r
/* 74 */      MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 77 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 85
/* 81 */      MCD::OPC_Decode, 157, 1, 24, // Opcode: LDIVU_l5r
/* 85 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 93
/* 89 */      MCD::OPC_Decode, 133, 1, 24, // Opcode: LADD_l5r
/* 93 */      MCD::OPC_Decode, 172, 1, 25, // Opcode: LMUL_l6r
/* 97 */      MCD::OPC_FilterValue, 1, 86, 0, // Skip to: 187
/* 101 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 104 */     MCD::OPC_FilterValue, 31, 125, 3, // Skip to: 1001
/* 108 */     MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 111 */     MCD::OPC_FilterValue, 0, 118, 3, // Skip to: 1001
/* 115 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 118 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 137
/* 122 */     MCD::OPC_CheckField, 21, 6, 63, 29, 0, // Skip to: 157
/* 128 */     MCD::OPC_CheckField, 16, 4, 12, 23, 0, // Skip to: 157
/* 134 */     MCD::OPC_Decode, 72, 20, // Opcode: CLZ_l2r
/* 137 */     MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 157
/* 141 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 157
/* 147 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 157
/* 153 */     MCD::OPC_Decode, 198, 1, 26, // Opcode: SETCLK_l2r
/* 157 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 173
/* 163 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 173
/* 169 */     MCD::OPC_Decode, 251, 1, 21, // Opcode: XOR_l3r
/* 173 */     MCD::OPC_CheckField, 21, 6, 63, 4, 0, // Skip to: 183
/* 179 */     MCD::OPC_Decode, 176, 1, 23, // Opcode: MACCS_l4r
/* 183 */     MCD::OPC_Decode, 174, 1, 24, // Opcode: LSUB_l5r
/* 187 */     MCD::OPC_FilterValue, 2, 29, 0, // Skip to: 220
/* 191 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 194 */     MCD::OPC_FilterValue, 159, 251, 3, 33, 3, // Skip to: 1001
/* 200 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 203 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 210
/* 207 */     MCD::OPC_Decode, 117, 20, // Opcode: INITLR_l2r
/* 210 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 217
/* 214 */     MCD::OPC_Decode, 108, 20, // Opcode: GETPS_l2r
/* 217 */     MCD::OPC_Decode, 36, 21, // Opcode: ASHR_l3r
/* 220 */     MCD::OPC_FilterValue, 3, 31, 0, // Skip to: 255
/* 224 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 227 */     MCD::OPC_FilterValue, 159, 251, 3, 0, 3, // Skip to: 1001
/* 233 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 236 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 244
/* 240 */     MCD::OPC_Decode, 209, 1, 26, // Opcode: SETPS_l2r
/* 244 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 251
/* 248 */     MCD::OPC_Decode, 101, 20, // Opcode: GETD_l2r
/* 251 */     MCD::OPC_Decode, 151, 1, 21, // Opcode: LDAWF_l3r
/* 255 */     MCD::OPC_FilterValue, 4, 32, 0, // Skip to: 291
/* 259 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 262 */     MCD::OPC_FilterValue, 159, 251, 3, 221, 2, // Skip to: 1001
/* 268 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 271 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 279
/* 275 */     MCD::OPC_Decode, 243, 1, 20, // Opcode: TESTLCL_l2r
/* 279 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 287
/* 283 */     MCD::OPC_Decode, 217, 1, 26, // Opcode: SETTW_l2r
/* 287 */     MCD::OPC_Decode, 144, 1, 21, // Opcode: LDAWB_l3r
/* 291 */     MCD::OPC_FilterValue, 5, 32, 0, // Skip to: 327
/* 295 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 298 */     MCD::OPC_FilterValue, 159, 251, 3, 185, 2, // Skip to: 1001
/* 304 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 307 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 315
/* 311 */     MCD::OPC_Decode, 211, 1, 26, // Opcode: SETRDY_l2r
/* 315 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 323
/* 319 */     MCD::OPC_Decode, 200, 1, 20, // Opcode: SETC_l2r
/* 323 */     MCD::OPC_Decode, 137, 1, 21, // Opcode: LDA16F_l3r
/* 327 */     MCD::OPC_FilterValue, 6, 31, 0, // Skip to: 362
/* 331 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 334 */     MCD::OPC_FilterValue, 159, 251, 3, 149, 2, // Skip to: 1001
/* 340 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 343 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 351
/* 347 */     MCD::OPC_Decode, 207, 1, 26, // Opcode: SETN_l2r
/* 351 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 358
/* 355 */     MCD::OPC_Decode, 107, 20, // Opcode: GETN_l2r
/* 358 */     MCD::OPC_Decode, 136, 1, 21, // Opcode: LDA16B_l3r
/* 362 */     MCD::OPC_FilterValue, 7, 12, 0, // Skip to: 378
/* 366 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 115, 2, // Skip to: 1001
/* 374 */     MCD::OPC_Decode, 182, 1, 21, // Opcode: MUL_l3r
/* 378 */     MCD::OPC_FilterValue, 8, 11, 0, // Skip to: 393
/* 382 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 99, 2, // Skip to: 1001
/* 390 */     MCD::OPC_Decode, 78, 21, // Opcode: DIVS_l3r
/* 393 */     MCD::OPC_FilterValue, 9, 11, 0, // Skip to: 408
/* 397 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 84, 2, // Skip to: 1001
/* 405 */     MCD::OPC_Decode, 79, 21, // Opcode: DIVU_l3r
/* 408 */     MCD::OPC_FilterValue, 10, 31, 0, // Skip to: 443
/* 412 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 415 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 429
/* 419 */     MCD::OPC_CheckField, 10, 6, 60, 64, 2, // Skip to: 1001
/* 425 */     MCD::OPC_Decode, 232, 1, 27, // Opcode: STWDP_lru6
/* 429 */     MCD::OPC_FilterValue, 1, 56, 2, // Skip to: 1001
/* 433 */     MCD::OPC_CheckField, 10, 6, 60, 50, 2, // Skip to: 1001
/* 439 */     MCD::OPC_Decode, 235, 1, 27, // Opcode: STWSP_lru6
/* 443 */     MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 478
/* 447 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 450 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 464
/* 454 */     MCD::OPC_CheckField, 10, 6, 60, 29, 2, // Skip to: 1001
/* 460 */     MCD::OPC_Decode, 165, 1, 27, // Opcode: LDWDP_lru6
/* 464 */     MCD::OPC_FilterValue, 1, 21, 2, // Skip to: 1001
/* 468 */     MCD::OPC_CheckField, 10, 6, 60, 15, 2, // Skip to: 1001
/* 474 */     MCD::OPC_Decode, 168, 1, 27, // Opcode: LDWSP_lru6
/* 478 */     MCD::OPC_FilterValue, 12, 31, 0, // Skip to: 513
/* 482 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 485 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 499
/* 489 */     MCD::OPC_CheckField, 10, 6, 60, 250, 1, // Skip to: 1001
/* 495 */     MCD::OPC_Decode, 147, 1, 27, // Opcode: LDAWDP_lru6
/* 499 */     MCD::OPC_FilterValue, 1, 242, 1, // Skip to: 1001
/* 503 */     MCD::OPC_CheckField, 10, 6, 60, 236, 1, // Skip to: 1001
/* 509 */     MCD::OPC_Decode, 152, 1, 27, // Opcode: LDAWSP_lru6
/* 513 */     MCD::OPC_FilterValue, 13, 31, 0, // Skip to: 548
/* 517 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 520 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 534
/* 524 */     MCD::OPC_CheckField, 10, 6, 60, 215, 1, // Skip to: 1001
/* 530 */     MCD::OPC_Decode, 154, 1, 27, // Opcode: LDC_lru6
/* 534 */     MCD::OPC_FilterValue, 1, 207, 1, // Skip to: 1001
/* 538 */     MCD::OPC_CheckField, 10, 6, 60, 201, 1, // Skip to: 1001
/* 544 */     MCD::OPC_Decode, 161, 1, 27, // Opcode: LDWCP_lru6
/* 548 */     MCD::OPC_FilterValue, 14, 94, 0, // Skip to: 646
/* 552 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 555 */     MCD::OPC_FilterValue, 0, 41, 0, // Skip to: 600
/* 559 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 562 */     MCD::OPC_FilterValue, 60, 179, 1, // Skip to: 1001
/* 566 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 569 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 576
/* 573 */     MCD::OPC_Decode, 58, 28, // Opcode: BRFU_lu6
/* 576 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 583
/* 580 */     MCD::OPC_Decode, 41, 28, // Opcode: BLAT_lu6
/* 583 */     MCD::OPC_FilterValue, 14, 3, 0, // Skip to: 590
/* 587 */     MCD::OPC_Decode, 94, 28, // Opcode: EXTDP_lu6
/* 590 */     MCD::OPC_FilterValue, 15, 3, 0, // Skip to: 597
/* 594 */     MCD::OPC_Decode, 126, 28, // Opcode: KCALL_lu6
/* 597 */     MCD::OPC_Decode, 56, 29, // Opcode: BRFT_lru6
/* 600 */     MCD::OPC_FilterValue, 1, 141, 1, // Skip to: 1001
/* 604 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 607 */     MCD::OPC_FilterValue, 60, 134, 1, // Skip to: 1001
/* 611 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 614 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 621
/* 618 */     MCD::OPC_Decode, 52, 30, // Opcode: BRBU_lu6
/* 621 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 628
/* 625 */     MCD::OPC_Decode, 90, 28, // Opcode: ENTSP_lu6
/* 628 */     MCD::OPC_FilterValue, 14, 3, 0, // Skip to: 635
/* 632 */     MCD::OPC_Decode, 96, 28, // Opcode: EXTSP_lu6
/* 635 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 643
/* 639 */     MCD::OPC_Decode, 195, 1, 28, // Opcode: RETSP_lu6
/* 643 */     MCD::OPC_Decode, 50, 31, // Opcode: BRBT_lru6
/* 646 */     MCD::OPC_FilterValue, 15, 83, 0, // Skip to: 733
/* 650 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 653 */     MCD::OPC_FilterValue, 0, 44, 0, // Skip to: 701
/* 657 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 660 */     MCD::OPC_FilterValue, 60, 81, 1, // Skip to: 1001
/* 664 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 667 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 674
/* 671 */     MCD::OPC_Decode, 70, 28, // Opcode: CLRSR_lu6
/* 674 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 682
/* 678 */     MCD::OPC_Decode, 215, 1, 28, // Opcode: SETSR_lu6
/* 682 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 690
/* 686 */     MCD::OPC_Decode, 128, 1, 28, // Opcode: KENTSP_lu6
/* 690 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 698
/* 694 */     MCD::OPC_Decode, 130, 1, 28, // Opcode: KRESTSP_lu6
/* 698 */     MCD::OPC_Decode, 54, 29, // Opcode: BRFF_lru6
/* 701 */     MCD::OPC_FilterValue, 1, 40, 1, // Skip to: 1001
/* 705 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 708 */     MCD::OPC_FilterValue, 60, 33, 1, // Skip to: 1001
/* 712 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 715 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 722
/* 719 */     MCD::OPC_Decode, 110, 28, // Opcode: GETSR_lu6
/* 722 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 730
/* 726 */     MCD::OPC_Decode, 145, 1, 28, // Opcode: LDAWCP_lu6
/* 730 */     MCD::OPC_Decode, 48, 31, // Opcode: BRBF_lru6
/* 733 */     MCD::OPC_FilterValue, 16, 12, 0, // Skip to: 749
/* 737 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 0, 1, // Skip to: 1001
/* 745 */     MCD::OPC_Decode, 226, 1, 21, // Opcode: ST16_l3r
/* 749 */     MCD::OPC_FilterValue, 17, 12, 0, // Skip to: 765
/* 753 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 240, 0, // Skip to: 1001
/* 761 */     MCD::OPC_Decode, 227, 1, 21, // Opcode: ST8_l3r
/* 765 */     MCD::OPC_FilterValue, 18, 31, 0, // Skip to: 800
/* 769 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 772 */     MCD::OPC_FilterValue, 159, 251, 3, 3, 0, // Skip to: 781
/* 778 */     MCD::OPC_Decode, 35, 32, // Opcode: ASHR_l2rus
/* 781 */     MCD::OPC_FilterValue, 191, 251, 3, 4, 0, // Skip to: 791
/* 787 */     MCD::OPC_Decode, 188, 1, 32, // Opcode: OUTPW_l2rus
/* 791 */     MCD::OPC_FilterValue, 223, 251, 3, 204, 0, // Skip to: 1001
/* 797 */     MCD::OPC_Decode, 120, 32, // Opcode: INPW_l2rus
/* 800 */     MCD::OPC_FilterValue, 19, 12, 0, // Skip to: 816
/* 804 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 189, 0, // Skip to: 1001
/* 812 */     MCD::OPC_Decode, 150, 1, 33, // Opcode: LDAWF_l2rus
/* 816 */     MCD::OPC_FilterValue, 20, 12, 0, // Skip to: 832
/* 820 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 173, 0, // Skip to: 1001
/* 828 */     MCD::OPC_Decode, 143, 1, 33, // Opcode: LDAWB_l2rus
/* 832 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 847
/* 836 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 157, 0, // Skip to: 1001
/* 844 */     MCD::OPC_Decode, 74, 34, // Opcode: CRC_l3r
/* 847 */     MCD::OPC_FilterValue, 24, 12, 0, // Skip to: 863
/* 851 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 142, 0, // Skip to: 1001
/* 859 */     MCD::OPC_Decode, 193, 1, 21, // Opcode: REMS_l3r
/* 863 */     MCD::OPC_FilterValue, 25, 12, 0, // Skip to: 879
/* 867 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 126, 0, // Skip to: 1001
/* 875 */     MCD::OPC_Decode, 194, 1, 21, // Opcode: REMU_l3r
/* 879 */     MCD::OPC_FilterValue, 26, 29, 0, // Skip to: 912
/* 883 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 886 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 899
/* 890 */     MCD::OPC_CheckField, 10, 6, 60, 105, 0, // Skip to: 1001
/* 896 */     MCD::OPC_Decode, 46, 35, // Opcode: BLRF_lu10
/* 899 */     MCD::OPC_FilterValue, 1, 98, 0, // Skip to: 1001
/* 903 */     MCD::OPC_CheckField, 10, 6, 60, 92, 0, // Skip to: 1001
/* 909 */     MCD::OPC_Decode, 44, 36, // Opcode: BLRB_lu10
/* 912 */     MCD::OPC_FilterValue, 27, 31, 0, // Skip to: 947
/* 916 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 919 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 933
/* 923 */     MCD::OPC_CheckField, 10, 6, 60, 72, 0, // Skip to: 1001
/* 929 */     MCD::OPC_Decode, 140, 1, 35, // Opcode: LDAPF_lu10
/* 933 */     MCD::OPC_FilterValue, 1, 64, 0, // Skip to: 1001
/* 937 */     MCD::OPC_CheckField, 10, 6, 60, 58, 0, // Skip to: 1001
/* 943 */     MCD::OPC_Decode, 138, 1, 36, // Opcode: LDAPB_lu10
/* 947 */     MCD::OPC_FilterValue, 28, 30, 0, // Skip to: 981
/* 951 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 954 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 967
/* 958 */     MCD::OPC_CheckField, 10, 6, 60, 37, 0, // Skip to: 1001
/* 964 */     MCD::OPC_Decode, 39, 35, // Opcode: BLACP_lu10
/* 967 */     MCD::OPC_FilterValue, 1, 30, 0, // Skip to: 1001
/* 971 */     MCD::OPC_CheckField, 10, 6, 60, 24, 0, // Skip to: 1001
/* 977 */     MCD::OPC_Decode, 162, 1, 35, // Opcode: LDWCP_lu10
/* 981 */     MCD::OPC_FilterValue, 29, 16, 0, // Skip to: 1001
/* 985 */     MCD::OPC_CheckField, 26, 1, 0, 10, 0, // Skip to: 1001
/* 991 */     MCD::OPC_CheckField, 10, 6, 60, 4, 0, // Skip to: 1001
/* 997 */     MCD::OPC_Decode, 201, 1, 29, // Opcode: SETC_lru6
/* 1001 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  llvm_unreachable("Invalid index!");
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    if (Decode2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    if (Decode2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    if (DecodeR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    if (Decode3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    if (Decode2RImmInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    if (Decode2RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    if (DecodeRUSSrcDstBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    if (DecodeRUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    if (DecodeRUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    if (Decode2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    if (Decode3RImmInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    if (DecodeL2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    if (DecodeL3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    if (DecodeL4RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    if (DecodeL4RSrcDstSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    if (DecodeL5RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    if (DecodeL6RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    if (DecodeLR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 28:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 30:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 6;
    tmp |= fieldFromInstruction(insn, 16, 6) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    if (DecodeL2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    if (DecodeL2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    if (DecodeL3RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 10;
    tmp |= fieldFromInstruction(insn, 16, 10) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 36:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 10) << 10;
    tmp |= fieldFromInstruction(insn, 16, 10) << 0;
    if (DecodeNegImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
