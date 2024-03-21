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
    work_m_07442854424736297712_3232891280_init();
    work_m_15370474704308624185_4206938605_init();
    work_m_15802183011366698654_1206715471_init();
    work_m_01841478955046320851_0333086759_init();
    work_m_01614689930783950855_0925058552_init();
    work_m_03013489367439098342_1264614122_init();
    work_m_17067735639626841897_0183253595_init();
    work_m_03394177520947983657_3721620212_init();
    work_m_17556771228080316904_4227128644_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_17556771228080316904_4227128644");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
