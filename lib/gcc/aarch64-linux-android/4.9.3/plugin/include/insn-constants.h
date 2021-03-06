/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define SFP_REGNUM 64
#define R12_REGNUM 12
#define R11_REGNUM 11
#define R29_REGNUM 29
#define R15_REGNUM 15
#define V15_REGNUM 47
#define R2_REGNUM 2
#define R22_REGNUM 22
#define R18_REGNUM 18
#define IP0_REGNUM 16
#define R5_REGNUM 5
#define R25_REGNUM 25
#define V31_REGNUM 63
#define R9_REGNUM 9
#define V0_REGNUM 32
#define R10_REGNUM 10
#define R14_REGNUM 14
#define SP_REGNUM 31
#define R1_REGNUM 1
#define R21_REGNUM 21
#define R17_REGNUM 17
#define R20_REGNUM 20
#define R4_REGNUM 4
#define R24_REGNUM 24
#define R30_REGNUM 30
#define R8_REGNUM 8
#define R27_REGNUM 27
#define CC_REGNUM 66
#define R13_REGNUM 13
#define AP_REGNUM 65
#define R0_REGNUM 0
#define R6_REGNUM 6
#define LR_REGNUM 30
#define R28_REGNUM 28
#define R16_REGNUM 16
#define R3_REGNUM 3
#define R23_REGNUM 23
#define R19_REGNUM 19
#define IP1_REGNUM 17
#define R7_REGNUM 7
#define R26_REGNUM 26

