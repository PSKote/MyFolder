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
    work_m_00000000002625712305_4229297521_init();
    work_m_00000000002860838543_0334430593_init();
    work_m_00000000001001445909_1399182706_init();
    work_m_00000000000356584540_3917650825_init();
    work_m_00000000002001656217_2758074102_init();
    work_m_00000000003090796506_1017851315_init();
    work_m_00000000003750721315_3718230490_init();
    work_m_00000000004110007798_2902715030_init();
    work_m_00000000000638899336_0856647261_init();
    work_m_00000000002268406717_3673085417_init();
    work_m_00000000003293694198_2873060515_init();
    work_m_00000000000875547526_4141292114_init();
    work_m_00000000000194098065_3383896982_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000194098065_3383896982");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
