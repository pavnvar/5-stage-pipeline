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
static const char *ng0 = "C:/Xilinx/ALU/bitwiseand_64bit_tb.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3435978205U, 0U, 2863315899U, 0U};
static unsigned int ng3[] = {858997828U, 0U, 286335522U, 0U};
static unsigned int ng4[] = {4294967295U, 0U, 4294967295U, 0U};
static unsigned int ng5[] = {1U, 0U, 0U, 0U};
static unsigned int ng6[] = {286331153U, 0U, 286331153U, 0U};



static void I46_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    t1 = (t0 + 1448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);

LAB4:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 972);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1364);
    xsi_process_wait(t2, 5000000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 972);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    *((unsigned int *)t4) = t10;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB7:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 1U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 1U);
    t17 = (t0 + 972);
    xsi_vlogvar_assign_value(t17, t4, 0, 0, 1);
    goto LAB5;

LAB8:    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t11 | t12);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    goto LAB7;

LAB9:    goto LAB1;

}

static void I52_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 1576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);

LAB4:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1492);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 788);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1492);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1492);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 788);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1492);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1492);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 788);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1492);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1492);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(70, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000001810183961_1428802494_init()
{
	static char *pe[] = {(void *)I46_0,(void *)I52_1};
	xsi_register_didat("work_m_00000000001810183961_1428802494", "isim/_tmp/work/m_00000000001810183961_1428802494.didat");
	xsi_register_executes(pe);
}
