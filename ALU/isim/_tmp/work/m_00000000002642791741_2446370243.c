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
static unsigned int ng0[] = {0U, 0U, 0U, 0U};
static int ng1[] = {1, 0};
static int ng2[] = {63, 0};
static int ng3[] = {0, 0};



static void C40_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 1612U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng0)));
    t3 = (t0 + 2236);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t2, 0, 64);
    xsi_driver_vfirst_trans(t3, 0, 63);

LAB1:    return;
}

static void C41_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char t37[8];
    char t42[8];
    char t58[8];
    char t66[8];
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
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;

LAB0:    t1 = (t0 + 1740U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 916U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
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

LAB7:    memset(t22, 0, 8);
    t23 = (t22 + 4U);
    t24 = (t6 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4U);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    memcpy(t66, t22, 8);

LAB14:    memset(t4, 0, 8);
    t94 = (t4 + 4U);
    t95 = (t66 + 4U);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t66);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t95) != 0)
        goto LAB28;

LAB29:    t101 = (t4 + 4U);
    t102 = *((unsigned int *)t4);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB30;

LAB31:    t106 = *((unsigned int *)t4);
    t107 = (~(t106));
    t108 = *((unsigned int *)t101);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t101) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t110, 8);

LAB38:    t111 = (t0 + 2272);
    t112 = (t111 + 32U);
    t113 = *((char **)t112);
    t114 = (t113 + 40U);
    t115 = *((char **)t114);
    t116 = (t115 + 4U);
    t117 = 1U;
    t118 = t117;
    t119 = (t3 + 4U);
    t120 = *((unsigned int *)t3);
    t117 = (t117 & t120);
    t121 = *((unsigned int *)t119);
    t118 = (t118 & t121);
    t122 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t122 & 4294967294U);
    t123 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t123 | t117);
    t124 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t124 & 4294967294U);
    t125 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t125 | t118);
    xsi_driver_vfirst_trans(t111, 0, 0);
    t126 = (t0 + 2176);
    *((int *)t126) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t22) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 828U);
    t36 = *((char **)t35);
    t35 = (t0 + 808U);
    t38 = (t35 + 40U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t37, 32, t36, t39, 2, t40, 32, 1);
    t41 = ((char*)((ng1)));
    memset(t42, 0, 8);
    t43 = (t42 + 4U);
    t44 = (t37 + 4U);
    t45 = (t41 + 4U);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t41);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB18;

LAB15:    if (t55 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t42) = 1;

LAB18:    memset(t58, 0, 8);
    t59 = (t58 + 4U);
    t60 = (t42 + 4U);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t42);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t60) != 0)
        goto LAB21;

LAB22:    t67 = *((unsigned int *)t22);
    t68 = *((unsigned int *)t58);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = (t22 + 4U);
    t71 = (t58 + 4U);
    t72 = (t66 + 4U);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    *((unsigned int *)t42) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t58) = 1;
    goto LAB22;

LAB21:    *((unsigned int *)t58) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB22;

LAB23:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t22 + 4U);
    t81 = (t58 + 4U);
    t82 = *((unsigned int *)t80);
    t83 = (~(t82));
    t84 = *((unsigned int *)t22);
    t85 = (t84 & t83);
    t86 = *((unsigned int *)t81);
    t87 = (~(t86));
    t88 = *((unsigned int *)t58);
    t89 = (t88 & t87);
    t90 = (~(t85));
    t91 = (~(t89));
    t92 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t92 & t90);
    t93 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t93 & t91);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB29;

LAB30:    t105 = ((char*)((ng1)));
    goto LAB31;

LAB32:    t110 = ((char*)((ng3)));
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 32, t105, 32, t110, 32);
    goto LAB38;

LAB36:    memcpy(t3, t105, 8);
    goto LAB38;

}

static void C42_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char t36[8];
    char t41[8];
    char t57[8];
    char t65[8];
    char t97[8];
    char t111[16];
    char t112[8];
    char t120[8];
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
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    int t144;
    int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    char *t173;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;

LAB0:    t1 = (t0 + 1868U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 916U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
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

LAB7:    memset(t22, 0, 8);
    t23 = (t22 + 4U);
    t24 = (t6 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4U);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t65, t22, 8);

