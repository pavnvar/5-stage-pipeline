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
static const char *ng0 = "C:/ALU/alu_8op_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {3435978205U, 0U, 2863315899U, 0U};
static unsigned int ng4[] = {858997828U, 0U, 286335522U, 0U};
static int ng5[] = {6, 0};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {2863311530U, 0U, 2863311530U, 0U};
static unsigned int ng8[] = {3149642683U, 0U, 3149642683U, 0U};
static const char *ng9 = "A=%h, B=%h, Shiftamt=%h, Sel=%b, Output=%h";
static const char *ng10 = "Testing Subtraction";
static unsigned int ng11[] = {1U, 0U};
static const char *ng12 = "Testing OR";
static unsigned int ng13[] = {2U, 0U};
static const char *ng14 = "Testing XOR";
static unsigned int ng15[] = {3U, 0U};
static const char *ng16 = "Testing AND";
static unsigned int ng17[] = {4U, 0U};
static const char *ng18 = "Testing Comparator";
static unsigned int ng19[] = {5U, 0U};
static const char *ng20 = "Testing Logical Shift";
static int ng21[] = {4, 0};
static unsigned int ng22[] = {6U, 0U};



static void I45_0(char *t0)
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

LAB0:    t1 = (t0 + 1632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1156);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);

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
LAB6:    xsi_set_current_line(47, ng0);

LAB8:    xsi_set_current_line(48, ng0);
    t9 = (t0 + 1548);
    xsi_process_wait(t9, 20000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1156);
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
    t16 = (t0 + 1156);
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

static void I52_1(char *t0)
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

LAB0:    t1 = (t0 + 1760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);

LAB4:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 972);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1676);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng6)));
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
    xsi_vlogfile_write(1, 0, ng9, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1676);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, ng10, 1, t0);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(74, ng0);
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
    xsi_vlogfile_write(1, 0, ng9, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1676);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(77, ng0);
    xsi_vlogfile_write(1, 0, ng12, 1, t0);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1676);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(82, ng0);
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
    xsi_vlogfile_write(1, 0, ng9, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(85, ng0);
    xsi_vlogfile_write(1, 0, ng14, 1, t0);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1676);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(90, ng0);
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
    xsi_vlogfile_write(1, 0, ng9, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(93, ng0);
    xsi_vlogfile_write(1, 0, ng16, 1, t0);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1676);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(98, ng0);
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
    xsi_vlogfile_write(1, 0, ng9, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(101, ng0);
    xsi_vlogfile_write(1, 0, ng18, 1, t0);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1676);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(106, ng0);
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
    xsi_vlogfile_write(1, 0, ng9, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(109, ng0);
    xsi_vlogfile_write(1, 0, ng20, 1, t0);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 972);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1676);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(115, ng0);
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
    xsi_vlogfile_write(1, 0, ng9, 6, t0, (char)118, t4, 64, (char)118, t7, 64, (char)118, t10, 6, (char)118, t13, 3, (char)118, t15, 64);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1676);
    xsi_process_wait(t2, 11200000000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(118, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000000546419518_3037109078_init()
{
	static char *pe[] = {(void *)I45_0,(void *)I52_1};
	xsi_register_didat("work_m_00000000000546419518_3037109078", "isim/_tmp/work/m_00000000000546419518_3037109078.didat");
	xsi_register_executes(pe);
}
