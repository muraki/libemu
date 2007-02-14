/* @header@ */
#include <stdint.h>

#include "emu/emu_cpu.h"
#include "emu/emu_cpu_data.h"
#include "emu/emu_cpu_functions.h"
#include "emu/emu_memory.h"




int32_t instr_jcc_70(struct emu_cpu *c, struct instruction *i)
{
	/* 70 cb       Jump short if overflow (OF=1)                           JO rel8         */
	return 0;
}

int32_t instr_jcc_71(struct emu_cpu *c, struct instruction *i)
{

	/* 71 cb       Jump short if not overflow (OF=0)                       JNO rel8        */
	return 0;
}

int32_t instr_jcc_72(struct emu_cpu *c, struct instruction *i)
{

	/* 72 cb       Jump short if below (CF=1)                              JB rel8         */
	/* 72 cb       Jump short if carry (CF=1)                              JC rel8         */
	/* 72 cb       Jump short if not above or equal (CF=1)                 JNAE rel8       */
	return 0;
}

int32_t instr_jcc_73(struct emu_cpu *c, struct instruction *i)
{

	/* 73 cb       Jump short if above or equal (CF=0)                     JAE rel8        */
	/* 73 cb       Jump short if not below (CF=0)                          JNB rel8        */
	/* 73 cb       Jump short if not carry (CF=0)                          JNC rel8        */


	return 0;
}

int32_t instr_jcc_74(struct emu_cpu *c, struct instruction *i)
{

	/* 74 cb       Jump short if equal (ZF=1)                              JE rel8         */
	/* 74 cb       Jump short if zero (ZF = 1)                             JZ rel8         */


	return 0;
}

int32_t instr_jcc_75(struct emu_cpu *c, struct instruction *i)
{

	/* 75 cb       Jump short if not equal (ZF=0)                          JNE rel8        */
	/* 75 cb       Jump short if not zero (ZF=0)                           JNZ rel8        */


	return 0;
}

int32_t instr_jcc_76(struct emu_cpu *c, struct instruction *i)
{

	/* 76 cb       Jump short if below or equal (CF=1 or ZF=1)             JBE rel8        */
	/* 76 cb       Jump short if not above (CF=1 or ZF=1)                  JNA rel8        */


	return 0;
}

int32_t instr_jcc_77(struct emu_cpu *c, struct instruction *i)
{

	/* 77 cb       Jump short if above (CF=0 and ZF=0)                     JA rel8         */
	/* 77 cb       Jump short if not below or equal (CF=0 and ZF=0)        JNBE rel8       */


	return 0;
}

int32_t instr_jcc_78(struct emu_cpu *c, struct instruction *i)
{

	/* 78 cb       Jump short if sign (SF=1)                               JS rel8         */


	return 0;
}

int32_t instr_jcc_79(struct emu_cpu *c, struct instruction *i)
{

	/* 79 cb       Jump short if not sign (SF=0)                           JNS rel8        */


	return 0;
}

int32_t instr_jcc_7a(struct emu_cpu *c, struct instruction *i)
{

	/* 7A cb       Jump short if parity even (PF=1)                        JPE rel8        */
	/* 7A cb       Jump short if parity (PF=1)                             JP rel8         */


	return 0;
}

int32_t instr_jcc_7b(struct emu_cpu *c, struct instruction *i)
{

	/* 7B cb       Jump short if not parity (PF=0)                         JNP rel8        */
	/* 7B cb       Jump short if parity odd (PF=0)                         JPO rel8        */


	return 0;
}

int32_t instr_jcc_7c(struct emu_cpu *c, struct instruction *i)
{

	/* 7C cb       Jump short if less (SF<>OF)                             JL rel8         */
	/* 7C cb       Jump short if not greater or equal (SF<>OF)             JNGE rel8       */


	return 0;
}

int32_t instr_jcc_7d(struct emu_cpu *c, struct instruction *i)
{

	/* 7D cb       Jump short if greater or equal (SF=OF)                  JGE rel8        */
	/* 7D cb       Jump short if not less (SF=OF)                          JNL rel8        */


	return 0;
}

int32_t instr_jcc_7e(struct emu_cpu *c, struct instruction *i)
{

	/* 7E cb       Jump short if less or equal (ZF=1 or SF<>OF)            JLE rel8        */
	/* 7E cb       Jump short if not greater (ZF=1 or SF<>OF)              JNG rel8        */


	return 0;
}

