#include <iostream>

// globals
int g_width = 0;
int g_height = 0;

int main(void)

{
  unsigned int l_main_switch_ret_val;
  int *piVar1;
  int iVar2;
  unsigned long int LaunchDataType;
  int local_c3c;
  unsigned int becomes_param2_to_main_switch; // undefined4 is assumed as int32 for the time being
  unsigned int local_c34; // undefined4 is assumed as int32 for the time being
  unsigned int ll_width; // undefined4 is assumed as int32 for the time being
  unsigned int ll_height; // undefined4 is assumed as int32 for the time being
  D3DDISPLAYMODE l_displayMode;
  unsigned int local_c10; // undefined4 is assumed as int32 for the time being
  unsigned int local_c0c; // undefined4 is assumed as int32 for the time being
  unsigned int local_c08; // undefined4 is assumed as int32 for the time being
  unsigned int local_c04; // undefined4 is assumed as int32 for the time being
  PLAUNCH_DATA LaunchData;

  !_populate_graphics_modes(&l_displayMode);
  l_displayMode.Width = 0x280;
  l_displayMode.Height = 0x1e0;
  l_displayMode.RefreshRate = 0x12;
  local_c0c = 0x40;
  local_c08 = 0;
  local_c10 = 0x2a;
  local_c04 = 0x80000001;
  g_width = 0x280;
  g_height = 0x1e0;
  l_main_switch_ret_val = !_main_switch_block(0x10,(void *)0x0);
  if (l_main_switch_ret_val != 0) {
    XAPILIB::XGetLaunchInfo((int *)&LaunchDataType,&LaunchData);
    if (LaunchDataType == 3) {
      piVar1 = FUN_000e7e40(&local_c3c);
      iVar2 = 0;
      if (0 < local_c3c) {
        do {
          !_main_switch_block(0x1c,(void *)piVar1[iVar2]);
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_c3c);
      }
      FUN_000f6058((int)piVar1);
    }
    !_setup_xapi_gamepad();
    l_main_switch_ret_val = !_main_switch_block(0xd,&l_displayMode);
    if (l_main_switch_ret_val == 0) {
      !_main_switch_block(0x11,(void *)0x0);
      return 0;
    }
    becomes_param2_to_main_switch = 0;
    local_c34 = 0;
    ll_width = g_width;
    ll_height = g_height;
    !_main_switch_block(0,&becomes_param2_to_main_switch);
    while (g_running == 0) {
      !_poll_inputs();
      !_main_switch_block(0x12,(void *)0x0);
    }
    !_main_switch_block(0xe,(void *)0x0);
    !_main_switch_block(0x11,(void *)0x0);
    XAPILIB::XLaunchNewImageA((LPCSTR)0x0,(PLAUNCH_DATA)0x0);
  }
  return 0;
}
