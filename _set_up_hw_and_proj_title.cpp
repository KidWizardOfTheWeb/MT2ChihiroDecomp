//
// Created by smasi on 9/4/2024.
//

undefined4 _set_up_hw_and_proj_title(void)

{
    int in_EAX;

    !_set_up_renderware_info();
    if (in_EAX != 0) {
        if (g_width == 0) {
            g_width = 0x280;
        }
        if (g_height == 0) {
            g_height = 0x1e0;
        }
        g_title = s_Project_V307_00214f4c;
        return 1;
    }
    return 0;
}
