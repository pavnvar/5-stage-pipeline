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
static const char *ng0 = "C:/ALU/full_adder_64bit_tb.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {2596069104U, 0U, 305419896U, 0U};
static unsigned int ng4[] = {267242409U, 0U, 2271560481U, 0U};
static const char *ng5 = "Test Case 1: A=%h, B=%h, Cin=%b, Sum=%h, Carry=%b";
static unsigned int ng6[] = {286331153U, 0U, 286331153U, 0U};
static unsigned int ng7[] = {4294967295U, 0U, 4294967295U, 0U};
static const char *ng8 = "Test Case 2: A=%h, B=%h, Cin=%b, Sum=%h, Carry=%b";
static const char *ng9 = "Test Case 3: A=%h, B=%h, Cin=%b, Sum=%h, Carry=%b";



static void I45_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 876);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1060);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 876);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1060);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1452);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 876);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 968);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t0 + 1060);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t0 + 564U);
    t13 = *((char **)t12);
    t12 = (t0 + 652U);
    t14 = *((char **)t12);
    xsi_vlogfile_write(1, 0, ng5, 6, t0, (char)118, t5, 64, (char)118, t8, 64, (char)118, t11, 1, (char)118, t13, 64, (char)118, t14, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 876);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1060);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1452);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 876);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 968);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t0 + 1060);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t0 + 564U);
    t13 = *((char **)t12);
    t12 = (t0 + 652U);
    t14 = *((char **)t12);
    xsi_vlogfile_write(1, 0, ng8, 6, t0, (char)118, t5, 64, (char)118, t8, 64, (char)118, t11, 1, (char)118, t13, 64, (char)118, t14, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 876);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1060);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1452);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 876);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 968);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t0 + 1060);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t0 + 564U);
    t13 = *((char **)t12);
    t12 = (t0 + 652U);
    t14 = *((char **)t12);
    xsi_vlogfile_write(1, 0, ng9, 6, t0, (char)118, t5, 64, (char)118, t8, 64, (char)118, t11, 1, (char)118, t13, 64, (char)118, t14, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1452);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(76, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000000118782716_3867374866_init()
{
	static char *pe[] = {(void *)I45_0};
	xsi_register_didat("work_m_00000000000118782716_3867374866", "isim/_tmp/work/m_00000000000118782716_3867374866.didat");
	xsi_register_executes(pe);
}
