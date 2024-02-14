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
static const char *ng0 = "C:/Xilinx/ALU/bitwisexnor_64bit_tb.v";
static unsigned int ng1[] = {3435978205U, 0U, 2863315899U, 0U};
static unsigned int ng2[] = {858997828U, 0U, 286335522U, 0U};
static unsigned int ng3[] = {4294967295U, 0U, 4294967295U, 0U};
static unsigned int ng4[] = {1U, 0U, 0U, 0U};
static unsigned int ng5[] = {286331153U, 0U, 286331153U, 0U};



static void I43_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 1356U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1272);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 788);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1272);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1272);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 788);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1272);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1272);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 788);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1272);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1272);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(61, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000003694859036_2608908711_init()
{
	static char *pe[] = {(void *)I43_0};
	xsi_register_didat("work_m_00000000003694859036_2608908711", "isim/_tmp/work/m_00000000003694859036_2608908711.didat");
	xsi_register_executes(pe);
}
