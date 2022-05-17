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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002397822808_3560548126_init();
    work_m_00000000000394672378_0240265988_init();
    work_m_00000000002209629687_2680785516_init();
    work_m_00000000002253203219_0061975439_init();
    work_m_00000000002348001092_0411948970_init();
    work_m_00000000004272399319_0008854069_init();
    work_m_00000000003611213860_1903739041_init();
    work_m_00000000000745219453_1949555310_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000745219453_1949555310");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
