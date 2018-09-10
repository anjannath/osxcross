/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  uint64_t ComputeAvailableFeatures(const FeatureBitset& FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  bool mnemonicIsValid(StringRef Mnemonic, unsigned VariantID);
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo, bool matchingInlineAsm,
                                unsigned VariantID = 0);

  enum OperandMatchResultTy {
    MatchOperand_Success,    // operand matched successfully
    MatchOperand_NoMatch,    // operand did not match
    MatchOperand_ParseFail   // operand matched but had errors
  };
  OperandMatchResultTy MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic);
  OperandMatchResultTy tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint16_t {
  Feature_FeatureDistinctOps = (1ULL << 0),
  Feature_FeatureLoadStoreOnCond = (1ULL << 5),
  Feature_FeatureLoadStoreOnCond2 = (1ULL << 6),
  Feature_FeatureHighWord = (1ULL << 3),
  Feature_FeatureFPExtension = (1ULL << 1),
  Feature_FeaturePopulationCount = (1ULL << 8),
  Feature_FeatureFastSerialization = (1ULL << 2),
  Feature_FeatureInterlockedAccess1 = (1ULL << 4),
  Feature_FeatureMiscellaneousExtensions = (1ULL << 7),
  Feature_FeatureTransactionalExecution = (1ULL << 10),
  Feature_FeatureProcessorAssist = (1ULL << 9),
  Feature_FeatureVector = (1ULL << 11),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_FeatureDistinctOps: return "distinct-ops";
  case Feature_FeatureLoadStoreOnCond: return "load-store-on-cond";
  case Feature_FeatureLoadStoreOnCond2: return "load-store-on-cond-2";
  case Feature_FeatureHighWord: return "high-word";
  case Feature_FeatureFPExtension: return "fp-extension";
  case Feature_FeaturePopulationCount: return "population-count";
  case Feature_FeatureFastSerialization: return "fast-serialization";
  case Feature_FeatureInterlockedAccess1: return "interlocked-access1";
  case Feature_FeatureMiscellaneousExtensions: return "miscellaneous-extensions";
  case Feature_FeatureTransactionalExecution: return "transactional-execution";
  case Feature_FeatureProcessorAssist: return "processor-assist";
  case Feature_FeatureVector: return "vector";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegOperands,
  CVT_95_addBDXAddrOperands,
  CVT_95_addImmOperands,
  CVT_95_addBDAddrOperands,
  CVT_95_addImmTLSOperands,
  CVT_95_addBDLAddrOperands,
  CVT_95_addAccessRegOperands,
  CVT_imm_95_0,
  CVT_95_addBDVAddrOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__GR321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__FP641_1,
  Convert__FP321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP321_0__Tie0__FP321_1,
  Convert__GR321_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR641_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__GR321_1,
  Convert__GR641_0__Tie0__S16Imm1_1,
  Convert__GR641_0__GR641_1__S16Imm1_2,
  Convert__GR641_0__Tie0__GR641_1,
  Convert__GR641_0__GR641_1__GR641_2,
  Convert__BDAddr64Disp202_0__S8Imm1_1,
  Convert__GR321_0__Tie0__S16Imm1_1,
  Convert__GR321_0__GR321_1__S16Imm1_2,
  Convert__GR321_0__Tie0__BDXAddr64Disp203_1,
  Convert__GRH321_0__Tie0__S32Imm1_1,
  Convert__GR321_0__Tie0__GR321_1,
  Convert__GR321_0__Tie0__U32Imm1_1,
  Convert__GR641_0__Tie0__U32Imm1_1,
  Convert__GR321_0__GR321_1__GR321_2,
  Convert__FP1281_0__Tie0__FP1281_1,
  Convert__GR641_0__ADDR641_1,
  Convert__U4Imm1_0__BDXAddr64Disp123_1,
  Convert__U4Imm1_0__GR641_1,
  Convert__ADDR641_0,
  Convert__GR641_0__PCRelTLS162_1,
  Convert__GR641_0__PCRelTLS322_1,
  Convert__U4Imm1_0__PCRel161_1,
  Convert__U4Imm1_0__PCRel321_1,
  Convert__GR321_0__Tie0__PCRel161_1,
  Convert__GR641_0__Tie0__PCRel161_1,
  Convert__GR321_0__BDXAddr64Disp123_1,
  Convert__FP641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP641_1,
  Convert__FP641_0__GR321_1,
  Convert__FP641_0__GR641_1,
  Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP321_0__BDXAddr64Disp123_1,
  Convert__FP321_0__FP321_1,
  Convert__FP321_0__GR321_1,
  Convert__FP321_0__GR641_1,
  Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__GR321_0__U4Imm1_1__FP641_2,
  Convert__GR321_0__U4Imm1_1__FP321_2,
  Convert__GR321_0__S32Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2,
  Convert__GR641_0__BDXAddr64Disp203_1,
  Convert__GR641_0__U4Imm1_1__FP641_2,
  Convert__GR641_0__U4Imm1_1__FP321_2,
  Convert__GR641_0__S32Imm1_1,
  Convert__GR641_0__GR321_1,
  Convert__GR641_0__PCRel321_1,
  Convert__GR641_0__S16Imm1_1,
  Convert__BDAddr64Disp122_0__S16Imm1_1,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__S8Imm1_1__PCRel161_2,
  Convert__GR641_0__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__GR641_1,
  Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__GR641_1__BDAddr64Disp122_2,
  Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__GR641_1__PCRel161_2,
  Convert__GR641_0__GR641_1__U4Imm1_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2,
  Convert__GRH321_0__BDXAddr64Disp203_1,
  Convert__GR321_0__S16Imm1_1,
  Convert__GR321_0__PCRel321_1,
  Convert__GR321_0__BDXAddr64Disp203_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__S32Imm1_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__S8Imm1_1__PCRel161_2,
  Convert__GR321_0__S16Imm1_1__U4Imm1_2,
  Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1,
  Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__BDAddr64Disp122_0__U16Imm1_1,
  Convert__GR321_0__U32Imm1_1,
  Convert__GR321_0__U16Imm1_1__U4Imm1_2,
  Convert__GR321_0__U16Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__GR641_0__U32Imm1_1,
  Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2,
  Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__U8Imm1_1__PCRel161_2,
  Convert__GR641_0__U16Imm1_1__U4Imm1_2,
  Convert__GR641_0__U16Imm1_1,
  Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__BDAddr64Disp122_0__U8Imm1_1,
  Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__U32Imm1_1,
  Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__U8Imm1_1__PCRel161_2,
  Convert__BDAddr64Disp202_0__U8Imm1_1,
  Convert__GR321_0__GR321_1,
  Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__GR321_1__BDAddr64Disp122_2,
  Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__GR321_1__PCRel161_2,
  Convert__GR321_0__GR321_1__U4Imm1_2,
  Convert__GR641_0__GR641_1__Tie0__Tie1,
  Convert__FP641_0__FP641_2__FP641_1,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2,
  Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2,
  Convert__FP1281_0__FP1281_1,
  Convert__FP1281_0__GR321_1,
  Convert__FP1281_0__GR641_1,
  Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__GR1281_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR1281_0__Tie0__GR641_1,
  Convert__GR1281_0__Tie0__GR321_1,
  Convert__GR321_0__AccessReg1_1,
  Convert__GR321_0,
  Convert__GR641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__U4Imm1_1__FP641_2,
  Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__U4Imm1_1__FP321_2,
  Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__FP1281_0__U4Imm1_1__FP1281_2,
  Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR1281_0__GR641_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp123_1,
  Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GRH321_0__Tie0__U16Imm1_1,
  Convert__GR321_0__Tie0__U16Imm1_1,
  Convert__PCRel161_0,
  Convert__PCRel321_0,
  Convert__GR321_0__GR321_1__BDAddr64Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__FP641_0__FP321_1,
  Convert__FP641_0__BDXAddr64Disp203_1,
  Convert__FP321_0__FP641_1,
  Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__BDXAddr64Disp203_1,
  Convert__GR641_0__FP641_1,
  Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__Tie0__GR641_1__U4Imm1_2,
  Convert__GR321_0__Tie0__S16Imm1_1__U4Imm1_2,
  Convert__GR321_0__Tie0__GR321_1__U4Imm1_2,
  Convert__FP1281_0__BDXAddr64Disp123_1,
  Convert__FP1281_0__FP641_1,
  Convert__FP1281_0__FP321_1,
  Convert__FP641_0,
  Convert__FP321_0,
  Convert__FP1281_0,
  Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__Tie0__FP641_1__FP641_2,
  Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2,
  Convert__FP321_0__Tie0__FP321_1__FP321_2,
  Convert__FP641_0__Tie0__FP321_1,
  Convert__FP1281_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP1281_0__Tie0__FP641_1,
  Convert__GRH321_0__Tie0__U32Imm1_1,
  Convert__imm_95_0__BDXAddr64Disp123_0,
  Convert__imm_95_0__GR641_0,
  Convert__U4Imm1_0__BDXAddr64Disp203_1,
  Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__GR321_1__BDAddr32Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr32Disp202_2,
  Convert__GR321_0__Tie0__BDAddr32Disp122_1,
  Convert__BDAddr64Disp122_0,
  Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__BDAddr64Disp202_1,
  Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__BDAddr64Disp202_1,
  Convert__U8Imm1_0,
  Convert_NoOperands,
  Convert__GRH321_0__U16Imm1_1,
  Convert__VR1281_0__VR1281_1__VR1281_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1,
  Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3,
  Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__U12Imm1_2,
  Convert__VR1281_0__U16Imm1_1,
  Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__U8Imm1_1__U8Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1,
  Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U3Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U4Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U2Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U1Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U3Imm1_2,
  Convert__GR641_0__VR1281_1__BDAddr32Disp122_2,
  Convert__VR1281_0__GR321_1__BDAddr64Disp122_2,
  Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2,
  Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2,
  Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2,
  Convert__VR1281_0__GR641_1__GR641_2,
  Convert__VR1281_0,
  Convert__VR1281_0__VR1281_1__U4Imm1_2,
  Convert__VR1281_0__VR1281_1__U16Imm1_2,
  Convert__VR1281_0__S16Imm1_1,
  Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3,
  Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4,
  Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3,
  Convert__VR641_0__VR641_1__VR641_2,
  Convert__VR641_0__VR641_1,
  Convert__VR641_0__VR641_1__VR641_2__VR641_3,
  Convert__VR641_0__VR641_1__U12Imm1_2,
  Convert__VR641_0__VR321_1,
  Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__GR321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__S8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__ADDR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp123_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__GR641_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__ADDR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_0__PCRelTLS162_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRelTLS322_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel321_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__S16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GRH321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__BDAddr64Disp122_0__U16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__BDAddr64Disp122_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__Tie0__Tie1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Done },
  // Convert__FP641_0__FP641_2__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__AccessReg1_1
  { CVT_95_addRegOperands, 1, CVT_95_addAccessRegOperands, 2, CVT_Done },
  // Convert__GR321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__PCRel161_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__PCRel321_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP641_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_0__BDXAddr64Disp123_0
  { CVT_imm_95_0, 0, CVT_95_addBDXAddrOperands, 1, CVT_Done },
  // Convert__imm_95_0__GR641_0
  { CVT_imm_95_0, 0, CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp203_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0
  { CVT_95_addBDAddrOperands, 1, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__U8Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__GRH321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__U8Imm1_1__U8Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__VR1281_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR641_0__VR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2__VR641_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR641_0__VR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
};

void SystemZAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  unsigned OpIdx;
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    OpIdx = *(p + 1);
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(OpIdx));
      break;
    case CVT_95_addRegOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addBDXAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDXAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addBDAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDAddrOperands(Inst, 2);
      break;
    case CVT_95_addImmTLSOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addImmTLSOperands(Inst, 2);
      break;
    case CVT_95_addBDLAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDLAddrOperands(Inst, 3);
      break;
    case CVT_95_addAccessRegOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addAccessRegOperands(Inst, 1);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addBDVAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDVAddrOperands(Inst, 3);
      break;
    }
  }
}

void SystemZAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDXAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addImmTLSOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addBDLAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addAccessRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addBDVAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  OptionalMatchClass = 1,
  MCK_CCRegs, // register class 'CCRegs'
  MCK_ADDR128Bit, // register class 'ADDR128Bit'
  MCK_FP128Bit, // register class 'FP128Bit'
  MCK_GR128Bit, // register class 'GR128Bit'
  MCK_ADDR32Bit, // register class 'ADDR32Bit'
  MCK_ADDR64Bit, // register class 'ADDR64Bit'
  MCK_FP32Bit, // register class 'FP32Bit'
  MCK_FP64Bit, // register class 'FP64Bit'
  MCK_GR32Bit, // register class 'GR32Bit'
  MCK_GR64Bit, // register class 'GR64Bit'
  MCK_GRH32Bit, // register class 'GRH32Bit'
  MCK_VF128Bit, // register class 'VF128Bit'
  MCK_GRX32Bit, // register class 'GRX32Bit'
  MCK_VR128Bit, // register class 'VR128Bit'
  MCK_VR32Bit, // register class 'VR32Bit'
  MCK_VR64Bit, // register class 'VR64Bit'
  MCK_ADDR128, // user defined class 'ADDR128AsmOperand'
  MCK_ADDR32, // user defined class 'ADDR32AsmOperand'
  MCK_ADDR64, // user defined class 'ADDR64AsmOperand'
  MCK_AccessReg, // user defined class 'AccessReg'
  MCK_BDAddr32Disp12, // user defined class 'BDAddr32Disp12'
  MCK_BDAddr32Disp20, // user defined class 'BDAddr32Disp20'
  MCK_BDAddr64Disp12, // user defined class 'BDAddr64Disp12'
  MCK_BDAddr64Disp20, // user defined class 'BDAddr64Disp20'
  MCK_BDLAddr64Disp12Len8, // user defined class 'BDLAddr64Disp12Len8'
  MCK_BDVAddr64Disp12, // user defined class 'BDVAddr64Disp12'
  MCK_BDXAddr64Disp12, // user defined class 'BDXAddr64Disp12'
  MCK_BDXAddr64Disp20, // user defined class 'BDXAddr64Disp20'
  MCK_FP128, // user defined class 'FP128AsmOperand'
  MCK_FP32, // user defined class 'FP32AsmOperand'
  MCK_FP64, // user defined class 'FP64AsmOperand'
  MCK_GR128, // user defined class 'GR128AsmOperand'
  MCK_GR32, // user defined class 'GR32AsmOperand'
  MCK_GR64, // user defined class 'GR64AsmOperand'
  MCK_GRH32, // user defined class 'GRH32AsmOperand'
  MCK_GRX32, // user defined class 'GRX32AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_PCRel16, // user defined class 'PCRel16'
  MCK_PCRel32, // user defined class 'PCRel32'
  MCK_PCRelTLS16, // user defined class 'PCRelTLS16'
  MCK_PCRelTLS32, // user defined class 'PCRelTLS32'
  MCK_S16Imm, // user defined class 'S16Imm'
  MCK_S32Imm, // user defined class 'S32Imm'
  MCK_S8Imm, // user defined class 'S8Imm'
  MCK_U12Imm, // user defined class 'U12Imm'
  MCK_U16Imm, // user defined class 'U16Imm'
  MCK_U1Imm, // user defined class 'U1Imm'
  MCK_U2Imm, // user defined class 'U2Imm'
  MCK_U32Imm, // user defined class 'U32Imm'
  MCK_U3Imm, // user defined class 'U3Imm'
  MCK_U4Imm, // user defined class 'U4Imm'
  MCK_U6Imm, // user defined class 'U6Imm'
  MCK_U8Imm, // user defined class 'U8Imm'
  MCK_VF128, // user defined class 'VF128AsmOperand'
  MCK_VR128, // user defined class 'VR128AsmOperand'
  MCK_VR32, // user defined class 'VR32AsmOperand'
  MCK_VR64, // user defined class 'VR64AsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ADDR128Bit:
    return B == MCK_GR128Bit;

  case MCK_ADDR32Bit:
    switch (B) {
    default: return false;
    case MCK_GR32Bit: return true;
    case MCK_GRX32Bit: return true;
    }

  case MCK_ADDR64Bit:
    return B == MCK_GR64Bit;

  case MCK_FP32Bit:
    return B == MCK_VR32Bit;

  case MCK_FP64Bit:
    return B == MCK_VR64Bit;

  case MCK_GR32Bit:
    return B == MCK_GRX32Bit;

  case MCK_GRH32Bit:
    return B == MCK_GRX32Bit;

  case MCK_VF128Bit:
    return B == MCK_VR128Bit;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  SystemZOperand &Operand = (SystemZOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'ADDR128' class
  case MCK_ADDR128:
    if (Operand.isADDR128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'ADDR32' class
  case MCK_ADDR32:
    if (Operand.isADDR32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'ADDR64' class
  case MCK_ADDR64:
    if (Operand.isADDR64())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'AccessReg' class
  case MCK_AccessReg:
    if (Operand.isAccessReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDAddr32Disp12' class
  case MCK_BDAddr32Disp12:
    if (Operand.isBDAddr32Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDAddr32Disp20' class
  case MCK_BDAddr32Disp20:
    if (Operand.isBDAddr32Disp20())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDAddr64Disp12' class
  case MCK_BDAddr64Disp12:
    if (Operand.isBDAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDAddr64Disp20' class
  case MCK_BDAddr64Disp20:
    if (Operand.isBDAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDLAddr64Disp12Len8' class
  case MCK_BDLAddr64Disp12Len8:
    if (Operand.isBDLAddr64Disp12Len8())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDVAddr64Disp12' class
  case MCK_BDVAddr64Disp12:
    if (Operand.isBDVAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDXAddr64Disp12' class
  case MCK_BDXAddr64Disp12:
    if (Operand.isBDXAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDXAddr64Disp20' class
  case MCK_BDXAddr64Disp20:
    if (Operand.isBDXAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'FP128' class
  case MCK_FP128:
    if (Operand.isFP128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'FP32' class
  case MCK_FP32:
    if (Operand.isFP32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'FP64' class
  case MCK_FP64:
    if (Operand.isFP64())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GR128' class
  case MCK_GR128:
    if (Operand.isGR128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GR32' class
  case MCK_GR32:
    if (Operand.isGR32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GR64' class
  case MCK_GR64:
    if (Operand.isGR64())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GRH32' class
  case MCK_GRH32:
    if (Operand.isGRH32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GRX32' class
  case MCK_GRX32:
    if (Operand.isGRX32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'Imm' class
  case MCK_Imm:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRel16' class
  case MCK_PCRel16:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRel32' class
  case MCK_PCRel32:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRelTLS16' class
  case MCK_PCRelTLS16:
    if (Operand.isImmTLS())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRelTLS32' class
  case MCK_PCRelTLS32:
    if (Operand.isImmTLS())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'S16Imm' class
  case MCK_S16Imm:
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'S32Imm' class
  case MCK_S32Imm:
    if (Operand.isS32Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'S8Imm' class
  case MCK_S8Imm:
    if (Operand.isS8Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U12Imm' class
  case MCK_U12Imm:
    if (Operand.isU12Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U16Imm' class
  case MCK_U16Imm:
    if (Operand.isU16Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U1Imm' class
  case MCK_U1Imm:
    if (Operand.isU1Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U2Imm' class
  case MCK_U2Imm:
    if (Operand.isU2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U32Imm' class
  case MCK_U32Imm:
    if (Operand.isU32Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U3Imm' class
  case MCK_U3Imm:
    if (Operand.isU3Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U4Imm' class
  case MCK_U4Imm:
    if (Operand.isU4Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U6Imm' class
  case MCK_U6Imm:
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U8Imm' class
  case MCK_U8Imm:
    if (Operand.isU8Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'VF128' class
  case MCK_VF128:
    if (Operand.isVF128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'VR128' class
  case MCK_VR128:
    if (Operand.isVR128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'VR32' class
  case MCK_VR32:
    if (Operand.isVR32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'VR64' class
  case MCK_VR64:
    if (Operand.isVR64())
      return MCTargetAsmParser::Match_Success;
    break;
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case SystemZ::R0L: OpKind = MCK_GR32Bit; break;
    case SystemZ::R1L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R2L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R3L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R4L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R5L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R6L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R7L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R8L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R9L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R10L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R11L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R12L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R13L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R14L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R15L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R0H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R1H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R2H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R3H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R4H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R5H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R6H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R7H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R8H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R9H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R10H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R11H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R12H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R13H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R14H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R15H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R0D: OpKind = MCK_GR64Bit; break;
    case SystemZ::R1D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R2D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R3D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R4D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R5D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R6D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R7D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R8D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R9D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R10D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R11D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R12D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R13D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R14D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R15D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R0Q: OpKind = MCK_GR128Bit; break;
    case SystemZ::R2Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R4Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R6Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R8Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R10Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R12Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R14Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::F0S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F1S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F2S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F3S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F4S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F5S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F6S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F7S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F8S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F9S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F10S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F11S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F12S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F13S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F14S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F15S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F0D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F1D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F2D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F3D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F4D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F5D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F6D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F7D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F8D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F9D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F10D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F11D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F12D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F13D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F14D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F15D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F16S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F17S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F18S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F19S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F20S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F21S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F22S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F23S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F24S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F25S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F26S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F27S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F28S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F29S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F30S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F31S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F16D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F17D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F18D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F19D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F20D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F21D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F22D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F23D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F24D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F25D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F26D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F27D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F28D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F29D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F30D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F31D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F0Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F1Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F4Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F5Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F8Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F9Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F12Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F13Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::V0: OpKind = MCK_VF128Bit; break;
    case SystemZ::V1: OpKind = MCK_VF128Bit; break;
    case SystemZ::V2: OpKind = MCK_VF128Bit; break;
    case SystemZ::V3: OpKind = MCK_VF128Bit; break;
    case SystemZ::V4: OpKind = MCK_VF128Bit; break;
    case SystemZ::V5: OpKind = MCK_VF128Bit; break;
    case SystemZ::V6: OpKind = MCK_VF128Bit; break;
    case SystemZ::V7: OpKind = MCK_VF128Bit; break;
    case SystemZ::V8: OpKind = MCK_VF128Bit; break;
    case SystemZ::V9: OpKind = MCK_VF128Bit; break;
    case SystemZ::V10: OpKind = MCK_VF128Bit; break;
    case SystemZ::V11: OpKind = MCK_VF128Bit; break;
    case SystemZ::V12: OpKind = MCK_VF128Bit; break;
    case SystemZ::V13: OpKind = MCK_VF128Bit; break;
    case SystemZ::V14: OpKind = MCK_VF128Bit; break;
    case SystemZ::V15: OpKind = MCK_VF128Bit; break;
    case SystemZ::V16: OpKind = MCK_VR128Bit; break;
    case SystemZ::V17: OpKind = MCK_VR128Bit; break;
    case SystemZ::V18: OpKind = MCK_VR128Bit; break;
    case SystemZ::V19: OpKind = MCK_VR128Bit; break;
    case SystemZ::V20: OpKind = MCK_VR128Bit; break;
    case SystemZ::V21: OpKind = MCK_VR128Bit; break;
    case SystemZ::V22: OpKind = MCK_VR128Bit; break;
    case SystemZ::V23: OpKind = MCK_VR128Bit; break;
    case SystemZ::V24: OpKind = MCK_VR128Bit; break;
    case SystemZ::V25: OpKind = MCK_VR128Bit; break;
    case SystemZ::V26: OpKind = MCK_VR128Bit; break;
    case SystemZ::V27: OpKind = MCK_VR128Bit; break;
    case SystemZ::V28: OpKind = MCK_VR128Bit; break;
    case SystemZ::V29: OpKind = MCK_VR128Bit; break;
    case SystemZ::V30: OpKind = MCK_VR128Bit; break;
    case SystemZ::V31: OpKind = MCK_VR128Bit; break;
    case SystemZ::CC: OpKind = MCK_CCRegs; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t SystemZAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  if ((FB[SystemZ::FeatureDistinctOps]))
    Features |= Feature_FeatureDistinctOps;
  if ((FB[SystemZ::FeatureLoadStoreOnCond]))
    Features |= Feature_FeatureLoadStoreOnCond;
  if ((FB[SystemZ::FeatureLoadStoreOnCond2]))
    Features |= Feature_FeatureLoadStoreOnCond2;
  if ((FB[SystemZ::FeatureHighWord]))
    Features |= Feature_FeatureHighWord;
  if ((FB[SystemZ::FeatureFPExtension]))
    Features |= Feature_FeatureFPExtension;
  if ((FB[SystemZ::FeaturePopulationCount]))
    Features |= Feature_FeaturePopulationCount;
  if ((FB[SystemZ::FeatureFastSerialization]))
    Features |= Feature_FeatureFastSerialization;
  if ((FB[SystemZ::FeatureInterlockedAccess1]))
    Features |= Feature_FeatureInterlockedAccess1;
  if ((FB[SystemZ::FeatureMiscellaneousExtensions]))
    Features |= Feature_FeatureMiscellaneousExtensions;
  if ((FB[SystemZ::FeatureTransactionalExecution]))
    Features |= Feature_FeatureTransactionalExecution;
  if ((FB[SystemZ::FeatureProcessorAssist]))
    Features |= Feature_FeatureProcessorAssist;
  if ((FB[SystemZ::FeatureVector]))
    Features |= Feature_FeatureVector;
  return Features;
}

static const char *const MnemonicTable =
    "\001a\003adb\004adbr\003aeb\004aebr\003afi\002ag\003agf\004agfi\004agfr"
    "\004aghi\005aghik\003agr\004agrk\004agsi\002ah\003ahi\004ahik\003ahy\003"
    "aih\002al\003alc\004alcg\005alcgr\004alcr\004alfi\003alg\004algf\005alg"
    "fi\005algfr\007alghsik\004algr\005algrk\006alhsik\003alr\004alrk\003aly"
    "\002ar\003ark\003asi\004axbr\002ay\004basr\002bc\003bcr\003ber\004bher\003"
    "bhr\004bler\004blhr\003blr\003bmr\004bner\005bnher\004bnhr\005bnler\005"
    "bnlhr\004bnlr\004bnmr\004bnor\004bnpr\004bnzr\003bor\003bpr\002br\004br"
    "as\005brasl\003brc\004brcl\004brct\005brctg\003bzr\001c\003cdb\004cdbr\005"
    "cdfbr\005cdgbr\006cdlfbr\006cdlgbr\003ceb\004cebr\005cefbr\005cegbr\006"
    "celfbr\006celgbr\005cfdbr\005cfebr\003cfi\005cfxbr\002cg\005cgdbr\005cg"
    "ebr\003cgf\004cgfi\004cgfr\005cgfrl\003cgh\004cghi\005cghrl\005cghsi\004"
    "cgib\005cgibe\005cgibh\006cgibhe\005cgibl\006cgible\006cgiblh\006cgibne"
    "\006cgibnh\007cgibnhe\006cgibnl\007cgibnle\007cgibnlh\004cgij\005cgije\005"
    "cgijh\006cgijhe\005cgijl\006cgijle\006cgijlh\006cgijne\006cgijnh\007cgi"
    "jnhe\006cgijnl\007cgijnle\007cgijnlh\004cgit\005cgite\005cgith\006cgith"
    "e\005cgitl\006cgitle\006cgitlh\006cgitne\006cgitnh\007cgitnhe\006cgitnl"
    "\007cgitnle\007cgitnlh\003cgr\004cgrb\005cgrbe\005cgrbh\006cgrbhe\005cg"
    "rbl\006cgrble\006cgrblh\006cgrbne\006cgrbnh\007cgrbnhe\006cgrbnl\007cgr"
    "bnle\007cgrbnlh\004cgrj\005cgrje\005cgrjh\006cgrjhe\005cgrjl\006cgrjle\006"
    "cgrjlh\006cgrjne\006cgrjnh\007cgrjnhe\006cgrjnl\007cgrjnle\007cgrjnlh\004"
    "cgrl\004cgrt\005cgrte\005cgrth\006cgrthe\005cgrtl\006cgrtle\006cgrtlh\006"
    "cgrtne\006cgrtnh\007cgrtnhe\006cgrtnl\007cgrtnle\007cgrtnlh\005cgxbr\002"
    "ch\003chf\005chhsi\003chi\004chrl\004chsi\003chy\003cib\004cibe\004cibh"
    "\005cibhe\004cibl\005cible\005ciblh\005cibne\005cibnh\006cibnhe\005cibn"
    "l\006cibnle\006cibnlh\003cih\003cij\004cije\004cijh\005cijhe\004cijl\005"
    "cijle\005cijlh\005cijne\005cijnh\006cijnhe\005cijnl\006cijnle\006cijnlh"
    "\003cit\004cite\004cith\005cithe\004citl\005citle\005citlh\005citne\005"
    "citnh\006citnhe\005citnl\006citnle\006citnlh\002cl\003clc\006clfdbr\006"
    "clfebr\006clfhsi\004clfi\005clfit\006clfite\006clfith\007clfithe\006clf"
    "itl\007clfitle\007clfitlh\007clfitne\007clfitnh\010clfitnhe\007clfitnl\010"
    "clfitnle\010clfitnlh\006clfxbr\003clg\006clgdbr\006clgebr\004clgf\005cl"
    "gfi\005clgfr\006clgfrl\006clghrl\006clghsi\005clgib\006clgibe\006clgibh"
    "\007clgibhe\006clgibl\007clgible\007clgiblh\007clgibne\007clgibnh\010cl"
    "gibnhe\007clgibnl\010clgibnle\010clgibnlh\005clgij\006clgije\006clgijh\007"
    "clgijhe\006clgijl\007clgijle\007clgijlh\007clgijne\007clgijnh\010clgijn"
    "he\007clgijnl\010clgijnle\010clgijnlh\005clgit\006clgite\006clgith\007c"
    "lgithe\006clgitl\007clgitle\007clgitlh\007clgitne\007clgitnh\010clgitnh"
    "e\007clgitnl\010clgitnle\010clgitnlh\004clgr\005clgrb\006clgrbe\006clgr"
    "bh\007clgrbhe\006clgrbl\007clgrble\007clgrblh\007clgrbne\007clgrbnh\010"
    "clgrbnhe\007clgrbnl\010clgrbnle\010clgrbnlh\005clgrj\006clgrje\006clgrj"
    "h\007clgrjhe\006clgrjl\007clgrjle\007clgrjlh\007clgrjne\007clgrjnh\010c"
    "lgrjnhe\007clgrjnl\010clgrjnle\010clgrjnlh\005clgrl\005clgrt\006clgrte\006"
    "clgrth\007clgrthe\006clgrtl\007clgrtle\007clgrtlh\007clgrtne\007clgrtnh"
    "\010clgrtnhe\007clgrtnl\010clgrtnle\010clgrtnlh\006clgxbr\004clhf\006cl"
    "hhsi\005clhrl\003cli\004clib\005clibe\005clibh\006clibhe\005clibl\006cl"
    "ible\006cliblh\006clibne\006clibnh\007clibnhe\006clibnl\007clibnle\007c"
    "libnlh\004clih\004clij\005clije\005clijh\006clijhe\005clijl\006clijle\006"
    "clijlh\006clijne\006clijnh\007clijnhe\006clijnl\007clijnle\007clijnlh\004"
    "cliy\003clr\004clrb\005clrbe\005clrbh\006clrbhe\005clrbl\006clrble\006c"
    "lrblh\006clrbne\006clrbnh\007clrbnhe\006clrbnl\007clrbnle\007clrbnlh\004"
    "clrj\005clrje\005clrjh\006clrjhe\005clrjl\006clrjle\006clrjlh\006clrjne"
    "\006clrjnh\007clrjnhe\006clrjnl\007clrjnle\007clrjnlh\004clrl\004clrt\005"
    "clrte\005clrth\006clrthe\005clrtl\006clrtle\006clrtlh\006clrtne\006clrt"
    "nh\007clrtnhe\006clrtnl\007clrtnle\007clrtnlh\004clst\003cly\005cpsdr\002"
    "cr\003crb\004crbe\004crbh\005crbhe\004crbl\005crble\005crblh\005crbne\005"
    "crbnh\006crbnhe\005crbnl\006crbnle\006crbnlh\003crj\004crje\004crjh\005"
    "crjhe\004crjl\005crjle\005crjlh\005crjne\005crjnh\006crjnhe\005crjnl\006"
    "crjnle\006crjnlh\003crl\003crt\004crte\004crth\005crthe\004crtl\005crtl"
    "e\005crtlh\005crtne\005crtnh\006crtnhe\005crtnl\006crtnle\006crtnlh\002"
    "cs\003csg\003csy\004cxbr\005cxfbr\005cxgbr\006cxlfbr\006cxlgbr\002cy\003"
    "ddb\004ddbr\003deb\004debr\002dl\003dlg\004dlgr\003dlr\003dsg\004dsgf\005"
    "dsgfr\004dsgr\004dxbr\003ear\004etnd\002ex\004exrl\005fidbr\006fidbra\005"
    "fiebr\006fiebra\005fixbr\006fixbra\005flogr\002ic\003icm\004icmh\004icm"
    "y\003icy\004iihf\004iihh\004iihl\004iilf\004iilh\004iill\003ipm\001j\002"
    "je\002jg\003jge\003jgh\004jghe\003jgl\004jgle\004jglh\003jgm\004jgne\004"
    "jgnh\005jgnhe\004jgnl\005jgnle\005jgnlh\004jgnm\004jgno\004jgnp\004jgnz"
    "\003jgo\003jgp\003jgz\002jh\003jhe\002jl\003jle\003jlh\002jm\003jne\003"
    "jnh\004jnhe\003jnl\004jnle\004jnlh\003jnm\003jno\003jnp\003jnz\002jo\002"
    "jp\002jz\001l\002la\003laa\004laag\004laal\005laalg\003lan\004lang\003l"
    "ao\004laog\004larl\003lax\004laxg\003lay\002lb\003lbh\003lbr\004lcbb\005"
    "lcdbr\005lcdfr\005lcebr\005lcgfr\004lcgr\003lcr\005lcxbr\002ld\003lde\004"
    "ldeb\005ldebr\004ldgr\003ldr\005ldxbr\006ldxbra\003ldy\002le\005ledbr\006"
    "ledbra\003ler\005lexbr\006lexbra\003ley\003lfh\002lg\003lgb\004lgbr\004"
    "lgdr\003lgf\004lgfi\004lgfr\005lgfrl\003lgh\004lghi\004lghr\005lghrl\003"
    "lgr\004lgrl\002lh\003lhh\003lhi\003lhr\004lhrl\003lhy\003llc\004llch\004"
    "llcr\004llgc\005llgcr\004llgf\005llgfr\006llgfrl\004llgh\005llghr\006ll"
    "ghrl\003llh\004llhh\004llhr\005llhrl\005llihf\005llihh\005llihl\005llil"
    "f\005llilh\005llill\002lm\003lmg\003lmh\003lmy\005lndbr\005lndfr\005lne"
    "br\005lngfr\004lngr\003lnr\005lnxbr\003loc\004loce\004locg\005locge\005"
    "locgh\006locghe\006locghi\007locghie\007locghih\010locghihe\007locghil\010"
    "locghile\010locghilh\007locghim\010locghine\010locghinh\tlocghinhe\010l"
    "ocghinl\tlocghinle\tlocghinlh\010locghinm\010locghino\010locghinp\010lo"
    "cghinz\007locghio\007locghip\007locghiz\005locgl\006locgle\006locglh\005"
    "locgm\006locgne\006locgnh\007locgnhe\006locgnl\007locgnle\007locgnlh\006"
    "locgnm\006locgno\006locgnp\006locgnz\005locgo\005locgp\005locgr\006locg"
    "re\006locgrh\007locgrhe\006locgrl\007locgrle\007locgrlh\006locgrm\007lo"
    "cgrne\007locgrnh\010locgrnhe\007locgrnl\010locgrnle\010locgrnlh\007locg"
    "rnm\007locgrno\007locgrnp\007locgrnz\006locgro\006locgrp\006locgrz\005l"
    "ocgz\004loch\005loche\005lochi\006lochie\006lochih\007lochihe\006lochil"
    "\007lochile\007lochilh\006lochim\007lochine\007lochinh\010lochinhe\007l"
    "ochinl\010lochinle\010lochinlh\007lochinm\007lochino\007lochinp\007loch"
    "inz\006lochio\006lochip\006lochiz\004locl\005locle\005loclh\004locm\005"
    "locne\005locnh\006locnhe\005locnl\006locnle\006locnlh\005locnm\005locno"
    "\005locnp\005locnz\004loco\004locp\004locr\005locre\005locrh\006locrhe\005"
    "locrl\006locrle\006locrlh\005locrm\006locrne\006locrnh\007locrnhe\006lo"
    "crnl\007locrnle\007locrnlh\006locrnm\006locrno\006locrnp\006locrnz\005l"
    "ocro\005locrp\005locrz\004locz\005lpdbr\005lpdfr\005lpebr\005lpgfr\004l"
    "pgr\003lpr\005lpxbr\002lr\003lrl\003lrv\004lrvg\005lrvgr\004lrvh\004lrv"
    "r\002lt\005ltdbr\005ltebr\003ltg\004ltgf\005ltgfr\004ltgr\003ltr\005ltx"
    "br\004lxdb\005lxdbr\004lxeb\005lxebr\003lxr\002ly\004lzdr\004lzer\004lz"
    "xr\004madb\005madbr\004maeb\005maebr\003mdb\004mdbr\004mdeb\005mdebr\004"
    "meeb\005meebr\004mghi\002mh\003mhi\003mhy\003mlg\004mlgr\002ms\004msdb\005"
    "msdbr\004mseb\005msebr\004msfi\003msg\004msgf\005msgfi\005msgfr\004msgr"
    "\003msr\003msy\003mvc\005mvghi\005mvhhi\004mvhi\003mvi\004mviy\004mvst\004"
    "mxbr\004mxdb\005mxdbr\001n\002nc\002ng\003ngr\004ngrk\002ni\004nihf\004"
    "nihh\004nihl\004nilf\004nilh\004nill\003niy\003nop\004nopr\002nr\003nrk"
    "\005ntstg\002ny\001o\002oc\002og\003ogr\004ogrk\002oi\004oihf\004oihh\004"
    "oihl\004oilf\004oilh\004oill\003oiy\002or\003ork\002oy\003pfd\005pfdrl\006"
    "popcnt\003ppa\005risbg\006risbgn\006risbhg\006risblg\003rll\004rllg\005"
    "rnsbg\005rosbg\005rxsbg\001s\003sdb\004sdbr\003seb\004sebr\002sg\003sgf"
    "\004sgfr\003sgr\004sgrk\002sh\003shy\002sl\003sla\004slak\003slb\004slb"
    "g\005slbgr\004slbr\004slfi\003slg\004slgf\005slgfi\005slgfr\004slgr\005"
    "slgrk\003sll\004sllg\004sllk\003slr\004slrk\003sly\004sqdb\005sqdbr\004"
    "sqeb\005sqebr\005sqxbr\002sr\003sra\004srag\004srak\003srk\003srl\004sr"
    "lg\004srlk\004srst\002st\003stc\004stch\004stck\005stcke\005stckf\004st"
    "cy\003std\004stdy\003ste\004stey\004stfh\005stfle\003stg\005stgrl\003st"
    "h\004sthh\005sthrl\004sthy\003stm\004stmg\004stmh\004stmy\004stoc\005st"
    "oce\005stocg\006stocge\006stocgh\007stocghe\006stocgl\007stocgle\007sto"
    "cglh\006stocgm\007stocgne\007stocgnh\010stocgnhe\007stocgnl\010stocgnle"
    "\010stocgnlh\007stocgnm\007stocgno\007stocgnp\007stocgnz\006stocgo\006s"
    "tocgp\006stocgz\005stoch\006stoche\005stocl\006stocle\006stoclh\005stoc"
    "m\006stocne\006stocnh\007stocnhe\006stocnl\007stocnle\007stocnlh\006sto"
    "cnm\006stocno\006stocnp\006stocnz\005stoco\005stocp\005stocz\004strl\004"
    "strv\005strvg\005strvh\003sty\003svc\004sxbr\002sy\006tabort\006tbegin\007"
    "tbeginc\004tcdb\004tceb\004tcxb\004tend\002tm\003tmh\004tmhh\004tmhl\003"
    "tml\004tmlh\004tmll\003tmy\003vab\005vaccb\006vacccq\005vaccf\005vaccg\005"
    "vacch\005vaccq\004vacq\003vaf\003vag\003vah\003vaq\005vavgb\005vavgf\005"
    "vavgg\005vavgh\006vavglb\006vavglf\006vavglg\006vavglh\005vcdgb\006vcdl"
    "gb\005vceqb\006vceqbs\005vceqf\006vceqfs\005vceqg\006vceqgs\005vceqh\006"
    "vceqhs\005vcgdb\004vchb\005vchbs\004vchf\005vchfs\004vchg\005vchgs\004v"
    "chh\005vchhs\005vchlb\006vchlbs\005vchlf\006vchlfs\005vchlg\006vchlgs\005"
    "vchlh\006vchlhs\005vcksm\006vclgdb\005vclzb\005vclzf\005vclzg\005vclzh\005"
    "vctzb\005vctzf\005vctzg\005vctzh\004vecb\004vecf\004vecg\004vech\005vec"
    "lb\005veclf\005veclg\005veclh\006verimb\006verimf\006verimg\006verimh\006"
    "verllb\006verllf\006verllg\006verllh\007verllvb\007verllvf\007verllvg\007"
    "verllvh\005veslb\005veslf\005veslg\005veslh\006veslvb\006veslvf\006vesl"
    "vg\006veslvh\006vesrab\006vesraf\006vesrag\006vesrah\007vesravb\007vesr"
    "avf\007vesravg\007vesravh\006vesrlb\006vesrlf\006vesrlg\006vesrlh\007ve"
    "srlvb\007vesrlvf\007vesrlvg\007vesrlvh\005vfadb\005vfaeb\006vfaebs\005v"
    "faef\006vfaefs\005vfaeh\006vfaehs\006vfaezb\007vfaezbs\006vfaezf\007vfa"
    "ezfs\006vfaezh\007vfaezhs\006vfcedb\007vfcedbs\006vfchdb\007vfchdbs\007"
    "vfchedb\010vfchedbs\005vfddb\005vfeeb\006vfeebs\005vfeef\006vfeefs\005v"
    "feeh\006vfeehs\006vfeezb\007vfeezbs\006vfeezf\007vfeezfs\006vfeezh\007v"
    "feezhs\006vfeneb\007vfenebs\006vfenef\007vfenefs\006vfeneh\007vfenehs\007"
    "vfenezb\010vfenezbs\007vfenezf\010vfenezfs\007vfenezh\010vfenezhs\005vf"
    "idb\006vflcdb\006vflndb\006vflpdb\006vfmadb\005vfmdb\006vfmsdb\005vfsdb"
    "\006vfsqdb\007vftcidb\004vgbm\004vgef\004vgeg\006vgfmab\006vgfmaf\006vg"
    "fmag\006vgfmah\005vgfmb\005vgfmf\005vgfmg\005vgfmh\004vgmb\004vgmf\004v"
    "gmg\004vgmh\006vistrb\007vistrbs\006vistrf\007vistrfs\006vistrh\007vist"
    "rhs\002vl\004vlbb\004vlcb\004vlcf\004vlcg\004vlch\005vldeb\004vleb\005v"
    "ledb\004vlef\004vleg\004vleh\005vleib\005vleif\005vleig\005vleih\005vlg"
    "vb\005vlgvf\005vlgvg\005vlgvh\003vll\006vllezb\006vllezf\006vllezg\006v"
    "llezh\003vlm\004vlpb\004vlpf\004vlpg\004vlph\003vlr\006vlrepb\006vlrepf"
    "\006vlrepg\006vlreph\005vlvgb\005vlvgf\005vlvgg\005vlvgh\005vlvgp\005vm"
    "aeb\005vmaef\005vmaeh\005vmahb\005vmahf\005vmahh\005vmalb\006vmaleb\006"
    "vmalef\006vmaleh\005vmalf\006vmalhb\006vmalhf\006vmalhh\006vmalhw\006vm"
    "alob\006vmalof\006vmaloh\005vmaob\005vmaof\005vmaoh\004vmeb\004vmef\004"
    "vmeh\004vmhb\004vmhf\004vmhh\004vmlb\005vmleb\005vmlef\005vmleh\004vmlf"
    "\005vmlhb\005vmlhf\005vmlhh\005vmlhw\005vmlob\005vmlof\005vmloh\004vmnb"
    "\004vmnf\004vmng\004vmnh\005vmnlb\005vmnlf\005vmnlg\005vmnlh\004vmob\004"
    "vmof\004vmoh\005vmrhb\005vmrhf\005vmrhg\005vmrhh\005vmrlb\005vmrlf\005v"
    "mrlg\005vmrlh\004vmxb\004vmxf\004vmxg\004vmxh\005vmxlb\005vmxlf\005vmxl"
    "g\005vmxlh\002vn\003vnc\003vno\002vo\004vone\004vpdi\005vperm\004vpkf\004"
    "vpkg\004vpkh\006vpklsf\007vpklsfs\006vpklsg\007vpklsgs\006vpklsh\007vpk"
    "lshs\005vpksf\006vpksfs\005vpksg\006vpksgs\005vpksh\006vpkshs\006vpopct"
    "\005vrepb\005vrepf\005vrepg\005vreph\006vrepib\006vrepif\006vrepig\006v"
    "repih\003vsb\007vsbcbiq\005vsbiq\006vscbib\006vscbif\006vscbig\006vscbi"
    "h\006vscbiq\005vscef\005vsceg\005vsegb\005vsegf\005vsegh\004vsel\003vsf"
    "\003vsg\003vsh\003vsl\004vslb\005vsldb\003vsq\004vsra\005vsrab\004vsrl\005"
    "vsrlb\003vst\005vsteb\005vstef\005vsteg\005vsteh\004vstl\004vstm\006vst"
    "rcb\007vstrcbs\006vstrcf\007vstrcfs\006vstrch\007vstrchs\007vstrczb\010"
    "vstrczbs\007vstrczf\010vstrczfs\007vstrczh\010vstrczhs\005vsumb\006vsum"
    "gf\006vsumgh\005vsumh\006vsumqf\006vsumqg\003vtm\005vuphb\005vuphf\005v"
    "uphh\005vuplb\005vuplf\006vuplhb\006vuplhf\006vuplhh\006vuplhw\006vupll"
    "b\006vupllf\006vupllh\002vx\005vzero\005wcdgb\006wcdlgb\005wcgdb\006wcl"
    "gdb\005wfadb\005wfcdb\006wfcedb\007wfcedbs\006wfchdb\007wfchdbs\007wfch"
    "edb\010wfchedbs\005wfddb\005wfidb\005wfkdb\006wflcdb\006wflndb\006wflpd"
    "b\006wfmadb\005wfmdb\006wfmsdb\005wfsdb\006wfsqdb\007wftcidb\005wldeb\005"
    "wledb\001x\002xc\002xg\003xgr\004xgrk\002xi\004xihf\004xilf\003xiy\002x"
    "r\003xrk\002xy";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint16_t RequiredFeatures;
    uint8_t Classes[5];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable0[] = {
  { 0 /* a */, SystemZ::A, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2 /* adb */, SystemZ::ADB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6 /* adbr */, SystemZ::ADBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 11 /* aeb */, SystemZ::AEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 15 /* aebr */, SystemZ::AEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 20 /* afi */, SystemZ::AFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 24 /* ag */, SystemZ::AG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 27 /* agf */, SystemZ::AGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 31 /* agfi */, SystemZ::AGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 36 /* agfr */, SystemZ::AGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 41 /* aghi */, SystemZ::AGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 46 /* aghik */, SystemZ::AGHIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 52 /* agr */, SystemZ::AGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 56 /* agrk */, SystemZ::AGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 61 /* agsi */, SystemZ::AGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 66 /* ah */, SystemZ::AH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 69 /* ahi */, SystemZ::AHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 73 /* ahik */, SystemZ::AHIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 78 /* ahy */, SystemZ::AHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 82 /* aih */, SystemZ::AIH, Convert__GRH321_0__Tie0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 86 /* al */, SystemZ::AL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 89 /* alc */, SystemZ::ALC, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 93 /* alcg */, SystemZ::ALCG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 98 /* alcgr */, SystemZ::ALCGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 104 /* alcr */, SystemZ::ALCR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 109 /* alfi */, SystemZ::ALFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 114 /* alg */, SystemZ::ALG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 118 /* algf */, SystemZ::ALGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 123 /* algfi */, SystemZ::ALGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 129 /* algfr */, SystemZ::ALGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 135 /* alghsik */, SystemZ::ALGHSIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 143 /* algr */, SystemZ::ALGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 148 /* algrk */, SystemZ::ALGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 154 /* alhsik */, SystemZ::ALHSIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 161 /* alr */, SystemZ::ALR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 165 /* alrk */, SystemZ::ALRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 170 /* aly */, SystemZ::ALY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 174 /* ar */, SystemZ::AR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 177 /* ark */, SystemZ::ARK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 181 /* asi */, SystemZ::ASI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 185 /* axbr */, SystemZ::AXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 190 /* ay */, SystemZ::AY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 193 /* basr */, SystemZ::BASR, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 198 /* bc */, SystemZ::AsmBC, Convert__U4Imm1_0__BDXAddr64Disp123_1, 0, { MCK_U4Imm, MCK_BDXAddr64Disp12 }, },
  { 201 /* bcr */, SystemZ::AsmBCR, Convert__U4Imm1_0__GR641_1, 0, { MCK_U4Imm, MCK_GR64 }, },
  { 205 /* ber */, SystemZ::AsmEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 209 /* bher */, SystemZ::AsmHEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 214 /* bhr */, SystemZ::AsmHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 218 /* bler */, SystemZ::AsmLEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 223 /* blhr */, SystemZ::AsmLHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 228 /* blr */, SystemZ::AsmLBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 232 /* bmr */, SystemZ::AsmLAltBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 236 /* bner */, SystemZ::AsmNEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 241 /* bnher */, SystemZ::AsmNHEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 247 /* bnhr */, SystemZ::AsmNHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 252 /* bnler */, SystemZ::AsmNLEBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 258 /* bnlhr */, SystemZ::AsmNLHBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 264 /* bnlr */, SystemZ::AsmNLBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 269 /* bnmr */, SystemZ::AsmNLAltBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 274 /* bnor */, SystemZ::AsmNOBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 279 /* bnpr */, SystemZ::AsmNHAltBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 284 /* bnzr */, SystemZ::AsmNEAltBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 289 /* bor */, SystemZ::AsmOBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 293 /* bpr */, SystemZ::AsmHAltBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 297 /* br */, SystemZ::BR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 300 /* bras */, SystemZ::BRAS, Convert__GR641_0__PCRelTLS162_1, 0, { MCK_GR64, MCK_PCRelTLS16 }, },
  { 305 /* brasl */, SystemZ::BRASL, Convert__GR641_0__PCRelTLS322_1, 0, { MCK_GR64, MCK_PCRelTLS32 }, },
  { 311 /* brc */, SystemZ::AsmBRC, Convert__U4Imm1_0__PCRel161_1, 0, { MCK_U4Imm, MCK_PCRel16 }, },
  { 315 /* brcl */, SystemZ::AsmBRCL, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 320 /* brct */, SystemZ::BRCT, Convert__GR321_0__Tie0__PCRel161_1, 0, { MCK_GR32, MCK_PCRel16 }, },
  { 325 /* brctg */, SystemZ::BRCTG, Convert__GR641_0__Tie0__PCRel161_1, 0, { MCK_GR64, MCK_PCRel16 }, },
  { 331 /* bzr */, SystemZ::AsmEAltBR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 335 /* c */, SystemZ::C, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 337 /* cdb */, SystemZ::CDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 341 /* cdbr */, SystemZ::CDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 346 /* cdfbr */, SystemZ::CDFBR, Convert__FP641_0__GR321_1, 0, { MCK_FP64, MCK_GR32 }, },
  { 352 /* cdgbr */, SystemZ::CDGBR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 358 /* cdlfbr */, SystemZ::CDLFBR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 365 /* cdlgbr */, SystemZ::CDLGBR, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 372 /* ceb */, SystemZ::CEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 376 /* cebr */, SystemZ::CEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 381 /* cefbr */, SystemZ::CEFBR, Convert__FP321_0__GR321_1, 0, { MCK_FP32, MCK_GR32 }, },
  { 387 /* cegbr */, SystemZ::CEGBR, Convert__FP321_0__GR641_1, 0, { MCK_FP32, MCK_GR64 }, },
  { 393 /* celfbr */, SystemZ::CELFBR, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 400 /* celgbr */, SystemZ::CELGBR, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 407 /* cfdbr */, SystemZ::CFDBR, Convert__GR321_0__U4Imm1_1__FP641_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 413 /* cfebr */, SystemZ::CFEBR, Convert__GR321_0__U4Imm1_1__FP321_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 419 /* cfi */, SystemZ::CFI, Convert__GR321_0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 423 /* cfxbr */, SystemZ::CFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 429 /* cg */, SystemZ::CG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 432 /* cgdbr */, SystemZ::CGDBR, Convert__GR641_0__U4Imm1_1__FP641_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 438 /* cgebr */, SystemZ::CGEBR, Convert__GR641_0__U4Imm1_1__FP321_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 444 /* cgf */, SystemZ::CGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 448 /* cgfi */, SystemZ::CGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 453 /* cgfr */, SystemZ::CGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 458 /* cgfrl */, SystemZ::CGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 464 /* cgh */, SystemZ::CGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 468 /* cghi */, SystemZ::CGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 473 /* cghrl */, SystemZ::CGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 479 /* cghsi */, SystemZ::CGHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 485 /* cgib */, SystemZ::AsmCGIB, Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 490 /* cgibe */, SystemZ::AsmJECGIB, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 496 /* cgibh */, SystemZ::AsmJHCGIB, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 502 /* cgibhe */, SystemZ::AsmJHECGIB, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 509 /* cgibl */, SystemZ::AsmJLCGIB, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 515 /* cgible */, SystemZ::AsmJLECGIB, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 522 /* cgiblh */, SystemZ::AsmJLHCGIB, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 529 /* cgibne */, SystemZ::AsmJLHAltCGIB, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 536 /* cgibnh */, SystemZ::AsmJLEAltCGIB, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 543 /* cgibnhe */, SystemZ::AsmJLAltCGIB, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 551 /* cgibnl */, SystemZ::AsmJHEAltCGIB, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 558 /* cgibnle */, SystemZ::AsmJHAltCGIB, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 566 /* cgibnlh */, SystemZ::AsmJEAltCGIB, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 574 /* cgij */, SystemZ::AsmCGIJ, Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 579 /* cgije */, SystemZ::AsmJECGIJ, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 585 /* cgijh */, SystemZ::AsmJHCGIJ, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 591 /* cgijhe */, SystemZ::AsmJHECGIJ, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 598 /* cgijl */, SystemZ::AsmJLCGIJ, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 604 /* cgijle */, SystemZ::AsmJLECGIJ, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 611 /* cgijlh */, SystemZ::AsmJLHCGIJ, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 618 /* cgijne */, SystemZ::AsmJLHAltCGIJ, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 625 /* cgijnh */, SystemZ::AsmJLEAltCGIJ, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 632 /* cgijnhe */, SystemZ::AsmJLAltCGIJ, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 640 /* cgijnl */, SystemZ::AsmJHEAltCGIJ, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 647 /* cgijnle */, SystemZ::AsmJHAltCGIJ, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 655 /* cgijnlh */, SystemZ::AsmJEAltCGIJ, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 663 /* cgit */, SystemZ::AsmCGIT, Convert__GR641_0__S16Imm1_1__U4Imm1_2, 0, { MCK_GR64, MCK_S16Imm, MCK_U4Imm }, },
  { 668 /* cgite */, SystemZ::AsmJECGIT, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 674 /* cgith */, SystemZ::AsmJHCGIT, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 680 /* cgithe */, SystemZ::AsmJHECGIT, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 687 /* cgitl */, SystemZ::AsmJLCGIT, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 693 /* cgitle */, SystemZ::AsmJLECGIT, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 700 /* cgitlh */, SystemZ::AsmJLHCGIT, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 707 /* cgitne */, SystemZ::AsmJLHAltCGIT, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 714 /* cgitnh */, SystemZ::AsmJLEAltCGIT, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 721 /* cgitnhe */, SystemZ::AsmJLAltCGIT, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 729 /* cgitnl */, SystemZ::AsmJHEAltCGIT, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 736 /* cgitnle */, SystemZ::AsmJHAltCGIT, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 744 /* cgitnlh */, SystemZ::AsmJEAltCGIT, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 752 /* cgr */, SystemZ::CGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 756 /* cgrb */, SystemZ::AsmCGRB, Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 761 /* cgrbe */, SystemZ::AsmJECGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 767 /* cgrbh */, SystemZ::AsmJHCGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 773 /* cgrbhe */, SystemZ::AsmJHECGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 780 /* cgrbl */, SystemZ::AsmJLCGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 786 /* cgrble */, SystemZ::AsmJLECGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 793 /* cgrblh */, SystemZ::AsmJLHCGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 800 /* cgrbne */, SystemZ::AsmJLHAltCGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 807 /* cgrbnh */, SystemZ::AsmJLEAltCGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 814 /* cgrbnhe */, SystemZ::AsmJLAltCGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 822 /* cgrbnl */, SystemZ::AsmJHEAltCGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 829 /* cgrbnle */, SystemZ::AsmJHAltCGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 837 /* cgrbnlh */, SystemZ::AsmJEAltCGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 845 /* cgrj */, SystemZ::AsmCGRJ, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 850 /* cgrje */, SystemZ::AsmJECGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 856 /* cgrjh */, SystemZ::AsmJHCGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 862 /* cgrjhe */, SystemZ::AsmJHECGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 869 /* cgrjl */, SystemZ::AsmJLCGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 875 /* cgrjle */, SystemZ::AsmJLECGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 882 /* cgrjlh */, SystemZ::AsmJLHCGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 889 /* cgrjne */, SystemZ::AsmJLHAltCGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 896 /* cgrjnh */, SystemZ::AsmJLEAltCGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 903 /* cgrjnhe */, SystemZ::AsmJLAltCGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 911 /* cgrjnl */, SystemZ::AsmJHEAltCGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 918 /* cgrjnle */, SystemZ::AsmJHAltCGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 926 /* cgrjnlh */, SystemZ::AsmJEAltCGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 934 /* cgrl */, SystemZ::CGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 939 /* cgrt */, SystemZ::AsmCGRT, Convert__GR641_0__GR641_1__U4Imm1_2, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 944 /* cgrte */, SystemZ::AsmJECGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 950 /* cgrth */, SystemZ::AsmJHCGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 956 /* cgrthe */, SystemZ::AsmJHECGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 963 /* cgrtl */, SystemZ::AsmJLCGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 969 /* cgrtle */, SystemZ::AsmJLECGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 976 /* cgrtlh */, SystemZ::AsmJLHCGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 983 /* cgrtne */, SystemZ::AsmJLHAltCGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 990 /* cgrtnh */, SystemZ::AsmJLEAltCGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 997 /* cgrtnhe */, SystemZ::AsmJLAltCGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1005 /* cgrtnl */, SystemZ::AsmJHEAltCGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1012 /* cgrtnle */, SystemZ::AsmJHAltCGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1020 /* cgrtnlh */, SystemZ::AsmJEAltCGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1028 /* cgxbr */, SystemZ::CGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1034 /* ch */, SystemZ::CH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1037 /* chf */, SystemZ::CHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1041 /* chhsi */, SystemZ::CHHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1047 /* chi */, SystemZ::CHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1051 /* chrl */, SystemZ::CHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1056 /* chsi */, SystemZ::CHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1061 /* chy */, SystemZ::CHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1065 /* cib */, SystemZ::AsmCIB, Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1069 /* cibe */, SystemZ::AsmJECIB, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1074 /* cibh */, SystemZ::AsmJHCIB, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1079 /* cibhe */, SystemZ::AsmJHECIB, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1085 /* cibl */, SystemZ::AsmJLCIB, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1090 /* cible */, SystemZ::AsmJLECIB, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1096 /* ciblh */, SystemZ::AsmJLHCIB, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1102 /* cibne */, SystemZ::AsmJLHAltCIB, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1108 /* cibnh */, SystemZ::AsmJLEAltCIB, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1114 /* cibnhe */, SystemZ::AsmJLAltCIB, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1121 /* cibnl */, SystemZ::AsmJHEAltCIB, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1127 /* cibnle */, SystemZ::AsmJHAltCIB, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1134 /* cibnlh */, SystemZ::AsmJEAltCIB, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1141 /* cih */, SystemZ::CIH, Convert__GRH321_0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 1145 /* cij */, SystemZ::AsmCIJ, Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1149 /* cije */, SystemZ::AsmJECIJ, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1154 /* cijh */, SystemZ::AsmJHCIJ, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1159 /* cijhe */, SystemZ::AsmJHECIJ, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1165 /* cijl */, SystemZ::AsmJLCIJ, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1170 /* cijle */, SystemZ::AsmJLECIJ, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1176 /* cijlh */, SystemZ::AsmJLHCIJ, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1182 /* cijne */, SystemZ::AsmJLHAltCIJ, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1188 /* cijnh */, SystemZ::AsmJLEAltCIJ, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1194 /* cijnhe */, SystemZ::AsmJLAltCIJ, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1201 /* cijnl */, SystemZ::AsmJHEAltCIJ, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1207 /* cijnle */, SystemZ::AsmJHAltCIJ, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1214 /* cijnlh */, SystemZ::AsmJEAltCIJ, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1221 /* cit */, SystemZ::AsmCIT, Convert__GR321_0__S16Imm1_1__U4Imm1_2, 0, { MCK_GR32, MCK_S16Imm, MCK_U4Imm }, },
  { 1225 /* cite */, SystemZ::AsmJECIT, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1230 /* cith */, SystemZ::AsmJHCIT, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1235 /* cithe */, SystemZ::AsmJHECIT, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1241 /* citl */, SystemZ::AsmJLCIT, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1246 /* citle */, SystemZ::AsmJLECIT, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1252 /* citlh */, SystemZ::AsmJLHCIT, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1258 /* citne */, SystemZ::AsmJLHAltCIT, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1264 /* citnh */, SystemZ::AsmJLEAltCIT, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1270 /* citnhe */, SystemZ::AsmJLAltCIT, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1277 /* citnl */, SystemZ::AsmJHEAltCIT, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1283 /* citnle */, SystemZ::AsmJHAltCIT, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1290 /* citnlh */, SystemZ::AsmJEAltCIT, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1297 /* cl */, SystemZ::CL, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1300 /* clc */, SystemZ::CLC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 1304 /* clfdbr */, SystemZ::CLFDBR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1311 /* clfebr */, SystemZ::CLFEBR, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1318 /* clfhsi */, SystemZ::CLFHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 1325 /* clfi */, SystemZ::CLFI, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 1330 /* clfit */, SystemZ::AsmCLFIT, Convert__GR321_0__U16Imm1_1__U4Imm1_2, 0, { MCK_GR32, MCK_U16Imm, MCK_U4Imm }, },
  { 1336 /* clfite */, SystemZ::AsmJECLFIT, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1343 /* clfith */, SystemZ::AsmJHCLFIT, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1350 /* clfithe */, SystemZ::AsmJHECLFIT, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1358 /* clfitl */, SystemZ::AsmJLCLFIT, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1365 /* clfitle */, SystemZ::AsmJLECLFIT, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1373 /* clfitlh */, SystemZ::AsmJLHCLFIT, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1381 /* clfitne */, SystemZ::AsmJLHAltCLFIT, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1389 /* clfitnh */, SystemZ::AsmJLEAltCLFIT, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1397 /* clfitnhe */, SystemZ::AsmJLAltCLFIT, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1406 /* clfitnl */, SystemZ::AsmJHEAltCLFIT, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1414 /* clfitnle */, SystemZ::AsmJHAltCLFIT, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1423 /* clfitnlh */, SystemZ::AsmJEAltCLFIT, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1432 /* clfxbr */, SystemZ::CLFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1439 /* clg */, SystemZ::CLG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1443 /* clgdbr */, SystemZ::CLGDBR, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1450 /* clgebr */, SystemZ::CLGEBR, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1457 /* clgf */, SystemZ::CLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1462 /* clgfi */, SystemZ::CLGFI, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 1468 /* clgfr */, SystemZ::CLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 1474 /* clgfrl */, SystemZ::CLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1481 /* clghrl */, SystemZ::CLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1488 /* clghsi */, SystemZ::CLGHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 1495 /* clgib */, SystemZ::AsmCLGIB, Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1501 /* clgibe */, SystemZ::AsmJECLGIB, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1508 /* clgibh */, SystemZ::AsmJHCLGIB, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1515 /* clgibhe */, SystemZ::AsmJHECLGIB, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1523 /* clgibl */, SystemZ::AsmJLCLGIB, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1530 /* clgible */, SystemZ::AsmJLECLGIB, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1538 /* clgiblh */, SystemZ::AsmJLHCLGIB, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1546 /* clgibne */, SystemZ::AsmJLHAltCLGIB, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1554 /* clgibnh */, SystemZ::AsmJLEAltCLGIB, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1562 /* clgibnhe */, SystemZ::AsmJLAltCLGIB, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1571 /* clgibnl */, SystemZ::AsmJHEAltCLGIB, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1579 /* clgibnle */, SystemZ::AsmJHAltCLGIB, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1588 /* clgibnlh */, SystemZ::AsmJEAltCLGIB, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1597 /* clgij */, SystemZ::AsmCLGIJ, Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1603 /* clgije */, SystemZ::AsmJECLGIJ, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1610 /* clgijh */, SystemZ::AsmJHCLGIJ, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1617 /* clgijhe */, SystemZ::AsmJHECLGIJ, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1625 /* clgijl */, SystemZ::AsmJLCLGIJ, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1632 /* clgijle */, SystemZ::AsmJLECLGIJ, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1640 /* clgijlh */, SystemZ::AsmJLHCLGIJ, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1648 /* clgijne */, SystemZ::AsmJLHAltCLGIJ, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1656 /* clgijnh */, SystemZ::AsmJLEAltCLGIJ, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1664 /* clgijnhe */, SystemZ::AsmJLAltCLGIJ, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1673 /* clgijnl */, SystemZ::AsmJHEAltCLGIJ, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1681 /* clgijnle */, SystemZ::AsmJHAltCLGIJ, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1690 /* clgijnlh */, SystemZ::AsmJEAltCLGIJ, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1699 /* clgit */, SystemZ::AsmCLGIT, Convert__GR641_0__U16Imm1_1__U4Imm1_2, 0, { MCK_GR64, MCK_U16Imm, MCK_U4Imm }, },
  { 1705 /* clgite */, SystemZ::AsmJECLGIT, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1712 /* clgith */, SystemZ::AsmJHCLGIT, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1719 /* clgithe */, SystemZ::AsmJHECLGIT, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1727 /* clgitl */, SystemZ::AsmJLCLGIT, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1734 /* clgitle */, SystemZ::AsmJLECLGIT, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1742 /* clgitlh */, SystemZ::AsmJLHCLGIT, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1750 /* clgitne */, SystemZ::AsmJLHAltCLGIT, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1758 /* clgitnh */, SystemZ::AsmJLEAltCLGIT, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1766 /* clgitnhe */, SystemZ::AsmJLAltCLGIT, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1775 /* clgitnl */, SystemZ::AsmJHEAltCLGIT, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1783 /* clgitnle */, SystemZ::AsmJHAltCLGIT, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1792 /* clgitnlh */, SystemZ::AsmJEAltCLGIT, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1801 /* clgr */, SystemZ::CLGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1806 /* clgrb */, SystemZ::AsmCLGRB, Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1812 /* clgrbe */, SystemZ::AsmJECLGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1819 /* clgrbh */, SystemZ::AsmJHCLGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1826 /* clgrbhe */, SystemZ::AsmJHECLGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1834 /* clgrbl */, SystemZ::AsmJLCLGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1841 /* clgrble */, SystemZ::AsmJLECLGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1849 /* clgrblh */, SystemZ::AsmJLHCLGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1857 /* clgrbne */, SystemZ::AsmJLHAltCLGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1865 /* clgrbnh */, SystemZ::AsmJLEAltCLGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1873 /* clgrbnhe */, SystemZ::AsmJLAltCLGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1882 /* clgrbnl */, SystemZ::AsmJHEAltCLGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1890 /* clgrbnle */, SystemZ::AsmJHAltCLGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1899 /* clgrbnlh */, SystemZ::AsmJEAltCLGRB, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1908 /* clgrj */, SystemZ::AsmCLGRJ, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 1914 /* clgrje */, SystemZ::AsmJECLGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1921 /* clgrjh */, SystemZ::AsmJHCLGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1928 /* clgrjhe */, SystemZ::AsmJHECLGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1936 /* clgrjl */, SystemZ::AsmJLCLGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1943 /* clgrjle */, SystemZ::AsmJLECLGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1951 /* clgrjlh */, SystemZ::AsmJLHCLGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1959 /* clgrjne */, SystemZ::AsmJLHAltCLGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1967 /* clgrjnh */, SystemZ::AsmJLEAltCLGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1975 /* clgrjnhe */, SystemZ::AsmJLAltCLGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1984 /* clgrjnl */, SystemZ::AsmJHEAltCLGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1992 /* clgrjnle */, SystemZ::AsmJHAltCLGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2001 /* clgrjnlh */, SystemZ::AsmJEAltCLGRJ, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2010 /* clgrl */, SystemZ::CLGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2016 /* clgrt */, SystemZ::AsmCLGRT, Convert__GR641_0__GR641_1__U4Imm1_2, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 2022 /* clgrte */, SystemZ::AsmJECLGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2029 /* clgrth */, SystemZ::AsmJHCLGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2036 /* clgrthe */, SystemZ::AsmJHECLGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2044 /* clgrtl */, SystemZ::AsmJLCLGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2051 /* clgrtle */, SystemZ::AsmJLECLGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2059 /* clgrtlh */, SystemZ::AsmJLHCLGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2067 /* clgrtne */, SystemZ::AsmJLHAltCLGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2075 /* clgrtnh */, SystemZ::AsmJLEAltCLGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2083 /* clgrtnhe */, SystemZ::AsmJLAltCLGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2092 /* clgrtnl */, SystemZ::AsmJHEAltCLGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2100 /* clgrtnle */, SystemZ::AsmJHAltCLGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2109 /* clgrtnlh */, SystemZ::AsmJEAltCLGRT, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2118 /* clgxbr */, SystemZ::CLGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2125 /* clhf */, SystemZ::CLHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 2130 /* clhhsi */, SystemZ::CLHHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 2137 /* clhrl */, SystemZ::CLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2143 /* cli */, SystemZ::CLI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2147 /* clib */, SystemZ::AsmCLIB, Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2152 /* clibe */, SystemZ::AsmJECLIB, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2158 /* clibh */, SystemZ::AsmJHCLIB, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2164 /* clibhe */, SystemZ::AsmJHECLIB, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2171 /* clibl */, SystemZ::AsmJLCLIB, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2177 /* clible */, SystemZ::AsmJLECLIB, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2184 /* cliblh */, SystemZ::AsmJLHCLIB, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2191 /* clibne */, SystemZ::AsmJLHAltCLIB, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2198 /* clibnh */, SystemZ::AsmJLEAltCLIB, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2205 /* clibnhe */, SystemZ::AsmJLAltCLIB, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2213 /* clibnl */, SystemZ::AsmJHEAltCLIB, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2220 /* clibnle */, SystemZ::AsmJHAltCLIB, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2228 /* clibnlh */, SystemZ::AsmJEAltCLIB, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2236 /* clih */, SystemZ::CLIH, Convert__GRH321_0__U32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_U32Imm }, },
  { 2241 /* clij */, SystemZ::AsmCLIJ, Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 2246 /* clije */, SystemZ::AsmJECLIJ, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2252 /* clijh */, SystemZ::AsmJHCLIJ, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2258 /* clijhe */, SystemZ::AsmJHECLIJ, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2265 /* clijl */, SystemZ::AsmJLCLIJ, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2271 /* clijle */, SystemZ::AsmJLECLIJ, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2278 /* clijlh */, SystemZ::AsmJLHCLIJ, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2285 /* clijne */, SystemZ::AsmJLHAltCLIJ, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2292 /* clijnh */, SystemZ::AsmJLEAltCLIJ, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2299 /* clijnhe */, SystemZ::AsmJLAltCLIJ, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2307 /* clijnl */, SystemZ::AsmJHEAltCLIJ, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2314 /* clijnle */, SystemZ::AsmJHAltCLIJ, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2322 /* clijnlh */, SystemZ::AsmJEAltCLIJ, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2330 /* cliy */, SystemZ::CLIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 2335 /* clr */, SystemZ::CLR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2339 /* clrb */, SystemZ::AsmCLRB, Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2344 /* clrbe */, SystemZ::AsmJECLRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2350 /* clrbh */, SystemZ::AsmJHCLRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2356 /* clrbhe */, SystemZ::AsmJHECLRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2363 /* clrbl */, SystemZ::AsmJLCLRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2369 /* clrble */, SystemZ::AsmJLECLRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2376 /* clrblh */, SystemZ::AsmJLHCLRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2383 /* clrbne */, SystemZ::AsmJLHAltCLRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2390 /* clrbnh */, SystemZ::AsmJLEAltCLRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2397 /* clrbnhe */, SystemZ::AsmJLAltCLRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2405 /* clrbnl */, SystemZ::AsmJHEAltCLRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2412 /* clrbnle */, SystemZ::AsmJHAltCLRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2420 /* clrbnlh */, SystemZ::AsmJEAltCLRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2428 /* clrj */, SystemZ::AsmCLRJ, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 2433 /* clrje */, SystemZ::AsmJECLRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2439 /* clrjh */, SystemZ::AsmJHCLRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2445 /* clrjhe */, SystemZ::AsmJHECLRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2452 /* clrjl */, SystemZ::AsmJLCLRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2458 /* clrjle */, SystemZ::AsmJLECLRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2465 /* clrjlh */, SystemZ::AsmJLHCLRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2472 /* clrjne */, SystemZ::AsmJLHAltCLRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2479 /* clrjnh */, SystemZ::AsmJLEAltCLRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2486 /* clrjnhe */, SystemZ::AsmJLAltCLRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2494 /* clrjnl */, SystemZ::AsmJHEAltCLRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2501 /* clrjnle */, SystemZ::AsmJHAltCLRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2509 /* clrjnlh */, SystemZ::AsmJEAltCLRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2517 /* clrl */, SystemZ::CLRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2522 /* clrt */, SystemZ::AsmCLRT, Convert__GR321_0__GR321_1__U4Imm1_2, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 2527 /* clrte */, SystemZ::AsmJECLRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2533 /* clrth */, SystemZ::AsmJHCLRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2539 /* clrthe */, SystemZ::AsmJHECLRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2546 /* clrtl */, SystemZ::AsmJLCLRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2552 /* clrtle */, SystemZ::AsmJLECLRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2559 /* clrtlh */, SystemZ::AsmJLHCLRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2566 /* clrtne */, SystemZ::AsmJLHAltCLRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2573 /* clrtnh */, SystemZ::AsmJLEAltCLRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2580 /* clrtnhe */, SystemZ::AsmJLAltCLRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2588 /* clrtnl */, SystemZ::AsmJHEAltCLRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2595 /* clrtnle */, SystemZ::AsmJHAltCLRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2603 /* clrtnlh */, SystemZ::AsmJEAltCLRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2611 /* clst */, SystemZ::CLST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2616 /* cly */, SystemZ::CLY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2620 /* cpsdr */, SystemZ::CPSDRdd, Convert__FP641_0__FP641_2__FP641_1, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 2626 /* cr */, SystemZ::CR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2629 /* crb */, SystemZ::AsmCRB, Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2633 /* crbe */, SystemZ::AsmJECRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2638 /* crbh */, SystemZ::AsmJHCRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2643 /* crbhe */, SystemZ::AsmJHECRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2649 /* crbl */, SystemZ::AsmJLCRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2654 /* crble */, SystemZ::AsmJLECRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2660 /* crblh */, SystemZ::AsmJLHCRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2666 /* crbne */, SystemZ::AsmJLHAltCRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2672 /* crbnh */, SystemZ::AsmJLEAltCRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2678 /* crbnhe */, SystemZ::AsmJLAltCRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2685 /* crbnl */, SystemZ::AsmJHEAltCRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2691 /* crbnle */, SystemZ::AsmJHAltCRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2698 /* crbnlh */, SystemZ::AsmJEAltCRB, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2705 /* crj */, SystemZ::AsmCRJ, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 2709 /* crje */, SystemZ::AsmJECRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2714 /* crjh */, SystemZ::AsmJHCRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2719 /* crjhe */, SystemZ::AsmJHECRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2725 /* crjl */, SystemZ::AsmJLCRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2730 /* crjle */, SystemZ::AsmJLECRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2736 /* crjlh */, SystemZ::AsmJLHCRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2742 /* crjne */, SystemZ::AsmJLHAltCRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2748 /* crjnh */, SystemZ::AsmJLEAltCRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2754 /* crjnhe */, SystemZ::AsmJLAltCRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2761 /* crjnl */, SystemZ::AsmJHEAltCRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2767 /* crjnle */, SystemZ::AsmJHAltCRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2774 /* crjnlh */, SystemZ::AsmJEAltCRJ, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2781 /* crl */, SystemZ::CRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2785 /* crt */, SystemZ::AsmCRT, Convert__GR321_0__GR321_1__U4Imm1_2, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 2789 /* crte */, SystemZ::AsmJECRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2794 /* crth */, SystemZ::AsmJHCRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2799 /* crthe */, SystemZ::AsmJHECRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2805 /* crtl */, SystemZ::AsmJLCRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2810 /* crtle */, SystemZ::AsmJLECRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2816 /* crtlh */, SystemZ::AsmJLHCRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2822 /* crtne */, SystemZ::AsmJLHAltCRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2828 /* crtnh */, SystemZ::AsmJLEAltCRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2834 /* crtnhe */, SystemZ::AsmJLAltCRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2841 /* crtnl */, SystemZ::AsmJHEAltCRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2847 /* crtnle */, SystemZ::AsmJHAltCRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2854 /* crtnlh */, SystemZ::AsmJEAltCRT, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2861 /* cs */, SystemZ::CS, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2864 /* csg */, SystemZ::CSG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2868 /* csy */, SystemZ::CSY, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2872 /* cxbr */, SystemZ::CXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2877 /* cxfbr */, SystemZ::CXFBR, Convert__FP1281_0__GR321_1, 0, { MCK_FP128, MCK_GR32 }, },
  { 2883 /* cxgbr */, SystemZ::CXGBR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, },
  { 2889 /* cxlfbr */, SystemZ::CXLFBR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 2896 /* cxlgbr */, SystemZ::CXLGBR, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 2903 /* cy */, SystemZ::CY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2906 /* ddb */, SystemZ::DDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2910 /* ddbr */, SystemZ::DDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2915 /* deb */, SystemZ::DEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2919 /* debr */, SystemZ::DEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2924 /* dl */, SystemZ::DL, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 2927 /* dlg */, SystemZ::DLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 2931 /* dlgr */, SystemZ::DLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 2936 /* dlr */, SystemZ::DLR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 2940 /* dsg */, SystemZ::DSG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 2944 /* dsgf */, SystemZ::DSGF, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 2949 /* dsgfr */, SystemZ::DSGFR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 2955 /* dsgr */, SystemZ::DSGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 2960 /* dxbr */, SystemZ::DXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2965 /* ear */, SystemZ::EAR, Convert__GR321_0__AccessReg1_1, 0, { MCK_GR32, MCK_AccessReg }, },
  { 2969 /* etnd */, SystemZ::ETND, Convert__GR321_0, Feature_FeatureTransactionalExecution, { MCK_GR32 }, },
  { 2974 /* ex */, SystemZ::EX, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 2977 /* exrl */, SystemZ::EXRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2982 /* fidbr */, SystemZ::FIDBR, Convert__FP641_0__U4Imm1_1__FP641_2, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 2988 /* fidbra */, SystemZ::FIDBRA, Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2995 /* fiebr */, SystemZ::FIEBR, Convert__FP321_0__U4Imm1_1__FP321_2, 0, { MCK_FP32, MCK_U4Imm, MCK_FP32 }, },
  { 3001 /* fiebra */, SystemZ::FIEBRA, Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 3008 /* fixbr */, SystemZ::FIXBR, Convert__FP1281_0__U4Imm1_1__FP1281_2, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128 }, },
  { 3014 /* fixbra */, SystemZ::FIXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 3021 /* flogr */, SystemZ::FLOGR, Convert__GR1281_0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 3027 /* ic */, SystemZ::IC, Convert__GR641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 3030 /* icm */, SystemZ::ICM, Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3034 /* icmh */, SystemZ::ICMH, Convert__GRH321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3039 /* icmy */, SystemZ::ICMY, Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3044 /* icy */, SystemZ::ICY, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3048 /* iihf */, SystemZ::IIHF, Convert__GRH321_0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 3053 /* iihh */, SystemZ::IIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3058 /* iihl */, SystemZ::IIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3063 /* iilf */, SystemZ::IILF, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 3068 /* iilh */, SystemZ::IILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3073 /* iill */, SystemZ::IILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3078 /* ipm */, SystemZ::IPM, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 3082 /* j */, SystemZ::J, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3084 /* je */, SystemZ::AsmEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3087 /* jg */, SystemZ::JG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3090 /* jge */, SystemZ::AsmEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3094 /* jgh */, SystemZ::AsmHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3098 /* jghe */, SystemZ::AsmHEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3103 /* jgl */, SystemZ::AsmLJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3107 /* jgle */, SystemZ::AsmLEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3112 /* jglh */, SystemZ::AsmLHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3117 /* jgm */, SystemZ::AsmLAltJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3121 /* jgne */, SystemZ::AsmNEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3126 /* jgnh */, SystemZ::AsmNHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3131 /* jgnhe */, SystemZ::AsmNHEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3137 /* jgnl */, SystemZ::AsmNLJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3142 /* jgnle */, SystemZ::AsmNLEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3148 /* jgnlh */, SystemZ::AsmNLHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3154 /* jgnm */, SystemZ::AsmNLAltJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3159 /* jgno */, SystemZ::AsmNOJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3164 /* jgnp */, SystemZ::AsmNHAltJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3169 /* jgnz */, SystemZ::AsmNEAltJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3174 /* jgo */, SystemZ::AsmOJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3178 /* jgp */, SystemZ::AsmHAltJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3182 /* jgz */, SystemZ::AsmEAltJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3186 /* jh */, SystemZ::AsmHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3189 /* jhe */, SystemZ::AsmHEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3193 /* jl */, SystemZ::AsmLJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3196 /* jle */, SystemZ::AsmLEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3200 /* jlh */, SystemZ::AsmLHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3204 /* jm */, SystemZ::AsmLAltJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3207 /* jne */, SystemZ::AsmNEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3211 /* jnh */, SystemZ::AsmNHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3215 /* jnhe */, SystemZ::AsmNHEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3220 /* jnl */, SystemZ::AsmNLJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3224 /* jnle */, SystemZ::AsmNLEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3229 /* jnlh */, SystemZ::AsmNLHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3234 /* jnm */, SystemZ::AsmNLAltJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3238 /* jno */, SystemZ::AsmNOJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3242 /* jnp */, SystemZ::AsmNHAltJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3246 /* jnz */, SystemZ::AsmNEAltJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3250 /* jo */, SystemZ::AsmOJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3253 /* jp */, SystemZ::AsmHAltJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3256 /* jz */, SystemZ::AsmEAltJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3259 /* l */, SystemZ::L, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3261 /* la */, SystemZ::LA, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 3264 /* laa */, SystemZ::LAA, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3268 /* laag */, SystemZ::LAAG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3273 /* laal */, SystemZ::LAAL, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3278 /* laalg */, SystemZ::LAALG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3284 /* lan */, SystemZ::LAN, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3288 /* lang */, SystemZ::LANG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3293 /* lao */, SystemZ::LAO, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3297 /* laog */, SystemZ::LAOG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3302 /* larl */, SystemZ::LARL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 3307 /* lax */, SystemZ::LAX, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3311 /* laxg */, SystemZ::LAXG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3316 /* lay */, SystemZ::LAY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3320 /* lb */, SystemZ::LB, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3323 /* lbh */, SystemZ::LBH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3327 /* lbr */, SystemZ::LBR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3331 /* lcbb */, SystemZ::LCBB, Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_GR32, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 3336 /* lcdbr */, SystemZ::LCDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3342 /* lcdfr */, SystemZ::LCDFR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3348 /* lcebr */, SystemZ::LCEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3354 /* lcgfr */, SystemZ::LCGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 3360 /* lcgr */, SystemZ::LCGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3365 /* lcr */, SystemZ::LCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3369 /* lcxbr */, SystemZ::LCXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3375 /* ld */, SystemZ::LD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3378 /* lde */, SystemZ::LDE32, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3382 /* ldeb */, SystemZ::LDEB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3387 /* ldebr */, SystemZ::LDEBR, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 3393 /* ldgr */, SystemZ::LDGR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 3398 /* ldr */, SystemZ::LDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3402 /* ldxbr */, SystemZ::LDXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3408 /* ldxbra */, SystemZ::LDXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 3415 /* ldy */, SystemZ::LDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 3419 /* le */, SystemZ::LE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3422 /* ledbr */, SystemZ::LEDBR, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, },
  { 3428 /* ledbra */, SystemZ::LEDBRA, Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 3435 /* ler */, SystemZ::LER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3439 /* lexbr */, SystemZ::LEXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3445 /* lexbra */, SystemZ::LEXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 3452 /* ley */, SystemZ::LEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 3456 /* lfh */, SystemZ::LFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3460 /* lg */, SystemZ::LG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3463 /* lgb */, SystemZ::LGB, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3467 /* lgbr */, SystemZ::LGBR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3472 /* lgdr */, SystemZ::LGDR, Convert__GR641_0__FP641_1, 0, { MCK_GR64, MCK_FP64 }, },
  { 3477 /* lgf */, SystemZ::LGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3481 /* lgfi */, SystemZ::LGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 3486 /* lgfr */, SystemZ::LGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 3491 /* lgfrl */, SystemZ::LGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 3497 /* lgh */, SystemZ::LGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3501 /* lghi */, SystemZ::LGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 3506 /* lghr */, SystemZ::LGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3511 /* lghrl */, SystemZ::LGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 3517 /* lgr */, SystemZ::LGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3521 /* lgrl */, SystemZ::LGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 3526 /* lh */, SystemZ::LH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3529 /* lhh */, SystemZ::LHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3533 /* lhi */, SystemZ::LHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 3537 /* lhr */, SystemZ::LHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3541 /* lhrl */, SystemZ::LHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 3546 /* lhy */, SystemZ::LHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3550 /* llc */, SystemZ::LLC, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3554 /* llch */, SystemZ::LLCH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3559 /* llcr */, SystemZ::LLCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3564 /* llgc */, SystemZ::LLGC, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3569 /* llgcr */, SystemZ::LLGCR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3575 /* llgf */, SystemZ::LLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3580 /* llgfr */, SystemZ::LLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 3586 /* llgfrl */, SystemZ::LLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 3593 /* llgh */, SystemZ::LLGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3598 /* llghr */, SystemZ::LLGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3604 /* llghrl */, SystemZ::LLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 3611 /* llh */, SystemZ::LLH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3615 /* llhh */, SystemZ::LLHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3620 /* llhr */, SystemZ::LLHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3625 /* llhrl */, SystemZ::LLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 3631 /* llihf */, SystemZ::LLIHF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 3637 /* llihh */, SystemZ::LLIHH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 3643 /* llihl */, SystemZ::LLIHL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 3649 /* llilf */, SystemZ::LLILF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 3655 /* llilh */, SystemZ::LLILH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 3661 /* llill */, SystemZ::LLILL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 3667 /* lm */, SystemZ::LM, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3670 /* lmg */, SystemZ::LMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3674 /* lmh */, SystemZ::LMH, Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 3678 /* lmy */, SystemZ::LMY, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3682 /* lndbr */, SystemZ::LNDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3688 /* lndfr */, SystemZ::LNDFR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3694 /* lnebr */, SystemZ::LNEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3700 /* lngfr */, SystemZ::LNGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 3706 /* lngr */, SystemZ::LNGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3711 /* lnr */, SystemZ::LNR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3715 /* lnxbr */, SystemZ::LNXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3721 /* loc */, SystemZ::AsmLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 3725 /* loce */, SystemZ::AsmELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3730 /* locg */, SystemZ::AsmLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 3735 /* locge */, SystemZ::AsmELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3741 /* locgh */, SystemZ::AsmHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3747 /* locghe */, SystemZ::AsmHELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3754 /* locghi */, SystemZ::AsmLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm, MCK_U4Imm }, },
  { 3761 /* locghie */, SystemZ::AsmELOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3769 /* locghih */, SystemZ::AsmHLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3777 /* locghihe */, SystemZ::AsmHELOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3786 /* locghil */, SystemZ::AsmLLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3794 /* locghile */, SystemZ::AsmLELOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3803 /* locghilh */, SystemZ::AsmLHLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3812 /* locghim */, SystemZ::AsmLAltLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3820 /* locghine */, SystemZ::AsmNELOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3829 /* locghinh */, SystemZ::AsmNHLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3838 /* locghinhe */, SystemZ::AsmNHELOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3848 /* locghinl */, SystemZ::AsmNLLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3857 /* locghinle */, SystemZ::AsmNLELOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3867 /* locghinlh */, SystemZ::AsmNLHLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3877 /* locghinm */, SystemZ::AsmNLAltLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3886 /* locghino */, SystemZ::AsmNOLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3895 /* locghinp */, SystemZ::AsmNHAltLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3904 /* locghinz */, SystemZ::AsmNEAltLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3913 /* locghio */, SystemZ::AsmOLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3921 /* locghip */, SystemZ::AsmHAltLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3929 /* locghiz */, SystemZ::AsmEAltLOCGHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 3937 /* locgl */, SystemZ::AsmLLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3943 /* locgle */, SystemZ::AsmLELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3950 /* locglh */, SystemZ::AsmLHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3957 /* locgm */, SystemZ::AsmLAltLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3963 /* locgne */, SystemZ::AsmNELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3970 /* locgnh */, SystemZ::AsmNHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3977 /* locgnhe */, SystemZ::AsmNHELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3985 /* locgnl */, SystemZ::AsmNLLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3992 /* locgnle */, SystemZ::AsmNLELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4000 /* locgnlh */, SystemZ::AsmNLHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4008 /* locgnm */, SystemZ::AsmNLAltLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4015 /* locgno */, SystemZ::AsmNOLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4022 /* locgnp */, SystemZ::AsmNHAltLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4029 /* locgnz */, SystemZ::AsmNEAltLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4036 /* locgo */, SystemZ::AsmOLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4042 /* locgp */, SystemZ::AsmHAltLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4048 /* locgr */, SystemZ::AsmLOCGR, Convert__GR641_0__Tie0__GR641_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 4054 /* locgre */, SystemZ::AsmELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4061 /* locgrh */, SystemZ::AsmHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4068 /* locgrhe */, SystemZ::AsmHELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4076 /* locgrl */, SystemZ::AsmLLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4083 /* locgrle */, SystemZ::AsmLELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4091 /* locgrlh */, SystemZ::AsmLHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4099 /* locgrm */, SystemZ::AsmLAltLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4106 /* locgrne */, SystemZ::AsmNELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4114 /* locgrnh */, SystemZ::AsmNHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4122 /* locgrnhe */, SystemZ::AsmNHELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4131 /* locgrnl */, SystemZ::AsmNLLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4139 /* locgrnle */, SystemZ::AsmNLELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4148 /* locgrnlh */, SystemZ::AsmNLHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4157 /* locgrnm */, SystemZ::AsmNLAltLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4165 /* locgrno */, SystemZ::AsmNOLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4173 /* locgrnp */, SystemZ::AsmNHAltLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4181 /* locgrnz */, SystemZ::AsmNEAltLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4189 /* locgro */, SystemZ::AsmOLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4196 /* locgrp */, SystemZ::AsmHAltLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4203 /* locgrz */, SystemZ::AsmEAltLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4210 /* locgz */, SystemZ::AsmEAltLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4216 /* loch */, SystemZ::AsmHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4221 /* loche */, SystemZ::AsmHELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4227 /* lochi */, SystemZ::AsmLOCHI, Convert__GR321_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm, MCK_U4Imm }, },
  { 4233 /* lochie */, SystemZ::AsmELOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4240 /* lochih */, SystemZ::AsmHLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4247 /* lochihe */, SystemZ::AsmHELOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4255 /* lochil */, SystemZ::AsmLLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4262 /* lochile */, SystemZ::AsmLELOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4270 /* lochilh */, SystemZ::AsmLHLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4278 /* lochim */, SystemZ::AsmLAltLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4285 /* lochine */, SystemZ::AsmNELOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4293 /* lochinh */, SystemZ::AsmNHLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4301 /* lochinhe */, SystemZ::AsmNHELOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4310 /* lochinl */, SystemZ::AsmNLLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4318 /* lochinle */, SystemZ::AsmNLELOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4327 /* lochinlh */, SystemZ::AsmNLHLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4336 /* lochinm */, SystemZ::AsmNLAltLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4344 /* lochino */, SystemZ::AsmNOLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4352 /* lochinp */, SystemZ::AsmNHAltLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4360 /* lochinz */, SystemZ::AsmNEAltLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4368 /* lochio */, SystemZ::AsmOLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4375 /* lochip */, SystemZ::AsmHAltLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4382 /* lochiz */, SystemZ::AsmEAltLOCHI, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4389 /* locl */, SystemZ::AsmLLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4394 /* locle */, SystemZ::AsmLELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4400 /* loclh */, SystemZ::AsmLHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4406 /* locm */, SystemZ::AsmLAltLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4411 /* locne */, SystemZ::AsmNELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4417 /* locnh */, SystemZ::AsmNHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4423 /* locnhe */, SystemZ::AsmNHELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4430 /* locnl */, SystemZ::AsmNLLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4436 /* locnle */, SystemZ::AsmNLELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4443 /* locnlh */, SystemZ::AsmNLHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4450 /* locnm */, SystemZ::AsmNLAltLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4456 /* locno */, SystemZ::AsmNOLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4462 /* locnp */, SystemZ::AsmNHAltLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4468 /* locnz */, SystemZ::AsmNEAltLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4474 /* loco */, SystemZ::AsmOLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4479 /* locp */, SystemZ::AsmHAltLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4484 /* locr */, SystemZ::AsmLOCR, Convert__GR321_0__Tie0__GR321_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 4489 /* locre */, SystemZ::AsmELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4495 /* locrh */, SystemZ::AsmHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4501 /* locrhe */, SystemZ::AsmHELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4508 /* locrl */, SystemZ::AsmLLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4514 /* locrle */, SystemZ::AsmLELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4521 /* locrlh */, SystemZ::AsmLHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4528 /* locrm */, SystemZ::AsmLAltLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4534 /* locrne */, SystemZ::AsmNELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4541 /* locrnh */, SystemZ::AsmNHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4548 /* locrnhe */, SystemZ::AsmNHELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4556 /* locrnl */, SystemZ::AsmNLLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4563 /* locrnle */, SystemZ::AsmNLELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4571 /* locrnlh */, SystemZ::AsmNLHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4579 /* locrnm */, SystemZ::AsmNLAltLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4586 /* locrno */, SystemZ::AsmNOLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4593 /* locrnp */, SystemZ::AsmNHAltLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4600 /* locrnz */, SystemZ::AsmNEAltLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4607 /* locro */, SystemZ::AsmOLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4613 /* locrp */, SystemZ::AsmHAltLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4619 /* locrz */, SystemZ::AsmEAltLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 4625 /* locz */, SystemZ::AsmEAltLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4630 /* lpdbr */, SystemZ::LPDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4636 /* lpdfr */, SystemZ::LPDFR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4642 /* lpebr */, SystemZ::LPEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4648 /* lpgfr */, SystemZ::LPGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 4654 /* lpgr */, SystemZ::LPGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4659 /* lpr */, SystemZ::LPR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4663 /* lpxbr */, SystemZ::LPXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4669 /* lr */, SystemZ::LR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4672 /* lrl */, SystemZ::LRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 4676 /* lrv */, SystemZ::LRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4680 /* lrvg */, SystemZ::LRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4685 /* lrvgr */, SystemZ::LRVGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4691 /* lrvh */, SystemZ::LRVH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4696 /* lrvr */, SystemZ::LRVR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4701 /* lt */, SystemZ::LT, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4704 /* ltdbr */, SystemZ::LTDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4710 /* ltebr */, SystemZ::LTEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4716 /* ltg */, SystemZ::LTG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4720 /* ltgf */, SystemZ::LTGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4725 /* ltgfr */, SystemZ::LTGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 4731 /* ltgr */, SystemZ::LTGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4736 /* ltr */, SystemZ::LTR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4740 /* ltxbr */, SystemZ::LTXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4746 /* lxdb */, SystemZ::LXDB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 4751 /* lxdbr */, SystemZ::LXDBR, Convert__FP1281_0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 4757 /* lxeb */, SystemZ::LXEB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 4762 /* lxebr */, SystemZ::LXEBR, Convert__FP1281_0__FP321_1, 0, { MCK_FP128, MCK_FP32 }, },
  { 4768 /* lxr */, SystemZ::LXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4772 /* ly */, SystemZ::LY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4775 /* lzdr */, SystemZ::LZDR, Convert__FP641_0, 0, { MCK_FP64 }, },
  { 4780 /* lzer */, SystemZ::LZER, Convert__FP321_0, 0, { MCK_FP32 }, },
  { 4785 /* lzxr */, SystemZ::LZXR, Convert__FP1281_0, 0, { MCK_FP128 }, },
  { 4790 /* madb */, SystemZ::MADB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4795 /* madbr */, SystemZ::MADBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 4801 /* maeb */, SystemZ::MAEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4806 /* maebr */, SystemZ::MAEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 4812 /* mdb */, SystemZ::MDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4816 /* mdbr */, SystemZ::MDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4821 /* mdeb */, SystemZ::MDEB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4826 /* mdebr */, SystemZ::MDEBR, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 4832 /* meeb */, SystemZ::MEEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4837 /* meebr */, SystemZ::MEEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4843 /* mghi */, SystemZ::MGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 4848 /* mh */, SystemZ::MH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 4851 /* mhi */, SystemZ::MHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 4855 /* mhy */, SystemZ::MHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4859 /* mlg */, SystemZ::MLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 4863 /* mlgr */, SystemZ::MLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 4868 /* ms */, SystemZ::MS, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 4871 /* msdb */, SystemZ::MSDB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4876 /* msdbr */, SystemZ::MSDBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 4882 /* mseb */, SystemZ::MSEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4887 /* msebr */, SystemZ::MSEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 4893 /* msfi */, SystemZ::MSFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 4898 /* msg */, SystemZ::MSG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4902 /* msgf */, SystemZ::MSGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4907 /* msgfi */, SystemZ::MSGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 4913 /* msgfr */, SystemZ::MSGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 4919 /* msgr */, SystemZ::MSGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4924 /* msr */, SystemZ::MSR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4928 /* msy */, SystemZ::MSY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4932 /* mvc */, SystemZ::MVC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 4936 /* mvghi */, SystemZ::MVGHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 4942 /* mvhhi */, SystemZ::MVHHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 4948 /* mvhi */, SystemZ::MVHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 4953 /* mvi */, SystemZ::MVI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 4957 /* mviy */, SystemZ::MVIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 4962 /* mvst */, SystemZ::MVST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4967 /* mxbr */, SystemZ::MXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4972 /* mxdb */, SystemZ::MXDB, Convert__FP1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 4977 /* mxdbr */, SystemZ::MXDBR, Convert__FP1281_0__Tie0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 4983 /* n */, SystemZ::N, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 4985 /* nc */, SystemZ::NC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 4988 /* ng */, SystemZ::NG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4991 /* ngr */, SystemZ::NGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4995 /* ngrk */, SystemZ::NGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 5000 /* ni */, SystemZ::NI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 5003 /* nihf */, SystemZ::NIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 5008 /* nihh */, SystemZ::NIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 5013 /* nihl */, SystemZ::NIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 5018 /* nilf */, SystemZ::NILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 5023 /* nilh */, SystemZ::NILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 5028 /* nill */, SystemZ::NILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 5033 /* niy */, SystemZ::NIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 5037 /* nop */, SystemZ::AsmBC, Convert__imm_95_0__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 5041 /* nopr */, SystemZ::AsmBCR, Convert__imm_95_0__GR641_0, 0, { MCK_GR64 }, },
  { 5046 /* nr */, SystemZ::NR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5049 /* nrk */, SystemZ::NRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 5053 /* ntstg */, SystemZ::NTSTG, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureTransactionalExecution, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5059 /* ny */, SystemZ::NY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5062 /* o */, SystemZ::O, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 5064 /* oc */, SystemZ::OC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 5067 /* og */, SystemZ::OG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5070 /* ogr */, SystemZ::OGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5074 /* ogrk */, SystemZ::OGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 5079 /* oi */, SystemZ::OI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 5082 /* oihf */, SystemZ::OIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 5087 /* oihh */, SystemZ::OIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 5092 /* oihl */, SystemZ::OIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 5097 /* oilf */, SystemZ::OILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 5102 /* oilh */, SystemZ::OILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 5107 /* oill */, SystemZ::OILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 5112 /* oiy */, SystemZ::OIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 5116 /* or */, SystemZ::OR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5119 /* ork */, SystemZ::ORK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 5123 /* oy */, SystemZ::OY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5126 /* pfd */, SystemZ::PFD, Convert__U4Imm1_0__BDXAddr64Disp203_1, 0, { MCK_U4Imm, MCK_BDXAddr64Disp20 }, },
  { 5130 /* pfdrl */, SystemZ::PFDRL, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 5136 /* popcnt */, SystemZ::POPCNT, Convert__GR641_0__GR641_1, Feature_FeaturePopulationCount, { MCK_GR64, MCK_GR64 }, },
  { 5143 /* ppa */, SystemZ::PPA, Convert__GR641_0__GR641_1__U4Imm1_2, Feature_FeatureProcessorAssist, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 5147 /* risbg */, SystemZ::RISBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 5153 /* risbgn */, SystemZ::RISBGN, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 5160 /* risbhg */, SystemZ::RISBHG, Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GRH32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 5167 /* risblg */, SystemZ::RISBLG, Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GR32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 5174 /* rll */, SystemZ::RLL, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 5178 /* rllg */, SystemZ::RLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 5183 /* rnsbg */, SystemZ::RNSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 5189 /* rosbg */, SystemZ::ROSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 5195 /* rxsbg */, SystemZ::RXSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 5201 /* s */, SystemZ::S, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 5203 /* sdb */, SystemZ::SDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 5207 /* sdbr */, SystemZ::SDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 5212 /* seb */, SystemZ::SEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 5216 /* sebr */, SystemZ::SEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 5221 /* sg */, SystemZ::SG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5224 /* sgf */, SystemZ::SGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5228 /* sgfr */, SystemZ::SGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 5233 /* sgr */, SystemZ::SGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5237 /* sgrk */, SystemZ::SGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 5242 /* sh */, SystemZ::SH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 5245 /* shy */, SystemZ::SHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5249 /* sl */, SystemZ::SL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 5252 /* sla */, SystemZ::SLA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 5256 /* slak */, SystemZ::SLAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 5261 /* slb */, SystemZ::SLB, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5265 /* slbg */, SystemZ::SLBG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5270 /* slbgr */, SystemZ::SLBGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5276 /* slbr */, SystemZ::SLBR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5281 /* slfi */, SystemZ::SLFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 5286 /* slg */, SystemZ::SLG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5290 /* slgf */, SystemZ::SLGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5295 /* slgfi */, SystemZ::SLGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 5301 /* slgfr */, SystemZ::SLGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 5307 /* slgr */, SystemZ::SLGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5312 /* slgrk */, SystemZ::SLGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 5318 /* sll */, SystemZ::SLL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 5322 /* sllg */, SystemZ::SLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 5327 /* sllk */, SystemZ::SLLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 5332 /* slr */, SystemZ::SLR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5336 /* slrk */, SystemZ::SLRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 5341 /* sly */, SystemZ::SLY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5345 /* sqdb */, SystemZ::SQDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 5350 /* sqdbr */, SystemZ::SQDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 5356 /* sqeb */, SystemZ::SQEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 5361 /* sqebr */, SystemZ::SQEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 5367 /* sqxbr */, SystemZ::SQXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 5373 /* sr */, SystemZ::SR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5376 /* sra */, SystemZ::SRA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 5380 /* srag */, SystemZ::SRAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 5385 /* srak */, SystemZ::SRAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 5390 /* srk */, SystemZ::SRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 5394 /* srl */, SystemZ::SRL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 5398 /* srlg */, SystemZ::SRLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 5403 /* srlk */, SystemZ::SRLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 5408 /* srst */, SystemZ::SRST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5413 /* st */, SystemZ::ST, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 5416 /* stc */, SystemZ::STC, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 5420 /* stch */, SystemZ::STCH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5425 /* stck */, SystemZ::STCK, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 5430 /* stcke */, SystemZ::STCKE, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 5436 /* stckf */, SystemZ::STCKF, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 5442 /* stcy */, SystemZ::STCY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5447 /* std */, SystemZ::STD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 5451 /* stdy */, SystemZ::STDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 5456 /* ste */, SystemZ::STE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 5460 /* stey */, SystemZ::STEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 5465 /* stfh */, SystemZ::STFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5470 /* stfle */, SystemZ::STFLE, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 5476 /* stg */, SystemZ::STG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5480 /* stgrl */, SystemZ::STGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 5486 /* sth */, SystemZ::STH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 5490 /* sthh */, SystemZ::STHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5495 /* sthrl */, SystemZ::STHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 5501 /* sthy */, SystemZ::STHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5506 /* stm */, SystemZ::STM, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 5510 /* stmg */, SystemZ::STMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5515 /* stmh */, SystemZ::STMH, Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5520 /* stmy */, SystemZ::STMY, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5525 /* stoc */, SystemZ::AsmSTOC, Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5530 /* stoce */, SystemZ::AsmESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5536 /* stocg */, SystemZ::AsmSTOCG, Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5542 /* stocge */, SystemZ::AsmESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5549 /* stocgh */, SystemZ::AsmHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5556 /* stocghe */, SystemZ::AsmHESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5564 /* stocgl */, SystemZ::AsmLSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5571 /* stocgle */, SystemZ::AsmLESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5579 /* stocglh */, SystemZ::AsmLHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5587 /* stocgm */, SystemZ::AsmLAltSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5594 /* stocgne */, SystemZ::AsmNESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5602 /* stocgnh */, SystemZ::AsmNHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5610 /* stocgnhe */, SystemZ::AsmNHESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5619 /* stocgnl */, SystemZ::AsmNLSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5627 /* stocgnle */, SystemZ::AsmNLESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5636 /* stocgnlh */, SystemZ::AsmNLHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5645 /* stocgnm */, SystemZ::AsmNLAltSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5653 /* stocgno */, SystemZ::AsmNOSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5661 /* stocgnp */, SystemZ::AsmNHAltSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5669 /* stocgnz */, SystemZ::AsmNEAltSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5677 /* stocgo */, SystemZ::AsmOSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5684 /* stocgp */, SystemZ::AsmHAltSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5691 /* stocgz */, SystemZ::AsmEAltSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5698 /* stoch */, SystemZ::AsmHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5704 /* stoche */, SystemZ::AsmHESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5711 /* stocl */, SystemZ::AsmLSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5717 /* stocle */, SystemZ::AsmLESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5724 /* stoclh */, SystemZ::AsmLHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5731 /* stocm */, SystemZ::AsmLAltSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5737 /* stocne */, SystemZ::AsmNESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5744 /* stocnh */, SystemZ::AsmNHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5751 /* stocnhe */, SystemZ::AsmNHESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5759 /* stocnl */, SystemZ::AsmNLSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5766 /* stocnle */, SystemZ::AsmNLESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5774 /* stocnlh */, SystemZ::AsmNLHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5782 /* stocnm */, SystemZ::AsmNLAltSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5789 /* stocno */, SystemZ::AsmNOSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5796 /* stocnp */, SystemZ::AsmNHAltSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5803 /* stocnz */, SystemZ::AsmNEAltSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5810 /* stoco */, SystemZ::AsmOSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5816 /* stocp */, SystemZ::AsmHAltSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5822 /* stocz */, SystemZ::AsmEAltSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5828 /* strl */, SystemZ::STRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 5833 /* strv */, SystemZ::STRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5838 /* strvg */, SystemZ::STRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5844 /* strvh */, SystemZ::STRVH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5850 /* sty */, SystemZ::STY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5854 /* svc */, SystemZ::SVC, Convert__U8Imm1_0, 0, { MCK_U8Imm }, },
  { 5858 /* sxbr */, SystemZ::SXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 5863 /* sy */, SystemZ::SY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5866 /* tabort */, SystemZ::TABORT, Convert__BDAddr64Disp122_0, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12 }, },
  { 5873 /* tbegin */, SystemZ::TBEGIN, Convert__BDAddr64Disp122_0__U16Imm1_1, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 5880 /* tbeginc */, SystemZ::TBEGINC, Convert__BDAddr64Disp122_0__U16Imm1_1, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 5888 /* tcdb */, SystemZ::TCDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 5893 /* tceb */, SystemZ::TCEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 5898 /* tcxb */, SystemZ::TCXB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 5903 /* tend */, SystemZ::TEND, Convert_NoOperands, Feature_FeatureTransactionalExecution, {  }, },
  { 5908 /* tm */, SystemZ::TM, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 5911 /* tmh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 5915 /* tmhh */, SystemZ::TMHH, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 5920 /* tmhl */, SystemZ::TMHL, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 5925 /* tml */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 5929 /* tmlh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 5934 /* tmll */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 5939 /* tmy */, SystemZ::TMY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 5943 /* vab */, SystemZ::VAB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5947 /* vaccb */, SystemZ::VACCB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5953 /* vacccq */, SystemZ::VACCCQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5960 /* vaccf */, SystemZ::VACCF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5966 /* vaccg */, SystemZ::VACCG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5972 /* vacch */, SystemZ::VACCH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5978 /* vaccq */, SystemZ::VACCQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5984 /* vacq */, SystemZ::VACQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5989 /* vaf */, SystemZ::VAF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5993 /* vag */, SystemZ::VAG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 5997 /* vah */, SystemZ::VAH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6001 /* vaq */, SystemZ::VAQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6005 /* vavgb */, SystemZ::VAVGB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6011 /* vavgf */, SystemZ::VAVGF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6017 /* vavgg */, SystemZ::VAVGG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6023 /* vavgh */, SystemZ::VAVGH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6029 /* vavglb */, SystemZ::VAVGLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6036 /* vavglf */, SystemZ::VAVGLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6043 /* vavglg */, SystemZ::VAVGLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6050 /* vavglh */, SystemZ::VAVGLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6057 /* vcdgb */, SystemZ::VCDGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 6063 /* vcdlgb */, SystemZ::VCDLGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 6070 /* vceqb */, SystemZ::VCEQB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6076 /* vceqbs */, SystemZ::VCEQBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6083 /* vceqf */, SystemZ::VCEQF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6089 /* vceqfs */, SystemZ::VCEQFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6096 /* vceqg */, SystemZ::VCEQG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6102 /* vceqgs */, SystemZ::VCEQGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6109 /* vceqh */, SystemZ::VCEQH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6115 /* vceqhs */, SystemZ::VCEQHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6122 /* vcgdb */, SystemZ::VCGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 6128 /* vchb */, SystemZ::VCHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6133 /* vchbs */, SystemZ::VCHBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6139 /* vchf */, SystemZ::VCHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6144 /* vchfs */, SystemZ::VCHFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6150 /* vchg */, SystemZ::VCHG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6155 /* vchgs */, SystemZ::VCHGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6161 /* vchh */, SystemZ::VCHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6166 /* vchhs */, SystemZ::VCHHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6172 /* vchlb */, SystemZ::VCHLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6178 /* vchlbs */, SystemZ::VCHLBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6185 /* vchlf */, SystemZ::VCHLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6191 /* vchlfs */, SystemZ::VCHLFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6198 /* vchlg */, SystemZ::VCHLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6204 /* vchlgs */, SystemZ::VCHLGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6211 /* vchlh */, SystemZ::VCHLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6217 /* vchlhs */, SystemZ::VCHLHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6224 /* vcksm */, SystemZ::VCKSM, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6230 /* vclgdb */, SystemZ::VCLGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 6237 /* vclzb */, SystemZ::VCLZB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6243 /* vclzf */, SystemZ::VCLZF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6249 /* vclzg */, SystemZ::VCLZG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6255 /* vclzh */, SystemZ::VCLZH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6261 /* vctzb */, SystemZ::VCTZB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6267 /* vctzf */, SystemZ::VCTZF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6273 /* vctzg */, SystemZ::VCTZG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6279 /* vctzh */, SystemZ::VCTZH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6285 /* vecb */, SystemZ::VECB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6290 /* vecf */, SystemZ::VECF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6295 /* vecg */, SystemZ::VECG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6300 /* vech */, SystemZ::VECH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6305 /* veclb */, SystemZ::VECLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6311 /* veclf */, SystemZ::VECLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6317 /* veclg */, SystemZ::VECLG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6323 /* veclh */, SystemZ::VECLH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6329 /* verimb */, SystemZ::VERIMB, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 6336 /* verimf */, SystemZ::VERIMF, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 6343 /* verimg */, SystemZ::VERIMG, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 6350 /* verimh */, SystemZ::VERIMH, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 6357 /* verllb */, SystemZ::VERLLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6364 /* verllf */, SystemZ::VERLLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6371 /* verllg */, SystemZ::VERLLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6378 /* verllh */, SystemZ::VERLLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6385 /* verllvb */, SystemZ::VERLLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6393 /* verllvf */, SystemZ::VERLLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6401 /* verllvg */, SystemZ::VERLLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6409 /* verllvh */, SystemZ::VERLLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6417 /* veslb */, SystemZ::VESLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6423 /* veslf */, SystemZ::VESLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6429 /* veslg */, SystemZ::VESLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6435 /* veslh */, SystemZ::VESLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6441 /* veslvb */, SystemZ::VESLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6448 /* veslvf */, SystemZ::VESLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6455 /* veslvg */, SystemZ::VESLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6462 /* veslvh */, SystemZ::VESLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6469 /* vesrab */, SystemZ::VESRAB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6476 /* vesraf */, SystemZ::VESRAF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6483 /* vesrag */, SystemZ::VESRAG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6490 /* vesrah */, SystemZ::VESRAH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6497 /* vesravb */, SystemZ::VESRAVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6505 /* vesravf */, SystemZ::VESRAVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6513 /* vesravg */, SystemZ::VESRAVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6521 /* vesravh */, SystemZ::VESRAVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6529 /* vesrlb */, SystemZ::VESRLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6536 /* vesrlf */, SystemZ::VESRLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6543 /* vesrlg */, SystemZ::VESRLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6550 /* vesrlh */, SystemZ::VESRLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 6557 /* vesrlvb */, SystemZ::VESRLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6565 /* vesrlvf */, SystemZ::VESRLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6573 /* vesrlvg */, SystemZ::VESRLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6581 /* vesrlvh */, SystemZ::VESRLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6589 /* vfadb */, SystemZ::VFADB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6595 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6595 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 6601 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6601 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 6608 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6608 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 6614 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6614 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 6621 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6621 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 6627 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6627 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 6634 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6634 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 6641 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6641 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 6649 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6649 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 6656 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6656 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 6664 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6664 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 6671 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6671 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 6679 /* vfcedb */, SystemZ::VFCEDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6686 /* vfcedbs */, SystemZ::VFCEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6694 /* vfchdb */, SystemZ::VFCHDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6701 /* vfchdbs */, SystemZ::VFCHDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6709 /* vfchedb */, SystemZ::VFCHEDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6717 /* vfchedbs */, SystemZ::VFCHEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6726 /* vfddb */, SystemZ::VFDDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6732 /* vfeeb */, SystemZ::VFEEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6738 /* vfeebs */, SystemZ::VFEEBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6745 /* vfeef */, SystemZ::VFEEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6751 /* vfeefs */, SystemZ::VFEEFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6758 /* vfeeh */, SystemZ::VFEEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6764 /* vfeehs */, SystemZ::VFEEHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6771 /* vfeezb */, SystemZ::VFEEZB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6778 /* vfeezbs */, SystemZ::VFEEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6786 /* vfeezf */, SystemZ::VFEEZF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6793 /* vfeezfs */, SystemZ::VFEEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6801 /* vfeezh */, SystemZ::VFEEZH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6808 /* vfeezhs */, SystemZ::VFEEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6816 /* vfeneb */, SystemZ::VFENEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6823 /* vfenebs */, SystemZ::VFENEBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6831 /* vfenef */, SystemZ::VFENEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6838 /* vfenefs */, SystemZ::VFENEFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6846 /* vfeneh */, SystemZ::VFENEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6853 /* vfenehs */, SystemZ::VFENEHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6861 /* vfenezb */, SystemZ::VFENEZB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6869 /* vfenezbs */, SystemZ::VFENEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6878 /* vfenezf */, SystemZ::VFENEZF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6886 /* vfenezfs */, SystemZ::VFENEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6895 /* vfenezh */, SystemZ::VFENEZH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6903 /* vfenezhs */, SystemZ::VFENEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6912 /* vfidb */, SystemZ::VFIDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 6918 /* vflcdb */, SystemZ::VFLCDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6925 /* vflndb */, SystemZ::VFLNDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6932 /* vflpdb */, SystemZ::VFLPDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6939 /* vfmadb */, SystemZ::VFMADB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6946 /* vfmdb */, SystemZ::VFMDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6952 /* vfmsdb */, SystemZ::VFMSDB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6959 /* vfsdb */, SystemZ::VFSDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 6965 /* vfsqdb */, SystemZ::VFSQDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 6972 /* vftcidb */, SystemZ::VFTCIDB, Convert__VR1281_0__VR1281_1__U12Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U12Imm }, },
  { 6980 /* vgbm */, SystemZ::VGBM, Convert__VR1281_0__U16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_U16Imm }, },
  { 6985 /* vgef */, SystemZ::VGEF, Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 6990 /* vgeg */, SystemZ::VGEG, Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 6995 /* vgfmab */, SystemZ::VGFMAB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7002 /* vgfmaf */, SystemZ::VGFMAF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7009 /* vgfmag */, SystemZ::VGFMAG, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7016 /* vgfmah */, SystemZ::VGFMAH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7023 /* vgfmb */, SystemZ::VGFMB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7029 /* vgfmf */, SystemZ::VGFMF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7035 /* vgfmg */, SystemZ::VGFMG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7041 /* vgfmh */, SystemZ::VGFMH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7047 /* vgmb */, SystemZ::VGMB, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 7052 /* vgmf */, SystemZ::VGMF, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 7057 /* vgmg */, SystemZ::VGMG, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 7062 /* vgmh */, SystemZ::VGMH, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 7067 /* vistrb */, SystemZ::VISTRB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7074 /* vistrbs */, SystemZ::VISTRBS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7082 /* vistrf */, SystemZ::VISTRF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7089 /* vistrfs */, SystemZ::VISTRFS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7097 /* vistrh */, SystemZ::VISTRH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7104 /* vistrhs */, SystemZ::VISTRHS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7112 /* vl */, SystemZ::VL, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 7115 /* vlbb */, SystemZ::VLBB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 7120 /* vlcb */, SystemZ::VLCB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7125 /* vlcf */, SystemZ::VLCF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7130 /* vlcg */, SystemZ::VLCG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7135 /* vlch */, SystemZ::VLCH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7140 /* vldeb */, SystemZ::VLDEB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7146 /* vleb */, SystemZ::VLEB, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 7151 /* vledb */, SystemZ::VLEDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 7157 /* vlef */, SystemZ::VLEF, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 7162 /* vleg */, SystemZ::VLEG, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 7167 /* vleh */, SystemZ::VLEH, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 7172 /* vleib */, SystemZ::VLEIB, Convert__VR1281_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U4Imm }, },
  { 7178 /* vleif */, SystemZ::VLEIF, Convert__VR1281_0__Tie0__S16Imm1_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U2Imm }, },
  { 7184 /* vleig */, SystemZ::VLEIG, Convert__VR1281_0__Tie0__S16Imm1_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U1Imm }, },
  { 7190 /* vleih */, SystemZ::VLEIH, Convert__VR1281_0__Tie0__S16Imm1_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U3Imm }, },
  { 7196 /* vlgvb */, SystemZ::VLGVB, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7202 /* vlgvf */, SystemZ::VLGVF, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7208 /* vlgvg */, SystemZ::VLGVG, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7214 /* vlgvh */, SystemZ::VLGVH, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7220 /* vll */, SystemZ::VLL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 7224 /* vllezb */, SystemZ::VLLEZB, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 7231 /* vllezf */, SystemZ::VLLEZF, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 7238 /* vllezg */, SystemZ::VLLEZG, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 7245 /* vllezh */, SystemZ::VLLEZH, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 7252 /* vlm */, SystemZ::VLM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 7256 /* vlpb */, SystemZ::VLPB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7261 /* vlpf */, SystemZ::VLPF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7266 /* vlpg */, SystemZ::VLPG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7271 /* vlph */, SystemZ::VLPH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7276 /* vlr */, SystemZ::VLR, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7280 /* vlrepb */, SystemZ::VLREPB, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 7287 /* vlrepf */, SystemZ::VLREPF, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 7294 /* vlrepg */, SystemZ::VLREPG, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 7301 /* vlreph */, SystemZ::VLREPH, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 7308 /* vlvgb */, SystemZ::VLVGB, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 7314 /* vlvgf */, SystemZ::VLVGF, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 7320 /* vlvgg */, SystemZ::VLVGG, Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR64, MCK_BDAddr32Disp12 }, },
  { 7326 /* vlvgh */, SystemZ::VLVGH, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 7332 /* vlvgp */, SystemZ::VLVGP, Convert__VR1281_0__GR641_1__GR641_2, Feature_FeatureVector, { MCK_VR128, MCK_GR64, MCK_GR64 }, },
  { 7338 /* vmaeb */, SystemZ::VMAEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7344 /* vmaef */, SystemZ::VMAEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7350 /* vmaeh */, SystemZ::VMAEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7356 /* vmahb */, SystemZ::VMAHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7362 /* vmahf */, SystemZ::VMAHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7368 /* vmahh */, SystemZ::VMAHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7374 /* vmalb */, SystemZ::VMALB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7380 /* vmaleb */, SystemZ::VMALEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7387 /* vmalef */, SystemZ::VMALEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7394 /* vmaleh */, SystemZ::VMALEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7401 /* vmalf */, SystemZ::VMALF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7407 /* vmalhb */, SystemZ::VMALHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7414 /* vmalhf */, SystemZ::VMALHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7421 /* vmalhh */, SystemZ::VMALHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7428 /* vmalhw */, SystemZ::VMALHW, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7435 /* vmalob */, SystemZ::VMALOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7442 /* vmalof */, SystemZ::VMALOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7449 /* vmaloh */, SystemZ::VMALOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7456 /* vmaob */, SystemZ::VMAOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7462 /* vmaof */, SystemZ::VMAOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7468 /* vmaoh */, SystemZ::VMAOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7474 /* vmeb */, SystemZ::VMEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7479 /* vmef */, SystemZ::VMEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7484 /* vmeh */, SystemZ::VMEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7489 /* vmhb */, SystemZ::VMHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7494 /* vmhf */, SystemZ::VMHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7499 /* vmhh */, SystemZ::VMHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7504 /* vmlb */, SystemZ::VMLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7509 /* vmleb */, SystemZ::VMLEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7515 /* vmlef */, SystemZ::VMLEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7521 /* vmleh */, SystemZ::VMLEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7527 /* vmlf */, SystemZ::VMLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7532 /* vmlhb */, SystemZ::VMLHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7538 /* vmlhf */, SystemZ::VMLHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7544 /* vmlhh */, SystemZ::VMLHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7550 /* vmlhw */, SystemZ::VMLHW, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7556 /* vmlob */, SystemZ::VMLOB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7562 /* vmlof */, SystemZ::VMLOF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7568 /* vmloh */, SystemZ::VMLOH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7574 /* vmnb */, SystemZ::VMNB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7579 /* vmnf */, SystemZ::VMNF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7584 /* vmng */, SystemZ::VMNG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7589 /* vmnh */, SystemZ::VMNH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7594 /* vmnlb */, SystemZ::VMNLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7600 /* vmnlf */, SystemZ::VMNLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7606 /* vmnlg */, SystemZ::VMNLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7612 /* vmnlh */, SystemZ::VMNLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7618 /* vmob */, SystemZ::VMOB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7623 /* vmof */, SystemZ::VMOF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7628 /* vmoh */, SystemZ::VMOH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7633 /* vmrhb */, SystemZ::VMRHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7639 /* vmrhf */, SystemZ::VMRHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7645 /* vmrhg */, SystemZ::VMRHG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7651 /* vmrhh */, SystemZ::VMRHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7657 /* vmrlb */, SystemZ::VMRLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7663 /* vmrlf */, SystemZ::VMRLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7669 /* vmrlg */, SystemZ::VMRLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7675 /* vmrlh */, SystemZ::VMRLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7681 /* vmxb */, SystemZ::VMXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7686 /* vmxf */, SystemZ::VMXF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7691 /* vmxg */, SystemZ::VMXG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7696 /* vmxh */, SystemZ::VMXH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7701 /* vmxlb */, SystemZ::VMXLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7707 /* vmxlf */, SystemZ::VMXLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7713 /* vmxlg */, SystemZ::VMXLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7719 /* vmxlh */, SystemZ::VMXLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7725 /* vn */, SystemZ::VN, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7728 /* vnc */, SystemZ::VNC, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7732 /* vno */, SystemZ::VNO, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7736 /* vo */, SystemZ::VO, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7739 /* vone */, SystemZ::VONE, Convert__VR1281_0, Feature_FeatureVector, { MCK_VR128 }, },
  { 7744 /* vpdi */, SystemZ::VPDI, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7749 /* vperm */, SystemZ::VPERM, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7755 /* vpkf */, SystemZ::VPKF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7760 /* vpkg */, SystemZ::VPKG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7765 /* vpkh */, SystemZ::VPKH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7770 /* vpklsf */, SystemZ::VPKLSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7777 /* vpklsfs */, SystemZ::VPKLSFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7785 /* vpklsg */, SystemZ::VPKLSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7792 /* vpklsgs */, SystemZ::VPKLSGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7800 /* vpklsh */, SystemZ::VPKLSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7807 /* vpklshs */, SystemZ::VPKLSHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7815 /* vpksf */, SystemZ::VPKSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7821 /* vpksfs */, SystemZ::VPKSFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7828 /* vpksg */, SystemZ::VPKSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7834 /* vpksgs */, SystemZ::VPKSGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7841 /* vpksh */, SystemZ::VPKSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7847 /* vpkshs */, SystemZ::VPKSHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7854 /* vpopct */, SystemZ::VPOPCT, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7861 /* vrepb */, SystemZ::VREPB, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 7867 /* vrepf */, SystemZ::VREPF, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 7873 /* vrepg */, SystemZ::VREPG, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 7879 /* vreph */, SystemZ::VREPH, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 7885 /* vrepib */, SystemZ::VREPIB, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 7892 /* vrepif */, SystemZ::VREPIF, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 7899 /* vrepig */, SystemZ::VREPIG, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 7906 /* vrepih */, SystemZ::VREPIH, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 7913 /* vsb */, SystemZ::VSB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7917 /* vsbcbiq */, SystemZ::VSBCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7925 /* vsbiq */, SystemZ::VSBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7931 /* vscbib */, SystemZ::VSCBIB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7938 /* vscbif */, SystemZ::VSCBIF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7945 /* vscbig */, SystemZ::VSCBIG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7952 /* vscbih */, SystemZ::VSCBIH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7959 /* vscbiq */, SystemZ::VSCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7966 /* vscef */, SystemZ::VSCEF, Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 7972 /* vsceg */, SystemZ::VSCEG, Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 7978 /* vsegb */, SystemZ::VSEGB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7984 /* vsegf */, SystemZ::VSEGF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7990 /* vsegh */, SystemZ::VSEGH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7996 /* vsel */, SystemZ::VSEL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8001 /* vsf */, SystemZ::VSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8005 /* vsg */, SystemZ::VSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8009 /* vsh */, SystemZ::VSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8013 /* vsl */, SystemZ::VSL, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8017 /* vslb */, SystemZ::VSLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8022 /* vsldb */, SystemZ::VSLDB, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 8028 /* vsq */, SystemZ::VSQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8032 /* vsra */, SystemZ::VSRA, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8037 /* vsrab */, SystemZ::VSRAB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8043 /* vsrl */, SystemZ::VSRL, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8048 /* vsrlb */, SystemZ::VSRLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8054 /* vst */, SystemZ::VST, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 8058 /* vsteb */, SystemZ::VSTEB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 8064 /* vstef */, SystemZ::VSTEF, Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 8070 /* vsteg */, SystemZ::VSTEG, Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 8076 /* vsteh */, SystemZ::VSTEH, Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 8082 /* vstl */, SystemZ::VSTL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 8087 /* vstm */, SystemZ::VSTM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 8092 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8092 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8099 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8099 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8107 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8107 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8114 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8114 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8122 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8122 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8129 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8129 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8137 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8137 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8145 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8145 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8154 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8154 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8162 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8162 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8171 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8171 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8179 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8179 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8188 /* vsumb */, SystemZ::VSUMB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8194 /* vsumgf */, SystemZ::VSUMGF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8201 /* vsumgh */, SystemZ::VSUMGH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8208 /* vsumh */, SystemZ::VSUMH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8214 /* vsumqf */, SystemZ::VSUMQF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8221 /* vsumqg */, SystemZ::VSUMQG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8228 /* vtm */, SystemZ::VTM, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8232 /* vuphb */, SystemZ::VUPHB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8238 /* vuphf */, SystemZ::VUPHF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8244 /* vuphh */, SystemZ::VUPHH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8250 /* vuplb */, SystemZ::VUPLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8256 /* vuplf */, SystemZ::VUPLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8262 /* vuplhb */, SystemZ::VUPLHB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8269 /* vuplhf */, SystemZ::VUPLHF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8276 /* vuplhh */, SystemZ::VUPLHH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8283 /* vuplhw */, SystemZ::VUPLHW, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8290 /* vupllb */, SystemZ::VUPLLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8297 /* vupllf */, SystemZ::VUPLLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8304 /* vupllh */, SystemZ::VUPLLH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8311 /* vx */, SystemZ::VX, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8314 /* vzero */, SystemZ::VZERO, Convert__VR1281_0, Feature_FeatureVector, { MCK_VR128 }, },
  { 8320 /* wcdgb */, SystemZ::WCDGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 8326 /* wcdlgb */, SystemZ::WCDLGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 8333 /* wcgdb */, SystemZ::WCGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 8339 /* wclgdb */, SystemZ::WCLGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 8346 /* wfadb */, SystemZ::WFADB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 8352 /* wfcdb */, SystemZ::WFCDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 8358 /* wfcedb */, SystemZ::WFCEDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 8365 /* wfcedbs */, SystemZ::WFCEDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 8373 /* wfchdb */, SystemZ::WFCHDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 8380 /* wfchdbs */, SystemZ::WFCHDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 8388 /* wfchedb */, SystemZ::WFCHEDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 8396 /* wfchedbs */, SystemZ::WFCHEDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 8405 /* wfddb */, SystemZ::WFDDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 8411 /* wfidb */, SystemZ::WFIDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 8417 /* wfkdb */, SystemZ::WFKDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 8423 /* wflcdb */, SystemZ::WFLCDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 8430 /* wflndb */, SystemZ::WFLNDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 8437 /* wflpdb */, SystemZ::WFLPDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 8444 /* wfmadb */, SystemZ::WFMADB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 8451 /* wfmdb */, SystemZ::WFMDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 8457 /* wfmsdb */, SystemZ::WFMSDB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 8464 /* wfsdb */, SystemZ::WFSDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 8470 /* wfsqdb */, SystemZ::WFSQDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 8477 /* wftcidb */, SystemZ::WFTCIDB, Convert__VR641_0__VR641_1__U12Imm1_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U12Imm }, },
  { 8485 /* wldeb */, SystemZ::WLDEB, Convert__VR641_0__VR321_1, Feature_FeatureVector, { MCK_VR64, MCK_VR32 }, },
  { 8491 /* wledb */, SystemZ::WLEDB, Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR32, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 8497 /* x */, SystemZ::X, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 8499 /* xc */, SystemZ::XC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 8502 /* xg */, SystemZ::XG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8505 /* xgr */, SystemZ::XGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 8509 /* xgrk */, SystemZ::XGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8514 /* xi */, SystemZ::XI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 8517 /* xihf */, SystemZ::XIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 8522 /* xilf */, SystemZ::XILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 8527 /* xiy */, SystemZ::XIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 8531 /* xr */, SystemZ::XR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 8534 /* xrk */, SystemZ::XRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8538 /* xy */, SystemZ::XY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
};

bool SystemZAsmParser::
mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) {
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned SystemZAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst, uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 6) {
    ErrorInfo = 6;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((SystemZOperand&)*Operands[0]).getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  uint64_t MissingFeatures = ~0ULL;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 5; ++FormalIdx) {
      auto Formal = static_cast<MatchClassKind>(it->Classes[FormalIdx]);
      if (ActualIdx >= Operands.size()) {
        OperandsValid = (Formal == InvalidMatchClass) || isSubclass(Formal, OptionalMatchClass);
        if (!OperandsValid) ErrorInfo = ActualIdx;
        break;
      }
      MCParsedAsmOperand &Actual = *Operands[ActualIdx];
      unsigned Diag = validateOperandClass(Actual, Formal);
      if (Diag == Match_Success) {
        ++ActualIdx;
        continue;
      }
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag == Match_InvalidOperand) {
        Diag = validateTargetOperandClass(Actual, Formal);
        if (Diag == Match_Success) {
          ++ActualIdx;
          continue;
        }
      }
      // If current formal operand wasn't matched and it is optional
      // then try to match next formal operand
      if (Diag == Match_InvalidOperand && isSubclass(Formal, OptionalMatchClass)) {
        continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= ActualIdx)) {
        ErrorInfo = ActualIdx;
        // InvalidOperand is the default. Prefer specificity.
        if (Diag != Match_InvalidOperand)
          RetCode = Diag;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      uint64_t NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      if (countPopulation(NewMissingFeatures) <=
          countPopulation(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    if (matchingInlineAsm) {
      Inst.setOpcode(it->Opcode);
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    unsigned MatchResult;
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint16_t RequiredFeatures;
    uint16_t Mnemonic;
    uint8_t Class;
    uint8_t OperandMask;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[2069] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 0 /* a */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 0 /* a */, MCK_GR32, 1 /* 0 */ },
  { 0, 2 /* adb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2 /* adb */, MCK_FP64, 1 /* 0 */ },
  { 0, 6 /* adbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 11 /* aeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 11 /* aeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 15 /* aebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 20 /* afi */, MCK_GR32, 1 /* 0 */ },
  { 0, 24 /* ag */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 24 /* ag */, MCK_GR64, 1 /* 0 */ },
  { 0, 27 /* agf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 27 /* agf */, MCK_GR64, 1 /* 0 */ },
  { 0, 31 /* agfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 36 /* agfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 36 /* agfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 41 /* aghi */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 46 /* aghik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 52 /* agr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 56 /* agrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 61 /* agsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 66 /* ah */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 66 /* ah */, MCK_GR32, 1 /* 0 */ },
  { 0, 69 /* ahi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 73 /* ahik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 78 /* ahy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 78 /* ahy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 82 /* aih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 86 /* al */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 86 /* al */, MCK_GR32, 1 /* 0 */ },
  { 0, 89 /* alc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 89 /* alc */, MCK_GR32, 1 /* 0 */ },
  { 0, 93 /* alcg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 93 /* alcg */, MCK_GR64, 1 /* 0 */ },
  { 0, 98 /* alcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 104 /* alcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 109 /* alfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 114 /* alg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 114 /* alg */, MCK_GR64, 1 /* 0 */ },
  { 0, 118 /* algf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 118 /* algf */, MCK_GR64, 1 /* 0 */ },
  { 0, 123 /* algfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 129 /* algfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 129 /* algfr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 135 /* alghsik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 143 /* algr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 148 /* algrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureDistinctOps, 154 /* alhsik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 161 /* alr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 165 /* alrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 170 /* aly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 170 /* aly */, MCK_GR32, 1 /* 0 */ },
  { 0, 174 /* ar */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 177 /* ark */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 181 /* asi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 185 /* axbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 190 /* ay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 190 /* ay */, MCK_GR32, 1 /* 0 */ },
  { 0, 193 /* basr */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 193 /* basr */, MCK_GR64, 1 /* 0 */ },
  { 0, 198 /* bc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 201 /* bcr */, MCK_GR64, 2 /* 1 */ },
  { 0, 205 /* ber */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 209 /* bher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 214 /* bhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 218 /* bler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 223 /* blhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 228 /* blr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 232 /* bmr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 236 /* bner */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 241 /* bnher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 247 /* bnhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 252 /* bnler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 258 /* bnlhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 264 /* bnlr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 269 /* bnmr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 274 /* bnor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 279 /* bnpr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 284 /* bnzr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 289 /* bor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 293 /* bpr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 297 /* br */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 300 /* bras */, MCK_GR64, 1 /* 0 */ },
  { 0, 300 /* bras */, MCK_PCRelTLS16, 2 /* 1 */ },
  { 0, 305 /* brasl */, MCK_GR64, 1 /* 0 */ },
  { 0, 305 /* brasl */, MCK_PCRelTLS32, 2 /* 1 */ },
  { 0, 311 /* brc */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 315 /* brcl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 320 /* brct */, MCK_GR32, 1 /* 0 */ },
  { 0, 320 /* brct */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 325 /* brctg */, MCK_GR64, 1 /* 0 */ },
  { 0, 325 /* brctg */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 331 /* bzr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 335 /* c */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 335 /* c */, MCK_GR32, 1 /* 0 */ },
  { 0, 337 /* cdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 337 /* cdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 341 /* cdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 346 /* cdfbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 346 /* cdfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 352 /* cdgbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 352 /* cdgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 358 /* cdlfbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 358 /* cdlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 365 /* cdlgbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 365 /* cdlgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 372 /* ceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 372 /* ceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 376 /* cebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 381 /* cefbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 381 /* cefbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 387 /* cegbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 387 /* cegbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 393 /* celfbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 393 /* celfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 400 /* celgbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 400 /* celgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 407 /* cfdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 407 /* cfdbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 413 /* cfebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 413 /* cfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 419 /* cfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 423 /* cfxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 423 /* cfxbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 429 /* cg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 429 /* cg */, MCK_GR64, 1 /* 0 */ },
  { 0, 432 /* cgdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 432 /* cgdbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 438 /* cgebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 438 /* cgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 444 /* cgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 444 /* cgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 448 /* cgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 453 /* cgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 453 /* cgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 458 /* cgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 458 /* cgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 464 /* cgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 464 /* cgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 468 /* cghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 473 /* cghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 473 /* cghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 479 /* cghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 485 /* cgib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 485 /* cgib */, MCK_GR64, 1 /* 0 */ },
  { 0, 490 /* cgibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 490 /* cgibe */, MCK_GR64, 1 /* 0 */ },
  { 0, 496 /* cgibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 496 /* cgibh */, MCK_GR64, 1 /* 0 */ },
  { 0, 502 /* cgibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 502 /* cgibhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 509 /* cgibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 509 /* cgibl */, MCK_GR64, 1 /* 0 */ },
  { 0, 515 /* cgible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 515 /* cgible */, MCK_GR64, 1 /* 0 */ },
  { 0, 522 /* cgiblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 522 /* cgiblh */, MCK_GR64, 1 /* 0 */ },
  { 0, 529 /* cgibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 529 /* cgibne */, MCK_GR64, 1 /* 0 */ },
  { 0, 536 /* cgibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 536 /* cgibnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 543 /* cgibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 543 /* cgibnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 551 /* cgibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 551 /* cgibnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 558 /* cgibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 558 /* cgibnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 566 /* cgibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 566 /* cgibnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 574 /* cgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 574 /* cgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 579 /* cgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 579 /* cgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 585 /* cgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 585 /* cgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 591 /* cgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 591 /* cgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 598 /* cgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 598 /* cgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 604 /* cgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 604 /* cgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 611 /* cgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 611 /* cgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 618 /* cgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 618 /* cgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 625 /* cgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 625 /* cgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 632 /* cgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 632 /* cgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 640 /* cgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 640 /* cgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 647 /* cgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 647 /* cgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 655 /* cgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 655 /* cgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 663 /* cgit */, MCK_GR64, 1 /* 0 */ },
  { 0, 668 /* cgite */, MCK_GR64, 1 /* 0 */ },
  { 0, 674 /* cgith */, MCK_GR64, 1 /* 0 */ },
  { 0, 680 /* cgithe */, MCK_GR64, 1 /* 0 */ },
  { 0, 687 /* cgitl */, MCK_GR64, 1 /* 0 */ },
  { 0, 693 /* cgitle */, MCK_GR64, 1 /* 0 */ },
  { 0, 700 /* cgitlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 707 /* cgitne */, MCK_GR64, 1 /* 0 */ },
  { 0, 714 /* cgitnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 721 /* cgitnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 729 /* cgitnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 736 /* cgitnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 744 /* cgitnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 752 /* cgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 756 /* cgrb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 756 /* cgrb */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 761 /* cgrbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 761 /* cgrbe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 767 /* cgrbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 767 /* cgrbh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 773 /* cgrbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 773 /* cgrbhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 780 /* cgrbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 780 /* cgrbl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 786 /* cgrble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 786 /* cgrble */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 793 /* cgrblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 793 /* cgrblh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 800 /* cgrbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 800 /* cgrbne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 807 /* cgrbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 807 /* cgrbnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 814 /* cgrbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 814 /* cgrbnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 822 /* cgrbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 822 /* cgrbnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 829 /* cgrbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 829 /* cgrbnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 837 /* cgrbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 837 /* cgrbnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 845 /* cgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 845 /* cgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 850 /* cgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 850 /* cgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 856 /* cgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 856 /* cgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 862 /* cgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 862 /* cgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 869 /* cgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 869 /* cgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 875 /* cgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 875 /* cgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 882 /* cgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 882 /* cgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 889 /* cgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 889 /* cgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 896 /* cgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 896 /* cgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 903 /* cgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 903 /* cgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 911 /* cgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 911 /* cgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 918 /* cgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 918 /* cgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 926 /* cgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 926 /* cgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 934 /* cgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 934 /* cgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 939 /* cgrt */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 944 /* cgrte */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 950 /* cgrth */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 956 /* cgrthe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 963 /* cgrtl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 969 /* cgrtle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 976 /* cgrtlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 983 /* cgrtne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 990 /* cgrtnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 997 /* cgrtnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1005 /* cgrtnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1012 /* cgrtnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1020 /* cgrtnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1028 /* cgxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 1028 /* cgxbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1034 /* ch */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1034 /* ch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1037 /* chf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1037 /* chf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1041 /* chhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1047 /* chi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1051 /* chrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1051 /* chrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1056 /* chsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1061 /* chy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1061 /* chy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1065 /* cib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 1065 /* cib */, MCK_GR32, 1 /* 0 */ },
  { 0, 1069 /* cibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1069 /* cibe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1074 /* cibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1074 /* cibh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1079 /* cibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1079 /* cibhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1085 /* cibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1085 /* cibl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1090 /* cible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1090 /* cible */, MCK_GR32, 1 /* 0 */ },
  { 0, 1096 /* ciblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1096 /* ciblh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1102 /* cibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1102 /* cibne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1108 /* cibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1108 /* cibnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1114 /* cibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1114 /* cibnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1121 /* cibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1121 /* cibnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1127 /* cibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1127 /* cibnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1134 /* cibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1134 /* cibnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1141 /* cih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1145 /* cij */, MCK_GR32, 1 /* 0 */ },
  { 0, 1145 /* cij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1149 /* cije */, MCK_GR32, 1 /* 0 */ },
  { 0, 1149 /* cije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1154 /* cijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1154 /* cijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1159 /* cijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1159 /* cijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1165 /* cijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1165 /* cijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1170 /* cijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1170 /* cijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1176 /* cijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1176 /* cijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1182 /* cijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1182 /* cijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1188 /* cijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1188 /* cijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1194 /* cijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1194 /* cijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1201 /* cijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1201 /* cijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1207 /* cijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1207 /* cijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1214 /* cijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1214 /* cijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1221 /* cit */, MCK_GR32, 1 /* 0 */ },
  { 0, 1225 /* cite */, MCK_GR32, 1 /* 0 */ },
  { 0, 1230 /* cith */, MCK_GR32, 1 /* 0 */ },
  { 0, 1235 /* cithe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1241 /* citl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1246 /* citle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1252 /* citlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1258 /* citne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1264 /* citnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1270 /* citnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1277 /* citnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1283 /* citnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1290 /* citnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1297 /* cl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1297 /* cl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1300 /* clc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 1300 /* clc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1304 /* clfdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1304 /* clfdbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1311 /* clfebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1311 /* clfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 1318 /* clfhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1325 /* clfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1330 /* clfit */, MCK_GR32, 1 /* 0 */ },
  { 0, 1336 /* clfite */, MCK_GR32, 1 /* 0 */ },
  { 0, 1343 /* clfith */, MCK_GR32, 1 /* 0 */ },
  { 0, 1350 /* clfithe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1358 /* clfitl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1365 /* clfitle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1373 /* clfitlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1381 /* clfitne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1389 /* clfitnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1397 /* clfitnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1406 /* clfitnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1414 /* clfitnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1423 /* clfitnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1432 /* clfxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1432 /* clfxbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 1439 /* clg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1439 /* clg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1443 /* clgdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1443 /* clgdbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1450 /* clgebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1450 /* clgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1457 /* clgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1457 /* clgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1462 /* clgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1468 /* clgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1468 /* clgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1474 /* clgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1474 /* clgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1481 /* clghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1481 /* clghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1488 /* clghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1495 /* clgib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 1495 /* clgib */, MCK_GR64, 1 /* 0 */ },
  { 0, 1501 /* clgibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1501 /* clgibe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1508 /* clgibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1508 /* clgibh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1515 /* clgibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1515 /* clgibhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1523 /* clgibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1523 /* clgibl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1530 /* clgible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1530 /* clgible */, MCK_GR64, 1 /* 0 */ },
  { 0, 1538 /* clgiblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1538 /* clgiblh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1546 /* clgibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1546 /* clgibne */, MCK_GR64, 1 /* 0 */ },
  { 0, 1554 /* clgibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1554 /* clgibnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1562 /* clgibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1562 /* clgibnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1571 /* clgibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1571 /* clgibnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1579 /* clgibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1579 /* clgibnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1588 /* clgibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1588 /* clgibnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1597 /* clgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 1597 /* clgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1603 /* clgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 1603 /* clgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1610 /* clgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1610 /* clgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1617 /* clgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1617 /* clgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1625 /* clgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1625 /* clgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1632 /* clgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1632 /* clgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1640 /* clgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1640 /* clgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1648 /* clgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 1648 /* clgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1656 /* clgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1656 /* clgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1664 /* clgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1664 /* clgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1673 /* clgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1673 /* clgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1681 /* clgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1681 /* clgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1690 /* clgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1690 /* clgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1699 /* clgit */, MCK_GR64, 1 /* 0 */ },
  { 0, 1705 /* clgite */, MCK_GR64, 1 /* 0 */ },
  { 0, 1712 /* clgith */, MCK_GR64, 1 /* 0 */ },
  { 0, 1719 /* clgithe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1727 /* clgitl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1734 /* clgitle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1742 /* clgitlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1750 /* clgitne */, MCK_GR64, 1 /* 0 */ },
  { 0, 1758 /* clgitnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1766 /* clgitnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1775 /* clgitnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1783 /* clgitnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1792 /* clgitnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1801 /* clgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1806 /* clgrb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 1806 /* clgrb */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1812 /* clgrbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1812 /* clgrbe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1819 /* clgrbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1819 /* clgrbh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1826 /* clgrbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1826 /* clgrbhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1834 /* clgrbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1834 /* clgrbl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1841 /* clgrble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1841 /* clgrble */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1849 /* clgrblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1849 /* clgrblh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1857 /* clgrbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1857 /* clgrbne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1865 /* clgrbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1865 /* clgrbnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1873 /* clgrbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1873 /* clgrbnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1882 /* clgrbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1882 /* clgrbnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1890 /* clgrbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1890 /* clgrbnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1899 /* clgrbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1899 /* clgrbnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1908 /* clgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1908 /* clgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1914 /* clgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1914 /* clgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1921 /* clgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1921 /* clgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1928 /* clgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1928 /* clgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1936 /* clgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1936 /* clgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1943 /* clgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1943 /* clgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1951 /* clgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1951 /* clgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1959 /* clgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1959 /* clgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1967 /* clgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1967 /* clgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1975 /* clgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1975 /* clgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1984 /* clgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1984 /* clgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1992 /* clgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1992 /* clgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2001 /* clgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2001 /* clgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2010 /* clgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2010 /* clgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2016 /* clgrt */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2022 /* clgrte */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2029 /* clgrth */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2036 /* clgrthe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2044 /* clgrtl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2051 /* clgrtle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2059 /* clgrtlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2067 /* clgrtne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2075 /* clgrtnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2083 /* clgrtnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2092 /* clgrtnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2100 /* clgrtnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2109 /* clgrtnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 2118 /* clgxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2118 /* clgxbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2125 /* clhf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 2125 /* clhf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2130 /* clhhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2137 /* clhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2137 /* clhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2143 /* cli */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2147 /* clib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 2147 /* clib */, MCK_GR32, 1 /* 0 */ },
  { 0, 2152 /* clibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2152 /* clibe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2158 /* clibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2158 /* clibh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2164 /* clibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2164 /* clibhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2171 /* clibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2171 /* clibl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2177 /* clible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2177 /* clible */, MCK_GR32, 1 /* 0 */ },
  { 0, 2184 /* cliblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2184 /* cliblh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2191 /* clibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2191 /* clibne */, MCK_GR32, 1 /* 0 */ },
  { 0, 2198 /* clibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2198 /* clibnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2205 /* clibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2205 /* clibnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2213 /* clibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2213 /* clibnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2220 /* clibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2220 /* clibnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 2228 /* clibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2228 /* clibnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2236 /* clih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2241 /* clij */, MCK_GR32, 1 /* 0 */ },
  { 0, 2241 /* clij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 2246 /* clije */, MCK_GR32, 1 /* 0 */ },
  { 0, 2246 /* clije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2252 /* clijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2252 /* clijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2258 /* clijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2258 /* clijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2265 /* clijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2265 /* clijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2271 /* clijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 2271 /* clijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2278 /* clijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2278 /* clijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2285 /* clijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 2285 /* clijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2292 /* clijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2292 /* clijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2299 /* clijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2299 /* clijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2307 /* clijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2307 /* clijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2314 /* clijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 2314 /* clijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2322 /* clijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2322 /* clijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2330 /* cliy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2335 /* clr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2339 /* clrb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 2339 /* clrb */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2344 /* clrbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2344 /* clrbe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2350 /* clrbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2350 /* clrbh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2356 /* clrbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2356 /* clrbhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2363 /* clrbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2363 /* clrbl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2369 /* clrble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2369 /* clrble */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2376 /* clrblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2376 /* clrblh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2383 /* clrbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2383 /* clrbne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2390 /* clrbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2390 /* clrbnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2397 /* clrbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2397 /* clrbnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2405 /* clrbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2405 /* clrbnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2412 /* clrbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2412 /* clrbnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2420 /* clrbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2420 /* clrbnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2428 /* clrj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2428 /* clrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 2433 /* clrje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2433 /* clrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2439 /* clrjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2439 /* clrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2445 /* clrjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2445 /* clrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2452 /* clrjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2452 /* clrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2458 /* clrjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2458 /* clrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2465 /* clrjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2465 /* clrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2472 /* clrjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2472 /* clrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2479 /* clrjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2479 /* clrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2486 /* clrjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2486 /* clrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2494 /* clrjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2494 /* clrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2501 /* clrjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2501 /* clrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2509 /* clrjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2509 /* clrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2517 /* clrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2517 /* clrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2522 /* clrt */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2527 /* clrte */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2533 /* clrth */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2539 /* clrthe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2546 /* clrtl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2552 /* clrtle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2559 /* clrtlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2566 /* clrtne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2573 /* clrtnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2580 /* clrtnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2588 /* clrtnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2595 /* clrtnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2603 /* clrtnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2611 /* clst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2616 /* cly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2616 /* cly */, MCK_GR32, 1 /* 0 */ },
  { 0, 2620 /* cpsdr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 2626 /* cr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2629 /* crb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 2629 /* crb */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2633 /* crbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2633 /* crbe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2638 /* crbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2638 /* crbh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2643 /* crbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2643 /* crbhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2649 /* crbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2649 /* crbl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2654 /* crble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2654 /* crble */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2660 /* crblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2660 /* crblh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2666 /* crbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2666 /* crbne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2672 /* crbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2672 /* crbnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2678 /* crbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2678 /* crbnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2685 /* crbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2685 /* crbnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2691 /* crbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2691 /* crbnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2698 /* crbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2698 /* crbnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2705 /* crj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2705 /* crj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 2709 /* crje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2709 /* crje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2714 /* crjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2714 /* crjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2719 /* crjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2719 /* crjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2725 /* crjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2725 /* crjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2730 /* crjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2730 /* crjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2736 /* crjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2736 /* crjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2742 /* crjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2742 /* crjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2748 /* crjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2748 /* crjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2754 /* crjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2754 /* crjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2761 /* crjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2761 /* crjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2767 /* crjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2767 /* crjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2774 /* crjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2774 /* crjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2781 /* crl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2781 /* crl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2785 /* crt */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2789 /* crte */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2794 /* crth */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2799 /* crthe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2805 /* crtl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2810 /* crtle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2816 /* crtlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2822 /* crtne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2828 /* crtnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2834 /* crtnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2841 /* crtnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2847 /* crtnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2854 /* crtnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2861 /* cs */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2861 /* cs */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2864 /* csg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 2864 /* csg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2868 /* csy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 2868 /* csy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2872 /* cxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2877 /* cxfbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2877 /* cxfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2883 /* cxgbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2883 /* cxgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 2889 /* cxlfbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2889 /* cxlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2896 /* cxlgbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2896 /* cxlgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 2903 /* cy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2903 /* cy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2906 /* ddb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2906 /* ddb */, MCK_FP64, 1 /* 0 */ },
  { 0, 2910 /* ddbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2915 /* deb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2915 /* deb */, MCK_FP32, 1 /* 0 */ },
  { 0, 2919 /* debr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2924 /* dl */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2924 /* dl */, MCK_GR128, 1 /* 0 */ },
  { 0, 2927 /* dlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2927 /* dlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 2931 /* dlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 2931 /* dlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 2936 /* dlr */, MCK_GR128, 1 /* 0 */ },
  { 0, 2936 /* dlr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2940 /* dsg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2940 /* dsg */, MCK_GR128, 1 /* 0 */ },
  { 0, 2944 /* dsgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2944 /* dsgf */, MCK_GR128, 1 /* 0 */ },
  { 0, 2949 /* dsgfr */, MCK_GR128, 1 /* 0 */ },
  { 0, 2949 /* dsgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2955 /* dsgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 2955 /* dsgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 2960 /* dxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2965 /* ear */, MCK_AccessReg, 2 /* 1 */ },
  { 0, 2965 /* ear */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 2969 /* etnd */, MCK_GR32, 1 /* 0 */ },
  { 0, 2974 /* ex */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2974 /* ex */, MCK_GR64, 1 /* 0 */ },
  { 0, 2977 /* exrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2977 /* exrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2982 /* fidbr */, MCK_FP64, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 2988 /* fidbra */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 2995 /* fiebr */, MCK_FP32, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 3001 /* fiebra */, MCK_FP32, 5 /* 0, 2 */ },
  { 0, 3008 /* fixbr */, MCK_FP128, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 3014 /* fixbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 3021 /* flogr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3021 /* flogr */, MCK_GR64, 2 /* 1 */ },
  { 0, 3027 /* ic */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3027 /* ic */, MCK_GR64, 1 /* 0 */ },
  { 0, 3030 /* icm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3030 /* icm */, MCK_GR32, 1 /* 0 */ },
  { 0, 3034 /* icmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3034 /* icmh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3039 /* icmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3039 /* icmy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3044 /* icy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3044 /* icy */, MCK_GR64, 1 /* 0 */ },
  { 0, 3048 /* iihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3053 /* iihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3058 /* iihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3063 /* iilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 3068 /* iilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3073 /* iill */, MCK_GR32, 1 /* 0 */ },
  { 0, 3078 /* ipm */, MCK_GR32, 1 /* 0 */ },
  { 0, 3082 /* j */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3084 /* je */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3087 /* jg */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3090 /* jge */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3094 /* jgh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3098 /* jghe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3103 /* jgl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3107 /* jgle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3112 /* jglh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3117 /* jgm */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3121 /* jgne */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3126 /* jgnh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3131 /* jgnhe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3137 /* jgnl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3142 /* jgnle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3148 /* jgnlh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3154 /* jgnm */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3159 /* jgno */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3164 /* jgnp */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3169 /* jgnz */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3174 /* jgo */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3178 /* jgp */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3182 /* jgz */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3186 /* jh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3189 /* jhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3193 /* jl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3196 /* jle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3200 /* jlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3204 /* jm */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3207 /* jne */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3211 /* jnh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3215 /* jnhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3220 /* jnl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3224 /* jnle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3229 /* jnlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3234 /* jnm */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3238 /* jno */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3242 /* jnp */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3246 /* jnz */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3250 /* jo */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3253 /* jp */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3256 /* jz */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3259 /* l */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3259 /* l */, MCK_GR32, 1 /* 0 */ },
  { 0, 3261 /* la */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3261 /* la */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureInterlockedAccess1, 3264 /* laa */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3264 /* laa */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3268 /* laag */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3268 /* laag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3273 /* laal */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3273 /* laal */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3278 /* laalg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3278 /* laalg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3284 /* lan */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3284 /* lan */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3288 /* lang */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3288 /* lang */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3293 /* lao */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3293 /* lao */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3297 /* laog */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3297 /* laog */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3302 /* larl */, MCK_GR64, 1 /* 0 */ },
  { 0, 3302 /* larl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeatureInterlockedAccess1, 3307 /* lax */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3307 /* lax */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3311 /* laxg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3311 /* laxg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3316 /* lay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3316 /* lay */, MCK_GR64, 1 /* 0 */ },
  { 0, 3320 /* lb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3320 /* lb */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3323 /* lbh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3323 /* lbh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3327 /* lbr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 3331 /* lcbb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 3331 /* lcbb */, MCK_GR32, 1 /* 0 */ },
  { 0, 3336 /* lcdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3342 /* lcdfr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3348 /* lcebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3354 /* lcgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3354 /* lcgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3360 /* lcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3365 /* lcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3369 /* lcxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3375 /* ld */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3375 /* ld */, MCK_FP64, 1 /* 0 */ },
  { 0, 3378 /* lde */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3378 /* lde */, MCK_FP32, 1 /* 0 */ },
  { 0, 3382 /* ldeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3382 /* ldeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 3387 /* ldebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 3387 /* ldebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 3393 /* ldgr */, MCK_FP64, 1 /* 0 */ },
  { 0, 3393 /* ldgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 3398 /* ldr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3402 /* ldxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 3408 /* ldxbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 3415 /* ldy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3415 /* ldy */, MCK_FP64, 1 /* 0 */ },
  { 0, 3419 /* le */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3419 /* le */, MCK_FP32, 1 /* 0 */ },
  { 0, 3422 /* ledbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 3422 /* ledbr */, MCK_FP64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 3428 /* ledbra */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3428 /* ledbra */, MCK_FP64, 4 /* 2 */ },
  { 0, 3435 /* ler */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3439 /* lexbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 3445 /* lexbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 3452 /* ley */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3452 /* ley */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3456 /* lfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3456 /* lfh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3460 /* lg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3460 /* lg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3463 /* lgb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3463 /* lgb */, MCK_GR64, 1 /* 0 */ },
  { 0, 3467 /* lgbr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3472 /* lgdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 3472 /* lgdr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3477 /* lgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3477 /* lgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 3481 /* lgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 3486 /* lgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3486 /* lgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3491 /* lgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 3491 /* lgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3497 /* lgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3497 /* lgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 3501 /* lghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 3506 /* lghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3511 /* lghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 3511 /* lghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3517 /* lgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3521 /* lgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 3521 /* lgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3526 /* lh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3526 /* lh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3529 /* lhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3529 /* lhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3533 /* lhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 3537 /* lhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3541 /* lhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3541 /* lhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3546 /* lhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3546 /* lhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3550 /* llc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3550 /* llc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3554 /* llch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3554 /* llch */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3559 /* llcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3564 /* llgc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3564 /* llgc */, MCK_GR64, 1 /* 0 */ },
  { 0, 3569 /* llgcr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3575 /* llgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3575 /* llgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 3580 /* llgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3580 /* llgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3586 /* llgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 3586 /* llgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3593 /* llgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3593 /* llgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 3598 /* llghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3604 /* llghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 3604 /* llghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3611 /* llh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3611 /* llh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3615 /* llhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3615 /* llhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3620 /* llhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3625 /* llhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3625 /* llhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3631 /* llihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 3637 /* llihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 3643 /* llihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 3649 /* llilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 3655 /* llilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 3661 /* llill */, MCK_GR64, 1 /* 0 */ },
  { 0, 3667 /* lm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3667 /* lm */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3670 /* lmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3670 /* lmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3674 /* lmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3674 /* lmh */, MCK_GRH32, 3 /* 0, 1 */ },
  { 0, 3678 /* lmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3678 /* lmy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3682 /* lndbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3688 /* lndfr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3694 /* lnebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3700 /* lngfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3700 /* lngfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3706 /* lngr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3711 /* lnr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3715 /* lnxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3721 /* loc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3721 /* loc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3725 /* loce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3725 /* loce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3730 /* locg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3730 /* locg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3735 /* locge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3735 /* locge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3741 /* locgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3741 /* locgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3747 /* locghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3747 /* locghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3754 /* locghi */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3761 /* locghie */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3769 /* locghih */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3777 /* locghihe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3786 /* locghil */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3794 /* locghile */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3803 /* locghilh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3812 /* locghim */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3820 /* locghine */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3829 /* locghinh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3838 /* locghinhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3848 /* locghinl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3857 /* locghinle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3867 /* locghinlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3877 /* locghinm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3886 /* locghino */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3895 /* locghinp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3904 /* locghinz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3913 /* locghio */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3921 /* locghip */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 3929 /* locghiz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3937 /* locgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3937 /* locgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3943 /* locgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3943 /* locgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3950 /* locglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3950 /* locglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3957 /* locgm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3957 /* locgm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3963 /* locgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3963 /* locgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3970 /* locgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3970 /* locgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3977 /* locgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3977 /* locgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3985 /* locgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3985 /* locgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 3992 /* locgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 3992 /* locgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4000 /* locgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4000 /* locgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4008 /* locgnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4008 /* locgnm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4015 /* locgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4015 /* locgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4022 /* locgnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4022 /* locgnp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4029 /* locgnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4029 /* locgnz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4036 /* locgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4036 /* locgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4042 /* locgp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4042 /* locgp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4048 /* locgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4054 /* locgre */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4061 /* locgrh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4068 /* locgrhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4076 /* locgrl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4083 /* locgrle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4091 /* locgrlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4099 /* locgrm */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4106 /* locgrne */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4114 /* locgrnh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4122 /* locgrnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4131 /* locgrnl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4139 /* locgrnle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4148 /* locgrnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4157 /* locgrnm */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4165 /* locgrno */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4173 /* locgrnp */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4181 /* locgrnz */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4189 /* locgro */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4196 /* locgrp */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4203 /* locgrz */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4210 /* locgz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4210 /* locgz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4216 /* loch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4216 /* loch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4221 /* loche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4221 /* loche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4227 /* lochi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4233 /* lochie */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4240 /* lochih */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4247 /* lochihe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4255 /* lochil */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4262 /* lochile */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4270 /* lochilh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4278 /* lochim */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4285 /* lochine */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4293 /* lochinh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4301 /* lochinhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4310 /* lochinl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4318 /* lochinle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4327 /* lochinlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4336 /* lochinm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4344 /* lochino */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4352 /* lochinp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4360 /* lochinz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4368 /* lochio */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4375 /* lochip */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4382 /* lochiz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4389 /* locl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4389 /* locl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4394 /* locle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4394 /* locle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4400 /* loclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4400 /* loclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4406 /* locm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4406 /* locm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4411 /* locne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4411 /* locne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4417 /* locnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4417 /* locnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4423 /* locnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4423 /* locnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4430 /* locnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4430 /* locnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4436 /* locnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4436 /* locnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4443 /* locnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4443 /* locnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4450 /* locnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4450 /* locnm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4456 /* locno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4456 /* locno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4462 /* locnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4462 /* locnp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4468 /* locnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4468 /* locnz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4474 /* loco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4474 /* loco */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4479 /* locp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4479 /* locp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4484 /* locr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4489 /* locre */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4495 /* locrh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4501 /* locrhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4508 /* locrl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4514 /* locrle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4521 /* locrlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4528 /* locrm */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4534 /* locrne */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4541 /* locrnh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4548 /* locrnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4556 /* locrnl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4563 /* locrnle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4571 /* locrnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4579 /* locrnm */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4586 /* locrno */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4593 /* locrnp */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4600 /* locrnz */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4607 /* locro */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4613 /* locrp */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4619 /* locrz */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4625 /* locz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4625 /* locz */, MCK_GR32, 1 /* 0 */ },
  { 0, 4630 /* lpdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4636 /* lpdfr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4642 /* lpebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4648 /* lpgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 4648 /* lpgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 4654 /* lpgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4659 /* lpr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4663 /* lpxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4669 /* lr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4672 /* lrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 4672 /* lrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4676 /* lrv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4676 /* lrv */, MCK_GR32, 1 /* 0 */ },
  { 0, 4680 /* lrvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4680 /* lrvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 4685 /* lrvgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4691 /* lrvh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4691 /* lrvh */, MCK_GR32, 1 /* 0 */ },
  { 0, 4696 /* lrvr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4701 /* lt */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4701 /* lt */, MCK_GR32, 1 /* 0 */ },
  { 0, 4704 /* ltdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4710 /* ltebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4716 /* ltg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4716 /* ltg */, MCK_GR64, 1 /* 0 */ },
  { 0, 4720 /* ltgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4720 /* ltgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 4725 /* ltgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 4725 /* ltgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 4731 /* ltgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4736 /* ltr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4740 /* ltxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4746 /* lxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4746 /* lxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 4751 /* lxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 4751 /* lxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 4757 /* lxeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4757 /* lxeb */, MCK_FP128, 1 /* 0 */ },
  { 0, 4762 /* lxebr */, MCK_FP128, 1 /* 0 */ },
  { 0, 4762 /* lxebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 4768 /* lxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4772 /* ly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4772 /* ly */, MCK_GR32, 1 /* 0 */ },
  { 0, 4775 /* lzdr */, MCK_FP64, 1 /* 0 */ },
  { 0, 4780 /* lzer */, MCK_FP32, 1 /* 0 */ },
  { 0, 4785 /* lzxr */, MCK_FP128, 1 /* 0 */ },
  { 0, 4790 /* madb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 4790 /* madb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4795 /* madbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 4801 /* maeb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 4801 /* maeb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4806 /* maebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 4812 /* mdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4812 /* mdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 4816 /* mdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4821 /* mdeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4821 /* mdeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 4826 /* mdebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 4826 /* mdebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 4832 /* meeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4832 /* meeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 4837 /* meebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4843 /* mghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 4848 /* mh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4848 /* mh */, MCK_GR32, 1 /* 0 */ },
  { 0, 4851 /* mhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 4855 /* mhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4855 /* mhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 4859 /* mlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4859 /* mlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 4863 /* mlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 4863 /* mlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 4868 /* ms */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4868 /* ms */, MCK_GR32, 1 /* 0 */ },
  { 0, 4871 /* msdb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 4871 /* msdb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4876 /* msdbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 4882 /* mseb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 4882 /* mseb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4887 /* msebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 4893 /* msfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 4898 /* msg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4898 /* msg */, MCK_GR64, 1 /* 0 */ },
  { 0, 4902 /* msgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4902 /* msgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 4907 /* msgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 4913 /* msgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 4913 /* msgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 4919 /* msgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4924 /* msr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4928 /* msy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4928 /* msy */, MCK_GR32, 1 /* 0 */ },
  { 0, 4932 /* mvc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 4932 /* mvc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 4936 /* mvghi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 4942 /* mvhhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 4948 /* mvhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 4953 /* mvi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 4957 /* mviy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 4962 /* mvst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4967 /* mxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4972 /* mxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4972 /* mxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 4977 /* mxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 4977 /* mxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 4983 /* n */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4983 /* n */, MCK_GR32, 1 /* 0 */ },
  { 0, 4985 /* nc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 4985 /* nc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 4988 /* ng */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4988 /* ng */, MCK_GR64, 1 /* 0 */ },
  { 0, 4991 /* ngr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 4995 /* ngrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 5000 /* ni */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 5003 /* nihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5008 /* nihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5013 /* nihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5018 /* nilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 5023 /* nilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 5028 /* nill */, MCK_GR32, 1 /* 0 */ },
  { 0, 5033 /* niy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 5037 /* nop */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 5041 /* nopr */, MCK_GR64, 1 /* 0 */ },
  { 0, 5046 /* nr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 5049 /* nrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureTransactionalExecution, 5053 /* ntstg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureTransactionalExecution, 5053 /* ntstg */, MCK_GR64, 1 /* 0 */ },
  { 0, 5059 /* ny */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5059 /* ny */, MCK_GR32, 1 /* 0 */ },
  { 0, 5062 /* o */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5062 /* o */, MCK_GR32, 1 /* 0 */ },
  { 0, 5064 /* oc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 5064 /* oc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 5067 /* og */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5067 /* og */, MCK_GR64, 1 /* 0 */ },
  { 0, 5070 /* ogr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 5074 /* ogrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 5079 /* oi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 5082 /* oihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5087 /* oihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5092 /* oihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5097 /* oilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 5102 /* oilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 5107 /* oill */, MCK_GR32, 1 /* 0 */ },
  { 0, 5112 /* oiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 5116 /* or */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 5119 /* ork */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 5123 /* oy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5123 /* oy */, MCK_GR32, 1 /* 0 */ },
  { 0, 5126 /* pfd */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5130 /* pfdrl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeaturePopulationCount, 5136 /* popcnt */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureProcessorAssist, 5143 /* ppa */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5147 /* risbg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 5153 /* risbgn */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureHighWord, 5160 /* risbhg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureHighWord, 5160 /* risbhg */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 5167 /* risblg */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 5167 /* risblg */, MCK_GR64, 2 /* 1 */ },
  { 0, 5174 /* rll */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 5174 /* rll */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5178 /* rllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 5178 /* rllg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5183 /* rnsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5189 /* rosbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5195 /* rxsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5201 /* s */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5201 /* s */, MCK_GR32, 1 /* 0 */ },
  { 0, 5203 /* sdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5203 /* sdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 5207 /* sdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 5212 /* seb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5212 /* seb */, MCK_FP32, 1 /* 0 */ },
  { 0, 5216 /* sebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 5221 /* sg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5221 /* sg */, MCK_GR64, 1 /* 0 */ },
  { 0, 5224 /* sgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5224 /* sgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 5228 /* sgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 5228 /* sgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 5233 /* sgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 5237 /* sgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 5242 /* sh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5242 /* sh */, MCK_GR32, 1 /* 0 */ },
  { 0, 5245 /* shy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5245 /* shy */, MCK_GR32, 1 /* 0 */ },
  { 0, 5249 /* sl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5249 /* sl */, MCK_GR32, 1 /* 0 */ },
  { 0, 5252 /* sla */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 5252 /* sla */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 5256 /* slak */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 5256 /* slak */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5261 /* slb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5261 /* slb */, MCK_GR32, 1 /* 0 */ },
  { 0, 5265 /* slbg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5265 /* slbg */, MCK_GR64, 1 /* 0 */ },
  { 0, 5270 /* slbgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5276 /* slbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5281 /* slfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 5286 /* slg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5286 /* slg */, MCK_GR64, 1 /* 0 */ },
  { 0, 5290 /* slgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5290 /* slgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 5295 /* slgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 5301 /* slgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 5301 /* slgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 5307 /* slgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 5312 /* slgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 5318 /* sll */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 5318 /* sll */, MCK_GR32, 1 /* 0 */ },
  { 0, 5322 /* sllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 5322 /* sllg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 5327 /* sllk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 5327 /* sllk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5332 /* slr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 5336 /* slrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 5341 /* sly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5341 /* sly */, MCK_GR32, 1 /* 0 */ },
  { 0, 5345 /* sqdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5345 /* sqdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 5350 /* sqdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 5356 /* sqeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5356 /* sqeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 5361 /* sqebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 5367 /* sqxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 5373 /* sr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5376 /* sra */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 5376 /* sra */, MCK_GR32, 1 /* 0 */ },
  { 0, 5380 /* srag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 5380 /* srag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 5385 /* srak */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 5385 /* srak */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 5390 /* srk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 5394 /* srl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 5394 /* srl */, MCK_GR32, 1 /* 0 */ },
  { 0, 5398 /* srlg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 5398 /* srlg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 5403 /* srlk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 5403 /* srlk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5408 /* srst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5413 /* st */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5413 /* st */, MCK_GR32, 1 /* 0 */ },
  { 0, 5416 /* stc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5416 /* stc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 5420 /* stch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 5420 /* stch */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5425 /* stck */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 5430 /* stcke */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 5436 /* stckf */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 5442 /* stcy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5442 /* stcy */, MCK_GR32, 1 /* 0 */ },
  { 0, 5447 /* std */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5447 /* std */, MCK_FP64, 1 /* 0 */ },
  { 0, 5451 /* stdy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5451 /* stdy */, MCK_FP64, 1 /* 0 */ },
  { 0, 5456 /* ste */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5456 /* ste */, MCK_FP32, 1 /* 0 */ },
  { 0, 5460 /* stey */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5460 /* stey */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 5465 /* stfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 5465 /* stfh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5470 /* stfle */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 5476 /* stg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5476 /* stg */, MCK_GR64, 1 /* 0 */ },
  { 0, 5480 /* stgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 5480 /* stgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 5486 /* sth */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5486 /* sth */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 5490 /* sthh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 5490 /* sthh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5495 /* sthrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 5495 /* sthrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 5501 /* sthy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5501 /* sthy */, MCK_GR32, 1 /* 0 */ },
  { 0, 5506 /* stm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 5506 /* stm */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5510 /* stmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 5510 /* stmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5515 /* stmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 5515 /* stmh */, MCK_GRH32, 3 /* 0, 1 */ },
  { 0, 5520 /* stmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 5520 /* stmy */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5525 /* stoc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5525 /* stoc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5530 /* stoce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5530 /* stoce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5536 /* stocg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5536 /* stocg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5542 /* stocge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5542 /* stocge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5549 /* stocgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5549 /* stocgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5556 /* stocghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5556 /* stocghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5564 /* stocgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5564 /* stocgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5571 /* stocgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5571 /* stocgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5579 /* stocglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5579 /* stocglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5587 /* stocgm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5587 /* stocgm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5594 /* stocgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5594 /* stocgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5602 /* stocgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5602 /* stocgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5610 /* stocgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5610 /* stocgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5619 /* stocgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5619 /* stocgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5627 /* stocgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5627 /* stocgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5636 /* stocgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5636 /* stocgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5645 /* stocgnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5645 /* stocgnm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5653 /* stocgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5653 /* stocgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5661 /* stocgnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5661 /* stocgnp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5669 /* stocgnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5669 /* stocgnz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5677 /* stocgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5677 /* stocgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5684 /* stocgp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5684 /* stocgp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5691 /* stocgz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5691 /* stocgz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5698 /* stoch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5698 /* stoch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5704 /* stoche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5704 /* stoche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5711 /* stocl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5711 /* stocl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5717 /* stocle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5717 /* stocle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5724 /* stoclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5724 /* stoclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5731 /* stocm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5731 /* stocm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5737 /* stocne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5737 /* stocne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5744 /* stocnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5744 /* stocnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5751 /* stocnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5751 /* stocnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5759 /* stocnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5759 /* stocnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5766 /* stocnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5766 /* stocnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5774 /* stocnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5774 /* stocnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5782 /* stocnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5782 /* stocnm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5789 /* stocno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5789 /* stocno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5796 /* stocnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5796 /* stocnp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5803 /* stocnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5803 /* stocnz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5810 /* stoco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5810 /* stoco */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5816 /* stocp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5816 /* stocp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5822 /* stocz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5822 /* stocz */, MCK_GR32, 1 /* 0 */ },
  { 0, 5828 /* strl */, MCK_GR32, 1 /* 0 */ },
  { 0, 5828 /* strl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 5833 /* strv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5833 /* strv */, MCK_GR32, 1 /* 0 */ },
  { 0, 5838 /* strvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5838 /* strvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 5844 /* strvh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5844 /* strvh */, MCK_GR32, 1 /* 0 */ },
  { 0, 5850 /* sty */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5850 /* sty */, MCK_GR32, 1 /* 0 */ },
  { 0, 5858 /* sxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 5863 /* sy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5863 /* sy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 5866 /* tabort */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 5873 /* tbegin */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 5880 /* tbeginc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 5888 /* tcdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5888 /* tcdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 5893 /* tceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5893 /* tceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 5898 /* tcxb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5898 /* tcxb */, MCK_FP128, 1 /* 0 */ },
  { 0, 5908 /* tm */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 5911 /* tmh */, MCK_GR32, 1 /* 0 */ },
  { 0, 5915 /* tmhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5920 /* tmhl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 5925 /* tml */, MCK_GR32, 1 /* 0 */ },
  { 0, 5929 /* tmlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 5934 /* tmll */, MCK_GR32, 1 /* 0 */ },
  { 0, 5939 /* tmy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureVector, 5943 /* vab */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5947 /* vaccb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5953 /* vacccq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5960 /* vaccf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5966 /* vaccg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5972 /* vacch */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5978 /* vaccq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5984 /* vacq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 5989 /* vaf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5993 /* vag */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 5997 /* vah */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6001 /* vaq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6005 /* vavgb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6011 /* vavgf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6017 /* vavgg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6023 /* vavgh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6029 /* vavglb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6036 /* vavglf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6043 /* vavglg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6050 /* vavglh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6057 /* vcdgb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6063 /* vcdlgb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6070 /* vceqb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6076 /* vceqbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6083 /* vceqf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6089 /* vceqfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6096 /* vceqg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6102 /* vceqgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6109 /* vceqh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6115 /* vceqhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6122 /* vcgdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6128 /* vchb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6133 /* vchbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6139 /* vchf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6144 /* vchfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6150 /* vchg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6155 /* vchgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6161 /* vchh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6166 /* vchhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6172 /* vchlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6178 /* vchlbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6185 /* vchlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6191 /* vchlfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6198 /* vchlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6204 /* vchlgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6211 /* vchlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6217 /* vchlhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6224 /* vcksm */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6230 /* vclgdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6237 /* vclzb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6243 /* vclzf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6249 /* vclzg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6255 /* vclzh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6261 /* vctzb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6267 /* vctzf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6273 /* vctzg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6279 /* vctzh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6285 /* vecb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6290 /* vecf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6295 /* vecg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6300 /* vech */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6305 /* veclb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6311 /* veclf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6317 /* veclg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6323 /* veclh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6329 /* verimb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6336 /* verimf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6343 /* verimg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6350 /* verimh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6357 /* verllb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6357 /* verllb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6364 /* verllf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6364 /* verllf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6371 /* verllg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6371 /* verllg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6378 /* verllh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6378 /* verllh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6385 /* verllvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6393 /* verllvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6401 /* verllvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6409 /* verllvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6417 /* veslb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6417 /* veslb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6423 /* veslf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6423 /* veslf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6429 /* veslg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6429 /* veslg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6435 /* veslh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6435 /* veslh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6441 /* veslvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6448 /* veslvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6455 /* veslvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6462 /* veslvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6469 /* vesrab */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6469 /* vesrab */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6476 /* vesraf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6476 /* vesraf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6483 /* vesrag */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6483 /* vesrag */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6490 /* vesrah */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6490 /* vesrah */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6497 /* vesravb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6505 /* vesravf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6513 /* vesravg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6521 /* vesravh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6529 /* vesrlb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6529 /* vesrlb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6536 /* vesrlf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6536 /* vesrlf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6543 /* vesrlg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6543 /* vesrlg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6550 /* vesrlh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 6550 /* vesrlh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6557 /* vesrlvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6565 /* vesrlvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6573 /* vesrlvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6581 /* vesrlvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6589 /* vfadb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6595 /* vfaeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6595 /* vfaeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6601 /* vfaebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6601 /* vfaebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6608 /* vfaef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6608 /* vfaef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6614 /* vfaefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6614 /* vfaefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6621 /* vfaeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6621 /* vfaeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6627 /* vfaehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6627 /* vfaehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6634 /* vfaezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6634 /* vfaezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6641 /* vfaezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6641 /* vfaezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6649 /* vfaezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6649 /* vfaezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6656 /* vfaezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6656 /* vfaezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6664 /* vfaezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6664 /* vfaezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6671 /* vfaezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6671 /* vfaezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6679 /* vfcedb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6686 /* vfcedbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6694 /* vfchdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6701 /* vfchdbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6709 /* vfchedb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6717 /* vfchedbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6726 /* vfddb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6732 /* vfeeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6738 /* vfeebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6745 /* vfeef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6751 /* vfeefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6758 /* vfeeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6764 /* vfeehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6771 /* vfeezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6778 /* vfeezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6786 /* vfeezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6793 /* vfeezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6801 /* vfeezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6808 /* vfeezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6816 /* vfeneb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6823 /* vfenebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6831 /* vfenef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6838 /* vfenefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6846 /* vfeneh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6853 /* vfenehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6861 /* vfenezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6869 /* vfenezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6878 /* vfenezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6886 /* vfenezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6895 /* vfenezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6903 /* vfenezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6912 /* vfidb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6918 /* vflcdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6925 /* vflndb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6932 /* vflpdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6939 /* vfmadb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 6946 /* vfmdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6952 /* vfmsdb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 6959 /* vfsdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 6965 /* vfsqdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6972 /* vftcidb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 6980 /* vgbm */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 6985 /* vgef */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 6985 /* vgef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 6990 /* vgeg */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 6990 /* vgeg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 6995 /* vgfmab */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7002 /* vgfmaf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7009 /* vgfmag */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7016 /* vgfmah */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7023 /* vgfmb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7029 /* vgfmf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7035 /* vgfmg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7041 /* vgfmh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7047 /* vgmb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7052 /* vgmf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7057 /* vgmg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7062 /* vgmh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7067 /* vistrb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7074 /* vistrbs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7082 /* vistrf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7089 /* vistrfs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7097 /* vistrh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7104 /* vistrhs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7112 /* vl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7112 /* vl */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7115 /* vlbb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7115 /* vlbb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7120 /* vlcb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7125 /* vlcf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7130 /* vlcg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7135 /* vlch */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7140 /* vldeb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7146 /* vleb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7146 /* vleb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7151 /* vledb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7157 /* vlef */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7157 /* vlef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7162 /* vleg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7162 /* vleg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7167 /* vleh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7167 /* vleh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7172 /* vleib */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7178 /* vleif */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7184 /* vleig */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7190 /* vleih */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7196 /* vlgvb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7196 /* vlgvb */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 7196 /* vlgvb */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 7202 /* vlgvf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7202 /* vlgvf */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 7202 /* vlgvf */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 7208 /* vlgvg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7208 /* vlgvg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 7208 /* vlgvg */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 7214 /* vlgvh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7214 /* vlgvh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 7214 /* vlgvh */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 7220 /* vll */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7220 /* vll */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 7220 /* vll */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7224 /* vllezb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7224 /* vllezb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7231 /* vllezf */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7231 /* vllezf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7238 /* vllezg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7238 /* vllezg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7245 /* vllezh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7245 /* vllezh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7252 /* vlm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7252 /* vlm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7256 /* vlpb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7261 /* vlpf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7266 /* vlpg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7271 /* vlph */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7276 /* vlr */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7280 /* vlrepb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7280 /* vlrepb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7287 /* vlrepf */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7287 /* vlrepf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7294 /* vlrepg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7294 /* vlrepg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7301 /* vlreph */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7301 /* vlreph */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7308 /* vlvgb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7308 /* vlvgb */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 7308 /* vlvgb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7314 /* vlvgf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7314 /* vlvgf */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 7314 /* vlvgf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7320 /* vlvgg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7320 /* vlvgg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureVector, 7320 /* vlvgg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7326 /* vlvgh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7326 /* vlvgh */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 7326 /* vlvgh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7332 /* vlvgp */, MCK_GR64, 6 /* 1, 2 */ },
  { Feature_FeatureVector, 7332 /* vlvgp */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7338 /* vmaeb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7344 /* vmaef */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7350 /* vmaeh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7356 /* vmahb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7362 /* vmahf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7368 /* vmahh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7374 /* vmalb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7380 /* vmaleb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7387 /* vmalef */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7394 /* vmaleh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7401 /* vmalf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7407 /* vmalhb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7414 /* vmalhf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7421 /* vmalhh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7428 /* vmalhw */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7435 /* vmalob */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7442 /* vmalof */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7449 /* vmaloh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7456 /* vmaob */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7462 /* vmaof */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7468 /* vmaoh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7474 /* vmeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7479 /* vmef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7484 /* vmeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7489 /* vmhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7494 /* vmhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7499 /* vmhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7504 /* vmlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7509 /* vmleb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7515 /* vmlef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7521 /* vmleh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7527 /* vmlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7532 /* vmlhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7538 /* vmlhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7544 /* vmlhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7550 /* vmlhw */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7556 /* vmlob */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7562 /* vmlof */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7568 /* vmloh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7574 /* vmnb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7579 /* vmnf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7584 /* vmng */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7589 /* vmnh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7594 /* vmnlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7600 /* vmnlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7606 /* vmnlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7612 /* vmnlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7618 /* vmob */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7623 /* vmof */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7628 /* vmoh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7633 /* vmrhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7639 /* vmrhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7645 /* vmrhg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7651 /* vmrhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7657 /* vmrlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7663 /* vmrlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7669 /* vmrlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7675 /* vmrlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7681 /* vmxb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7686 /* vmxf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7691 /* vmxg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7696 /* vmxh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7701 /* vmxlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7707 /* vmxlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7713 /* vmxlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7719 /* vmxlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7725 /* vn */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7728 /* vnc */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7732 /* vno */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7736 /* vo */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7739 /* vone */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7744 /* vpdi */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7749 /* vperm */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7755 /* vpkf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7760 /* vpkg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7765 /* vpkh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7770 /* vpklsf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7777 /* vpklsfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7785 /* vpklsg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7792 /* vpklsgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7800 /* vpklsh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7807 /* vpklshs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7815 /* vpksf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7821 /* vpksfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7828 /* vpksg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7834 /* vpksgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7841 /* vpksh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7847 /* vpkshs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7854 /* vpopct */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7861 /* vrepb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7867 /* vrepf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7873 /* vrepg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7879 /* vreph */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7885 /* vrepib */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7892 /* vrepif */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7899 /* vrepig */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7906 /* vrepih */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7913 /* vsb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7917 /* vsbcbiq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7925 /* vsbiq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7931 /* vscbib */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7938 /* vscbif */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7945 /* vscbig */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7952 /* vscbih */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7959 /* vscbiq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7966 /* vscef */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7966 /* vscef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7972 /* vsceg */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 7972 /* vsceg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 7978 /* vsegb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7984 /* vsegf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7990 /* vsegh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7996 /* vsel */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8001 /* vsf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8005 /* vsg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8009 /* vsh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8013 /* vsl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8017 /* vslb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8022 /* vsldb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8028 /* vsq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8032 /* vsra */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8037 /* vsrab */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8043 /* vsrl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8048 /* vsrlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8054 /* vst */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8054 /* vst */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8058 /* vsteb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8058 /* vsteb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8064 /* vstef */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8064 /* vstef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8070 /* vsteg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8070 /* vsteg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8076 /* vsteh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8076 /* vsteh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8082 /* vstl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8082 /* vstl */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 8082 /* vstl */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8087 /* vstm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8087 /* vstm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8092 /* vstrcb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8092 /* vstrcb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8099 /* vstrcbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8099 /* vstrcbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8107 /* vstrcf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8107 /* vstrcf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8114 /* vstrcfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8114 /* vstrcfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8122 /* vstrch */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8122 /* vstrch */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8129 /* vstrchs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8129 /* vstrchs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8137 /* vstrczb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8137 /* vstrczb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8145 /* vstrczbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8145 /* vstrczbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8154 /* vstrczf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8154 /* vstrczf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8162 /* vstrczfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8162 /* vstrczfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8171 /* vstrczh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8171 /* vstrczh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8179 /* vstrczhs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8179 /* vstrczhs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8188 /* vsumb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8194 /* vsumgf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8201 /* vsumgh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8208 /* vsumh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8214 /* vsumqf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8221 /* vsumqg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8228 /* vtm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8232 /* vuphb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8238 /* vuphf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8244 /* vuphh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8250 /* vuplb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8256 /* vuplf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8262 /* vuplhb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8269 /* vuplhf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8276 /* vuplhh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8283 /* vuplhw */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8290 /* vupllb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8297 /* vupllf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8304 /* vupllh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8311 /* vx */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8314 /* vzero */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8320 /* wcdgb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8326 /* wcdlgb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8333 /* wcgdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8339 /* wclgdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8346 /* wfadb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8352 /* wfcdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8358 /* wfcedb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8365 /* wfcedbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8373 /* wfchdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8380 /* wfchdbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8388 /* wfchedb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8396 /* wfchedbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8405 /* wfddb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8411 /* wfidb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8417 /* wfkdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8423 /* wflcdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8430 /* wflndb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8437 /* wflpdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8444 /* wfmadb */, MCK_VR64, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8451 /* wfmdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8457 /* wfmsdb */, MCK_VR64, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8464 /* wfsdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8470 /* wfsqdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8477 /* wftcidb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8485 /* wldeb */, MCK_VR32, 2 /* 1 */ },
  { Feature_FeatureVector, 8485 /* wldeb */, MCK_VR64, 1 /* 0 */ },
  { Feature_FeatureVector, 8491 /* wledb */, MCK_VR32, 1 /* 0 */ },
  { Feature_FeatureVector, 8491 /* wledb */, MCK_VR64, 2 /* 1 */ },
  { 0, 8497 /* x */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8497 /* x */, MCK_GR32, 1 /* 0 */ },
  { 0, 8499 /* xc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 8499 /* xc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 8502 /* xg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8502 /* xg */, MCK_GR64, 1 /* 0 */ },
  { 0, 8505 /* xgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 8509 /* xgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 8514 /* xi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8517 /* xihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 8522 /* xilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 8527 /* xiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 8531 /* xr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 8534 /* xrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 8538 /* xy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8538 /* xy */, MCK_GR32, 1 /* 0 */ },
};

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ADDR128:
    return parseADDR128(Operands);
  case MCK_ADDR32:
    return parseADDR32(Operands);
  case MCK_ADDR64:
    return parseADDR64(Operands);
  case MCK_AccessReg:
    return parseAccessReg(Operands);
  case MCK_BDAddr32Disp12:
    return parseBDAddr32(Operands);
  case MCK_BDAddr32Disp20:
    return parseBDAddr32(Operands);
  case MCK_BDAddr64Disp12:
    return parseBDAddr64(Operands);
  case MCK_BDAddr64Disp20:
    return parseBDAddr64(Operands);
  case MCK_BDLAddr64Disp12Len8:
    return parseBDLAddr64(Operands);
  case MCK_BDVAddr64Disp12:
    return parseBDVAddr64(Operands);
  case MCK_BDXAddr64Disp12:
    return parseBDXAddr64(Operands);
  case MCK_BDXAddr64Disp20:
    return parseBDXAddr64(Operands);
  case MCK_FP128:
    return parseFP128(Operands);
  case MCK_FP32:
    return parseFP32(Operands);
  case MCK_FP64:
    return parseFP64(Operands);
  case MCK_GR128:
    return parseGR128(Operands);
  case MCK_GR32:
    return parseGR32(Operands);
  case MCK_GR64:
    return parseGR64(Operands);
  case MCK_GRH32:
    return parseGRH32(Operands);
  case MCK_GRX32:
    return parseGRX32(Operands);
  case MCK_PCRel16:
    return parsePCRel16(Operands);
  case MCK_PCRel32:
    return parsePCRel32(Operands);
  case MCK_PCRelTLS16:
    return parsePCRelTLS16(Operands);
  case MCK_PCRelTLS32:
    return parsePCRelTLS32(Operands);
  case MCK_VF128:
    return parseVF128(Operands);
  case MCK_VR128:
    return parseVR128(Operands);
  case MCK_VR32:
    return parseVR32(Operands);
  case MCK_VR64:
    return parseVR64(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size() - 1;
  // Search the table.
  auto MnemonicRange =
    std::equal_range(std::begin(OperandMatchTable), std::end(OperandMatchTable),
                     Mnemonic, LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      continue;
    }

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION

