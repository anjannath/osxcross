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
namespace AMDGPU {
enum {
  Feature16BitInsts = 0,
  FeatureCFALUBug = 1,
  FeatureCIInsts = 2,
  FeatureCaymanISA = 3,
  FeatureDebuggerEmitPrologue = 4,
  FeatureDebuggerInsertNops = 5,
  FeatureDebuggerReserveRegs = 6,
  FeatureDisable = 7,
  FeatureDumpCode = 8,
  FeatureDumpCodeLower = 9,
  FeatureEnableLoadStoreOpt = 10,
  FeatureEnableSIScheduler = 11,
  FeatureEnableUnsafeDSOffsetFolding = 12,
  FeatureEvergreen = 13,
  FeatureFP32Denormals = 14,
  FeatureFP64 = 15,
  FeatureFP64Denormals = 16,
  FeatureFPExceptions = 17,
  FeatureFastFMAF32 = 18,
  FeatureFetchLimit8 = 19,
  FeatureFetchLimit16 = 20,
  FeatureFlatAddressSpace = 21,
  FeatureFlatForGlobal = 22,
  FeatureGCN = 23,
  FeatureGCN1Encoding = 24,
  FeatureGCN3Encoding = 25,
  FeatureISAVersion7_0_0 = 26,
  FeatureISAVersion7_0_1 = 27,
  FeatureISAVersion8_0_0 = 28,
  FeatureISAVersion8_0_1 = 29,
  FeatureISAVersion8_0_3 = 30,
  FeatureLDSBankCount16 = 31,
  FeatureLDSBankCount32 = 32,
  FeatureLocalMemorySize0 = 33,
  FeatureLocalMemorySize32768 = 34,
  FeatureLocalMemorySize65536 = 35,
  FeatureMaxPrivateElementSize4 = 36,
  FeatureMaxPrivateElementSize8 = 37,
  FeatureMaxPrivateElementSize16 = 38,
  FeatureNorthernIslands = 39,
  FeaturePromoteAlloca = 40,
  FeatureR600 = 41,
  FeatureR600ALUInst = 42,
  FeatureR700 = 43,
  FeatureSGPRInitBug = 44,
  FeatureSMemRealTime = 45,
  FeatureSeaIslands = 46,
  FeatureSouthernIslands = 47,
  FeatureUnalignedBufferAccess = 48,
  FeatureVGPRSpilling = 49,
  FeatureVertexCache = 50,
  FeatureVolcanicIslands = 51,
  FeatureWavefrontSize16 = 52,
  FeatureWavefrontSize32 = 53,
  FeatureWavefrontSize64 = 54,
  FeatureXNACK = 55,
  HalfRate64Ops = 56
};
} // end namespace AMDGPU
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV AMDGPUFeatureKV[] = {
  { "16-bit-insts", "Has i16/f16 instructions", { AMDGPU::Feature16BitInsts }, { } },
  { "DumpCode", "Dump MachineInstrs in the CodeEmitter", { AMDGPU::FeatureDumpCode }, { } },
  { "EVERGREEN", "EVERGREEN GPU generation", { AMDGPU::FeatureEvergreen }, { AMDGPU::FeatureFetchLimit16, AMDGPU::FeatureLocalMemorySize32768 } },
  { "HasVertexCache", "Specify use of dedicated vertex cache", { AMDGPU::FeatureVertexCache }, { } },
  { "NORTHERN_ISLANDS", "NORTHERN_ISLANDS GPU generation", { AMDGPU::FeatureNorthernIslands }, { AMDGPU::FeatureFetchLimit16, AMDGPU::FeatureWavefrontSize64, AMDGPU::FeatureLocalMemorySize32768 } },
  { "R600", "R600 GPU generation", { AMDGPU::FeatureR600 }, { AMDGPU::FeatureR600ALUInst, AMDGPU::FeatureFetchLimit8, AMDGPU::FeatureLocalMemorySize0 } },
  { "R600ALUInst", "Older version of ALU instructions encoding", { AMDGPU::FeatureR600ALUInst }, { } },
  { "R700", "R700 GPU generation", { AMDGPU::FeatureR700 }, { AMDGPU::FeatureFetchLimit16, AMDGPU::FeatureLocalMemorySize0 } },
  { "SEA_ISLANDS", "SEA_ISLANDS GPU generation", { AMDGPU::FeatureSeaIslands }, { AMDGPU::FeatureFP64, AMDGPU::FeatureLocalMemorySize65536, AMDGPU::FeatureWavefrontSize64, AMDGPU::FeatureGCN, AMDGPU::FeatureFlatAddressSpace, AMDGPU::FeatureGCN1Encoding, AMDGPU::FeatureCIInsts } },
  { "SOUTHERN_ISLANDS", "SOUTHERN_ISLANDS GPU generation", { AMDGPU::FeatureSouthernIslands }, { AMDGPU::FeatureFP64, AMDGPU::FeatureLocalMemorySize32768, AMDGPU::FeatureWavefrontSize64, AMDGPU::FeatureGCN, AMDGPU::FeatureGCN1Encoding, AMDGPU::FeatureLDSBankCount32 } },
  { "VOLCANIC_ISLANDS", "VOLCANIC_ISLANDS GPU generation", { AMDGPU::FeatureVolcanicIslands }, { AMDGPU::FeatureFP64, AMDGPU::FeatureLocalMemorySize65536, AMDGPU::FeatureWavefrontSize64, AMDGPU::FeatureFlatAddressSpace, AMDGPU::FeatureGCN, AMDGPU::FeatureGCN3Encoding, AMDGPU::FeatureCIInsts, AMDGPU::Feature16BitInsts, AMDGPU::FeatureSMemRealTime } },
  { "amdgpu-debugger-emit-prologue", "Emit debugger prologue", { AMDGPU::FeatureDebuggerEmitPrologue }, { } },
  { "amdgpu-debugger-insert-nops", "Insert one nop instruction for each high level source statement", { AMDGPU::FeatureDebuggerInsertNops }, { } },
  { "amdgpu-debugger-reserve-regs", "Reserve registers for debugger usage", { AMDGPU::FeatureDebuggerReserveRegs }, { } },
  { "caymanISA", "Use Cayman ISA", { AMDGPU::FeatureCaymanISA }, { } },
  { "cfalubug", "GPU has CF_ALU bug", { AMDGPU::FeatureCFALUBug }, { } },
  { "ci-insts", "Additional intstructions for CI+", { AMDGPU::FeatureCIInsts }, { } },
  { "dumpcode", "Dump MachineInstrs in the CodeEmitter", { AMDGPU::FeatureDumpCodeLower }, { } },
  { "fast-fmaf", "Assuming f32 fma is at least as fast as mul + add", { AMDGPU::FeatureFastFMAF32 }, { } },
  { "fetch16", "Limit the maximum number of fetches in a clause to 16", { AMDGPU::FeatureFetchLimit16 }, { } },
  { "fetch8", "Limit the maximum number of fetches in a clause to 8", { AMDGPU::FeatureFetchLimit8 }, { } },
  { "flat-address-space", "Support flat address space", { AMDGPU::FeatureFlatAddressSpace }, { } },
  { "flat-for-global", "Force to generate flat instruction for global", { AMDGPU::FeatureFlatForGlobal }, { } },
  { "fp-exceptions", "Enable floating point exceptions", { AMDGPU::FeatureFPExceptions }, { } },
  { "fp32-denormals", "Enable single precision denormal handling", { AMDGPU::FeatureFP32Denormals }, { } },
  { "fp64", "Enable double precision operations", { AMDGPU::FeatureFP64 }, { } },
  { "fp64-denormals", "Enable double precision denormal handling", { AMDGPU::FeatureFP64Denormals }, { AMDGPU::FeatureFP64 } },
  { "gcn", "GCN or newer GPU", { AMDGPU::FeatureGCN }, { } },
  { "gcn1-encoding", "Encoding format for SI and CI", { AMDGPU::FeatureGCN1Encoding }, { } },
  { "gcn3-encoding", "Encoding format for VI", { AMDGPU::FeatureGCN3Encoding }, { } },
  { "half-rate-64-ops", "Most fp64 instructions are half rate instead of quarter", { AMDGPU::HalfRate64Ops }, { } },
  { "isaver7.0.0", "Instruction set version number", { AMDGPU::FeatureISAVersion7_0_0 }, { } },
  { "isaver7.0.1", "Instruction set version number", { AMDGPU::FeatureISAVersion7_0_1 }, { } },
  { "isaver8.0.0", "Instruction set version number", { AMDGPU::FeatureISAVersion8_0_0 }, { } },
  { "isaver8.0.1", "Instruction set version number", { AMDGPU::FeatureISAVersion8_0_1 }, { } },
  { "isaver8.0.3", "Instruction set version number", { AMDGPU::FeatureISAVersion8_0_3 }, { } },
  { "ldsbankcount16", "The number of LDS banks per compute unit.", { AMDGPU::FeatureLDSBankCount16 }, { } },
  { "ldsbankcount32", "The number of LDS banks per compute unit.", { AMDGPU::FeatureLDSBankCount32 }, { } },
  { "load-store-opt", "Enable SI load/store optimizer pass", { AMDGPU::FeatureEnableLoadStoreOpt }, { } },
  { "localmemorysize0", "The size of local memory in bytes", { AMDGPU::FeatureLocalMemorySize0 }, { } },
  { "localmemorysize32768", "The size of local memory in bytes", { AMDGPU::FeatureLocalMemorySize32768 }, { } },
  { "localmemorysize65536", "The size of local memory in bytes", { AMDGPU::FeatureLocalMemorySize65536 }, { } },
  { "max-private-element-size-16", "Maximum private access size may be 16", { AMDGPU::FeatureMaxPrivateElementSize16 }, { } },
  { "max-private-element-size-4", "Maximum private access size may be 4", { AMDGPU::FeatureMaxPrivateElementSize4 }, { } },
  { "max-private-element-size-8", "Maximum private access size may be 8", { AMDGPU::FeatureMaxPrivateElementSize8 }, { } },
  { "promote-alloca", "Enable promote alloca pass", { AMDGPU::FeaturePromoteAlloca }, { } },
  { "s-memrealtime", "Has s_memrealtime instruction", { AMDGPU::FeatureSMemRealTime }, { } },
  { "sgpr-init-bug", "VI SGPR initilization bug requiring a fixed SGPR allocation size", { AMDGPU::FeatureSGPRInitBug }, { } },
  { "si-scheduler", "Enable SI Machine Scheduler", { AMDGPU::FeatureEnableSIScheduler }, { } },
  { "unaligned-buffer-access", "Support unaligned global loads and stores", { AMDGPU::FeatureUnalignedBufferAccess }, { } },
  { "unsafe-ds-offset-folding", "Force using DS instruction immediate offsets on SI", { AMDGPU::FeatureEnableUnsafeDSOffsetFolding }, { } },
  { "vgpr-spilling", "Enable spilling of VGPRs to scratch memory", { AMDGPU::FeatureVGPRSpilling }, { } },
  { "wavefrontsize16", "The number of threads per wavefront", { AMDGPU::FeatureWavefrontSize16 }, { } },
  { "wavefrontsize32", "The number of threads per wavefront", { AMDGPU::FeatureWavefrontSize32 }, { } },
  { "wavefrontsize64", "The number of threads per wavefront", { AMDGPU::FeatureWavefrontSize64 }, { } },
  { "xnack", "Enable XNACK support", { AMDGPU::FeatureXNACK }, { } }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV AMDGPUSubTypeKV[] = {
  { "SI", "Select the SI processor", { AMDGPU::FeatureSouthernIslands, AMDGPU::FeatureFastFMAF32, AMDGPU::HalfRate64Ops }, { } },
  { "barts", "Select the barts processor", { AMDGPU::FeatureNorthernIslands, AMDGPU::FeatureVertexCache, AMDGPU::FeatureCFALUBug }, { } },
  { "bonaire", "Select the bonaire processor", { AMDGPU::FeatureSeaIslands, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureISAVersion7_0_0 }, { } },
  { "caicos", "Select the caicos processor", { AMDGPU::FeatureNorthernIslands, AMDGPU::FeatureCFALUBug }, { } },
  { "carrizo", "Select the carrizo processor", { AMDGPU::FeatureVolcanicIslands, AMDGPU::FeatureISAVersion8_0_1, AMDGPU::FeatureLDSBankCount32 }, { } },
  { "cayman", "Select the cayman processor", { AMDGPU::FeatureNorthernIslands, AMDGPU::FeatureFP64, AMDGPU::FeatureCaymanISA }, { } },
  { "cedar", "Select the cedar processor", { AMDGPU::FeatureEvergreen, AMDGPU::FeatureVertexCache, AMDGPU::FeatureWavefrontSize32, AMDGPU::FeatureCFALUBug }, { } },
  { "cypress", "Select the cypress processor", { AMDGPU::FeatureEvergreen, AMDGPU::FeatureFP64, AMDGPU::FeatureVertexCache, AMDGPU::FeatureWavefrontSize64 }, { } },
  { "fiji", "Select the fiji processor", { AMDGPU::FeatureVolcanicIslands, AMDGPU::FeatureISAVersion8_0_3, AMDGPU::FeatureLDSBankCount32 }, { } },
  { "hainan", "Select the hainan processor", { AMDGPU::FeatureSouthernIslands }, { } },
  { "hawaii", "Select the hawaii processor", { AMDGPU::FeatureSeaIslands, AMDGPU::FeatureFastFMAF32, AMDGPU::HalfRate64Ops, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureISAVersion7_0_1 }, { } },
  { "iceland", "Select the iceland processor", { AMDGPU::FeatureVolcanicIslands, AMDGPU::FeatureSGPRInitBug, AMDGPU::FeatureISAVersion8_0_0, AMDGPU::FeatureLDSBankCount32 }, { } },
  { "juniper", "Select the juniper processor", { AMDGPU::FeatureEvergreen, AMDGPU::FeatureVertexCache, AMDGPU::FeatureWavefrontSize64 }, { } },
  { "kabini", "Select the kabini processor", { AMDGPU::FeatureSeaIslands, AMDGPU::FeatureLDSBankCount16 }, { } },
  { "kaveri", "Select the kaveri processor", { AMDGPU::FeatureSeaIslands, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureISAVersion7_0_0 }, { } },
  { "mullins", "Select the mullins processor", { AMDGPU::FeatureSeaIslands, AMDGPU::FeatureLDSBankCount16 }, { } },
  { "oland", "Select the oland processor", { AMDGPU::FeatureSouthernIslands }, { } },
  { "pitcairn", "Select the pitcairn processor", { AMDGPU::FeatureSouthernIslands }, { } },
  { "polaris10", "Select the polaris10 processor", { AMDGPU::FeatureVolcanicIslands, AMDGPU::FeatureISAVersion8_0_1, AMDGPU::FeatureLDSBankCount32 }, { } },
  { "polaris11", "Select the polaris11 processor", { AMDGPU::FeatureVolcanicIslands, AMDGPU::FeatureISAVersion8_0_1, AMDGPU::FeatureLDSBankCount32 }, { } },
  { "r600", "Select the r600 processor", { AMDGPU::FeatureR600, AMDGPU::FeatureVertexCache, AMDGPU::FeatureWavefrontSize64 }, { } },
  { "r630", "Select the r630 processor", { AMDGPU::FeatureR600, AMDGPU::FeatureVertexCache, AMDGPU::FeatureWavefrontSize32 }, { } },
  { "redwood", "Select the redwood processor", { AMDGPU::FeatureEvergreen, AMDGPU::FeatureVertexCache, AMDGPU::FeatureWavefrontSize64, AMDGPU::FeatureCFALUBug }, { } },
  { "rs880", "Select the rs880 processor", { AMDGPU::FeatureR600, AMDGPU::FeatureWavefrontSize16 }, { } },
  { "rv670", "Select the rv670 processor", { AMDGPU::FeatureR600, AMDGPU::FeatureFP64, AMDGPU::FeatureVertexCache, AMDGPU::FeatureWavefrontSize64 }, { } },
  { "rv710", "Select the rv710 processor", { AMDGPU::FeatureR700, AMDGPU::FeatureVertexCache, AMDGPU::FeatureWavefrontSize32 }, { } },
  { "rv730", "Select the rv730 processor", { AMDGPU::FeatureR700, AMDGPU::FeatureVertexCache, AMDGPU::FeatureWavefrontSize32 }, { } },
  { "rv770", "Select the rv770 processor", { AMDGPU::FeatureR700, AMDGPU::FeatureFP64, AMDGPU::FeatureVertexCache, AMDGPU::FeatureWavefrontSize64 }, { } },
  { "stoney", "Select the stoney processor", { AMDGPU::FeatureVolcanicIslands, AMDGPU::FeatureISAVersion8_0_1, AMDGPU::FeatureLDSBankCount16 }, { } },
  { "sumo", "Select the sumo processor", { AMDGPU::FeatureEvergreen, AMDGPU::FeatureWavefrontSize64, AMDGPU::FeatureCFALUBug }, { } },
  { "tahiti", "Select the tahiti processor", { AMDGPU::FeatureSouthernIslands, AMDGPU::FeatureFastFMAF32, AMDGPU::HalfRate64Ops }, { } },
  { "tonga", "Select the tonga processor", { AMDGPU::FeatureVolcanicIslands, AMDGPU::FeatureSGPRInitBug, AMDGPU::FeatureISAVersion8_0_0, AMDGPU::FeatureLDSBankCount32 }, { } },
  { "turks", "Select the turks processor", { AMDGPU::FeatureNorthernIslands, AMDGPU::FeatureVertexCache, AMDGPU::FeatureCFALUBug }, { } },
  { "verde", "Select the verde processor", { AMDGPU::FeatureSouthernIslands }, { } }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "R600_VLIW5_Itin"
namespace R600_VLIW5_ItinFU {
  const unsigned ALU_X = 1 << 0;
  const unsigned ALU_Y = 1 << 1;
  const unsigned ALU_Z = 1 << 2;
  const unsigned ALU_W = 1 << 3;
  const unsigned TRANS = 1 << 4;
  const unsigned ALU_NULL = 1 << 5;
} // end namespace R600_VLIW5_ItinFU

// Functional units for "R600_VLIW4_Itin"
namespace R600_VLIW4_ItinFU {
  const unsigned ALU_X = 1 << 0;
  const unsigned ALU_Y = 1 << 1;
  const unsigned ALU_Z = 1 << 2;
  const unsigned ALU_W = 1 << 3;
  const unsigned ALU_NULL = 1 << 4;
} // end namespace R600_VLIW4_ItinFU

extern const llvm::InstrStage AMDGPUStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, R600_VLIW5_ItinFU::ALU_X | R600_VLIW5_ItinFU::ALU_Y | R600_VLIW5_ItinFU::ALU_Z | R600_VLIW5_ItinFU::ALU_W | R600_VLIW5_ItinFU::TRANS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, R600_VLIW5_ItinFU::ALU_NULL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, R600_VLIW5_ItinFU::ALU_X | R600_VLIW5_ItinFU::ALU_Y | R600_VLIW5_ItinFU::ALU_Z | R600_VLIW5_ItinFU::ALU_W, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, R600_VLIW5_ItinFU::TRANS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, R600_VLIW5_ItinFU::ALU_X, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, R600_VLIW4_ItinFU::ALU_X | R600_VLIW4_ItinFU::ALU_Y | R600_VLIW4_ItinFU::ALU_Z | R600_VLIW4_ItinFU::ALU_W, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, R600_VLIW4_ItinFU::ALU_NULL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned AMDGPUOperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned AMDGPUForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary R600_VLIW5_Itin[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 AnyALU
  { 1, 2, 3, 0, 0 }, // 2 NullALU
  { 1, 3, 4, 0, 0 }, // 3 VecALU
  { 1, 2, 3, 0, 0 }, // 4 NullALU_WriteVMEM
  { 1, 4, 5, 0, 0 }, // 5 TransALU
  { 1, 2, 3, 0, 0 }, // 6 NullALU_WriteLDS
  { 1, 2, 3, 0, 0 }, // 7 NullALU_WriteExport
  { 1, 2, 3, 0, 0 }, // 8 NullALU_Write32Bit
  { 1, 5, 6, 0, 0 }, // 9 XALU
  { 1, 2, 3, 0, 0 }, // 10 NullALU_WriteSALU
  { 1, 2, 3, 0, 0 }, // 11 NullALU_WriteBarrier
  { 1, 2, 3, 0, 0 }, // 12 NullALU_WriteSMEM
  { 1, 2, 3, 0, 0 }, // 13 NullALU_Write32Bit_WriteSALU
  { 1, 2, 3, 0, 0 }, // 14 NullALU_WriteDoubleAdd
  { 1, 2, 3, 0, 0 }, // 15 NullALU_Write64Bit
  { 1, 2, 3, 0, 0 }, // 16 NullALU_WriteQuarterRate32
  { 1, 2, 3, 0, 0 }, // 17 NullALU_WriteFloatFMA
  { 1, 2, 3, 0, 0 }, // 18 NullALU_WriteDouble
  { 1, 2, 3, 0, 0 }, // 19 NullALU_WriteFloatFMA_WriteSALU
  { 1, 2, 3, 0, 0 }, // 20 NullALU_WriteDouble_WriteSALU
  { 0, 0, 0, 0, 0 }, // 21 COPY
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary R600_VLIW4_Itin[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 6, 7, 0, 0 }, // 1 AnyALU
  { 1, 7, 8, 0, 0 }, // 2 NullALU
  { 1, 6, 7, 0, 0 }, // 3 VecALU
  { 1, 7, 8, 0, 0 }, // 4 NullALU_WriteVMEM
  { 1, 7, 8, 0, 0 }, // 5 TransALU
  { 1, 7, 8, 0, 0 }, // 6 NullALU_WriteLDS
  { 1, 7, 8, 0, 0 }, // 7 NullALU_WriteExport
  { 1, 7, 8, 0, 0 }, // 8 NullALU_Write32Bit
  { 0, 0, 0, 0, 0 }, // 9 XALU
  { 1, 7, 8, 0, 0 }, // 10 NullALU_WriteSALU
  { 1, 7, 8, 0, 0 }, // 11 NullALU_WriteBarrier
  { 1, 7, 8, 0, 0 }, // 12 NullALU_WriteSMEM
  { 1, 7, 8, 0, 0 }, // 13 NullALU_Write32Bit_WriteSALU
  { 1, 7, 8, 0, 0 }, // 14 NullALU_WriteDoubleAdd
  { 1, 7, 8, 0, 0 }, // 15 NullALU_Write64Bit
  { 1, 7, 8, 0, 0 }, // 16 NullALU_WriteQuarterRate32
  { 1, 7, 8, 0, 0 }, // 17 NullALU_WriteFloatFMA
  { 1, 7, 8, 0, 0 }, // 18 NullALU_WriteDouble
  { 1, 7, 8, 0, 0 }, // 19 NullALU_WriteFloatFMA_WriteSALU
  { 1, 7, 8, 0, 0 }, // 20 NullALU_WriteDouble_WriteSALU
  { 0, 0, 0, 0, 0 }, // 21 COPY
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry AMDGPUWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 6,  1}, // #1
  { 3,  1}, // #2
  { 2,  1}, // #3
  { 5,  1}, // #4
  { 4,  1}, // #5
  { 1,  1}, // #6
  { 4,  1}, // #7
  { 5,  1} // #8
}; // AMDGPUWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry AMDGPUWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  {80,  0}, // #1 WriteVMEM
  { 5,  0}, // #2 WriteLDS_WriteSMEM
  { 4,  0}, // #3 WriteExport_WriteQuarterRate32_WriteDouble
  { 1,  0}, // #4 Write32Bit_WriteSALU_WriteFloatFMA
  {500,  0}, // #5 WriteBarrier
  { 1,  0}, // #6 Write32Bit_WriteFloatFMA
  { 1,  0}, // #7 WriteSALU
  { 2,  0}, // #8 WriteDoubleAdd_Write64Bit
  { 8,  0}, // #9 WriteDoubleAdd
  {16,  0}, // #10 WriteFloatFMA_WriteDouble
  {16,  0}, // #11 WriteFloatFMA_WriteDouble
  { 1,  0} // #12 WriteSALU
}; // AMDGPUWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry AMDGPUReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // AMDGPUReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc SIFullSpeedModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("AnyALU")             0, false, false,  0, 0,  0, 0,  0, 0}, // #1
  {DBGFIELD("NullALU")            0, false, false,  0, 0,  0, 0,  0, 0}, // #2
  {DBGFIELD("VecALU")             0, false, false,  0, 0,  0, 0,  0, 0}, // #3
  {DBGFIELD("NullALU_WriteVMEM")  1, false, false,  1, 1,  1, 1,  0, 0}, // #4
  {DBGFIELD("TransALU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #5
  {DBGFIELD("NullALU_WriteLDS")   1, false, false,  2, 1,  2, 1,  0, 0}, // #6
  {DBGFIELD("NullALU_WriteExport") 1, false, false,  3, 1,  3, 1,  0, 0}, // #7
  {DBGFIELD("NullALU_Write32Bit") 1, false, false,  4, 1,  4, 1,  0, 0}, // #8
  {DBGFIELD("XALU")               0, false, false,  0, 0,  0, 0,  0, 0}, // #9
  {DBGFIELD("NullALU_WriteSALU")  1, false, false,  5, 1,  4, 1,  0, 0}, // #10
  {DBGFIELD("NullALU_WriteBarrier") 1, false, false,  6, 1,  5, 1,  0, 0}, // #11
  {DBGFIELD("NullALU_WriteSMEM")  1, false, false,  2, 1,  2, 1,  0, 0}, // #12
  {DBGFIELD("NullALU_Write32Bit_WriteSALU") 2, false, false,  7, 2,  6, 2,  0, 0}, // #13
  {DBGFIELD("NullALU_WriteDoubleAdd") 1, false, false,  4, 1,  8, 1,  0, 0}, // #14
  {DBGFIELD("NullALU_Write64Bit") 1, false, false,  4, 1,  8, 1,  0, 0}, // #15
  {DBGFIELD("NullALU_WriteQuarterRate32") 1, false, false,  4, 1,  3, 1,  0, 0}, // #16
  {DBGFIELD("NullALU_WriteFloatFMA") 1, false, false,  4, 1,  4, 1,  0, 0}, // #17
  {DBGFIELD("NullALU_WriteDouble") 1, false, false,  4, 1,  3, 1,  0, 0}, // #18
  {DBGFIELD("NullALU_WriteFloatFMA_WriteSALU") 2, false, false,  7, 2,  6, 2,  0, 0}, // #19
  {DBGFIELD("NullALU_WriteDouble_WriteSALU") 2, false, false,  7, 2,  3, 2,  0, 0}, // #20
  {DBGFIELD("COPY")               65534, false, false,  0, 0,  0, 0,  0, 0}, // #21
  {DBGFIELD("Write32Bit")         1, false, false,  4, 1,  4, 1,  0, 0}, // #22
  {DBGFIELD("Write64Bit")         1, false, false,  4, 1,  8, 1,  0, 0}, // #23
  {DBGFIELD("WriteSALU")          1, false, false,  5, 1,  4, 1,  0, 0} // #24
}; // SIFullSpeedModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc SIQuarterSpeedModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("AnyALU")             0, false, false,  0, 0,  0, 0,  0, 0}, // #1
  {DBGFIELD("NullALU")            0, false, false,  0, 0,  0, 0,  0, 0}, // #2
  {DBGFIELD("VecALU")             0, false, false,  0, 0,  0, 0,  0, 0}, // #3
  {DBGFIELD("NullALU_WriteVMEM")  1, false, false,  1, 1,  1, 1,  0, 0}, // #4
  {DBGFIELD("TransALU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #5
  {DBGFIELD("NullALU_WriteLDS")   1, false, false,  2, 1,  2, 1,  0, 0}, // #6
  {DBGFIELD("NullALU_WriteExport") 1, false, false,  3, 1,  3, 1,  0, 0}, // #7
  {DBGFIELD("NullALU_Write32Bit") 1, false, false,  4, 1,  4, 1,  0, 0}, // #8
  {DBGFIELD("XALU")               0, false, false,  0, 0,  0, 0,  0, 0}, // #9
  {DBGFIELD("NullALU_WriteSALU")  1, false, false,  5, 1,  4, 1,  0, 0}, // #10
  {DBGFIELD("NullALU_WriteBarrier") 1, false, false,  6, 1,  5, 1,  0, 0}, // #11
  {DBGFIELD("NullALU_WriteSMEM")  1, false, false,  2, 1,  2, 1,  0, 0}, // #12
  {DBGFIELD("NullALU_Write32Bit_WriteSALU") 2, false, false,  7, 2,  6, 2,  0, 0}, // #13
  {DBGFIELD("NullALU_WriteDoubleAdd") 1, false, false,  4, 1,  9, 1,  0, 0}, // #14
  {DBGFIELD("NullALU_Write64Bit") 1, false, false,  4, 1,  8, 1,  0, 0}, // #15
  {DBGFIELD("NullALU_WriteQuarterRate32") 1, false, false,  4, 1,  3, 1,  0, 0}, // #16
  {DBGFIELD("NullALU_WriteFloatFMA") 1, false, false,  4, 1, 10, 1,  0, 0}, // #17
  {DBGFIELD("NullALU_WriteDouble") 1, false, false,  4, 1, 10, 1,  0, 0}, // #18
  {DBGFIELD("NullALU_WriteFloatFMA_WriteSALU") 2, false, false,  7, 2, 11, 2,  0, 0}, // #19
  {DBGFIELD("NullALU_WriteDouble_WriteSALU") 2, false, false,  7, 2, 11, 2,  0, 0}, // #20
  {DBGFIELD("COPY")               65534, false, false,  0, 0,  0, 0,  0, 0}, // #21
  {DBGFIELD("Write32Bit")         1, false, false,  4, 1,  4, 1,  0, 0}, // #22
  {DBGFIELD("Write64Bit")         1, false, false,  4, 1,  8, 1,  0, 0}, // #23
  {DBGFIELD("WriteSALU")          1, false, false,  5, 1,  4, 1,  0, 0} // #24
}; // SIQuarterSpeedModelSchedClasses

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

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc SIFullSpeedModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("HWBranch")        1, 0, 1}, // #1
  {DBGFIELD("HWExport")        1, 0, 7}, // #2
  {DBGFIELD("HWLGKM")          1, 0, 31}, // #3
  {DBGFIELD("HWSALU")          1, 0, 1}, // #4
  {DBGFIELD("HWVALU")          1, 0, 1}, // #5
  {DBGFIELD("HWVMEM")          1, 0, 15}  // #6
};

