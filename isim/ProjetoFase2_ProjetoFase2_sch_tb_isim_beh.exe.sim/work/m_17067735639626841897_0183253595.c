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
static const char *ng0 = "/home/ise/projects/1/LED_a_piscar.v";
static int ng1[] = {1, 0};
static int ng2[] = {3, 0};
static int ng3[] = {0, 0};
static int ng4[] = {2, 0};



static void Always_27_0(char *t0)
{
    char t6[8];
    char t28[8];
    char t29[8];
    char t34[8];
    char t70[8];
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
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3000);
    *((int *)t2) = 1;
    t3 = (t0 + 2712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
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

LAB11:
LAB12:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB34;

LAB31:    if (t18 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t6) = 1;

LAB34:    t22 = (t0 + 1768);
    t30 = (t22 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t33 = (t31 + 4);
    t35 = (t32 + 4);
    t23 = *((unsigned int *)t31);
    t24 = *((unsigned int *)t32);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t33);
    t27 = *((unsigned int *)t35);
    t37 = (t26 ^ t27);
    t38 = (t25 | t37);
    t39 = *((unsigned int *)t33);
    t40 = *((unsigned int *)t35);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB38;

LAB35:    if (t41 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t28) = 1;

LAB38:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t28);
    t46 = (t44 | t45);
    *((unsigned int *)t29) = t46;
    t49 = (t6 + 4);
    t50 = (t28 + 4);
    t56 = (t29 + 4);
    t47 = *((unsigned int *)t49);
    t48 = *((unsigned int *)t50);
    t51 = (t47 | t48);
    *((unsigned int *)t56) = t51;
    t52 = *((unsigned int *)t56);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB39;

LAB40:
LAB41:    t66 = (t29 + 4);
    t77 = *((unsigned int *)t66);
    t78 = (~(t77));
    t79 = *((unsigned int *)t29);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB42;

LAB43:
LAB44:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB49;

LAB46:    if (t18 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t6) = 1;

LAB49:    t22 = (t0 + 1768);
    t30 = (t22 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t33 = (t31 + 4);
    t35 = (t32 + 4);
    t23 = *((unsigned int *)t31);
    t24 = *((unsigned int *)t32);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t33);
    t27 = *((unsigned int *)t35);
    t37 = (t26 ^ t27);
    t38 = (t25 | t37);
    t39 = *((unsigned int *)t33);
    t40 = *((unsigned int *)t35);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB53;

LAB50:    if (t41 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t28) = 1;

LAB53:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t28);
    t46 = (t44 | t45);
    *((unsigned int *)t29) = t46;
    t49 = (t6 + 4);
    t50 = (t28 + 4);
    t56 = (t29 + 4);
    t47 = *((unsigned int *)t49);
    t48 = *((unsigned int *)t50);
    t51 = (t47 | t48);
    *((unsigned int *)t56) = t51;
    t52 = *((unsigned int *)t56);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB54;

LAB55:
LAB56:    t66 = (t29 + 4);
    t77 = *((unsigned int *)t66);
    t78 = (~(t77));
    t79 = *((unsigned int *)t29);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(41, ng0);
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
        goto LAB64;

LAB61:    if (t18 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t6) = 1;

LAB64:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB65;

LAB66:
LAB67:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(30, ng0);

LAB13:    xsi_set_current_line(31, ng0);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng2)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB17;

LAB14:    if (t46 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t34) = 1;

LAB17:    memset(t29, 0, 8);
    t50 = (t34 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t53 = *((unsigned int *)t34);
    t54 = (t53 & t52);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t50) != 0)
        goto LAB20;

LAB21:    t57 = (t29 + 4);
    t58 = *((unsigned int *)t29);
    t59 = *((unsigned int *)t57);
    t60 = (t58 || t59);
    if (t60 > 0)
        goto LAB22;

LAB23:    t62 = *((unsigned int *)t29);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t57) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t29) > 0)
        goto LAB28;

LAB29:    memcpy(t28, t70, 8);

LAB30:    t71 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t71, t28, 0, 0, 3, 0LL);
    goto LAB12;

LAB16:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t29) = 1;
    goto LAB21;

LAB20:    t56 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB21;

LAB22:    t61 = ((char*)((ng3)));
    goto LAB23;

LAB24:    t66 = (t0 + 1768);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng1)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t68, 3, t69, 32);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t28, 32, t61, 32, t70, 32);
    goto LAB30;

LAB28:    memcpy(t28, t61, 8);
    goto LAB30;

LAB33:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB34;

LAB37:    t36 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB38;

LAB39:    t54 = *((unsigned int *)t29);
    t55 = *((unsigned int *)t56);
    *((unsigned int *)t29) = (t54 | t55);
    t57 = (t6 + 4);
    t61 = (t28 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t6);
    t72 = (t60 & t59);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t28);
    t73 = (t64 & t63);
    t65 = (~(t72));
    t74 = (~(t73));
    t75 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t75 & t65);
    t76 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t76 & t74);
    goto LAB41;

LAB42:    xsi_set_current_line(34, ng0);

LAB45:    xsi_set_current_line(35, ng0);
    t67 = ((char*)((ng1)));
    t68 = (t0 + 1608);
    xsi_vlogvar_assign_value(t68, t67, 0, 0, 1);
    goto LAB44;

LAB48:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB49;

LAB52:    t36 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB53;

LAB54:    t54 = *((unsigned int *)t29);
    t55 = *((unsigned int *)t56);
    *((unsigned int *)t29) = (t54 | t55);
    t57 = (t6 + 4);
    t61 = (t28 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t6);
    t72 = (t60 & t59);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t28);
    t73 = (t64 & t63);
    t65 = (~(t72));
    t74 = (~(t73));
    t75 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t75 & t65);
    t76 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t76 & t74);
    goto LAB56;

LAB57:    xsi_set_current_line(38, ng0);

LAB60:    xsi_set_current_line(39, ng0);
    t67 = ((char*)((ng3)));
    t68 = (t0 + 1608);
    xsi_vlogvar_assign_value(t68, t67, 0, 0, 1);
    goto LAB59;

LAB63:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(42, ng0);

LAB68:    xsi_set_current_line(43, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t0 + 1608);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB67;

}


extern void work_m_17067735639626841897_0183253595_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_17067735639626841897_0183253595", "isim/ProjetoFase2_ProjetoFase2_sch_tb_isim_beh.exe.sim/work/m_17067735639626841897_0183253595.didat");
	xsi_register_executes(pe);
}
