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
static int ng0[] = {1, 0, 0, 0};



static void N29_0(char *t0)
{
    char t3[16];
    char t5[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 1612U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 652U);
    t4 = *((char **)t2);
    xsi_vlogtype_unsigned_bit_neg(t3, 64, t4, 64);
    t2 = ((char*)((ng0)));
    xsi_vlog_unsigned_add(t5, 64, t3, 64, t2, 32);
    t6 = (t0 + 1836);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    xsi_vlog_bit_copy(t10, 0, t5, 0, 1);
    xsi_driver_vfirst_trans(t6, 0, 0U);
    t11 = (t0 + 1792);
    *((int *)t11) = 1;

LAB1:    return;
}


extern void work_m_00000000002522559731_0663638877_init()
{
	static char *pe[] = {(void *)N29_0};
	xsi_register_didat("work_m_00000000002522559731_0663638877", "isim/_tmp/work/m_00000000002522559731_0663638877.didat");
	xsi_register_executes(pe);
}
