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
static const char *ng0 = "D:/intelFPGA/18.1/Lab_Verilog/LR4/project_1/project_1.srcs/sim_1/imports/LR4/TB.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {17, 0};
static unsigned int ng6[] = {5U, 0U};
static int ng7[] = {50, 0};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {3U, 0U};



static void Initial_36_0(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);

LAB4:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t4 = *((unsigned int *)t2);
    t5 = (~(t4));
    t6 = *((unsigned int *)t3);
    t7 = (t6 & t5);
    t8 = (t0 + 6896);
    *((int *)t8) = t7;

LAB6:    t9 = (t0 + 6896);
    if (*((int *)t9) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB7:    xsi_set_current_line(47, ng0);
    t10 = (t0 + 4848);
    *((int *)t10) = 1;
    t11 = (t0 + 4312);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    t2 = (t0 + 6896);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB6;

LAB10:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 744);
    t8 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_signed_multiply(t12, 32, t2, 32, t8, 32);
    t3 = (t12 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t7 = (t6 & t5);
    t9 = (t0 + 6900);
    *((int *)t9) = t7;

LAB11:    t10 = (t0 + 6900);
    if (*((int *)t10) > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB12:    xsi_set_current_line(56, ng0);
    t11 = (t0 + 4864);
    *((int *)t11) = 1;
    t13 = (t0 + 4312);
    *((char **)t13) = t11;
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    t2 = (t0 + 6900);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB11;

LAB15:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 744);
    t8 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_signed_multiply(t12, 32, t2, 32, t8, 32);
    t3 = (t12 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t7 = (t6 & t5);
    t9 = (t0 + 6904);
    *((int *)t9) = t7;

LAB16:    t10 = (t0 + 6904);
    if (*((int *)t10) > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB17:    xsi_set_current_line(66, ng0);
    t11 = (t0 + 4880);
    *((int *)t11) = 1;
    t13 = (t0 + 4312);
    *((char **)t13) = t11;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    t2 = (t0 + 6904);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB16;

LAB20:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 744);
    t8 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_signed_multiply(t12, 32, t2, 32, t8, 32);
    t3 = (t12 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t7 = (t6 & t5);
    t9 = (t0 + 6908);
    *((int *)t9) = t7;

LAB21:    t10 = (t0 + 6908);
    if (*((int *)t10) > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB22:    xsi_set_current_line(75, ng0);
    t11 = (t0 + 4896);
    *((int *)t11) = 1;
    t13 = (t0 + 4312);
    *((char **)t13) = t11;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    t2 = (t0 + 6908);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB21;

LAB25:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(84, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}

static void Initial_87_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 4528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);

LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4336);
    xsi_process_wait(t2, 12480LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2560);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4336);
    xsi_process_wait(t2, 8320LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    goto LAB4;

LAB8:    goto LAB1;

}


extern void work_m_00000000000745219453_1949555310_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Initial_87_1};
	xsi_register_didat("work_m_00000000000745219453_1949555310", "isim/TB.exe.sim/work/m_00000000000745219453_1949555310.didat");
	xsi_register_executes(pe);
}
