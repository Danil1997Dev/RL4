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
static const char *ng0 = "D:/intelFPGA/18.1/Lab_Verilog/LR4/project_1/project_1.srcs/sources_1/imports/LR4/LR4_MATRIX_DISP_V10.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {7, 0};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {255U, 0U};



static void Always_31_0(char *t0)
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

LAB0:    t1 = (t0 + 4808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 6120);
    *((int *)t2) = 1;
    t3 = (t0 + 4840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(45, ng0);

LAB14:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t13) = 1;

LAB18:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(52, ng0);

LAB23:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB21:
LAB12:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(33, ng0);

LAB8:    xsi_set_current_line(34, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(40, ng0);

LAB13:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(47, ng0);

LAB22:    xsi_set_current_line(48, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB21;

}

static void Always_59_1(char *t0)
{
    char t15[8];
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
    char *t13;
    char *t14;
    char *t16;

LAB0:    t1 = (t0 + 5056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 6136);
    *((int *)t2) = 1;
    t3 = (t0 + 5088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(66, ng0);

LAB9:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(73, ng0);

LAB14:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB12:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(61, ng0);

LAB8:    xsi_set_current_line(62, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(68, ng0);

LAB13:    xsi_set_current_line(69, ng0);
    t11 = (t0 + 3568);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t13, 3, t14, 32);
    t16 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 3, 0LL);
    goto LAB12;

}

static void Always_80_2(char *t0)
{
    char t13[8];
    char t18[8];
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
    char *t19;

LAB0:    t1 = (t0 + 5304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 6152);
    *((int *)t2) = 1;
    t3 = (t0 + 5336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(86, ng0);

LAB9:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB10:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB12;

LAB13:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(92, ng0);

LAB19:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    xsi_vlog_signed_power(t13, 32, t2, 32, t5, 3, 0);
    t11 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 8, 0LL);

LAB17:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(82, ng0);

LAB8:    xsi_set_current_line(83, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB7;

LAB11:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(88, ng0);

LAB18:    xsi_set_current_line(89, ng0);
    t16 = ((char*)((ng4)));
    t17 = ((char*)((ng1)));
    memset(t18, 0, 8);
    xsi_vlog_signed_power(t18, 32, t16, 32, t17, 32, 1);
    t19 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 8, 0LL);
    goto LAB17;

}

static void Always_98_3(char *t0)
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
    char *t18;

LAB0:    t1 = (t0 + 5552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 6168);
    *((int *)t2) = 1;
    t3 = (t0 + 5584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(105, ng0);

LAB9:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(112, ng0);

LAB14:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB12:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(100, ng0);

LAB8:    xsi_set_current_line(101, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 7, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(107, ng0);

LAB13:    xsi_set_current_line(108, ng0);
    t11 = (t0 + 3568);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t0 + 3248);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlogtype_concat(t13, 7, 7, 2U, t17, 4, t14, 3);
    t18 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 7, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB12;

}

static void Always_119_4(char *t0)
{
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

LAB0:    t1 = (t0 + 5800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 6184);
    *((int *)t2) = 1;
    t3 = (t0 + 5832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(125, ng0);

LAB9:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(131, ng0);

LAB14:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB12:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(121, ng0);

LAB8:    xsi_set_current_line(122, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(127, ng0);

LAB13:    xsi_set_current_line(128, ng0);
    t11 = (t0 + 2208U);
    t12 = *((char **)t11);
    t11 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 4, 0LL);
    goto LAB12;

}


extern void work_m_00000000004272399319_0008854069_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Always_59_1,(void *)Always_80_2,(void *)Always_98_3,(void *)Always_119_4};
	xsi_register_didat("work_m_00000000004272399319_0008854069", "isim/TB.exe.sim/work/m_00000000004272399319_0008854069.didat");
	xsi_register_executes(pe);
}