LAB14:    memset(t97, 0, 8);
    t98 = (t97 + 4U);
    t99 = (t65 + 4U);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t65);
    t103 = (t102 & t101);
    t104 = (t103 & 1U);
    if (t104 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t99) != 0)
        goto LAB28;

LAB29:    t105 = (t97 + 4U);
    t106 = *((unsigned int *)t97);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB30;

LAB31:    memcpy(t120, t97, 8);

LAB32:    memset(t4, 0, 8);
    t152 = (t4 + 4U);
    t153 = (t120 + 4U);
    t154 = *((unsigned int *)t153);
    t155 = (~(t154));
    t156 = *((unsigned int *)t120);
    t157 = (t156 & t155);
    t158 = (t157 & 1U);
    if (t158 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t153) != 0)
        goto LAB42;

LAB43:    t159 = (t4 + 4U);
    t160 = *((unsigned int *)t4);
    t161 = *((unsigned int *)t159);
    t162 = (t160 || t161);
    if (t162 > 0)
        goto LAB44;

LAB45:    t164 = *((unsigned int *)t4);
    t165 = (~(t164));
    t166 = *((unsigned int *)t159);
    t167 = (t165 || t166);
    if (t167 > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t159) > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t4) > 0)
        goto LAB50;

LAB51:    memcpy(t3, t168, 8);

LAB52:    t169 = (t0 + 2308);
    t170 = (t169 + 32U);
    t171 = *((char **)t170);
    t172 = (t171 + 40U);
    t173 = *((char **)t172);
    t174 = (t173 + 4U);
    t175 = 1U;
    t176 = t175;
    t177 = (t3 + 4U);
    t178 = *((unsigned int *)t3);
    t175 = (t175 & t178);
    t179 = *((unsigned int *)t177);
    t176 = (t176 & t179);
    t180 = *((unsigned int *)t173);
    *((unsigned int *)t173) = (t180 & 4294967294U);
    t181 = *((unsigned int *)t173);
    *((unsigned int *)t173) = (t181 | t175);
    t182 = *((unsigned int *)t174);
    *((unsigned int *)t174) = (t182 & 4294967294U);
    t183 = *((unsigned int *)t174);
    *((unsigned int *)t174) = (t183 | t176);
    xsi_driver_vfirst_trans(t169, 1, 1);
    t184 = (t0 + 2184);
    *((int *)t184) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t22) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 828U);
    t35 = *((char **)t34);
    t34 = (t0 + 808U);
    t37 = (t34 + 40U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t36, 32, t35, t38, 2, t39, 32, 1);
    t40 = ((char*)((ng3)));
    memset(t41, 0, 8);
    t42 = (t41 + 4U);
    t43 = (t36 + 4U);
    t44 = (t40 + 4U);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t40);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB18;

LAB15:    if (t54 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t41) = 1;

LAB18:    memset(t57, 0, 8);
    t58 = (t57 + 4U);
    t59 = (t41 + 4U);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t41);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t59) != 0)
        goto LAB21;

LAB22:    t66 = *((unsigned int *)t22);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t22 + 4U);
    t70 = (t57 + 4U);
    t71 = (t65 + 4U);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    *((unsigned int *)t41) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t57) = 1;
    goto LAB22;

LAB21:    *((unsigned int *)t57) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB22;

LAB23:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t22 + 4U);
    t80 = (t57 + 4U);
    t81 = *((unsigned int *)t22);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB25;

LAB26:    *((unsigned int *)t97) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t97) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB29;

LAB30:    t109 = (t0 + 828U);
    t110 = *((char **)t109);
    t109 = ((char*)((ng0)));
    xsi_vlog_unsigned_not_equal(t111, 64, t110, 64, t109, 64);
    memset(t112, 0, 8);
    t113 = (t112 + 4U);
    t114 = (t111 + 4U);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t111);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t114) != 0)
        goto LAB35;

