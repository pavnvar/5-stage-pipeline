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
static const char *ng0 = "C:/Xilinx/ALU/alu_8op_tb.v";
static unsigned int ng1[] = {3435978205U, 0U, 2863315899U, 0U};
static unsigned int ng2[] = {858997828U, 0U, 286335522U, 0U};
static int ng3[] = {6, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {2863311530U, 0U, 2863311530U, 0U};
static unsigned int ng6[] = {3149642683U, 0U, 3149642683U, 0U};
static const char *ng7 = "A=%h, B=%h, Shiftamt=%h, Sel=%b, Output=%h";
static const char *ng8 = "Testing Subtraction";
static unsigned int ng9[] = {1U, 0U};
static const char *ng10 = "Testing OR";
static unsigned int ng11[] = {2U, 0U};
static const char *ng12 = "Testing XOR";
static unsigned int ng13[] = {3U, 0U};
static const char *ng14 = "Testing AND";
static unsigned int ng15[] = {4U, 0U};
static const char *ng16 = "Testing Comparator";
static unsigned int ng17[] = {5U, 0U};
static const char *ng18 = "Testing Logical Shift";
static int ng19[] = {4, 0};
static unsigned int ng20[] = {6U, 0U};



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
    char *t15;

LAB0:    t1 = (t0 + 1540U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 972);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1456);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 788);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t0 + 972);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t0 + 1064);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t0 + 564U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, ng7, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1456);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(63, ng0);
    xsi_vlogfile_write(1, 0, ng8, 1, t0);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 788);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t0 + 972);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t0 + 1064);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t0 + 564U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, ng7, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1456);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, ng10, 1, t0);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1456);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 788);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t0 + 972);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t0 + 1064);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t0 + 564U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, ng7, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, ng12, 1, t0);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1456);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 788);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t0 + 972);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t0 + 1064);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t0 + 564U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, ng7, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(86, ng0);
    xsi_vlogfile_write(1, 0, ng14, 1, t0);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1456);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 788);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t0 + 972);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t0 + 1064);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t0 + 564U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, ng7, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(94, ng0);
    xsi_vlogfile_write(1, 0, ng16, 1, t0);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1456);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 788);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t0 + 972);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t0 + 1064);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t0 + 564U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, ng7, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(102, ng0);
    xsi_vlogfile_write(1, 0, ng18, 1, t0);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 972);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1456);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 788);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t0 + 972);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t0 + 1064);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t0 + 564U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, ng7, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1456);
    xsi_process_wait(t2, 11200000000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(111, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000003863621089_3037109078_init()
{
	static char *pe[] = {(void *)I45_0};
	xsi_register_didat("work_m_00000000003863621089_3037109078", "isim/_tmp/work/m_00000000003863621089_3037109078.didat");
	xsi_register_executes(pe);
}