int32_t instr_jcc_7f(struct emu_cpu *c, struct instruction *i)
{

	/* 7F cb       Jump short if greater (ZF=0 and SF=OF)                  JG rel8         */
	/* 7F cb       Jump short if not less or equal (ZF=0 and SF=OF)        JNLE rel8       */


	return 0;
}

int32_t instr_jcc_e3(struct emu_cpu *c, struct instruction *i)
{

	/* E3 cb       Jump short if CX register is 0                          JCXZ rel8       */
	/* E3 cb       Jump short if ECX register is 0                         JECXZ rel8      */


	return 0;
}

int32_t instr_jcc_0f80(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 80 cw/cd  Jump near if overflow (OF=1)                           JO rel16/32     */


	return 0;
}

int32_t instr_jcc_0f81(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 81 cw/cd  Jump near if not overflow (OF=0)                       JNO rel16/32    */


	return 0;
}

int32_t instr_jcc_0f82(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 82 cw/cd  Jump near if below (CF=1)                              JB rel16/32     */
	/* 0F 82 cw/cd  Jump near if carry (CF=1)                              JC rel16/32     */
	/* 0F 82 cw/cd  Jump near if not above or equal (CF=1)                 JNAE rel16/32   */


	return 0;
}

int32_t instr_jcc_0f83(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 83 cw/cd  Jump near if above or equal (CF=0)                     JAE rel16/32    */
	/* 0F 83 cw/cd  Jump near if not below (CF=0)                          JNB rel16/32    */
	/* 0F 83 cw/cd  Jump near if not carry (CF=0)                          JNC rel16/32    */


	return 0;
}

int32_t instr_jcc_0f84(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 84 cw/cd  Jump near if equal (ZF=1)                              JE rel16/32     */
	/* 0F 84 cw/cd  Jump near if zero (ZF=1)                               JZ rel16/32     */


	return 0;
}

int32_t instr_jcc_0f85(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 85 cw/cd  Jump near if not equal (ZF=0)                          JNE rel16/32    */
	/* 0F 85 cw/cd  Jump near if not zero (ZF=0)                           JNZ rel16/32    */


	return 0;
}

int32_t instr_jcc_0f86(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 86 cw/cd  Jump near if below or equal (CF=1 or ZF=1)             JBE rel16/32    */
	/* 0F 86 cw/cd  Jump near if not above (CF=1 or ZF=1)                  JNA rel16/32    */


	return 0;
}

int32_t instr_jcc_0f87(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 87 cw/cd  Jump near if above (CF=0 and ZF=0)                     JA rel16/32     */
	/* 0F 87 cw/cd  Jump near if not below or equal (CF=0 and ZF=0)        JNBE rel16/32   */


	return 0;
}

int32_t instr_jcc_0f88(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 88 cw/cd  Jump near if sign (SF=1)                               JS rel16/32     */


	return 0;
}

int32_t instr_jcc_0f89(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 89 cw/cd  Jump near if not sign (SF=0)                           JNS rel16/32    */


	return 0;
}

int32_t instr_jcc_0f8a(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 8A cw/cd  Jump near if parity even (PF=1)                        JPE rel16/32    */
	/* 0F 8A cw/cd  Jump near if parity (PF=1)                             JP rel16/32     */


	return 0;
}

int32_t instr_jcc_0f8b(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 8B cw/cd  Jump near if not parity (PF=0)                         JNP rel16/32    */
	/* 0F 8B cw/cd  Jump near if parity odd (PF=0)                         JPO rel16/32    */


	return 0;
}

int32_t instr_jcc_0f8c(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 8C cw/cd  Jump near if less (SF<>OF)                             JL rel16/32     */
	/* 0F 8C cw/cd  Jump near if not greater or equal (SF<>OF)             JNGE rel16/32   */


	return 0;
}

int32_t instr_jcc_0f8d(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 8D cw/cd  Jump near if greater or equal (SF=OF)                  JGE rel16/32    */
	/* 0F 8D cw/cd  Jump near if not less (SF=OF)                          JNL rel16/32    */


	return 0;
}

int32_t instr_jcc_0f8e(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 8E cw/cd  Jump near if less or equal (ZF=1 or SF<>OF)            JLE rel16/32    */
	/* 0F 8E cw/cd  Jump near if not greater (ZF=1 or SF<>OF)              JNG rel16/32    */


	return 0;
}

int32_t instr_jcc_0f8f(struct emu_cpu *c, struct instruction *i)
{

	/* 0F 8F cw/cd  Jump near if greater (ZF=0 and SF=OF)                  JG rel16/32     */
	/* 0F 8F cw/cd  Jump near if not less or equal (ZF=0 and SF=OF)        JNLE rel16/32   */


	return 0;
}