LAB36:    t121 = *((unsigned int *)t97);
    t122 = *((unsigned int *)t112);
    t123 = (t121 & t122);
    *((unsigned int *)t120) = t123;
    t124 = (t97 + 4U);
    t125 = (t112 + 4U);
    t126 = (t120 + 4U);
    t127 = *((unsigned int *)t124);
    t128 = *((unsigned int *)t125);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = *((unsigned int *)t126);
    t131 = (t130 != 0);
    if (t131 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB32;

LAB33:    *((unsigned int *)t112) = 1;
    goto LAB36;

LAB35:    *((unsigned int *)t112) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB36;

LAB37:    t132 = *((unsigned int *)t120);
    t133 = *((unsigned int *)t126);
    *((unsigned int *)t120) = (t132 | t133);
    t134 = (t97 + 4U);
    t135 = (t112 + 4U);
    t136 = *((unsigned int *)t97);
    t137 = (~(t136));
    t138 = *((unsigned int *)t134);
    t139 = (~(t138));
    t140 = *((unsigned int *)t112);
    t141 = (~(t140));
    t142 = *((unsigned int *)t135);
    t143 = (~(t142));
    t144 = (t137 & t139);
    t145 = (t141 & t143);
    t146 = (~(t144));
    t147 = (~(t145));
    t148 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t148 & t146);
    t149 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t149 & t147);
    t150 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t150 & t146);
    t151 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t151 & t147);
    goto LAB39;

LAB40:    *((unsigned int *)t4) = 1;
    goto LAB43;

LAB42:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB43;

LAB44:    t163 = ((char*)((ng1)));
    goto LAB45;

LAB46:    t168 = ((char*)((ng3)));
    goto LAB47;

LAB48:    xsi_vlog_unsigned_bit_combine(t3, 32, t163, 32, t168, 32);
    goto LAB52;

LAB50:    memcpy(t3, t163, 8);
    goto LAB52;

}

static void C43_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char t36[16];
    char t37[8];
    char t45[8];
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
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 916U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
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

LAB7:    memset(t22, 0, 8);
    t23 = (t22 + 4U);
    t24 = (t6 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4U);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t45, t22, 8);

LAB14:    memset(t4, 0, 8);
    t77 = (t4 + 4U);
    t78 = (t45 + 4U);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t45);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t78) != 0)
        goto LAB24;

LAB25:    t84 = (t4 + 4U);
    t85 = *((unsigned int *)t4);
    t86 = *((unsigned int *)t84);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB26;

LAB27:    t89 = *((unsigned int *)t4);
    t90 = (~(t89));
    t91 = *((unsigned int *)t84);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t84) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t4) > 0)
        goto LAB32;

LAB33:    memcpy(t3, t93, 8);

LAB34:    t94 = (t0 + 2344);
    t95 = (t94 + 32U);
    t96 = *((char **)t95);
    t97 = (t96 + 40U);
    t98 = *((char **)t97);
    t99 = (t98 + 4U);
    t100 = 1U;
    t101 = t100;
    t102 = (t3 + 4U);
    t103 = *((unsigned int *)t3);
    t100 = (t100 & t103);
    t104 = *((unsigned int *)t102);
    t101 = (t101 & t104);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t105 & 4294967294U);
    t106 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t106 | t100);
    t107 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t107 & 4294967294U);
    t108 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t108 | t101);
    xsi_driver_vfirst_trans(t94, 2, 2);
    t109 = (t0 + 2192);
    *((int *)t109) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t22) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 828U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng0)));
    xsi_vlog_unsigned_equal(t36, 64, t35, 64, t34, 64);
    memset(t37, 0, 8);
    t38 = (t37 + 4U);
    t39 = (t36 + 4U);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t39) != 0)
        goto LAB17;

LAB18:    t46 = *((unsigned int *)t22);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t22 + 4U);
    t50 = (t37 + 4U);
    t51 = (t45 + 4U);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t37) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB18;

LAB19:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t22 + 4U);
    t60 = (t37 + 4U);
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB21;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB25;

LAB26:    t88 = ((char*)((ng1)));
    goto LAB27;

LAB28:    t93 = ((char*)((ng3)));
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t3, 32, t88, 32, t93, 32);
    goto LAB34;

LAB32:    memcpy(t3, t88, 8);
    goto LAB34;

}


extern void work_m_00000000002642791741_2446370243_init()
{
	static char *pe[] = {(void *)C40_0,(void *)C41_1,(void *)C42_2,(void *)C43_3};
	xsi_register_didat("work_m_00000000002642791741_2446370243", "isim/_tmp/work/m_00000000002642791741_2446370243.didat");
	xsi_register_executes(pe);
}
