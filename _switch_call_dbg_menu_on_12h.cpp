//
// Created on 9/4/2024.
//

undefined __cdecl _switch_call_dbg_menu_on_12h(undefined4 param_1,undefined4 *param_2)
{
bool bVar1;
int iVar2;
undefined3 extraout_var;
undefined3 extraout_var_00;

switch(param_1) {
case 0:
FUN_000635e0(g_renderware_display_handler,param_2,0.5,1.333333);
return true;
default:
return 2;
case 4:
!_mov_1_eax();
return true;
case 9:
bVar1 = FUN_000120b0();
return CONCAT31(extraout_var_00,bVar1) != 0;
case 0xd:
bVar1 = !_@4();
return CONCAT31(extraout_var,bVar1) != 0;
case 0xe:
FUN_00012080();
return true;
case 0x10:
iVar2 = !_set_up_hw_and_proj_title();
return iVar2 != 0;
case 0x12:
!_@5();
return true;
}
}
