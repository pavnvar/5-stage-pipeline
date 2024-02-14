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



static void C27_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 1348U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 564U);
    t3 = *((char **)t2);
    t2 = (t0 + 652U);
    t4 = *((char **)t2);
    t6 = 0;

LAB7:    t7 = (t6 < 2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t47 = (t0 + 1572);
    t48 = (t47 + 32U);
    t49 = *((char **)t48);
    t50 = (t49 + 40U);
    t51 = *((char **)t50);
    xsi_vlog_bit_copy(t51, 0, t5, 0, 64);
    xsi_driver_vfirst_trans(t47, 0, 63);
    t52 = (t0 + 1528);
    *((int *)t52) = 1;

LAB1:    return;
LAB4:    t26 = (t6 * 8U);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t10) = (t27 | t28);
    t29 = (t3 + t26);
    t30 = (t26 + 4U);
    t31 = (t3 + t30);
    t32 = (t4 + t26);
    t33 = (t26 + 4U);
    t34 = (t4 + t33);
    t35 = *((unsigned int *)t31);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = *((unsigned int *)t34);
    t40 = (~(t39));
    t41 = *((unsigned int *)t32);
    t42 = (t41 & t40);
    t43 = (~(t38));
    t44 = (~(t42));
    t45 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t45 & t43);
    t46 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t46 & t44);

LAB6:    t6 = (t6 + 1);
    goto LAB7;

LAB5:    goto LAB6;

LAB8:    t8 = (t6 * 8U);
    t2 = (t3 + t8);
    t9 = (t4 + t8);
    t10 = (t5 + t8);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = (t6 * 8U);
    t15 = (t14 + 4U);
    t16 = (t3 + t15);
    t17 = (t14 + 4U);
    t18 = (t4 + t17);
    t19 = (t14 + 4U);
    t20 = (t5 + t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB4;
    else
        goto LAB5;

}


extern void work_m_00000000001965868469_3774872128_init()
{
	static char *pe[] = {(void *)C27_0};
	xsi_register_didat("work_m_00000000001965868469_3774872128", "isim/_tmp/work/m_00000000001965868469_3774872128.didat");
	xsi_register_executes(pe);
}