static const llvm::MCSchedModel SIFullSpeedModel = {
  1, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  true, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  SIFullSpeedModelProcResources,
  SIFullSpeedModelSchedClasses,
  7,
  25,
  nullptr}; // No Itinerary

static const llvm::MCSchedModel R600_VLIW5_ItinModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  R600_VLIW5_Itin};

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc SIQuarterSpeedModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("HWBranch")        1, 0, 1}, // #1
  {DBGFIELD("HWExport")        1, 0, 7}, // #2
  {DBGFIELD("HWLGKM")          1, 0, 31}, // #3
  {DBGFIELD("HWSALU")          1, 0, 1}, // #4
  {DBGFIELD("HWVALU")          1, 0, 1}, // #5
  {DBGFIELD("HWVMEM")          1, 0, 15}  // #6
};

static const llvm::MCSchedModel SIQuarterSpeedModel = {
  1, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  true, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  SIQuarterSpeedModelProcResources,
  SIQuarterSpeedModelSchedClasses,
  7,
  25,
  nullptr}; // No Itinerary

static const llvm::MCSchedModel R600_VLIW4_ItinModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  4, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  R600_VLIW4_Itin};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV AMDGPUProcSchedKV[] = {
  { "SI", (const void *)&SIFullSpeedModel },
  { "barts", (const void *)&R600_VLIW5_ItinModel },
  { "bonaire", (const void *)&SIQuarterSpeedModel },
  { "caicos", (const void *)&R600_VLIW5_ItinModel },
  { "carrizo", (const void *)&SIQuarterSpeedModel },
  { "cayman", (const void *)&R600_VLIW4_ItinModel },
  { "cedar", (const void *)&R600_VLIW5_ItinModel },
  { "cypress", (const void *)&R600_VLIW5_ItinModel },
  { "fiji", (const void *)&SIQuarterSpeedModel },
  { "hainan", (const void *)&SIQuarterSpeedModel },
  { "hawaii", (const void *)&SIFullSpeedModel },
  { "iceland", (const void *)&SIQuarterSpeedModel },
  { "juniper", (const void *)&R600_VLIW5_ItinModel },
  { "kabini", (const void *)&SIQuarterSpeedModel },
  { "kaveri", (const void *)&SIQuarterSpeedModel },
  { "mullins", (const void *)&SIQuarterSpeedModel },
  { "oland", (const void *)&SIQuarterSpeedModel },
  { "pitcairn", (const void *)&SIQuarterSpeedModel },
  { "polaris10", (const void *)&SIQuarterSpeedModel },
  { "polaris11", (const void *)&SIQuarterSpeedModel },
  { "r600", (const void *)&R600_VLIW5_ItinModel },
  { "r630", (const void *)&R600_VLIW5_ItinModel },
  { "redwood", (const void *)&R600_VLIW5_ItinModel },
  { "rs880", (const void *)&R600_VLIW5_ItinModel },
  { "rv670", (const void *)&R600_VLIW5_ItinModel },
  { "rv710", (const void *)&R600_VLIW5_ItinModel },
  { "rv730", (const void *)&R600_VLIW5_ItinModel },
  { "rv770", (const void *)&R600_VLIW5_ItinModel },
  { "stoney", (const void *)&SIQuarterSpeedModel },
  { "sumo", (const void *)&R600_VLIW5_ItinModel },
  { "tahiti", (const void *)&SIFullSpeedModel },
  { "tonga", (const void *)&SIQuarterSpeedModel },
  { "turks", (const void *)&R600_VLIW5_ItinModel },
  { "verde", (const void *)&SIQuarterSpeedModel }
};
#undef DBGFIELD
static inline MCSubtargetInfo *createAMDGPUMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, AMDGPUFeatureKV, AMDGPUSubTypeKV, 
                      AMDGPUProcSchedKV, AMDGPUWriteProcResTable, AMDGPUWriteLatencyTable, AMDGPUReadAdvanceTable, 
                      AMDGPUStages, AMDGPUOperandCycles, AMDGPUForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::AMDGPUSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[AMDGPU::Feature16BitInsts]) Has16BitInsts = true;
  if (Bits[AMDGPU::FeatureCFALUBug]) CFALUBug = true;
  if (Bits[AMDGPU::FeatureCIInsts]) CIInsts = true;
  if (Bits[AMDGPU::FeatureCaymanISA]) CaymanISA = true;
  if (Bits[AMDGPU::FeatureDebuggerEmitPrologue]) DebuggerEmitPrologue = true;
  if (Bits[AMDGPU::FeatureDebuggerInsertNops]) DebuggerInsertNops = true;
  if (Bits[AMDGPU::FeatureDebuggerReserveRegs]) DebuggerReserveRegs = true;
  if (Bits[AMDGPU::FeatureDisable]) FeatureDisable = true;
  if (Bits[AMDGPU::FeatureDumpCode]) DumpCode = true;
  if (Bits[AMDGPU::FeatureDumpCodeLower]) DumpCode = true;
  if (Bits[AMDGPU::FeatureEnableLoadStoreOpt]) EnableLoadStoreOpt = true;
  if (Bits[AMDGPU::FeatureEnableSIScheduler]) EnableSIScheduler = true;
  if (Bits[AMDGPU::FeatureEnableUnsafeDSOffsetFolding]) EnableUnsafeDSOffsetFolding = true;
  if (Bits[AMDGPU::FeatureEvergreen] && Gen < AMDGPUSubtarget::EVERGREEN) Gen = AMDGPUSubtarget::EVERGREEN;
  if (Bits[AMDGPU::FeatureFP32Denormals]) FP32Denormals = true;
  if (Bits[AMDGPU::FeatureFP64]) FP64 = true;
  if (Bits[AMDGPU::FeatureFP64Denormals]) FP64Denormals = true;
  if (Bits[AMDGPU::FeatureFPExceptions]) FPExceptions = true;
  if (Bits[AMDGPU::FeatureFastFMAF32]) FastFMAF32 = true;
  if (Bits[AMDGPU::FeatureFetchLimit8] && TexVTXClauseSize < 8) TexVTXClauseSize = 8;
  if (Bits[AMDGPU::FeatureFetchLimit16] && TexVTXClauseSize < 16) TexVTXClauseSize = 16;
  if (Bits[AMDGPU::FeatureFlatAddressSpace]) FlatAddressSpace = true;
  if (Bits[AMDGPU::FeatureFlatForGlobal]) FlatForGlobal = true;
  if (Bits[AMDGPU::FeatureGCN]) IsGCN = true;
  if (Bits[AMDGPU::FeatureGCN1Encoding]) GCN1Encoding = true;
  if (Bits[AMDGPU::FeatureGCN3Encoding]) GCN3Encoding = true;
  if (Bits[AMDGPU::FeatureISAVersion7_0_0] && IsaVersion < ISAVersion7_0_0) IsaVersion = ISAVersion7_0_0;
  if (Bits[AMDGPU::FeatureISAVersion7_0_1] && IsaVersion < ISAVersion7_0_1) IsaVersion = ISAVersion7_0_1;
  if (Bits[AMDGPU::FeatureISAVersion8_0_0] && IsaVersion < ISAVersion8_0_0) IsaVersion = ISAVersion8_0_0;
  if (Bits[AMDGPU::FeatureISAVersion8_0_1] && IsaVersion < ISAVersion8_0_1) IsaVersion = ISAVersion8_0_1;
  if (Bits[AMDGPU::FeatureISAVersion8_0_3] && IsaVersion < ISAVersion8_0_3) IsaVersion = ISAVersion8_0_3;
  if (Bits[AMDGPU::FeatureLDSBankCount16] && LDSBankCount < 16) LDSBankCount = 16;
  if (Bits[AMDGPU::FeatureLDSBankCount32] && LDSBankCount < 32) LDSBankCount = 32;
  if (Bits[AMDGPU::FeatureLocalMemorySize0] && LocalMemorySize < 0) LocalMemorySize = 0;
  if (Bits[AMDGPU::FeatureLocalMemorySize32768] && LocalMemorySize < 32768) LocalMemorySize = 32768;
  if (Bits[AMDGPU::FeatureLocalMemorySize65536] && LocalMemorySize < 65536) LocalMemorySize = 65536;
  if (Bits[AMDGPU::FeatureMaxPrivateElementSize4] && MaxPrivateElementSize < 4) MaxPrivateElementSize = 4;
  if (Bits[AMDGPU::FeatureMaxPrivateElementSize8] && MaxPrivateElementSize < 8) MaxPrivateElementSize = 8;
  if (Bits[AMDGPU::FeatureMaxPrivateElementSize16] && MaxPrivateElementSize < 16) MaxPrivateElementSize = 16;
  if (Bits[AMDGPU::FeatureNorthernIslands] && Gen < AMDGPUSubtarget::NORTHERN_ISLANDS) Gen = AMDGPUSubtarget::NORTHERN_ISLANDS;
  if (Bits[AMDGPU::FeaturePromoteAlloca]) EnablePromoteAlloca = true;
  if (Bits[AMDGPU::FeatureR600] && Gen < AMDGPUSubtarget::R600) Gen = AMDGPUSubtarget::R600;
  if (Bits[AMDGPU::FeatureR600ALUInst]) R600ALUInst = false;
  if (Bits[AMDGPU::FeatureR700] && Gen < AMDGPUSubtarget::R700) Gen = AMDGPUSubtarget::R700;
  if (Bits[AMDGPU::FeatureSGPRInitBug]) SGPRInitBug = true;
  if (Bits[AMDGPU::FeatureSMemRealTime]) HasSMemRealTime = true;
  if (Bits[AMDGPU::FeatureSeaIslands] && Gen < AMDGPUSubtarget::SEA_ISLANDS) Gen = AMDGPUSubtarget::SEA_ISLANDS;
  if (Bits[AMDGPU::FeatureSouthernIslands] && Gen < AMDGPUSubtarget::SOUTHERN_ISLANDS) Gen = AMDGPUSubtarget::SOUTHERN_ISLANDS;
  if (Bits[AMDGPU::FeatureUnalignedBufferAccess]) UnalignedBufferAccess = true;
  if (Bits[AMDGPU::FeatureVGPRSpilling]) EnableVGPRSpilling = true;
  if (Bits[AMDGPU::FeatureVertexCache]) HasVertexCache = true;
  if (Bits[AMDGPU::FeatureVolcanicIslands] && Gen < AMDGPUSubtarget::VOLCANIC_ISLANDS) Gen = AMDGPUSubtarget::VOLCANIC_ISLANDS;
  if (Bits[AMDGPU::FeatureWavefrontSize16] && WavefrontSize < 16) WavefrontSize = 16;
  if (Bits[AMDGPU::FeatureWavefrontSize32] && WavefrontSize < 32) WavefrontSize = 32;
  if (Bits[AMDGPU::FeatureWavefrontSize64] && WavefrontSize < 64) WavefrontSize = 64;
  if (Bits[AMDGPU::FeatureXNACK]) EnableXNACK = true;
  if (Bits[AMDGPU::HalfRate64Ops]) HalfRate64Ops = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
