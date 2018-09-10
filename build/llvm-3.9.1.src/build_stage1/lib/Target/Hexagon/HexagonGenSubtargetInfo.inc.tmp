/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
namespace Hexagon {
enum {
  ArchV4 = 0,
  ArchV5 = 1,
  ArchV55 = 2,
  ArchV60 = 3,
  ExtensionHVX = 4,
  ExtensionHVXDbl = 5
};
} // end namespace Hexagon
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[] = {
  { "hvx", "Hexagon HVX instructions", { Hexagon::ExtensionHVX }, { } },
  { "hvx-double", "Hexagon HVX Double instructions", { Hexagon::ExtensionHVXDbl }, { } },
  { "v4", "Hexagon V4", { Hexagon::ArchV4 }, { } },
  { "v5", "Hexagon V5", { Hexagon::ArchV5 }, { } },
  { "v55", "Hexagon V55", { Hexagon::ArchV55 }, { } },
  { "v60", "Hexagon V60", { Hexagon::ArchV60 }, { } }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[] = {
  { "hexagonv4", "Select the hexagonv4 processor", { Hexagon::ArchV4 }, { } },
  { "hexagonv5", "Select the hexagonv5 processor", { Hexagon::ArchV4, Hexagon::ArchV5 }, { } },
  { "hexagonv55", "Select the hexagonv55 processor", { Hexagon::ArchV4, Hexagon::ArchV5, Hexagon::ArchV55 }, { } },
  { "hexagonv60", "Select the hexagonv60 processor", { Hexagon::ArchV4, Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::ArchV60, Hexagon::ExtensionHVX }, { } }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "HexagonItinerariesV4"
namespace HexagonItinerariesV4FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
} // end namespace HexagonItinerariesV4FU

// Functional units for "HexagonItinerariesV55"
namespace HexagonItinerariesV55FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
} // end namespace HexagonItinerariesV55FU

// Functional units for "HexagonItinerariesV60"
namespace HexagonItinerariesV60FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
} // end namespace HexagonItinerariesV60FU

