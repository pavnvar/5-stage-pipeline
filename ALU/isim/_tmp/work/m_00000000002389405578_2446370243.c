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
static int ng0[] = {1, 0};
static int ng1[] = {0, 0};
static int ng2[] = {63, 0};
static unsigned int ng3[] = {0U, 0U, 0U, 0U};



static void C46_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t38[8];
    char t39[8];
    char t42[8];
    char t47[8];
    char t79[8];
    char t80[8];
    char t83[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;

LAB0:    t1 = (t0 + 1876U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1092U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t101 = (t0 + 2372);
    t102 = (t101 + 32U);
    t103 = *((char **)t102);
    t104 = (t103 + 40U);
    t105 = *((char **)t104);
    t106 = (t105 + 4U);
    t107 = 1U;
    t108 = t107;
    t109 = (t3 + 4U);
    t110 = *((unsigned int *)t3);
    t107 = (t107 & t110);
    t111 = *((unsigned int *)t109);
    t108 = (t108 & t111);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t112 & 4294967294U);
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t113 | t107);
    t114 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t114 & 4294967294U);
    t115 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t115 | t108);
    xsi_driver_vfirst_trans(t101, 0, 0);
    t116 = (t0 + 2312);
    *((int *)t116) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t40 = (t0 + 1004U);
    t41 = *((char **)t40);
    t40 = (t0 + 984U);
    t43 = (t40 + 40U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t42, 32, t41, t44, 2, t45, 32, 1);
    t46 = ((char*)((ng0)));
    memset(t47, 0, 8);
    t48 = (t47 + 4U);
    t49 = (t42 + 4U);
    t50 = (t46 + 4U);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t46);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB24;

LAB21:    if (t60 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t47) = 1;

LAB24:    memset(t39, 0, 8);
    t63 = (t39 + 4U);
    t64 = (t47 + 4U);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t47);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t64) != 0)
        goto LAB27;

LAB28:    t70 = (t39 + 4U);
    t71 = *((unsigned int *)t39);
    t72 = *((unsigned int *)t70);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB29;

LAB30:    t75 = *((unsigned int *)t39);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t70) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t39) > 0)
        goto LAB35;

LAB36:    memcpy(t38, t79, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t38, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    *((unsigned int *)t47) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t39) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t39) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB28;

LAB29:    t74 = ((char*)((ng1)));
    goto LAB30;

LAB31:    t81 = (t0 + 1004U);
    t82 = *((char **)t81);
    t81 = ((char*)((ng3)));
    xsi_vlog_unsigned_not_equal(t83, 64, t82, 64, t81, 64);
    memset(t80, 0, 8);
    t84 = (t80 + 4U);
    t85 = (t83 + 4U);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t83);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t85) != 0)
        goto LAB40;

LAB41:    t91 = (t80 + 4U);
    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t91);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB42;

LAB43:    t96 = *((unsigned int *)t80);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t91) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t80) > 0)
        goto LAB48;

LAB49:    memcpy(t79, t100, 8);

LAB50:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t38, 32, t74, 32, t79, 32);
    goto LAB37;

LAB35:    memcpy(t38, t74, 8);
    goto LAB37;

LAB38:    *((unsigned int *)t80) = 1;
    goto LAB41;

LAB40:    *((unsigned int *)t80) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB41;

LAB42:    t95 = ((char*)((ng0)));
    goto LAB43;

LAB44:    t100 = ((char*)((ng1)));
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t79, 32, t95, 32, t100, 32);
    goto LAB50;

LAB48:    memcpy(t79, t95, 8);
    goto LAB50;

}

static void C50_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t38[8];
    char t39[8];
    char t42[8];
    char t47[8];
    char t79[8];
    char t80[8];
    char t83[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;

LAB0:    t1 = (t0 + 2004U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1092U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t101 = (t0 + 2408);
    t102 = (t101 + 32U);
    t103 = *((char **)t102);
    t104 = (t103 + 40U);
    t105 = *((char **)t104);
    t106 = (t105 + 4U);
    t107 = 1U;
    t108 = t107;
    t109 = (t3 + 4U);
    t110 = *((unsigned int *)t3);
    t107 = (t107 & t110);
    t111 = *((unsigned int *)t109);
    t108 = (t108 & t111);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t112 & 4294967294U);
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t113 | t107);
    t114 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t114 & 4294967294U);
    t115 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t115 | t108);
    xsi_driver_vfirst_trans(t101, 0, 0);
    t116 = (t0 + 2320);
    *((int *)t116) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng0)));
    goto LAB13;

LAB14:    t40 = (t0 + 1004U);
    t41 = *((char **)t40);
    t40 = (t0 + 984U);
    t43 = (t40 + 40U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t42, 32, t41, t44, 2, t45, 32, 1);
    t46 = ((char*)((ng0)));
    memset(t47, 0, 8);
    t48 = (t47 + 4U);
    t49 = (t42 + 4U);
    t50 = (t46 + 4U);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t46);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB24;

LAB21:    if (t60 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t47) = 1;

LAB24:    memset(t39, 0, 8);
    t63 = (t39 + 4U);
    t64 = (t47 + 4U);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t47);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t64) != 0)
        goto LAB27;