enum unspec {
  UNSPEC_CASESI = 0,
  UNSPEC_CRC32B = 1,
  UNSPEC_CRC32CB = 2,
  UNSPEC_CRC32CH = 3,
  UNSPEC_CRC32CW = 4,
  UNSPEC_CRC32CX = 5,
  UNSPEC_CRC32H = 6,
  UNSPEC_CRC32W = 7,
  UNSPEC_CRC32X = 8,
  UNSPEC_FRECPE = 9,
  UNSPEC_FRECPS = 10,
  UNSPEC_FRECPX = 11,
  UNSPEC_FRINTA = 12,
  UNSPEC_FRINTI = 13,
  UNSPEC_FRINTM = 14,
  UNSPEC_FRINTN = 15,
  UNSPEC_FRINTP = 16,
  UNSPEC_FRINTX = 17,
  UNSPEC_FRINTZ = 18,
  UNSPEC_GOTSMALLPIC = 19,
  UNSPEC_GOTSMALLTLS = 20,
  UNSPEC_GOTTINYPIC = 21,
  UNSPEC_LD1 = 22,
  UNSPEC_LD2 = 23,
  UNSPEC_LD2_DUP = 24,
  UNSPEC_LD3 = 25,
  UNSPEC_LD3_DUP = 26,
  UNSPEC_LD4 = 27,
  UNSPEC_LD4_DUP = 28,
  UNSPEC_MB = 29,
  UNSPEC_NOP = 30,
  UNSPEC_PRLG_STK = 31,
  UNSPEC_RBIT = 32,
  UNSPEC_SISD_NEG = 33,
  UNSPEC_SISD_SSHL = 34,
  UNSPEC_SISD_USHL = 35,
  UNSPEC_SSHL_2S = 36,
  UNSPEC_SSHR64 = 37,
  UNSPEC_ST1 = 38,
  UNSPEC_ST2 = 39,
  UNSPEC_ST3 = 40,
  UNSPEC_ST4 = 41,
  UNSPEC_ST2_LANE = 42,
  UNSPEC_ST3_LANE = 43,
  UNSPEC_ST4_LANE = 44,
  UNSPEC_TLS = 45,
  UNSPEC_TLSDESC = 46,
  UNSPEC_USHL_2S = 47,
  UNSPEC_USHR64 = 48,
  UNSPEC_VSTRUCTDUMMY = 49,
  UNSPEC_SP_SET = 50,
  UNSPEC_SP_TEST = 51,
  UNSPEC_ASHIFT_SIGNED = 52,
  UNSPEC_ASHIFT_UNSIGNED = 53,
  UNSPEC_FMAX = 54,
  UNSPEC_FMAXNMV = 55,
  UNSPEC_FMAXV = 56,
  UNSPEC_FMIN = 57,
  UNSPEC_FMINNMV = 58,
  UNSPEC_FMINV = 59,
  UNSPEC_FADDV = 60,
  UNSPEC_ADDV = 61,
  UNSPEC_SMAXV = 62,
  UNSPEC_SMINV = 63,
  UNSPEC_UMAXV = 64,
  UNSPEC_UMINV = 65,
  UNSPEC_SHADD = 66,
  UNSPEC_UHADD = 67,
  UNSPEC_SRHADD = 68,
  UNSPEC_URHADD = 69,
  UNSPEC_SHSUB = 70,
  UNSPEC_UHSUB = 71,
  UNSPEC_SRHSUB = 72,
  UNSPEC_URHSUB = 73,
  UNSPEC_ADDHN = 74,
  UNSPEC_RADDHN = 75,
  UNSPEC_SUBHN = 76,
  UNSPEC_RSUBHN = 77,
  UNSPEC_ADDHN2 = 78,
  UNSPEC_RADDHN2 = 79,
  UNSPEC_SUBHN2 = 80,
  UNSPEC_RSUBHN2 = 81,
  UNSPEC_SQDMULH = 82,
  UNSPEC_SQRDMULH = 83,
  UNSPEC_PMUL = 84,
  UNSPEC_USQADD = 85,
  UNSPEC_SUQADD = 86,
  UNSPEC_SQXTUN = 87,
  UNSPEC_SQXTN = 88,
  UNSPEC_UQXTN = 89,
  UNSPEC_SSRA = 90,
  UNSPEC_USRA = 91,
  UNSPEC_SRSRA = 92,
  UNSPEC_URSRA = 93,
  UNSPEC_SRSHR = 94,
  UNSPEC_URSHR = 95,
  UNSPEC_SQSHLU = 96,
  UNSPEC_SQSHL = 97,
  UNSPEC_UQSHL = 98,
  UNSPEC_SQSHRUN = 99,
  UNSPEC_SQRSHRUN = 100,
  UNSPEC_SQSHRN = 101,
  UNSPEC_UQSHRN = 102,
  UNSPEC_SQRSHRN = 103,
  UNSPEC_UQRSHRN = 104,
  UNSPEC_SSHL = 105,
  UNSPEC_USHL = 106,
  UNSPEC_SRSHL = 107,
  UNSPEC_URSHL = 108,
  UNSPEC_SQRSHL = 109,
  UNSPEC_UQRSHL = 110,
  UNSPEC_SSLI = 111,
  UNSPEC_USLI = 112,
  UNSPEC_SSRI = 113,
  UNSPEC_USRI = 114,
  UNSPEC_SSHLL = 115,
  UNSPEC_USHLL = 116,
  UNSPEC_ADDP = 117,
  UNSPEC_TBL = 118,
  UNSPEC_CONCAT = 119,
  UNSPEC_ZIP1 = 120,
  UNSPEC_ZIP2 = 121,
  UNSPEC_UZP1 = 122,
  UNSPEC_UZP2 = 123,
  UNSPEC_TRN1 = 124,
  UNSPEC_TRN2 = 125,
  UNSPEC_EXT = 126,
  UNSPEC_REV64 = 127,
  UNSPEC_REV32 = 128,
  UNSPEC_REV16 = 129,
  UNSPEC_AESE = 130,
  UNSPEC_AESD = 131,
  UNSPEC_AESMC = 132,
  UNSPEC_AESIMC = 133,
  UNSPEC_SHA1C = 134,
  UNSPEC_SHA1M = 135,
  UNSPEC_SHA1P = 136,
  UNSPEC_SHA1H = 137,
  UNSPEC_SHA1SU0 = 138,
  UNSPEC_SHA1SU1 = 139,
  UNSPEC_SHA256H = 140,
  UNSPEC_SHA256H2 = 141,
  UNSPEC_SHA256SU0 = 142,
  UNSPEC_SHA256SU1 = 143,
  UNSPEC_PMULL = 144,
  UNSPEC_PMULL2 = 145
};
#define NUM_UNSPEC_VALUES 146
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_EH_RETURN = 0,
  UNSPECV_GET_FPCR = 1,
  UNSPECV_SET_FPCR = 2,
  UNSPECV_GET_FPSR = 3,
  UNSPECV_SET_FPSR = 4,
  UNSPECV_LX = 5,
  UNSPECV_SX = 6,
  UNSPECV_LDA = 7,
  UNSPECV_STL = 8,
  UNSPECV_ATOMIC_CMPSW = 9,
  UNSPECV_ATOMIC_EXCHG = 10,
  UNSPECV_ATOMIC_OP = 11
};
#define NUM_UNSPECV_VALUES 12
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
