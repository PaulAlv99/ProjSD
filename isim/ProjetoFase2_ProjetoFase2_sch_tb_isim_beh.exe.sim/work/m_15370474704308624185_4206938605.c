/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/projects/1/Barr2_fechar6.v";
static int ng1[] = {1, 0};
static int ng2[] = {6, 0};
static int ng3[] = {0, 0};



static void Always_34_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3496);
    *((int *)t2) = 1;
    t3 = (t0 + 2712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 3, t7, 32);
    t9 = (t0 + 1768);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    goto LAB2;

}

static void Always_41_1(char *t0)
{
    char t6[8];
    char t22[8];
    char t38[8];
    char t42[8];
    char t50[8];
    char t82[8];
    char t97[8];
    char t113[8];
    char t129[8];
    char t133[8];
    char t141[8];
    char t173[8];
    char t181[8];
    char t209[8];
    char t224[8];
    char t240[8];
    char t256[8];
    char t272[8];
    char t280[8];
    char t312[8];
    char t320[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t130;
    char *t131;
    char *t132;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    int t165;
    int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    char *t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    char *t222;
    char *t223;
    char *t225;
    char *t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    char *t239;
    char *t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    char *t247;
    char *t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    char *t252;
    char *t253;
    char *t254;
    char *t255;
    char *t257;
    char *t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    char *t271;
    char *t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    char *t279;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    char *t284;
    char *t285;
    char *t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    char *t294;
    char *t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    int t304;
    int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    char *t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    char *t319;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    char *t324;
    char *t325;
    char *t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    char *t334;
    char *t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    int t339;
    unsigned int t340;
    unsigned int t341;
    unsigned int t342;
    int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    char *t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    char *t354;
    char *t355;

LAB0:    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3512);
    *((int *)t2) = 1;
    t3 = (t0 + 2960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t50, t22, 8);

LAB16:    memset(t82, 0, 8);
    t83 = (t50 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t50);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t83) != 0)
        goto LAB31;

LAB32:    t90 = (t82 + 4);
    t91 = *((unsigned int *)t82);
    t92 = (!(t91));
    t93 = *((unsigned int *)t90);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB33;

LAB34:    memcpy(t181, t82, 8);

LAB35:    memset(t209, 0, 8);
    t210 = (t181 + 4);
    t211 = *((unsigned int *)t210);
    t212 = (~(t211));
    t213 = *((unsigned int *)t181);
    t214 = (t213 & t212);
    t215 = (t214 & 1U);
    if (t215 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t210) != 0)
        goto LAB68;

LAB69:    t217 = (t209 + 4);
    t218 = *((unsigned int *)t209);
    t219 = (!(t218));
    t220 = *((unsigned int *)t217);
    t221 = (t219 || t220);
    if (t221 > 0)
        goto LAB70;

LAB71:    memcpy(t320, t209, 8);

LAB72:    t348 = (t320 + 4);
    t349 = *((unsigned int *)t348);
    t350 = (~(t349));
    t351 = *((unsigned int *)t320);
    t352 = (t351 & t350);
    t353 = (t352 != 0);
    if (t353 > 0)
        goto LAB102;

LAB103:
LAB104:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 1768);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng2)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB18;

LAB17:    t40 = (t37 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t36) < *((unsigned int *)t37))
        goto LAB20;

LAB19:    *((unsigned int *)t38) = 1;

LAB20:    memset(t42, 0, 8);
    t43 = (t38 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t38);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t43) != 0)
        goto LAB24;

LAB25:    t51 = *((unsigned int *)t22);
    t52 = *((unsigned int *)t42);
    t53 = (t51 & t52);
    *((unsigned int *)t50) = t53;
    t54 = (t22 + 4);
    t55 = (t42 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB16;

LAB18:    t41 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB20;

LAB22:    *((unsigned int *)t42) = 1;
    goto LAB25;

LAB24:    t49 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t22 + 4);
    t65 = (t42 + 4);
    t66 = *((unsigned int *)t22);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = (t67 & t69);
    t75 = (t71 & t73);
    t76 = (~(t74));
    t77 = (~(t75));
    t78 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t78 & t76);
    t79 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t79 & t77);
    t80 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t80 & t76);
    t81 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t81 & t77);
    goto LAB28;

