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

#include "xsi.h"

struct XSI_INFO xsi_info;


int isim_run(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    work_m_00000000000866782574_2073120511_init();
    work_m_00000000004179092316_0880024292_init();
    work_m_00000000004248949595_2810907791_init();
    work_m_00000000004092252252_1557454962_init();


    xsi_register_tops("work_m_00000000004092252252_1557454962");
    xsi_register_tops("work_m_00000000000866782574_2073120511");


    return xsi_run_simulation(argc, argv);

}
