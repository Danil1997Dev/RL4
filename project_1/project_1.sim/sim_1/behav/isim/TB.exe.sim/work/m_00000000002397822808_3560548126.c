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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/intelFPGA/18.1/Lab_Verilog/LR4/project_1/project_1.srcs/sources_1/imports/LR4/M_CLOCK_DIVIDER.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};



static void Always_36_0(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 3232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3552);
    *((int *)t2) = 1;
    t3 = (t0 + 3264);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(42, ng0);

LAB9:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB11;

LAB10:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t4) > *((unsigned int *)t11))
        goto LAB12;

LAB13:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(49, ng0);

LAB19:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 6, t5, 32);
    t11 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 6, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2152);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB17:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(38, ng0);

LAB8:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 6, 0LL);
    goto LAB7;

LAB11:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(44, ng0);

LAB18:    xsi_set_current_line(45, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 6, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2152);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB17;

}


extern void work_m_00000000002397822808_3560548126_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000002397822808_3560548126", "isim/TB.exe.sim/work/m_00000000002397822808_3560548126.didat");
	xsi_register_executes(pe);
}
