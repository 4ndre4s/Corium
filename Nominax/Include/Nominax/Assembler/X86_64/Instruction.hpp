// File: Instruction.hpp
// Author: Mario
// Created: 20.08.2021 2:40 PM
// Project: Corium
// 
//                                  Apache License
//                            Version 2.0, January 2004
//                         http://www.apache.org/licenses/
// 
//    TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION
// 
//    1. Definitions.
// 
//       "License" shall mean the terms and conditions for use, reproduction,
//       and distribution as defined by Sections 1 through 9 of this document.
// 
//       "Licensor" shall mean the copyright owner or entity authorized by
//       the copyright owner that is granting the License.
// 
//       "Legal Entity" shall mean the union of the acting entity and all
//       other entities that control, are controlled by, or are under common
//       control with that entity. For the purposes of this definition,
//       "control" means (i) the power, direct or indirect, to cause the
//       direction or management of such entity, whether by contract or
//       otherwise, or (ii) ownership of fifty percent (50%) or more of the
//       outstanding shares, or (iii) beneficial ownership of such entity.
// 
//       "You" (or "Your") shall mean an individual or Legal Entity
//       exercising permissions granted by this License.
// 
//       "Source" form shall mean the preferred form for making modifications,
//       including but not limited to software source code, documentation
//       source, and configuration files.
// 
//       "Object" form shall mean any form resulting from mechanical
//       transformation or translation of a Source form, including but
//       not limited to compiled object code, generated documentation,
//       and conversions to other media types.
// 
//       "Work" shall mean the work of authorship, whether in Source or
//       Object form, made available under the License, as indicated by a
//       copyright notice that is included in or attached to the work
//       (an example is provided in the Appendix below).
// 
//       "Derivative Works" shall mean any work, whether in Source or Object
//       form, that is based on (or derived from) the Work and for which the
//       editorial revisions, annotations, elaborations, or other modifications
//       represent, as a whole, an original work of authorship. For the purposes
//       of this License, Derivative Works shall not include works that remain
//       separable from, or merely link (or bind by name) to the interfaces of,
//       the Work and Derivative Works thereof.
// 
//       "Contribution" shall mean any work of authorship, including
//       the original version of the Work and any modifications or additions
//       to that Work or Derivative Works thereof, that is intentionally
//       submitted to Licensor for inclusion in the Work by the copyright owner
//       or by an individual or Legal Entity authorized to submit on behalf of
//       the copyright owner. For the purposes of this definition, "submitted"
//       means any form of electronic, verbal, or written communication sent
//       to the Licensor or its representatives, including but not limited to
//       communication on electronic mailing lists, source code control systems,
//       and issue tracking systems that are managed by, or on behalf of, the
//       Licensor for the purpose of discussing and improving the Work, but
//       excluding communication that is conspicuously marked or otherwise
//       designated in writing by the copyright owner as "Not a Contribution."
// 
//       "Contributor" shall mean Licensor and any individual or Legal Entity
//       on behalf of whom a Contribution has been received by Licensor and
//       subsequently incorporated within the Work.
// 
//    2. Grant of Copyright License. Subject to the terms and conditions of
//       this License, each Contributor hereby grants to You a perpetual,
//       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
//       copyright license to reproduce, prepare Derivative Works of,
//       publicly display, publicly perform, sublicense, and distribute the
//       Work and such Derivative Works in Source or Object form.
// 
//    3. Grant of Patent License. Subject to the terms and conditions of
//       this License, each Contributor hereby grants to You a perpetual,
//       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
//       (except as stated in this section) patent license to make, have made,
//       use, offer to sell, sell, import, and otherwise transfer the Work,
//       where such license applies only to those patent claims licensable
//       by such Contributor that are necessarily infringed by their
//       Contribution(s) alone or by combination of their Contribution(s)
//       with the Work to which such Contribution(s) was submitted. If You
//       institute patent litigation against any entity (including a
//       cross-claim or counterclaim in a lawsuit) alleging that the Work
//       or a Contribution incorporated within the Work constitutes direct
//       or contributory patent infringement, then any patent licenses
//       granted to You under this License for that Work shall terminate
//       as of the date such litigation is filed.
// 
//    4. Redistribution. You may reproduce and distribute copies of the
//       Work or Derivative Works thereof in any medium, with or without
//       modifications, and in Source or Object form, provided that You
//       meet the following conditions:
// 
//       (a) You must give any other recipients of the Work or
//           Derivative Works a copy of this License; and
// 
//       (b) You must cause any modified files to carry prominent notices
//           stating that You changed the files; and
// 
//       (c) You must retain, in the Source form of any Derivative Works
//           that You distribute, all copyright, patent, trademark, and
//           attribution notices from the Source form of the Work,
//           excluding those notices that do not pertain to any part of
//           the Derivative Works; and
// 
//       (d) If the Work includes a "NOTICE" text file as part of its
//           distribution, then any Derivative Works that You distribute must
//           include a readable copy of the attribution notices contained
//           within such NOTICE file, excluding those notices that do not
//           pertain to any part of the Derivative Works, in at least one
//           of the following places: within a NOTICE text file distributed
//           as part of the Derivative Works; within the Source form or
//           documentation, if provided along with the Derivative Works; or,
//           within a display generated by the Derivative Works, if and
//           wherever such third-party notices normally appear. The contents
//           of the NOTICE file are for informational purposes only and
//           do not modify the License. You may add Your own attribution
//           notices within Derivative Works that You distribute, alongside
//           or as an addendum to the NOTICE text from the Work, provided
//           that such additional attribution notices cannot be construed
//           as modifying the License.
// 
//       You may add Your own copyright statement to Your modifications and
//       may provide additional or different license terms and conditions
//       for use, reproduction, or distribution of Your modifications, or
//       for any such Derivative Works as a whole, provided Your use,
//       reproduction, and distribution of the Work otherwise complies with
//       the conditions stated in this License.
// 
//    5. Submission of Contributions. Unless You explicitly state otherwise,
//       any Contribution intentionally submitted for inclusion in the Work
//       by You to the Licensor shall be under the terms and conditions of
//       this License, without any additional terms or conditions.
//       Notwithstanding the above, nothing herein shall supersede or modify
//       the terms of any separate license agreement you may have executed
//       with Licensor regarding such Contributions.
// 
//    6. Trademarks. This License does not grant permission to use the trade
//       names, trademarks, service marks, or product names of the Licensor,
//       except as required for reasonable and customary use in describing the
//       origin of the Work and reproducing the content of the NOTICE file.
// 
//    7. Disclaimer of Warranty. Unless required by applicable law or
//       agreed to in writing, Licensor provides the Work (and each
//       Contributor provides its Contributions) on an "AS IS" BASIS,
//       WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
//       implied, including, without limitation, any warranties or conditions
//       of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A
//       PARTICULAR PURPOSE. You are solely responsible for determining the
//       appropriateness of using or redistributing the Work and assume any
//       risks associated with Your exercise of permissions under this License.
// 
//    8. Limitation of Liability. In no event and under no legal theory,
//       whether in tort (including negligence), contract, or otherwise,
//       unless required by applicable law (such as deliberate and grossly
//       negligent acts) or agreed to in writing, shall any Contributor be
//       liable to You for damages, including any direct, indirect, special,
//       incidental, or consequential damages of any character arising as a
//       result of this License or out of the use or inability to use the
//       Work (including but not limited to damages for loss of goodwill,
//       work stoppage, computer failure or malfunction, or any and all
//       other commercial damages or losses), even if such Contributor
//       has been advised of the possibility of such damages.
// 
//    9. Accepting Warranty or Additional Liability. While redistributing
//       the Work or Derivative Works thereof, You may choose to offer,
//       and charge a fee for, acceptance of support, warranty, indemnity,
//       or other liability obligations and/or rights consistent with this
//       License. However, in accepting such obligations, You may act only
//       on Your own behalf and on Your sole responsibility, not on behalf
//       of any other Contributor, and only if You agree to indemnify,
//       defend, and hold each Contributor harmless for any liability
//       incurred by, or claims asserted against, such Contributor by reason
//       of your accepting any such warranty or additional liability.
// 
//    END OF TERMS AND CONDITIONS
// 
//    APPENDIX: How to apply the Apache License to your work.
// 
//       To apply the Apache License to your work, attach the following
//       boilerplate notice, with the fields enclosed by brackets "[]"
//       replaced with your own identifying information. (Don't include
//       the brackets!)  The text should be enclosed in the appropriate
//       comment syntax for the file format. We also recommend that a
//       file or class name and description of purpose be included on the
//       same "printed page" as the copyright notice for easier
//       identification within third-party archives.
// 
//    Copyright 2021 Mario Sieg "pinsrq" <mt3000@gmx.de>
// 
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
// 
//        http://www.apache.org/licenses/LICENSE-2.0
// 
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.