LAB29:    *((unsigned int *)t82) = 1;
    goto LAB32;

LAB31:    t89 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB32;

LAB33:    t95 = (t0 + 1048U);
    t96 = *((char **)t95);
    t95 = ((char*)((ng3)));
    memset(t97, 0, 8);
    t98 = (t96 + 4);
    t99 = (t95 + 4);
    t100 = *((unsigned int *)t96);
    t101 = *((unsigned int *)t95);
    t102 = (t100 ^ t101);
    t103 = *((unsigned int *)t98);
    t104 = *((unsigned int *)t99);
    t105 = (t103 ^ t104);
    t106 = (t102 | t105);
    t107 = *((unsigned int *)t98);
    t108 = *((unsigned int *)t99);
    t109 = (t107 | t108);
    t110 = (~(t109));
    t111 = (t106 & t110);
    if (t111 != 0)
        goto LAB39;

LAB36:    if (t109 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t97) = 1;

LAB39:    memset(t113, 0, 8);
    t114 = (t97 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t97);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t114) != 0)
        goto LAB42;

LAB43:    t121 = (t113 + 4);
    t122 = *((unsigned int *)t113);
    t123 = *((unsigned int *)t121);
    t124 = (t122 || t123);
    if (t124 > 0)
        goto LAB44;

LAB45:    memcpy(t141, t113, 8);

LAB46:    memset(t173, 0, 8);
    t174 = (t141 + 4);
    t175 = *((unsigned int *)t174);
    t176 = (~(t175));
    t177 = *((unsigned int *)t141);
    t178 = (t177 & t176);
    t179 = (t178 & 1U);
    if (t179 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t174) != 0)
        goto LAB61;

LAB62:    t182 = *((unsigned int *)t82);
    t183 = *((unsigned int *)t173);
    t184 = (t182 | t183);
    *((unsigned int *)t181) = t184;
    t185 = (t82 + 4);
    t186 = (t173 + 4);
    t187 = (t181 + 4);
    t188 = *((unsigned int *)t185);
    t189 = *((unsigned int *)t186);
    t190 = (t188 | t189);
    *((unsigned int *)t187) = t190;
    t191 = *((unsigned int *)t187);
    t192 = (t191 != 0);
    if (t192 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB35;

LAB38:    t112 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t113) = 1;
    goto LAB43;

LAB42:    t120 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB43;

LAB44:    t125 = (t0 + 1768);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    t128 = ((char*)((ng2)));
    memset(t129, 0, 8);
    t130 = (t127 + 4);
    if (*((unsigned int *)t130) != 0)
        goto LAB48;

LAB47:    t131 = (t128 + 4);
    if (*((unsigned int *)t131) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t127) < *((unsigned int *)t128))
        goto LAB50;

LAB49:    *((unsigned int *)t129) = 1;

LAB50:    memset(t133, 0, 8);
    t134 = (t129 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t129);
    t138 = (t137 & t136);
    t139 = (t138 & 1U);
    if (t139 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t134) != 0)
        goto LAB54;

LAB55:    t142 = *((unsigned int *)t113);
    t143 = *((unsigned int *)t133);
    t144 = (t142 & t143);
    *((unsigned int *)t141) = t144;
    t145 = (t113 + 4);
    t146 = (t133 + 4);
    t147 = (t141 + 4);
    t148 = *((unsigned int *)t145);
    t149 = *((unsigned int *)t146);
    t150 = (t148 | t149);
    *((unsigned int *)t147) = t150;
    t151 = *((unsigned int *)t147);
    t152 = (t151 != 0);
    if (t152 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB46;

LAB48:    t132 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB50;

LAB52:    *((unsigned int *)t133) = 1;
    goto LAB55;

LAB54:    t140 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t140) = 1;
    goto LAB55;

LAB56:    t153 = *((unsigned int *)t141);
    t154 = *((unsigned int *)t147);
    *((unsigned int *)t141) = (t153 | t154);
    t155 = (t113 + 4);
    t156 = (t133 + 4);
    t157 = *((unsigned int *)t113);
    t158 = (~(t157));
    t159 = *((unsigned int *)t155);
    t160 = (~(t159));
    t161 = *((unsigned int *)t133);
    t162 = (~(t161));
    t163 = *((unsigned int *)t156);
    t164 = (~(t163));
    t165 = (t158 & t160);
    t166 = (t162 & t164);
    t167 = (~(t165));
    t168 = (~(t166));
    t169 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t169 & t167);
    t170 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t170 & t168);
    t171 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t171 & t167);
    t172 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t172 & t168);
    goto LAB58;

LAB59:    *((unsigned int *)t173) = 1;
    goto LAB62;

LAB61:    t180 = (t173 + 4);
    *((unsigned int *)t173) = 1;
    *((unsigned int *)t180) = 1;
    goto LAB62;

LAB63:    t193 = *((unsigned int *)t181);
    t194 = *((unsigned int *)t187);
    *((unsigned int *)t181) = (t193 | t194);
    t195 = (t82 + 4);
    t196 = (t173 + 4);
    t197 = *((unsigned int *)t195);
    t198 = (~(t197));
    t199 = *((unsigned int *)t82);
    t200 = (t199 & t198);
    t201 = *((unsigned int *)t196);
    t202 = (~(t201));
    t203 = *((unsigned int *)t173);
    t204 = (t203 & t202);
    t205 = (~(t200));
    t206 = (~(t204));
    t207 = *((unsigned int *)t187);
    *((unsigned int *)t187) = (t207 & t205);
    t208 = *((unsigned int *)t187);
    *((unsigned int *)t187) = (t208 & t206);
    goto LAB65;

LAB66:    *((unsigned int *)t209) = 1;
    goto LAB69;

LAB68:    t216 = (t209 + 4);
    *((unsigned int *)t209) = 1;
    *((unsigned int *)t216) = 1;
    goto LAB69;

LAB70:    t222 = (t0 + 1048U);
    t223 = *((char **)t222);
    t222 = ((char*)((ng3)));
    memset(t224, 0, 8);
    t225 = (t223 + 4);
    t226 = (t222 + 4);
    t227 = *((unsigned int *)t223);
    t228 = *((unsigned int *)t222);
    t229 = (t227 ^ t228);
    t230 = *((unsigned int *)t225);
    t231 = *((unsigned int *)t226);
    t232 = (t230 ^ t231);
    t233 = (t229 | t232);
    t234 = *((unsigned int *)t225);
    t235 = *((unsigned int *)t226);
    t236 = (t234 | t235);
    t237 = (~(t236));
    t238 = (t233 & t237);
    if (t238 != 0)
        goto LAB76;

LAB73:    if (t236 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t224) = 1;

LAB76:    memset(t240, 0, 8);
    t241 = (t224 + 4);
    t242 = *((unsigned int *)t241);
    t243 = (~(t242));
    t244 = *((unsigned int *)t224);
    t245 = (t244 & t243);
    t246 = (t245 & 1U);
    if (t246 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t241) != 0)
        goto LAB79;

LAB80:    t248 = (t240 + 4);
    t249 = *((unsigned int *)t240);
    t250 = *((unsigned int *)t248);
    t251 = (t249 || t250);
    if (t251 > 0)
        goto LAB81;

LAB82:    memcpy(t280, t240, 8);

LAB83:    memset(t312, 0, 8);
    t313 = (t280 + 4);
    t314 = *((unsigned int *)t313);
    t315 = (~(t314));
    t316 = *((unsigned int *)t280);
    t317 = (t316 & t315);
    t318 = (t317 & 1U);
    if (t318 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t313) != 0)
        goto LAB97;