extern const llvm::InstrStage HexagonStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1 | HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, HexagonItinerariesV4FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, HexagonItinerariesV4FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, HexagonItinerariesV4FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-9
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1 | HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 1, HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 1, HexagonItinerariesV55FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 14
  { 1, HexagonItinerariesV55FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15
  { 1, HexagonItinerariesV55FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 17-18
  { 2, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 19
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 20
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21
  { 2, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22
  { 3, HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 23
  { 3, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 24
  { 2, HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 25
  { 2, HexagonItinerariesV60FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26
  { 3, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 27
  { 1, HexagonItinerariesV60FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 28
  { 2, HexagonItinerariesV60FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 29
  { 4, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 30
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 31-32
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLSHF | HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 33-34
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35-36
  { 4, HexagonItinerariesV60FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 37
  { 2, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 38
  { 3, HexagonItinerariesV60FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 39
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40-42
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 43
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44-46
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 47-48
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 49-50
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 51-54
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 55-56
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 57-60
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 61-62
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 63-64
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 65-66
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 67-68
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69-70
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned HexagonOperandCycles[] = {
  0, // No itinerary
  2,   1,   1, // 1-3
  1,   1,   1, // 4-6
  1,   1,   1, // 7-9
  1,   1,   1, // 10-12
  2,   1,   1, // 13-15
  1,   1,   1, // 16-18
  2,   1,   1, // 19-21
  1,   1,   1, // 22-24
  3,   1,   1, // 25-27
  2,   1,   1, // 28-30
  3,   1,   1, // 31-33
  1,   1,   1, // 34-36
  2,   1,   1, // 37-39
  2,   1,   1, // 40-42
  1,   1,   1, // 43-45
  3,   1,   1, // 46-48
  3,   1,   1, // 49-51
  1,   1,   1, // 52-54
  2,   1,   1,   1, // 55-58
  2,   1,   1, // 59-61
  2,   1,   1, // 62-64
  2,   1,   1, // 65-67
  2,   1,   1, // 68-70
  2,   1,   1, // 71-73
  2,   1,   1,   1, // 74-77
  2,   1, // 78-79
  1,   1,   1, // 80-82
  2, // 83
  3,   1,   1, // 84-86
  3,   1,   1, // 87-89
  3,   1,   1, // 90-92
  1,   1,   1, // 93-95
  1,   1,   1, // 96-98
  2,   1,   1,   1, // 99-102
  2,   1,   1, // 103-105
  3,   1,   1,   1, // 106-109
  1,   1,   1, // 110-112
  1,   1,   1, // 113-115
  2,   1,   1,   1, // 116-119
  2,   1, // 120-121
  1,   1,   1,   1, // 122-125
  3,   1,   1,   1, // 126-129
  2,   1, // 130-131
  2,   1,   1, // 132-134
  3,   1,   1, // 135-137
  2,   1,   1, // 138-140
  1,   1,   1,   1, // 141-144
  1,   1,   1, // 145-147
  1,   1,   1,   1, // 148-151
  1,   1,   1, // 152-154
  1,   1,   1,   1, // 155-158
  1,   1,   1, // 159-161
  2,   1,   1, // 162-164
  0 // End operand cycles
};
extern const unsigned HexagonForwardingPaths[] = {
 0, // No itinerary
 0,  0,  0, // 1-3
 0,  0,  0, // 4-6
 0,  0,  0, // 7-9
 0,  0,  0, // 10-12
 0,  0,  0, // 13-15
 0,  0,  0, // 16-18
 0,  0,  0, // 19-21
 0,  0,  0, // 22-24
 0,  0,  0, // 25-27
 0,  0,  0, // 28-30
 0,  0,  0, // 31-33
 0,  0,  0, // 34-36
 0,  0,  0, // 37-39
 0,  0,  0, // 40-42
 0,  0,  0, // 43-45
 0,  0,  0, // 46-48
 0,  0,  0, // 49-51
 0,  0,  0, // 52-54
 0,  0,  0,  0, // 55-58
 0,  0,  0, // 59-61
 0,  0,  0, // 62-64
 0,  0,  0, // 65-67
 0,  0,  0, // 68-70
 0,  0,  0, // 71-73
 0,  0,  0,  0, // 74-77
 0,  0, // 78-79
 0,  0,  0, // 80-82
 0, // 83
 0,  0,  0, // 84-86
 0,  0,  0, // 87-89
 0,  0,  0, // 90-92
 0,  0,  0, // 93-95
 0,  0,  0, // 96-98
 0,  0,  0,  0, // 99-102
 0,  0,  0, // 103-105
 0,  0,  0,  0, // 106-109
 0,  0,  0, // 110-112
 0,  0,  0, // 113-115
 0,  0,  0,  0, // 116-119
 0,  0, // 120-121
 0,  0,  0,  0, // 122-125
 0,  0,  0,  0, // 126-129
 0,  0, // 130-131
 0,  0,  0, // 132-134
 0,  0,  0, // 135-137
 0,  0,  0, // 138-140
 0,  0,  0,  0, // 141-144
 0,  0,  0, // 145-147
 0,  0,  0,  0, // 148-151
 0,  0,  0, // 152-154
 0,  0,  0,  0, // 155-158
 0,  0,  0, // 159-161
 0,  0,  0, // 162-164
 0 // End bypass tables
};

static const llvm::InstrItinerary HexagonItinerariesV4[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 S_2op_tc_2_SLOT23
  { 1, 1, 2, 0, 0 }, // 2 S_2op_tc_1_SLOT23
  { 1, 2, 3, 0, 0 }, // 3 ALU32_3op_tc_1_SLOT0123
  { 1, 1, 2, 0, 0 }, // 4 ALU64_tc_1_SLOT23
  { 1, 1, 2, 0, 0 }, // 5 ALU64_tc_2_SLOT23
  { 1, 2, 3, 0, 0 }, // 6 ALU32_ADDI_tc_1_SLOT0123
  { 1, 2, 3, 0, 0 }, // 7 ALU32_3op_tc_2_SLOT0123
  { 1, 2, 3, 0, 0 }, // 8 ALU32_2op_tc_1_SLOT0123
  { 1, 3, 4, 0, 0 }, // 9 CR_tc_3x_SLOT3
  { 1, 1, 2, 0, 0 }, // 10 ALU64_tc_2early_SLOT23
  { 1, 1, 2, 0, 0 }, // 11 M_tc_3x_SLOT23
  { 1, 1, 2, 0, 0 }, // 12 S_3op_tc_1_SLOT23
  { 1, 1, 2, 0, 0 }, // 13 S_3op_tc_2early_SLOT23
  { 1, 1, 2, 0, 0 }, // 14 S_3op_tc_2_SLOT23
  { 1, 2, 3, 0, 0 }, // 15 EXTENDER_tc_1_SLOT0123
  { 1, 1, 2, 0, 0 }, // 16 S_3op_tc_3_SLOT23
  { 0, 0, 0, 0, 0 }, // 17 M_tc_3stall_SLOT23
  { 1, 2, 3, 0, 0 }, // 18 PSEUDO
  { 1, 1, 2, 0, 0 }, // 19 CR_tc_2early_SLOT23
  { 1, 1, 2, 0, 0 }, // 20 S_2op_tc_2early_SLOT23
  { 1, 2, 3, 0, 0 }, // 21 ALU32_3op_tc_2early_SLOT0123
  { 1, 2, 3, 0, 0 }, // 22 ALU32_2op_tc_2early_SLOT0123
  { 1, 3, 4, 0, 0 }, // 23 CR_tc_2_SLOT3
  { 1, 4, 5, 0, 0 }, // 24 J_tc_2early_SLOT2
  { 1, 1, 2, 0, 0 }, // 25 J_tc_2early_SLOT23
  { 1, 5, 6, 0, 0 }, // 26 LD_tc_ld_SLOT01
  { 1, 6, 7, 0, 0 }, // 27 DUPLEX
  { 1, 7, 8, 0, 0 }, // 28 J_tc_2early_SLOT0123
  { 1, 1, 2, 0, 0 }, // 29 S_2op_tc_3or4x_SLOT23
  { 1, 1, 2, 0, 0 }, // 30 ALU64_tc_3x_SLOT23
  { 1, 1, 2, 0, 0 }, // 31 M_tc_3or4x_SLOT23
  { 1, 1, 2, 0, 0 }, // 32 M_tc_3_SLOT23
  { 0, 0, 0, 0, 0 }, // 33 CVI_VA
  { 0, 0, 0, 0, 0 }, // 34 CVI_VA_DV
  { 1, 8, 10, 0, 0 }, // 35 PSEUDOM
  { 1, 1, 2, 0, 0 }, // 36 J_tc_2early_CJUMP_UCJUMP_ARCHDEPSLOT
  { 1, 3, 4, 0, 0 }, // 37 CR_tc_2early_SLOT3
  { 1, 6, 7, 0, 0 }, // 38 NCJ_tc_3or4stall_SLOT0
  { 1, 1, 2, 0, 0 }, // 39 COMPOUND_CJ_ARCHDEPSLOT
  { 1, 1, 2, 0, 0 }, // 40 COMPOUND
  { 1, 5, 6, 0, 0 }, // 41 V2LDST_tc_ld_SLOT01
  { 1, 6, 7, 0, 0 }, // 42 LD_tc_ld_SLOT0
  { 1, 6, 7, 0, 0 }, // 43 V4LDST_tc_st_SLOT0
  { 1, 5, 6, 0, 0 }, // 44 V4LDST_tc_ld_SLOT01
  { 1, 6, 7, 0, 0 }, // 45 LD_tc_3or4stall_SLOT0
  { 0, 0, 0, 0, 0 }, // 46 CVI_VM_LD
  { 1, 1, 2, 0, 0 }, // 47 M_tc_2_SLOT23
  { 1, 1, 2, 0, 0 }, // 48 S_3op_tc_3x_SLOT23
  { 1, 6, 7, 0, 0 }, // 49 ST_tc_ld_SLOT0
  { 1, 5, 6, 0, 0 }, // 50 V2LDST_tc_st_SLOT01
  { 1, 5, 6, 0, 0 }, // 51 ST_tc_st_SLOT01
  { 1, 6, 7, 0, 0 }, // 52 V2LDST_tc_st_SLOT0
  { 1, 6, 7, 0, 0 }, // 53 ST_tc_st_SLOT0
  { 1, 5, 6, 0, 0 }, // 54 V4LDST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 55 CVI_VM_ST
  { 0, 0, 0, 0, 0 }, // 56 PREFIX
  { 0, 0, 0, 0, 0 }, // 57 CVI_VX_LATE
  { 0, 0, 0, 0, 0 }, // 58 CVI_VP_LONG
  { 0, 0, 0, 0, 0 }, // 59 CVI_VM_VP_LDU
  { 0, 0, 0, 0, 0 }, // 60 CVI_VM_CUR_LD
  { 0, 0, 0, 0, 0 }, // 61 CVI_VM_TMP_LD
  { 0, 0, 0, 0, 0 }, // 62 CVI_VM_STU
  { 0, 0, 0, 0, 0 }, // 63 CVI_VM_NEW_ST
  { 0, 0, 0, 0, 0 }, // 64 CVI_VX
  { 0, 0, 0, 0, 0 }, // 65 CVI_VX_DV
  { 0, 0, 0, 0, 0 }, // 66 CVI_VS
  { 0, 0, 0, 0, 0 }, // 67 CVI_VP_VS_LONG_EARLY
  { 0, 0, 0, 0, 0 }, // 68 CVI_VP
  { 0, 0, 0, 0, 0 }, // 69 CVI_VP_VS_LONG
  { 0, 0, 0, 0, 0 }, // 70 CVI_HIST
  { 0, 0, 0, 0, 0 }, // 71 CVI_VX_DV_LONG
  { 0, 0, 0, 0, 0 }, // 72 CVI_VX_LONG
  { 0, 0, 0, 0, 0 }, // 73 CVI_VINLANESAT
  { 0, 0, 0, 0, 0 }, // 74 CVI_VP_VS
  { 1, 6, 7, 0, 0 }, // 75 ST_tc_3stall_SLOT0
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary HexagonItinerariesV55[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 10, 11, 1, 4 }, // 1 S_2op_tc_2_SLOT23
  { 1, 10, 11, 4, 7 }, // 2 S_2op_tc_1_SLOT23
  { 1, 11, 12, 7, 10 }, // 3 ALU32_3op_tc_1_SLOT0123
  { 1, 10, 11, 10, 13 }, // 4 ALU64_tc_1_SLOT23
  { 1, 10, 11, 13, 16 }, // 5 ALU64_tc_2_SLOT23
  { 1, 11, 12, 16, 19 }, // 6 ALU32_ADDI_tc_1_SLOT0123
  { 1, 11, 12, 19, 22 }, // 7 ALU32_3op_tc_2_SLOT0123
  { 1, 11, 12, 22, 25 }, // 8 ALU32_2op_tc_1_SLOT0123
  { 1, 12, 13, 25, 28 }, // 9 CR_tc_3x_SLOT3
  { 1, 10, 11, 28, 31 }, // 10 ALU64_tc_2early_SLOT23
  { 1, 10, 11, 31, 34 }, // 11 M_tc_3x_SLOT23
  { 1, 10, 11, 34, 37 }, // 12 S_3op_tc_1_SLOT23
  { 1, 10, 11, 37, 40 }, // 13 S_3op_tc_2early_SLOT23
  { 1, 10, 11, 40, 43 }, // 14 S_3op_tc_2_SLOT23
  { 1, 11, 12, 43, 46 }, // 15 EXTENDER_tc_1_SLOT0123
  { 1, 10, 11, 46, 49 }, // 16 S_3op_tc_3_SLOT23
  { 1, 10, 11, 49, 52 }, // 17 M_tc_3stall_SLOT23
  { 1, 11, 12, 52, 55 }, // 18 PSEUDO
  { 1, 10, 11, 55, 59 }, // 19 CR_tc_2early_SLOT23
  { 1, 10, 11, 59, 62 }, // 20 S_2op_tc_2early_SLOT23
  { 1, 11, 12, 62, 65 }, // 21 ALU32_3op_tc_2early_SLOT0123
  { 1, 11, 12, 65, 68 }, // 22 ALU32_2op_tc_2early_SLOT0123
  { 1, 12, 13, 68, 71 }, // 23 CR_tc_2_SLOT3
  { 1, 13, 14, 71, 74 }, // 24 J_tc_2early_SLOT2
  { 1, 10, 11, 74, 78 }, // 25 J_tc_2early_SLOT23
  { 1, 14, 15, 78, 80 }, // 26 LD_tc_ld_SLOT01
  { 1, 15, 16, 80, 83 }, // 27 DUPLEX
  { 1, 16, 17, 83, 84 }, // 28 J_tc_2early_SLOT0123
  { 1, 10, 11, 84, 87 }, // 29 S_2op_tc_3or4x_SLOT23
  { 1, 10, 11, 87, 90 }, // 30 ALU64_tc_3x_SLOT23
  { 1, 10, 11, 90, 93 }, // 31 M_tc_3or4x_SLOT23
  { 1, 10, 11, 93, 96 }, // 32 M_tc_3_SLOT23
  { 0, 0, 0, 0, 0 }, // 33 CVI_VA
  { 0, 0, 0, 0, 0 }, // 34 CVI_VA_DV
  { 1, 17, 19, 96, 99 }, // 35 PSEUDOM
  { 1, 10, 11, 99, 103 }, // 36 J_tc_2early_CJUMP_UCJUMP_ARCHDEPSLOT
  { 1, 12, 13, 103, 106 }, // 37 CR_tc_2early_SLOT3
  { 1, 15, 16, 106, 110 }, // 38 NCJ_tc_3or4stall_SLOT0
  { 1, 10, 11, 110, 113 }, // 39 COMPOUND_CJ_ARCHDEPSLOT
  { 1, 10, 11, 113, 116 }, // 40 COMPOUND
  { 1, 14, 15, 116, 120 }, // 41 V2LDST_tc_ld_SLOT01
  { 1, 15, 16, 120, 122 }, // 42 LD_tc_ld_SLOT0
  { 1, 15, 16, 122, 126 }, // 43 V4LDST_tc_st_SLOT0
  { 1, 14, 15, 126, 130 }, // 44 V4LDST_tc_ld_SLOT01
  { 1, 15, 16, 130, 132 }, // 45 LD_tc_3or4stall_SLOT0
  { 0, 0, 0, 0, 0 }, // 46 CVI_VM_LD
  { 1, 10, 11, 132, 135 }, // 47 M_tc_2_SLOT23
  { 1, 10, 11, 135, 138 }, // 48 S_3op_tc_3x_SLOT23
  { 1, 15, 16, 138, 141 }, // 49 ST_tc_ld_SLOT0
  { 1, 14, 15, 141, 145 }, // 50 V2LDST_tc_st_SLOT01
  { 1, 14, 15, 145, 148 }, // 51 ST_tc_st_SLOT01
  { 1, 15, 16, 148, 152 }, // 52 V2LDST_tc_st_SLOT0
  { 1, 15, 16, 152, 155 }, // 53 ST_tc_st_SLOT0
  { 1, 14, 15, 155, 159 }, // 54 V4LDST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 55 CVI_VM_ST
  { 1, 11, 12, 159, 162 }, // 56 PREFIX
  { 0, 0, 0, 0, 0 }, // 57 CVI_VX_LATE
  { 0, 0, 0, 0, 0 }, // 58 CVI_VP_LONG
  { 0, 0, 0, 0, 0 }, // 59 CVI_VM_VP_LDU
  { 0, 0, 0, 0, 0 }, // 60 CVI_VM_CUR_LD
  { 0, 0, 0, 0, 0 }, // 61 CVI_VM_TMP_LD
  { 0, 0, 0, 0, 0 }, // 62 CVI_VM_STU
  { 0, 0, 0, 0, 0 }, // 63 CVI_VM_NEW_ST
  { 0, 0, 0, 0, 0 }, // 64 CVI_VX
  { 0, 0, 0, 0, 0 }, // 65 CVI_VX_DV
  { 0, 0, 0, 0, 0 }, // 66 CVI_VS
  { 0, 0, 0, 0, 0 }, // 67 CVI_VP_VS_LONG_EARLY
  { 0, 0, 0, 0, 0 }, // 68 CVI_VP
  { 0, 0, 0, 0, 0 }, // 69 CVI_VP_VS_LONG
  { 0, 0, 0, 0, 0 }, // 70 CVI_HIST
  { 0, 0, 0, 0, 0 }, // 71 CVI_VX_DV_LONG
  { 0, 0, 0, 0, 0 }, // 72 CVI_VX_LONG
  { 0, 0, 0, 0, 0 }, // 73 CVI_VINLANESAT
  { 0, 0, 0, 0, 0 }, // 74 CVI_VP_VS
  { 1, 15, 16, 162, 165 }, // 75 ST_tc_3stall_SLOT0
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary HexagonItinerariesV60[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 19, 20, 0, 0 }, // 1 S_2op_tc_2_SLOT23
  { 1, 20, 21, 0, 0 }, // 2 S_2op_tc_1_SLOT23
  { 1, 21, 22, 0, 0 }, // 3 ALU32_3op_tc_1_SLOT0123
  { 1, 20, 21, 0, 0 }, // 4 ALU64_tc_1_SLOT23
  { 1, 19, 20, 0, 0 }, // 5 ALU64_tc_2_SLOT23
  { 1, 21, 22, 0, 0 }, // 6 ALU32_ADDI_tc_1_SLOT0123
  { 1, 22, 23, 0, 0 }, // 7 ALU32_3op_tc_2_SLOT0123
  { 1, 21, 22, 0, 0 }, // 8 ALU32_2op_tc_1_SLOT0123
  { 1, 23, 24, 0, 0 }, // 9 CR_tc_3x_SLOT3
  { 1, 19, 20, 0, 0 }, // 10 ALU64_tc_2early_SLOT23
  { 1, 24, 25, 0, 0 }, // 11 M_tc_3x_SLOT23
  { 1, 20, 21, 0, 0 }, // 12 S_3op_tc_1_SLOT23
  { 1, 19, 20, 0, 0 }, // 13 S_3op_tc_2early_SLOT23
  { 1, 19, 20, 0, 0 }, // 14 S_3op_tc_2_SLOT23
  { 1, 21, 22, 0, 0 }, // 15 EXTENDER_tc_1_SLOT0123
  { 1, 24, 25, 0, 0 }, // 16 S_3op_tc_3_SLOT23
  { 1, 24, 25, 0, 0 }, // 17 M_tc_3stall_SLOT23
  { 1, 21, 22, 0, 0 }, // 18 PSEUDO
  { 1, 19, 20, 0, 0 }, // 19 CR_tc_2early_SLOT23
  { 1, 19, 20, 0, 0 }, // 20 S_2op_tc_2early_SLOT23
  { 1, 22, 23, 0, 0 }, // 21 ALU32_3op_tc_2early_SLOT0123
  { 1, 22, 23, 0, 0 }, // 22 ALU32_2op_tc_2early_SLOT0123
  { 1, 25, 26, 0, 0 }, // 23 CR_tc_2_SLOT3
  { 1, 26, 27, 0, 0 }, // 24 J_tc_2early_SLOT2
  { 1, 19, 20, 0, 0 }, // 25 J_tc_2early_SLOT23
  { 1, 27, 28, 0, 0 }, // 26 LD_tc_ld_SLOT01
  { 1, 28, 29, 0, 0 }, // 27 DUPLEX
  { 1, 29, 30, 0, 0 }, // 28 J_tc_2early_SLOT0123
  { 1, 30, 31, 0, 0 }, // 29 S_2op_tc_3or4x_SLOT23
  { 1, 24, 25, 0, 0 }, // 30 ALU64_tc_3x_SLOT23
  { 1, 30, 31, 0, 0 }, // 31 M_tc_3or4x_SLOT23
  { 1, 24, 25, 0, 0 }, // 32 M_tc_3_SLOT23
  { 1, 31, 33, 0, 0 }, // 33 CVI_VA
  { 1, 33, 35, 0, 0 }, // 34 CVI_VA_DV
  { 1, 35, 37, 0, 0 }, // 35 PSEUDOM
  { 1, 20, 21, 0, 0 }, // 36 J_tc_2early_CJUMP_UCJUMP_ARCHDEPSLOT
  { 1, 25, 26, 0, 0 }, // 37 CR_tc_2early_SLOT3
  { 1, 37, 38, 0, 0 }, // 38 NCJ_tc_3or4stall_SLOT0
  { 1, 20, 21, 0, 0 }, // 39 COMPOUND_CJ_ARCHDEPSLOT
  { 1, 20, 21, 0, 0 }, // 40 COMPOUND
  { 1, 38, 39, 0, 0 }, // 41 V2LDST_tc_ld_SLOT01
  { 1, 39, 40, 0, 0 }, // 42 LD_tc_ld_SLOT0
  { 1, 28, 29, 0, 0 }, // 43 V4LDST_tc_st_SLOT0
  { 1, 27, 28, 0, 0 }, // 44 V4LDST_tc_ld_SLOT01
  { 1, 37, 38, 0, 0 }, // 45 LD_tc_3or4stall_SLOT0
  { 1, 40, 43, 0, 0 }, // 46 CVI_VM_LD
  { 1, 19, 20, 0, 0 }, // 47 M_tc_2_SLOT23
  { 1, 24, 25, 0, 0 }, // 48 S_3op_tc_3x_SLOT23
  { 1, 39, 40, 0, 0 }, // 49 ST_tc_ld_SLOT0
  { 1, 43, 44, 0, 0 }, // 50 V2LDST_tc_st_SLOT01
  { 1, 43, 44, 0, 0 }, // 51 ST_tc_st_SLOT01
  { 1, 28, 29, 0, 0 }, // 52 V2LDST_tc_st_SLOT0
  { 1, 28, 29, 0, 0 }, // 53 ST_tc_st_SLOT0
  { 1, 43, 44, 0, 0 }, // 54 V4LDST_tc_st_SLOT01
  { 1, 44, 47, 0, 0 }, // 55 CVI_VM_ST
  { 1, 21, 22, 0, 0 }, // 56 PREFIX
  { 1, 47, 49, 0, 0 }, // 57 CVI_VX_LATE
  { 1, 49, 51, 0, 0 }, // 58 CVI_VP_LONG
  { 1, 51, 55, 0, 0 }, // 59 CVI_VM_VP_LDU
  { 1, 40, 43, 0, 0 }, // 60 CVI_VM_CUR_LD
  { 1, 55, 57, 0, 0 }, // 61 CVI_VM_TMP_LD
  { 1, 57, 61, 0, 0 }, // 62 CVI_VM_STU
  { 1, 61, 63, 0, 0 }, // 63 CVI_VM_NEW_ST
  { 1, 47, 49, 0, 0 }, // 64 CVI_VX
  { 1, 63, 65, 0, 0 }, // 65 CVI_VX_DV
  { 1, 65, 67, 0, 0 }, // 66 CVI_VS
  { 1, 67, 69, 0, 0 }, // 67 CVI_VP_VS_LONG_EARLY
  { 1, 49, 51, 0, 0 }, // 68 CVI_VP
  { 1, 67, 69, 0, 0 }, // 69 CVI_VP_VS_LONG
  { 1, 69, 71, 0, 0 }, // 70 CVI_HIST
  { 1, 63, 65, 0, 0 }, // 71 CVI_VX_DV_LONG
  { 1, 47, 49, 0, 0 }, // 72 CVI_VX_LONG
  { 1, 65, 67, 0, 0 }, // 73 CVI_VINLANESAT
  { 1, 67, 69, 0, 0 }, // 74 CVI_VP_VS
  { 1, 39, 40, 0, 0 }, // 75 ST_tc_3stall_SLOT0
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // HexagonReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr}; // No Itinerary

static const llvm::MCSchedModel HexagonModelV4 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV4};

static const llvm::MCSchedModel HexagonModelV55 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV55};

static const llvm::MCSchedModel HexagonModelV60 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV60};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[] = {
  { "hexagonv4", (const void *)&HexagonModelV4 },
  { "hexagonv5", (const void *)&HexagonModelV4 },
  { "hexagonv55", (const void *)&HexagonModelV55 },
  { "hexagonv60", (const void *)&HexagonModelV60 }
};
#undef DBGFIELD
static inline MCSubtargetInfo *createHexagonMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, HexagonFeatureKV, HexagonSubTypeKV, 
                      HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::HexagonSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[Hexagon::ArchV4] && HexagonArchVersion < V4) HexagonArchVersion = V4;
  if (Bits[Hexagon::ArchV5] && HexagonArchVersion < V5) HexagonArchVersion = V5;
  if (Bits[Hexagon::ArchV55] && HexagonArchVersion < V55) HexagonArchVersion = V55;
  if (Bits[Hexagon::ArchV60] && HexagonArchVersion < V60) HexagonArchVersion = V60;
  if (Bits[Hexagon::ExtensionHVX]) UseHVXOps = true;
  if (Bits[Hexagon::ExtensionHVXDbl]) UseHVXDblOps = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
struct HexagonGenSubtargetInfo : public TargetSubtargetInfo {
  explicit HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[];
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[];
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[];
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[];
extern const llvm::InstrStage HexagonStages[];
extern const unsigned HexagonOperandCycles[];
extern const unsigned HexagonForwardingPaths[];
HexagonGenSubtargetInfo::HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(HexagonFeatureKV, 6), makeArrayRef(HexagonSubTypeKV, 4), 
                        HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                        HexagonStages, HexagonOperandCycles, HexagonForwardingPaths) {}

unsigned HexagonGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // HexagonGenSubtargetInfo::resolveSchedClass
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