LAB28:    t70 = (t39 + 4U);
    t71 = *((unsigned int *)t39);
    t72 = *((unsigned int *)t70);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB29;

LAB30:    t75 = *((unsigned int *)t39);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t70) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t39) > 0)
        goto LAB35;

LAB36:    memcpy(t38, t79, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t38, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    *((unsigned int *)t47) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t39) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t39) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB28;

LAB29:    t74 = ((char*)((ng0)));
    goto LAB30;

LAB31:    t81 = (t0 + 1004U);
    t82 = *((char **)t81);
    t81 = ((char*)((ng3)));
    xsi_vlog_unsigned_not_equal(t83, 64, t82, 64, t81, 64);
    memset(t80, 0, 8);
    t84 = (t80 + 4U);
    t85 = (t83 + 4U);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t83);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t85) != 0)
        goto LAB40;

LAB41:    t91 = (t80 + 4U);
    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t91);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB42;

LAB43:    t96 = *((unsigned int *)t80);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t91) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t80) > 0)
        goto LAB48;

LAB49:    memcpy(t79, t100, 8);

LAB50:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t38, 32, t74, 32, t79, 32);
    goto LAB37;

LAB35:    memcpy(t38, t74, 8);
    goto LAB37;

LAB38:    *((unsigned int *)t80) = 1;
    goto LAB41;

LAB40:    *((unsigned int *)t80) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB41;

LAB42:    t95 = ((char*)((ng1)));
    goto LAB43;

LAB44:    t100 = ((char*)((ng0)));
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t79, 32, t95, 32, t100, 32);
    goto LAB50;

LAB48:    memcpy(t79, t95, 8);
    goto LAB50;

}

static void C54_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t38[8];
    char t39[8];
    char t42[8];
    char t47[8];
    char t79[8];
    char t80[8];
    char t83[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;

LAB0:    t1 = (t0 + 2132U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1092U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t101 = (t0 + 2444);
    t102 = (t101 + 32U);
    t103 = *((char **)t102);
    t104 = (t103 + 40U);
    t105 = *((char **)t104);
    t106 = (t105 + 4U);
    t107 = 1U;
    t108 = t107;
    t109 = (t3 + 4U);
    t110 = *((unsigned int *)t3);
    t107 = (t107 & t110);
    t111 = *((unsigned int *)t109);
    t108 = (t108 & t111);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t112 & 4294967294U);
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t113 | t107);
    t114 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t114 & 4294967294U);
    t115 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t115 | t108);
    xsi_driver_vfirst_trans(t101, 0, 0);
    t116 = (t0 + 2328);
    *((int *)t116) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t40 = (t0 + 1004U);
    t41 = *((char **)t40);
    t40 = (t0 + 984U);
    t43 = (t40 + 40U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t42, 32, t41, t44, 2, t45, 32, 1);
    t46 = ((char*)((ng0)));
    memset(t47, 0, 8);
    t48 = (t47 + 4U);
    t49 = (t42 + 4U);
    t50 = (t46 + 4U);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t46);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB24;

LAB21:    if (t60 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t47) = 1;

LAB24:    memset(t39, 0, 8);
    t63 = (t39 + 4U);
    t64 = (t47 + 4U);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t47);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t64) != 0)
        goto LAB27;

LAB28:    t70 = (t39 + 4U);
    t71 = *((unsigned int *)t39);
    t72 = *((unsigned int *)t70);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB29;

LAB30:    t75 = *((unsigned int *)t39);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t70) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t39) > 0)
        goto LAB35;

LAB36:    memcpy(t38, t79, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t38, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    *((unsigned int *)t47) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t39) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t39) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB28;

LAB29:    t74 = ((char*)((ng1)));
    goto LAB30;

LAB31:    t81 = (t0 + 1004U);
    t82 = *((char **)t81);
    t81 = ((char*)((ng3)));
    xsi_vlog_unsigned_equal(t83, 64, t82, 64, t81, 64);
    memset(t80, 0, 8);
    t84 = (t80 + 4U);
    t85 = (t83 + 4U);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t83);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t85) != 0)
        goto LAB40;

LAB41:    t91 = (t80 + 4U);
    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t91);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB42;

LAB43:    t96 = *((unsigned int *)t80);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t91) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t80) > 0)
        goto LAB48;

LAB49:    memcpy(t79, t100, 8);

LAB50:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t38, 32, t74, 32, t79, 32);
    goto LAB37;

LAB35:    memcpy(t38, t74, 8);
    goto LAB37;

LAB38:    *((unsigned int *)t80) = 1;
    goto LAB41;

LAB40:    *((unsigned int *)t80) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB41;

LAB42:    t95 = ((char*)((ng0)));
    goto LAB43;

LAB44:    t100 = ((char*)((ng1)));
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t79, 32, t95, 32, t100, 32);
    goto LAB50;

LAB48:    memcpy(t79, t95, 8);
    goto LAB50;

}


extern void work_m_00000000002389405578_2446370243_init()
{
	static char *pe[] = {(void *)C46_0,(void *)C50_1,(void *)C54_2};
	xsi_register_didat("work_m_00000000002389405578_2446370243", "isim/_tmp/work/m_00000000002389405578_2446370243.didat");
	xsi_register_executes(pe);
}