LAB98:    t321 = *((unsigned int *)t209);
    t322 = *((unsigned int *)t312);
    t323 = (t321 | t322);
    *((unsigned int *)t320) = t323;
    t324 = (t209 + 4);
    t325 = (t312 + 4);
    t326 = (t320 + 4);
    t327 = *((unsigned int *)t324);
    t328 = *((unsigned int *)t325);
    t329 = (t327 | t328);
    *((unsigned int *)t326) = t329;
    t330 = *((unsigned int *)t326);
    t331 = (t330 != 0);
    if (t331 == 1)
        goto LAB99;

LAB100:
LAB101:    goto LAB72;

LAB75:    t239 = (t224 + 4);
    *((unsigned int *)t224) = 1;
    *((unsigned int *)t239) = 1;
    goto LAB76;

LAB77:    *((unsigned int *)t240) = 1;
    goto LAB80;

LAB79:    t247 = (t240 + 4);
    *((unsigned int *)t240) = 1;
    *((unsigned int *)t247) = 1;
    goto LAB80;

LAB81:    t252 = (t0 + 1768);
    t253 = (t252 + 56U);
    t254 = *((char **)t253);
    t255 = ((char*)((ng3)));
    memset(t256, 0, 8);
    t257 = (t254 + 4);
    t258 = (t255 + 4);
    t259 = *((unsigned int *)t254);
    t260 = *((unsigned int *)t255);
    t261 = (t259 ^ t260);
    t262 = *((unsigned int *)t257);
    t263 = *((unsigned int *)t258);
    t264 = (t262 ^ t263);
    t265 = (t261 | t264);
    t266 = *((unsigned int *)t257);
    t267 = *((unsigned int *)t258);
    t268 = (t266 | t267);
    t269 = (~(t268));
    t270 = (t265 & t269);
    if (t270 != 0)
        goto LAB87;

LAB84:    if (t268 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t256) = 1;

LAB87:    memset(t272, 0, 8);
    t273 = (t256 + 4);
    t274 = *((unsigned int *)t273);
    t275 = (~(t274));
    t276 = *((unsigned int *)t256);
    t277 = (t276 & t275);
    t278 = (t277 & 1U);
    if (t278 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t273) != 0)
        goto LAB90;

LAB91:    t281 = *((unsigned int *)t240);
    t282 = *((unsigned int *)t272);
    t283 = (t281 & t282);
    *((unsigned int *)t280) = t283;
    t284 = (t240 + 4);
    t285 = (t272 + 4);
    t286 = (t280 + 4);
    t287 = *((unsigned int *)t284);
    t288 = *((unsigned int *)t285);
    t289 = (t287 | t288);
    *((unsigned int *)t286) = t289;
    t290 = *((unsigned int *)t286);
    t291 = (t290 != 0);
    if (t291 == 1)
        goto LAB92;

LAB93:
LAB94:    goto LAB83;

LAB86:    t271 = (t256 + 4);
    *((unsigned int *)t256) = 1;
    *((unsigned int *)t271) = 1;
    goto LAB87;

LAB88:    *((unsigned int *)t272) = 1;
    goto LAB91;

LAB90:    t279 = (t272 + 4);
    *((unsigned int *)t272) = 1;
    *((unsigned int *)t279) = 1;
    goto LAB91;

LAB92:    t292 = *((unsigned int *)t280);
    t293 = *((unsigned int *)t286);
    *((unsigned int *)t280) = (t292 | t293);
    t294 = (t240 + 4);
    t295 = (t272 + 4);
    t296 = *((unsigned int *)t240);
    t297 = (~(t296));
    t298 = *((unsigned int *)t294);
    t299 = (~(t298));
    t300 = *((unsigned int *)t272);
    t301 = (~(t300));
    t302 = *((unsigned int *)t295);
    t303 = (~(t302));
    t304 = (t297 & t299);
    t305 = (t301 & t303);
    t306 = (~(t304));
    t307 = (~(t305));
    t308 = *((unsigned int *)t286);
    *((unsigned int *)t286) = (t308 & t306);
    t309 = *((unsigned int *)t286);
    *((unsigned int *)t286) = (t309 & t307);
    t310 = *((unsigned int *)t280);
    *((unsigned int *)t280) = (t310 & t306);
    t311 = *((unsigned int *)t280);
    *((unsigned int *)t280) = (t311 & t307);
    goto LAB94;