struct AMDGPUGenSubtargetInfo : public TargetSubtargetInfo {
  explicit AMDGPUGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV AMDGPUFeatureKV[];
extern const llvm::SubtargetFeatureKV AMDGPUSubTypeKV[];
extern const llvm::SubtargetInfoKV AMDGPUProcSchedKV[];
extern const llvm::MCWriteProcResEntry AMDGPUWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry AMDGPUWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry AMDGPUReadAdvanceTable[];
extern const llvm::InstrStage AMDGPUStages[];
extern const unsigned AMDGPUOperandCycles[];
extern const unsigned AMDGPUForwardingPaths[];
AMDGPUGenSubtargetInfo::AMDGPUGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(AMDGPUFeatureKV, 56), makeArrayRef(AMDGPUSubTypeKV, 34), 
                        AMDGPUProcSchedKV, AMDGPUWriteProcResTable, AMDGPUWriteLatencyTable, AMDGPUReadAdvanceTable, 
                        AMDGPUStages, AMDGPUOperandCycles, AMDGPUForwardingPaths) {}

unsigned AMDGPUGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {

  const SIInstrInfo *TII =
    static_cast<const SIInstrInfo*>(SchedModel->getInstrInfo());
  (void)TII;

  switch (SchedClass) {
  case 21: // COPY
    if (SchedModel->getProcessorID() == 1) { // SIFullSpeedModel
      if ((TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) <= 32))
        return 22; // Write32Bit
      if ((TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) > 32))
        return 23; // Write64Bit
      if ((true))
        return 24; // WriteSALU
    }
    if (SchedModel->getProcessorID() == 3) { // SIQuarterSpeedModel
      if ((TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) <= 32))
        return 22; // Write32Bit
      if ((TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) > 32))
        return 23; // Write64Bit
      if ((true))
        return 24; // WriteSALU
    }
    break;
  };
  report_fatal_error("Expected a variant SchedClass");
} // AMDGPUGenSubtargetInfo::resolveSchedClass
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

