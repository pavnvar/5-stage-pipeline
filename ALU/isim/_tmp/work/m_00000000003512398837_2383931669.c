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
static const char *ng0 = "C:/Xilinx/ALU/fs_64bit_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {3435978205U, 0U, 2863315899U, 0U};
static unsigned int ng4[] = {858997828U, 0U, 286335522U, 0U};
static unsigned int ng5[] = {0U, 0U, 0U, 0U};
static unsigned int ng6[] = {4294967295U, 0U, 4294967295U, 0U};
static unsigned int ng7[] = {1U, 0U, 0U, 0U};



static void I51_0(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);

LAB4:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1152);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);

LAB5:    t2 = ((char*)((ng2)));
    t3 = (t2 + 4U);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t7 != 0);
    if (t8 > 0)
        goto LAB6;

LAB7:
LAB1:    return;
LAB6:    xsi_set_current_line(53, ng0);

LAB8:    xsi_set_current_line(54, ng0);
    t9 = (t0 + 1544);
    xsi_process_wait(t9, 20000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1152);
    t3 = (t2 + 32U);
    t9 = *((char **)t3);
    memset(t10, 0, 8);
    t11 = (t10 + 4U);
    t12 = (t9 + 4U);
    t4 = *((unsigned int *)t9);
    t5 = (~(t4));
    *((unsigned int *)t10) = t5;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB10:    t14 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t14 & 1U);
    t15 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t15 & 1U);
    t16 = (t0 + 1152);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 1);
    goto LAB5;

LAB11:    t6 = *((unsigned int *)t10);
    t7 = *((unsigned int *)t12);
    *((unsigned int *)t10) = (t6 | t7);
    t8 = *((unsigned int *)t11);
    t13 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t8 | t13);
    goto LAB10;

}

static void I60_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 1756U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);

LAB4:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1672);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 876);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1672);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1672);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1060);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1672);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 876);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1672);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1672);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1060);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1672);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 968);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1672);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 876);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1672);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1060);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1672);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(81, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000003512398837_2383931669_init()
{
	static char *pe[] = {(void *)I51_0,(void *)I60_1};
	xsi_register_didat("work_m_00000000003512398837_2383931669", "isim/_tmp/work/m_00000000003512398837_2383931669.didat");
	xsi_register_executes(pe);
}
