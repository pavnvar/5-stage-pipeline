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
static const char *ng0 = "C:/Xilinx/ALU/fs_64bit.v";

static void NR50_1(char *);
static void NR51_2(char *);


static void A49_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 1796U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2232);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1320);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 10484);
    *((int *)t4) = 1;
    NR50_1(t0);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1228);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 10488);
    *((int *)t3) = 1;
    NR51_2(t0);
    goto LAB2;

}

static void NR50_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 1924U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t3 = 0;
    t2 = (t0 + 916U);
    t4 = *((char **)t2);
    t2 = (t0 + 10484);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 2240);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 1320);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 64, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 2240);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NR51_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 2052U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t3 = 0;
    t2 = (t0 + 1004U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4U);
    t6 = (t4 + 8U);
    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = (t0 + 10488);
    if (*((int *)t14) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t17 = (t0 + 2248);
    *((int *)t17) = 0;

LAB8:
LAB1:    return;
LAB4:    t15 = (t0 + 1228);
    xsi_vlogvar_assignassignvalue(t15, t5, 0, 0, 0, 1, ((int*)(t14)));
    t3 = 1;
    goto LAB5;

LAB6:    t16 = (t0 + 2248);
    *((int *)t16) = 1;
    goto LAB8;

}


extern void work_m_00000000001203335758_0471177800_init()
{
	static char *pe[] = {(void *)A49_0,(void *)NR50_1,(void *)NR51_2};
	xsi_register_didat("work_m_00000000001203335758_0471177800", "isim/_tmp/work/m_00000000001203335758_0471177800.didat");
	xsi_register_executes(pe);
}
