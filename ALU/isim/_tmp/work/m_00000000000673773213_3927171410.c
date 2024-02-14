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
static const char *ng0 = "C:/Xilinx/ALU/comparator_64bit_tb.v";
static unsigned int ng1[] = {3435978205U, 0U, 2863315899U, 0U};
static unsigned int ng2[] = {858997828U, 0U, 286335522U, 0U};
static unsigned int ng3[] = {0U, 0U, 0U, 0U};
static unsigned int ng4[] = {858998100U, 0U, 286335522U, 0U};
static unsigned int ng5[] = {2863311530U, 0U, 2863311530U, 0U};
static unsigned int ng6[] = {3149642683U, 0U, 3149642683U, 0U};
static const char *ng7 = "A=%h B=%h Greater=%b Lesser=%b Equal=%b";



static void I24_0(char *t0)
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

LAB0:    t1 = (t0 + 1532U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);

LAB4:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1448);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(26, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 964);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1448);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1056);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1448);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 964);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1448);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1056);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1448);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 964);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1448);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1056);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1448);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 964);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1448);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1056);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1448);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 964);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1448);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1056);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 964);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 1056);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t0 + 564U);
    t9 = *((char **)t8);
    t8 = (t0 + 652U);
    t10 = *((char **)t8);
    t8 = (t0 + 740U);
    t11 = *((char **)t8);
    xsi_vlogfile_write(1, 0, ng7, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t9, 1, (char)118, t10, 1, (char)118, t11, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1448);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(54, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000000673773213_3927171410_init()
{
	static char *pe[] = {(void *)I24_0};
	xsi_register_didat("work_m_00000000000673773213_3927171410", "isim/_tmp/work/m_00000000000673773213_3927171410.didat");
	xsi_register_executes(pe);
}
