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
static const char *ng0 = "/home/ise/projects/1/Matricula_Dia.v";



static void Always_30_0(char *t0)
{
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3480);
    *((int *)t2) = 1;
    t3 = (t0 + 3192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 15U);
    xsi_vlogtype_concat(t4, 4, 4, 1U, t5, 4);
    t15 = (t0 + 1448);
    xsi_vlogvar_assign_value(t15, t4, 0, 0, 4);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 4);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 4);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    xsi_vlogtype_concat(t4, 4, 4, 1U, t5, 4);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 4);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 8);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 8);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    xsi_vlogtype_concat(t4, 4, 4, 1U, t5, 4);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 4);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 12);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 12);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    xsi_vlogtype_concat(t4, 4, 4, 1U, t5, 4);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 4);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 16);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 16);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    xsi_vlogtype_concat(t4, 4, 4, 1U, t5, 4);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 4);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 20);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 20);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    xsi_vlogtype_concat(t4, 4, 4, 1U, t5, 4);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 4);
    goto LAB2;

}


extern void work_m_01841478955046320851_0333086759_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_01841478955046320851_0333086759", "isim/ProjetoFase2_ProjetoFase2_sch_tb_isim_beh.exe.sim/work/m_01841478955046320851_0333086759.didat");
	xsi_register_executes(pe);
}
