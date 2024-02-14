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
static const char *ng0 = "C:/Xilinx/ALU/mux_64bit_8to1_tb.v";
static unsigned int ng1[] = {2863311530U, 0U, 2863311530U, 0U};
static unsigned int ng2[] = {3149642683U, 0U, 3149642683U, 0U};
static unsigned int ng3[] = {3435973836U, 0U, 3435973836U, 0U};
static unsigned int ng4[] = {3722304989U, 0U, 3722304989U, 0U};
static unsigned int ng5[] = {4008636142U, 0U, 4008636142U, 0U};
static unsigned int ng6[] = {4294967295U, 0U, 4294967295U, 0U};
static unsigned int ng7[] = {286331153U, 0U, 286331153U, 0U};
static unsigned int ng8[] = {572662306U, 0U, 572662306U, 0U};
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {4U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {7U, 0U};
static const char *ng17 = "Output = %h";



static void I55_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);

LAB4:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 788);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 972);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1156);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1340);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1524);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1916);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1916);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1524);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1916);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1524);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1916);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1524);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1916);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1524);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1916);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1524);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1916);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1524);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1916);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1524);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 564U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, ng17, 2, t0, (char)118, t3, 64);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1916);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(83, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000002316706757_2410472357_init()
{
	static char *pe[] = {(void *)I55_0};
	xsi_register_didat("work_m_00000000002316706757_2410472357", "isim/_tmp/work/m_00000000002316706757_2410472357.didat");
	xsi_register_executes(pe);
}
