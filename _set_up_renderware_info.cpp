//
// Created by smasi on 9/4/2024.
//

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _set_up_renderware_info(void)

{
    g_title = s_RenderWare_Application_0023ccdc;
    g_width = 0;
    g_height = 0;
    g_running = 0;
    _DAT_00450834 = 0;
    _DAT_0045083c = 0;
    DAT_00450838 = 0;
    _DAT_00450840 = 1;
    _DAT_00450848 = 0;
    _DAT_00450844 = 0;
    _DAT_0045084c = 2;
    _DAT_00450854 = 0;
    DAT_00450850 = 0;
    !_mov_1_eax(); // eax = 1
    return;
}
