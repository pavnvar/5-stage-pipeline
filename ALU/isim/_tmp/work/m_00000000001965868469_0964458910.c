/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x734844ce */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif



static void C27_0(char *t0)
{
    char t3[16];
    char t6[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 1348U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 564U);
    t4 = *((char **)t2);
    t2 = (t0 + 652U);
    t5 = *((char **)t2);
    t7 = 0;

LAB7:    t8 = (t7 < 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    xsi_vlogtype_unsigned_bit_neg(t3, 64, t6, 64);
    t29 = (t0 + 1572);
    t30 = (t29 + 32U);
    t31 = *((char **)t30);
    t32 = (t31 + 40U);
    t33 = *((char **)t32);
    xsi_vlog_bit_copy(t33, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t29, 0, 63);
    t34 = (t0 + 1528);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    t27 = *((unsigned int *)t11);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t11) = (t27 | t28);

LAB6:    t7 = (t7 + 1);
    goto LAB7;

LAB5:    goto LAB6;

LAB8:    t9 = (t7 * 8U);
    t2 = (t4 + t9);
    t10 = (t5 + t9);
    t11 = (t6 + t9);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 ^ t13);
    *((unsigned int *)t11) = t14;
    t15 = (t7 * 8U);
    t16 = (t15 + 4U);
    t17 = (t4 + t16);
    t18 = (t15 + 4U);
    t19 = (t5 + t18);
    t20 = (t15 + 4U);
    t21 = (t6 + t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t19);
    t24 = (t22 | t23);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB4;
    else
        goto LAB5;

}


extern void work_m_00000000001965868469_0964458910_init()
{
	static char *pe[] = {(void *)C27_0};
	xsi_register_didat("work_m_00000000001965868469_0964458910", "isim/_tmp/work/m_00000000001965868469_0964458910.didat");
	xsi_register_executes(pe);
}