LAB95:    *((unsigned int *)t312) = 1;
    goto LAB98;

LAB97:    t319 = (t312 + 4);
    *((unsigned int *)t312) = 1;
    *((unsigned int *)t319) = 1;
    goto LAB98;

LAB99:    t332 = *((unsigned int *)t320);
    t333 = *((unsigned int *)t326);
    *((unsigned int *)t320) = (t332 | t333);
    t334 = (t209 + 4);
    t335 = (t312 + 4);
    t336 = *((unsigned int *)t334);
    t337 = (~(t336));
    t338 = *((unsigned int *)t209);
    t339 = (t338 & t337);
    t340 = *((unsigned int *)t335);
    t341 = (~(t340));
    t342 = *((unsigned int *)t312);
    t343 = (t342 & t341);
    t344 = (~(t339));
    t345 = (~(t343));
    t346 = *((unsigned int *)t326);
    *((unsigned int *)t326) = (t346 & t344);
    t347 = *((unsigned int *)t326);
    *((unsigned int *)t326) = (t347 & t345);
    goto LAB101;

LAB102:    xsi_set_current_line(44, ng0);
    t354 = ((char*)((ng3)));
    t355 = (t0 + 1608);
    xsi_vlogvar_assign_value(t355, t354, 0, 0, 1);
    goto LAB104;

}

static void Always_47_2(char *t0)
{
    char t6[8];
    char t30[8];
    char t36[8];
    char t40[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;

LAB0:    t1 = (t0 + 3176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3528);
    *((int *)t2) = 1;
    t3 = (t0 + 3208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t8) != 0)
        goto LAB20;

LAB21:    t22 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = *((unsigned int *)t22);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB22;

LAB23:    memcpy(t48, t30, 8);

LAB24:    t80 = (t48 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t48);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB37;

LAB38:
LAB39:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(50, ng0);

LAB13:    xsi_set_current_line(51, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 3);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB20:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB22:    t28 = (t0 + 1768);
    t29 = (t28 + 56U);
    t34 = *((char **)t29);
    t35 = ((char*)((ng2)));
    memset(t36, 0, 8);
    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB26;

LAB25:    t38 = (t35 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t34) < *((unsigned int *)t35))
        goto LAB28;

LAB27:    *((unsigned int *)t36) = 1;

LAB28:    memset(t40, 0, 8);
    t41 = (t36 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t36);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t41) != 0)
        goto LAB32;

LAB33:    t49 = *((unsigned int *)t30);
    t50 = *((unsigned int *)t40);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t52 = (t30 + 4);
    t53 = (t40 + 4);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB24;

LAB26:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB28;

LAB30:    *((unsigned int *)t40) = 1;
    goto LAB33;

LAB32:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB33;

LAB34:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t48) = (t60 | t61);
    t62 = (t30 + 4);
    t63 = (t40 + 4);
    t64 = *((unsigned int *)t30);
    t65 = (~(t64));
    t66 = *((unsigned int *)t62);
    t67 = (~(t66));
    t68 = *((unsigned int *)t40);
    t69 = (~(t68));
    t70 = *((unsigned int *)t63);
    t71 = (~(t70));
    t72 = (t65 & t67);
    t73 = (t69 & t71);
    t74 = (~(t72));
    t75 = (~(t73));
    t76 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t76 & t74);
    t77 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t77 & t75);
    t78 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t78 & t74);
    t79 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t79 & t75);
    goto LAB36;

LAB37:    xsi_set_current_line(55, ng0);
    t86 = ((char*)((ng3)));
    t87 = (t0 + 1608);
    xsi_vlogvar_assign_value(t87, t86, 0, 0, 1);
    goto LAB39;

}


extern void work_m_15370474704308624185_4206938605_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Always_41_1,(void *)Always_47_2};
	xsi_register_didat("work_m_15370474704308624185_4206938605", "isim/ProjetoFase2_ProjetoFase2_sch_tb_isim_beh.exe.sim/work/m_15370474704308624185_4206938605.didat");
	xsi_register_executes(pe);
}
