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
static const char *ng0 = "C:/Xilinx/ALU/FA_64bit_sync.v";
static int ng1[] = {0, 0};



static void C65_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1004U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4U);
    t5 = (t3 + 8U);
    t6 = (t3 + 12U);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 31);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t13 = (t0 + 2460);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    t18 = (t17 + 4U);
    t19 = 1U;
    t20 = t19;
    t21 = (t4 + 4U);
    t22 = *((unsigned int *)t4);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 4294967294U);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 | t19);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 4294967294U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 | t20);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t28 = (t0 + 2408);
    *((int *)t28) = 1;

LAB1:    return;
}

static void A68_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2100U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2416);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 916U);
    t4 = *((char **)t3);
    t3 = (t0 + 1496);
    xsi_vlogvar_generic_wait_assign_value(t3, t4, 2, 0, 0, 64, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1092U);
    t3 = *((char **)t2);
    t2 = (t0 + 1404);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 1, 0LL);
    goto LAB2;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 2228U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 2496);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}


extern void work_m_00000000001725091166_2810907791_init()
{
	static char *pe[] = {(void *)C65_0,(void *)A68_1,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000001725091166_2810907791", "isim/_tmp/work/m_00000000001725091166_2810907791.didat");
	xsi_register_executes(pe);
}