#pragma once

#include "../../Foundation/_Foundation.hpp"

namespace Nominax::Assembler::X86_64
{
	/// <summary>
	/// Contains all instruction types.
	/// </summary>
	enum class Instruction : std::uint16_t
	{
        ADC,
        ADCX,
        ADD,
        ADDPD,
        ADDPS,
        ADDSD,
        ADDSS,
        ADDSUBPD,
        ADDSUBPS,
        ADOX,
        AESDEC,
        AESDECLAST,
        AESENC,
        AESENCLAST,
        AESIMC,
        AESKEYGENASSIST,
        AND,
        ANDN,
        ANDNPD,
        ANDNPS,
        ANDPD,
        ANDPS,
        BEXTR,
        BLCFILL,
        BLCI,
        BLCIC,
        BLCMSK,
        BLCS,
        BLENDPD,
        BLENDPS,
        BLENDVPD,
        BLENDVPS,
        BLSFILL,
        BLSI,
        BLSIC,
        BLSMSK,
        BLSR,
        BSF,
        BSR,
        BSWAP,
        BT,
        BTC,
        BTR,
        BTS,
        BZHI,
        CALL,
        CBW,
        CDQ,
        CDQE,
        CLC,
        CLD,
        CLFLUSH,
        CLFLUSHOPT,
        CLWB,
        CLZERO,
        CMC,
        CMOVA,
        CMOVAE,
        CMOVB,
        CMOVBE,
        CMOVC,
        CMOVE,
        CMOVG,
        CMOVGE,
        CMOVL,
        CMOVLE,
        CMOVNA,
        CMOVNAE,
        CMOVNB,
        CMOVNBE,
        CMOVNC,
        CMOVNE,
        CMOVNG,
        CMOVNGE,
        CMOVNL,
        CMOVNLE,
        CMOVNO,
        CMOVNP,
        CMOVNS,
        CMOVNZ,
        CMOVO,
        CMOVP,
        CMOVPE,
        CMOVPO,
        CMOVS,
        CMOVZ,
        CMP,
        CMPPD,
        CMPPS,
        CMPSD,
        CMPSS,
        CMPXCHG,
        CMPXCHG16B,
        CMPXCHG8B,
        COMISD,
        COMISS,
        CPUID,
        CQO,
        CRC32,
        CVTDQ2PD,
        CVTDQ2PS,
        CVTPD2DQ,
        CVTPD2PI,
        CVTPD2PS,
        CVTPI2PD,
        CVTPI2PS,
        CVTPS2DQ,
        CVTPS2PD,
        CVTPS2PI,
        CVTSD2SI,
        CVTSD2SS,
        CVTSI2SD,
        CVTSI2SS,
        CVTSS2SD,
        CVTSS2SI,
        CVTTPD2DQ,
        CVTTPD2PI,
        CVTTPS2DQ,
        CVTTPS2PI,
        CVTTSD2SI,
        CVTTSS2SI,
        CWD,
        CWDE,
        DEC,
        DIV,
        DIVPD,
        DIVPS,
        DIVSD,
        DIVSS,
        DPPD,
        DPPS,
        EMMS,
        EXTRACTPS,
        EXTRQ,
        FEMMS,
        HADDPD,
        HADDPS,
        HSUBPD,
        HSUBPS,
        IDIV,
        IMUL,
        INC,
        INSERTPS,
        INSERTQ,
        INT,
        JA,
        JAE,
        JB,
        JBE,
        JC,
        JE,
        JECXZ,
        JG,
        JGE,
        JL,
        JLE,
        JMP,
        JNA,
        JNAE,
        JNB,
        JNBE,
        JNC,
        JNE,
        JNG,
        JNGE,
        JNL,
        JNLE,
        JNO,
        JNP,
        JNS,
        JNZ,
        JO,
        JP,
        JPE,
        JPO,
        JRCXZ,
        JS,
        JZ,
        KADDB,
        KADDD,
        KADDQ,
        KADDW,
        KANDB,
        KANDD,
        KANDNB,
        KANDND,
        KANDNQ,
        KANDNW,
        KANDQ,
        KANDW,
        KMOVB,
        KMOVD,
        KMOVQ,
        KMOVW,
        KNOTB,
        KNOTD,
        KNOTQ,
        KNOTW,
        KORB,
        KORD,
        KORQ,
        KORTESTB,
        KORTESTD,
        KORTESTQ,
        KORTESTW,
        KORW,
        KSHIFTLB,
        KSHIFTLD,
        KSHIFTLQ,
        KSHIFTLW,
        KSHIFTRB,
        KSHIFTRD,
        KSHIFTRQ,
        KSHIFTRW,
        KTESTB,
        KTESTD,
        KTESTQ,
        KTESTW,
        KUNPCKBW,
        KUNPCKDQ,
        KUNPCKWD,
        KXNORB,
        KXNORD,
        KXNORQ,
        KXNORW,
        KXORB,
        KXORD,
        KXORQ,
        KXORW,
        LDDQU,
        LDMXCSR,
        LEA,
        LFENCE,
        LZCNT,
        MASKMOVDQU,
        MASKMOVQ,
        MAXPD,
        MAXPS,
        MAXSD,
        MAXSS,
        MFENCE,
        MINPD,
        MINPS,
        MINSD,
        MINSS,
        MONITOR,
        MONITORX,
        MOV,
        MOVAPD,
        MOVAPS,
        MOVBE,
        MOVD,
        MOVDDUP,
        MOVDQ2Q,
        MOVDQA,
        MOVDQU,
        MOVHLPS,
        MOVHPD,
        MOVHPS,
        MOVLHPS,
        MOVLPD,
        MOVLPS,
        MOVMSKPD,
        MOVMSKPS,
        MOVNTDQ,
        MOVNTDQA,
        MOVNTI,
        MOVNTPD,
        MOVNTPS,
        MOVNTQ,
        MOVNTSD,
        MOVNTSS,
        MOVQ,
        MOVQ2DQ,
        MOVSD,
        MOVSHDUP,
        MOVSLDUP,
        MOVSS,
        MOVSX,
        MOVSXD,
        MOVUPD,
        MOVUPS,
        MOVZX,
        MPSADBW,
        MUL,
        MULPD,
        MULPS,
        MULSD,
        MULSS,
        MULX,
        MWAIT,
        MWAITX,
        NEG,
        NOP,
        NOT,
        OR,
        ORPD,
        ORPS,
        PABSB,
        PABSD,
        PABSW,
        PACKSSDW,
        PACKSSWB,
        PACKUSDW,
        PACKUSWB,
        PADDB,
        PADDD,
        PADDQ,
        PADDSB,
        PADDSW,
        PADDUSB,
        PADDUSW,
        PADDW,
        PALIGNR,
        PAND,
        PANDN,
        PAUSE,
        PAVGB,
        PAVGUSB,
        PAVGW,
        PBLENDVB,
        PBLENDW,
        PCLMULQDQ,
        PCMPEQB,
        PCMPEQD,
        PCMPEQQ,
        PCMPEQW,
        PCMPESTRI,
        PCMPESTRM,
        PCMPGTB,
        PCMPGTD,
        PCMPGTQ,
        PCMPGTW,
        PCMPISTRI,
        PCMPISTRM,
        PDEP,
        PEXT,
        PEXTRB,
        PEXTRD,
        PEXTRQ,
        PEXTRW,
        PF2ID,
        PF2IW,
        PFACC,
        PFADD,
        PFCMPEQ,
        PFCMPGE,
        PFCMPGT,
        PFMAX,
        PFMIN,
        PFMUL,
        PFNACC,
        PFPNACC,
        PFRCP,
        PFRCPIT1,
        PFRCPIT2,
        PFRSQIT1,
        PFRSQRT,
        PFSUB,
        PFSUBR,
        PHADDD,
        PHADDSW,
        PHADDW,
        PHMINPOSUW,
        PHSUBD,
        PHSUBSW,
        PHSUBW,
        PI2FD,
        PI2FW,
        PINSRB,
        PINSRD,
        PINSRQ,
        PINSRW,
        PMADDUBSW,
        PMADDWD,
        PMAXSB,
        PMAXSD,
        PMAXSW,
        PMAXUB,
        PMAXUD,
        PMAXUW,
        PMINSB,
        PMINSD,
        PMINSW,
        PMINUB,
        PMINUD,
        PMINUW,
        PMOVMSKB,
        PMOVSXBD,
        PMOVSXBQ,
        PMOVSXBW,
        PMOVSXDQ,
        PMOVSXWD,
        PMOVSXWQ,
        PMOVZXBD,
        PMOVZXBQ,
        PMOVZXBW,
        PMOVZXDQ,
        PMOVZXWD,
        PMOVZXWQ,
        PMULDQ,
        PMULHRSW,
        PMULHRW,
        PMULHUW,
        PMULHW,
        PMULLD,
        PMULLW,
        PMULUDQ,
        POP,
        POPCNT,
        POR,
        PREFETCH,
        PREFETCHNTA,
        PREFETCHT0,
        PREFETCHT1,
        PREFETCHT2,
        PREFETCHW,
        PREFETCHWT1,
        PSADBW,
        PSHUFB,
        PSHUFD,
        PSHUFHW,
        PSHUFLW,
        PSHUFW,
        PSIGNB,
        PSIGND,
        PSIGNW,
        PSLLD,
        PSLLDQ,
        PSLLQ,
        PSLLW,
        PSRAD,
        PSRAW,
        PSRLD,
        PSRLDQ,
        PSRLQ,
        PSRLW,
        PSUBB,
        PSUBD,
        PSUBQ,
        PSUBSB,
        PSUBSW,
        PSUBUSB,
        PSUBUSW,
        PSUBW,
        PSWAPD,
        PTEST,
        PUNPCKHBW,
        PUNPCKHDQ,
        PUNPCKHQDQ,
        PUNPCKHWD,
        PUNPCKLBW,
        PUNPCKLDQ,
        PUNPCKLQDQ,
        PUNPCKLWD,
        PUSH,
        PXOR,
        RCL,
        RCPPS,
        RCPSS,
        RCR,
        RDRAND,
        RDSEED,
        RDTSC,
        RDTSCP,
        RET,
        ROL,
        ROR,
        RORX,
        ROUNDPD,
        ROUNDPS,
        ROUNDSD,
        ROUNDSS,
        RSQRTPS,
        RSQRTSS,
        SAL,
        SAR,
        SARX,
        SBB,
        SETA,
        SETAE,
        SETB,
        SETBE,
        SETC,
        SETE,
        SETG,
        SETGE,
        SETL,
        SETLE,
        SETNA,
        SETNAE,
        SETNB,
        SETNBE,
        SETNC,
        SETNE,
        SETNG,
        SETNGE,
        SETNL,
        SETNLE,
        SETNO,
        SETNP,
        SETNS,
        SETNZ,
        SETO,
        SETP,
        SETPE,
        SETPO,
        SETS,
        SETZ,
        SFENCE,
        SHA1MSG1,
        SHA1MSG2,
        SHA1NEXTE,
        SHA1RNDS4,
        SHA256MSG1,
        SHA256MSG2,
        SHA256RNDS2,
        SHL,
        SHLD,
        SHLX,
        SHR,
        SHRD,
        SHRX,
        SHUFPD,
        SHUFPS,
        SQRTPD,
        SQRTPS,
        SQRTSD,
        SQRTSS,
        STC,
        STD,
        STMXCSR,
        SUB,
        SUBPD,
        SUBPS,
        SUBSD,
        SUBSS,
        SYSCALL,
        T1MSKC,
        TEST,
        TZCNT,
        TZMSK,
        UCOMISD,
        UCOMISS,
        UD2,
        UNPCKHPD,
        UNPCKHPS,
        UNPCKLPD,
        UNPCKLPS,
        VADDPD,
        VADDPS,
        VADDSD,
        VADDSS,
        VADDSUBPD,
        VADDSUBPS,
        VAESDEC,
        VAESDECLAST,
        VAESENC,
        VAESENCLAST,
        VAESIMC,
        VAESKEYGENASSIST,
        VALIGND,
        VALIGNQ,
        VANDNPD,
        VANDNPS,
        VANDPD,
        VANDPS,
        VBLENDMPD,
        VBLENDMPS,
        VBLENDPD,
        VBLENDPS,
        VBLENDVPD,
        VBLENDVPS,
        VBROADCASTF128,
        VBROADCASTF32X2,
        VBROADCASTF32X4,
        VBROADCASTF32X8,
        VBROADCASTF64X2,
        VBROADCASTF64X4,
        VBROADCASTI128,
        VBROADCASTI32X2,
        VBROADCASTI32X4,
        VBROADCASTI32X8,
        VBROADCASTI64X2,
        VBROADCASTI64X4,
        VBROADCASTSD,
        VBROADCASTSS,
        VCMPPD,
        VCMPPS,
        VCMPSD,
        VCMPSS,
        VCOMISD,
        VCOMISS,
        VCOMPRESSPD,
        VCOMPRESSPS,
        VCVTDQ2PD,
        VCVTDQ2PS,
        VCVTPD2DQ,
        VCVTPD2PS,
        VCVTPD2QQ,
        VCVTPD2UDQ,
        VCVTPD2UQQ,
        VCVTPH2PS,
        VCVTPS2DQ,
        VCVTPS2PD,
        VCVTPS2PH,
        VCVTPS2QQ,
        VCVTPS2UDQ,
        VCVTPS2UQQ,
        VCVTQQ2PD,
        VCVTQQ2PS,
        VCVTSD2SI,
        VCVTSD2SS,
        VCVTSD2USI,
        VCVTSI2SD,
        VCVTSI2SS,
        VCVTSS2SD,
        VCVTSS2SI,
        VCVTSS2USI,
        VCVTTPD2DQ,
        VCVTTPD2QQ,
        VCVTTPD2UDQ,
        VCVTTPD2UQQ,
        VCVTTPS2DQ,
        VCVTTPS2QQ,
        VCVTTPS2UDQ,
        VCVTTPS2UQQ,
        VCVTTSD2SI,
        VCVTTSD2USI,
        VCVTTSS2SI,
        VCVTTSS2USI,
        VCVTUDQ2PD,
        VCVTUDQ2PS,
        VCVTUQQ2PD,
        VCVTUQQ2PS,
        VCVTUSI2SD,
        VCVTUSI2SS,
        VDBPSADBW,
        VDIVPD,
        VDIVPS,
        VDIVSD,
        VDIVSS,
        VDPPD,
        VDPPS,
        VEXP2PD,
        VEXP2PS,
        VEXPANDPD,
        VEXPANDPS,
        VEXTRACTF128,
        VEXTRACTF32X4,
        VEXTRACTF32X8,
        VEXTRACTF64X2,
        VEXTRACTF64X4,
        VEXTRACTI128,
        VEXTRACTI32X4,
        VEXTRACTI32X8,
        VEXTRACTI64X2,
        VEXTRACTI64X4,
        VEXTRACTPS,
        VFIXUPIMMPD,
        VFIXUPIMMPS,
        VFIXUPIMMSD,
        VFIXUPIMMSS,
        VFMADD132PD,
        VFMADD132PS,
        VFMADD132SD,
        VFMADD132SS,
        VFMADD213PD,
        VFMADD213PS,
        VFMADD213SD,
        VFMADD213SS,
        VFMADD231PD,
        VFMADD231PS,
        VFMADD231SD,
        VFMADD231SS,
        VFMADDPD,
        VFMADDPS,
        VFMADDSD,
        VFMADDSS,
        VFMADDSUB132PD,
        VFMADDSUB132PS,
        VFMADDSUB213PD,
        VFMADDSUB213PS,
        VFMADDSUB231PD,
        VFMADDSUB231PS,
        VFMADDSUBPD,
        VFMADDSUBPS,
        VFMSUB132PD,
        VFMSUB132PS,
        VFMSUB132SD,
        VFMSUB132SS,
        VFMSUB213PD,
        VFMSUB213PS,
        VFMSUB213SD,
        VFMSUB213SS,
        VFMSUB231PD,
        VFMSUB231PS,
        VFMSUB231SD,
        VFMSUB231SS,
        VFMSUBADD132PD,
        VFMSUBADD132PS,
        VFMSUBADD213PD,
        VFMSUBADD213PS,
        VFMSUBADD231PD,
        VFMSUBADD231PS,
        VFMSUBADDPD,
        VFMSUBADDPS,
        VFMSUBPD,
        VFMSUBPS,
        VFMSUBSD,
        VFMSUBSS,
        VFNMADD132PD,
        VFNMADD132PS,
        VFNMADD132SD,
        VFNMADD132SS,
        VFNMADD213PD,
        VFNMADD213PS,
        VFNMADD213SD,
        VFNMADD213SS,
        VFNMADD231PD,
        VFNMADD231PS,
        VFNMADD231SD,
        VFNMADD231SS,
        VFNMADDPD,
        VFNMADDPS,
        VFNMADDSD,
        VFNMADDSS,
        VFNMSUB132PD,
        VFNMSUB132PS,
        VFNMSUB132SD,
        VFNMSUB132SS,
        VFNMSUB213PD,
        VFNMSUB213PS,
        VFNMSUB213SD,
        VFNMSUB213SS,
        VFNMSUB231PD,
        VFNMSUB231PS,
        VFNMSUB231SD,
        VFNMSUB231SS,
        VFNMSUBPD,
        VFNMSUBPS,
        VFNMSUBSD,
        VFNMSUBSS,
        VFPCLASSPD,
        VFPCLASSPS,
        VFPCLASSSD,
        VFPCLASSSS,
        VFRCZPD,
        VFRCZPS,
        VFRCZSD,
        VFRCZSS,
        VGATHERDPD,
        VGATHERDPS,
        VGATHERPF0DPD,
        VGATHERPF0DPS,
        VGATHERPF0QPD,
        VGATHERPF0QPS,
        VGATHERPF1DPD,
        VGATHERPF1DPS,
        VGATHERPF1QPD,
        VGATHERPF1QPS,
        VGATHERQPD,
        VGATHERQPS,
        VGETEXPPD,
        VGETEXPPS,
        VGETEXPSD,
        VGETEXPSS,
        VGETMANTPD,
        VGETMANTPS,
        VGETMANTSD,
        VGETMANTSS,
        VHADDPD,
        VHADDPS,
        VHSUBPD,
        VHSUBPS,
        VINSERTF128,
        VINSERTF32X4,
        VINSERTF32X8,
        VINSERTF64X2,
        VINSERTF64X4,
        VINSERTI128,
        VINSERTI32X4,
        VINSERTI32X8,
        VINSERTI64X2,
        VINSERTI64X4,
        VINSERTPS,
        VLDDQU,
        VLDMXCSR,
        VMASKMOVDQU,
        VMASKMOVPD,
        VMASKMOVPS,
        VMAXPD,
        VMAXPS,
        VMAXSD,
        VMAXSS,
        VMINPD,
        VMINPS,
        VMINSD,
        VMINSS,
        VMOVAPD,
        VMOVAPS,
        VMOVD,
        VMOVDDUP,
        VMOVDQA,
        VMOVDQA32,
        VMOVDQA64,
        VMOVDQU,
        VMOVDQU16,
        VMOVDQU32,
        VMOVDQU64,
        VMOVDQU8,
        VMOVHLPS,
        VMOVHPD,
        VMOVHPS,
        VMOVLHPS,
        VMOVLPD,
        VMOVLPS,
        VMOVMSKPD,
        VMOVMSKPS,
        VMOVNTDQ,
        VMOVNTDQA,
        VMOVNTPD,
        VMOVNTPS,
        VMOVQ,
        VMOVSD,
        VMOVSHDUP,
        VMOVSLDUP,
        VMOVSS,
        VMOVUPD,
        VMOVUPS,
        VMPSADBW,
        VMULPD,
        VMULPS,
        VMULSD,
        VMULSS,
        VORPD,
        VORPS,
        VPABSB,
        VPABSD,
        VPABSQ,
        VPABSW,
        VPACKSSDW,
        VPACKSSWB,
        VPACKUSDW,
        VPACKUSWB,
        VPADDB,
        VPADDD,
        VPADDQ,
        VPADDSB,
        VPADDSW,
        VPADDUSB,
        VPADDUSW,
        VPADDW,
        VPALIGNR,
        VPAND,
        VPANDD,
        VPANDN,
        VPANDND,
        VPANDNQ,
        VPANDQ,
        VPAVGB,
        VPAVGW,
        VPBLENDD,
        VPBLENDMB,
        VPBLENDMD,
        VPBLENDMQ,
        VPBLENDMW,
        VPBLENDVB,
        VPBLENDW,
        VPBROADCASTB,
        VPBROADCASTD,
        VPBROADCASTMB2Q,
        VPBROADCASTMW2D,
        VPBROADCASTQ,
        VPBROADCASTW,
        VPCLMULQDQ,
        VPCMOV,
        VPCMPB,
        VPCMPD,
        VPCMPEQB,
        VPCMPEQD,
        VPCMPEQQ,
        VPCMPEQW,
        VPCMPESTRI,
        VPCMPESTRM,
        VPCMPGTB,
        VPCMPGTD,
        VPCMPGTQ,
        VPCMPGTW,
        VPCMPISTRI,
        VPCMPISTRM,
        VPCMPQ,
        VPCMPUB,
        VPCMPUD,
        VPCMPUQ,
        VPCMPUW,
        VPCMPW,
        VPCOMB,
        VPCOMD,
        VPCOMPRESSD,
        VPCOMPRESSQ,
        VPCOMQ,
        VPCOMUB,
        VPCOMUD,
        VPCOMUQ,
        VPCOMUW,
        VPCOMW,
        VPCONFLICTD,
        VPCONFLICTQ,
        VPERM2F128,
        VPERM2I128,
        VPERMB,
        VPERMD,
        VPERMI2B,
        VPERMI2D,
        VPERMI2PD,
        VPERMI2PS,
        VPERMI2Q,
        VPERMI2W,
        VPERMIL2PD,
        VPERMIL2PS,
        VPERMILPD,
        VPERMILPS,
        VPERMPD,
        VPERMPS,
        VPERMQ,
        VPERMT2B,
        VPERMT2D,
        VPERMT2PD,
        VPERMT2PS,
        VPERMT2Q,
        VPERMT2W,
        VPERMW,
        VPEXPANDD,
        VPEXPANDQ,
        VPEXTRB,
        VPEXTRD,
        VPEXTRQ,
        VPEXTRW,
        VPGATHERDD,
        VPGATHERDQ,
        VPGATHERQD,
        VPGATHERQQ,
        VPHADDBD,
        VPHADDBQ,
        VPHADDBW,
        VPHADDD,
        VPHADDDQ,
        VPHADDSW,
        VPHADDUBD,
        VPHADDUBQ,
        VPHADDUBW,
        VPHADDUDQ,
        VPHADDUWD,
        VPHADDUWQ,
        VPHADDW,
        VPHADDWD,
        VPHADDWQ,
        VPHMINPOSUW,
        VPHSUBBW,
        VPHSUBD,
        VPHSUBDQ,
        VPHSUBSW,
        VPHSUBW,
        VPHSUBWD,
        VPINSRB,
        VPINSRD,
        VPINSRQ,
        VPINSRW,
        VPLZCNTD,
        VPLZCNTQ,
        VPMACSDD,
        VPMACSDQH,
        VPMACSDQL,
        VPMACSSDD,
        VPMACSSDQH,
        VPMACSSDQL,
        VPMACSSWD,
        VPMACSSWW,
        VPMACSWD,
        VPMACSWW,
        VPMADCSSWD,
        VPMADCSWD,
        VPMADD52HUQ,
        VPMADD52LUQ,
        VPMADDUBSW,
        VPMADDWD,
        VPMASKMOVD,
        VPMASKMOVQ,
        VPMAXSB,
        VPMAXSD,
        VPMAXSQ,
        VPMAXSW,
        VPMAXUB,
        VPMAXUD,
        VPMAXUQ,
        VPMAXUW,
        VPMINSB,
        VPMINSD,
        VPMINSQ,
        VPMINSW,
        VPMINUB,
        VPMINUD,
        VPMINUQ,
        VPMINUW,
        VPMOVB2M,
        VPMOVD2M,
        VPMOVDB,
        VPMOVDW,
        VPMOVM2B,
        VPMOVM2D,
        VPMOVM2Q,
        VPMOVM2W,
        VPMOVMSKB,
        VPMOVQ2M,
        VPMOVQB,
        VPMOVQD,
        VPMOVQW,
        VPMOVSDB,
        VPMOVSDW,
        VPMOVSQB,
        VPMOVSQD,
        VPMOVSQW,
        VPMOVSWB,
        VPMOVSXBD,
        VPMOVSXBQ,
        VPMOVSXBW,
        VPMOVSXDQ,
        VPMOVSXWD,
        VPMOVSXWQ,
        VPMOVUSDB,
        VPMOVUSDW,
        VPMOVUSQB,
        VPMOVUSQD,
        VPMOVUSQW,
        VPMOVUSWB,
        VPMOVW2M,
        VPMOVWB,
        VPMOVZXBD,
        VPMOVZXBQ,
        VPMOVZXBW,
        VPMOVZXDQ,
        VPMOVZXWD,
        VPMOVZXWQ,
        VPMULDQ,
        VPMULHRSW,
        VPMULHUW,
        VPMULHW,
        VPMULLD,
        VPMULLQ,
        VPMULLW,
        VPMULTISHIFTQB,
        VPMULUDQ,
        VPOPCNTD,
        VPOPCNTQ,
        VPOR,
        VPORD,
        VPORQ,
        VPPERM,
        VPROLD,
        VPROLQ,
        VPROLVD,
        VPROLVQ,
        VPRORD,
        VPRORQ,
        VPRORVD,
        VPRORVQ,
        VPROTB,
        VPROTD,
        VPROTQ,
        VPROTW,
        VPSADBW,
        VPSCATTERDD,
        VPSCATTERDQ,
        VPSCATTERQD,
        VPSCATTERQQ,
        VPSHAB,
        VPSHAD,
        VPSHAQ,
        VPSHAW,
        VPSHLB,
        VPSHLD,
        VPSHLQ,
        VPSHLW,
        VPSHUFB,
        VPSHUFD,
        VPSHUFHW,
        VPSHUFLW,
        VPSIGNB,
        VPSIGND,
        VPSIGNW,
        VPSLLD,
        VPSLLDQ,
        VPSLLQ,
        VPSLLVD,
        VPSLLVQ,
        VPSLLVW,
        VPSLLW,
        VPSRAD,
        VPSRAQ,
        VPSRAVD,
        VPSRAVQ,
        VPSRAVW,
        VPSRAW,
        VPSRLD,
        VPSRLDQ,
        VPSRLQ,
        VPSRLVD,
        VPSRLVQ,
        VPSRLVW,
        VPSRLW,
        VPSUBB,
        VPSUBD,
        VPSUBQ,
        VPSUBSB,
        VPSUBSW,
        VPSUBUSB,
        VPSUBUSW,
        VPSUBW,
        VPTERNLOGD,
        VPTERNLOGQ,
        VPTEST,
        VPTESTMB,
        VPTESTMD,
        VPTESTMQ,
        VPTESTMW,
        VPTESTNMB,
        VPTESTNMD,
        VPTESTNMQ,
        VPTESTNMW,
        VPUNPCKHBW,
        VPUNPCKHDQ,
        VPUNPCKHQDQ,
        VPUNPCKHWD,
        VPUNPCKLBW,
        VPUNPCKLDQ,
        VPUNPCKLQDQ,
        VPUNPCKLWD,
        VPXOR,
        VPXORD,
        VPXORQ,
        VRANGEPD,
        VRANGEPS,
        VRANGESD,
        VRANGESS,
        VRCP14PD,
        VRCP14PS,
        VRCP14SD,
        VRCP14SS,
        VRCP28PD,
        VRCP28PS,
        VRCP28SD,
        VRCP28SS,
        VRCPPS,
        VRCPSS,
        VREDUCEPD,
        VREDUCEPS,
        VREDUCESD,
        VREDUCESS,
        VRNDSCALEPD,
        VRNDSCALEPS,
        VRNDSCALESD,
        VRNDSCALESS,
        VROUNDPD,
        VROUNDPS,
        VROUNDSD,
        VROUNDSS,
        VRSQRT14PD,
        VRSQRT14PS,
        VRSQRT14SD,
        VRSQRT14SS,
        VRSQRT28PD,
        VRSQRT28PS,
        VRSQRT28SD,
        VRSQRT28SS,
        VRSQRTPS,
        VRSQRTSS,
        VSCALEFPD,
        VSCALEFPS,
        VSCALEFSD,
        VSCALEFSS,
        VSCATTERDPD,
        VSCATTERDPS,
        VSCATTERPF0DPD,
        VSCATTERPF0DPS,
        VSCATTERPF0QPD,
        VSCATTERPF0QPS,
        VSCATTERPF1DPD,
        VSCATTERPF1DPS,
        VSCATTERPF1QPD,
        VSCATTERPF1QPS,
        VSCATTERQPD,
        VSCATTERQPS,
        VSHUFF32X4,
        VSHUFF64X2,
        VSHUFI32X4,
        VSHUFI64X2,
        VSHUFPD,
        VSHUFPS,
        VSQRTPD,
        VSQRTPS,
        VSQRTSD,
        VSQRTSS,
        VSTMXCSR,
        VSUBPD,
        VSUBPS,
        VSUBSD,
        VSUBSS,
        VTESTPD,
        VTESTPS,
        VUCOMISD,
        VUCOMISS,
        VUNPCKHPD,
        VUNPCKHPS,
        VUNPCKLPD,
        VUNPCKLPS,
        VXORPD,
        VXORPS,
        VZEROALL,
        VZEROUPPER,
        XADD,
        XCHG,
        XGETBV,
        XLATB,
        XOR,
        XORPD,
        XORPS,
		Count_
	};
}
