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
static const char *ng0 = "C:/ALU/mux_64bit_8to1.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {0U, 0U, 0U, 0U};



static void A34_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2148);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1268U);
    t4 = *((char **)t3);

LAB5:    t3 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 3);
    if (t5 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t5 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t5 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t5 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t5 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t5 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t5 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t5 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1492);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);

LAB24:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);
    t6 = (t0 + 564U);
    t7 = *((char **)t6);
    t6 = (t0 + 1492);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 64);
    goto LAB24;

LAB8:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 652U);
    t6 = *((char **)t3);
    t3 = (t0 + 1492);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 64);
    goto LAB24;

LAB10:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 740U);
    t6 = *((char **)t3);
    t3 = (t0 + 1492);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 64);
    goto LAB24;

LAB12:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 828U);
    t6 = *((char **)t3);
    t3 = (t0 + 1492);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 64);
    goto LAB24;

LAB14:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 916U);
    t6 = *((char **)t3);
    t3 = (t0 + 1492);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 64);
    goto LAB24;

LAB16:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1004U);
    t6 = *((char **)t3);
    t3 = (t0 + 1492);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 64);
    goto LAB24;

LAB18:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1092U);
    t6 = *((char **)t3);
    t3 = (t0 + 1492);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 64);
    goto LAB24;

LAB20:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1180U);
    t6 = *((char **)t3);
    t3 = (t0 + 1492);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 64);
    goto LAB24;

}


extern void work_m_00000000002129533570_4221240961_init()
{
	static char *pe[] = {(void *)A34_0};
	xsi_register_didat("work_m_00000000002129533570_4221240961", "isim/_tmp/work/m_00000000002129533570_4221240961.didat");
	xsi_register_executes(pe);
}
