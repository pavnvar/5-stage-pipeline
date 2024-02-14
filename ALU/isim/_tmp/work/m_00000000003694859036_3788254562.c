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
static const char *ng0 = "C:/Xilinx/ALU/bitwiseor_64bit_tb.v";
static unsigned int ng1[] = {3435978205U, 0U, 2863315899U, 0U};
static unsigned int ng2[] = {858997828U, 0U, 286335522U, 0U};
static unsigned int ng3[] = {4294967295U, 0U, 4294967295U, 0U};
static unsigned int ng4[] = {1U, 0U, 0U, 0U};
static const char *ng5 = "A=%h B=%h Out=%h";



static void I20_0(char *t0)
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

LAB0:    t1 = (t0 + 1356U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);

LAB4:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1272);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 788);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t0 + 564U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, ng5, 4, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t9, 64);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1272);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(36, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000003694859036_3788254562_init()
{
	static char *pe[] = {(void *)I20_0};
	xsi_register_didat("work_m_00000000003694859036_3788254562", "isim/_tmp/work/m_00000000003694859036_3788254562.didat");
	xsi_register_executes(pe);
}
