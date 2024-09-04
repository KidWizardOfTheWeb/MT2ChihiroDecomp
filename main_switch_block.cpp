//
// Created on 9/4/2024.
//
uint __cdecl !_main_switch_block(int param_1,void *param_2)

{
    bool bVar1;
    uint uVar2;
    int iVar3;
    undefined3 extraout_var;

    uVar2 = FUN_000e80f0(param_1,(undefined4 *)param_2);
    if (uVar2 == 2) {
        uVar2 = !_switch_call_dbg_menu_on_12h(param_1,(undefined4 *)param_2);
        if (param_1 == 0x15) {
            g_running = 1;
        }
        if (uVar2 == 2) {
            if (param_1 - 1U < 0x1c) {
                uVar2 = (uint)*(byte *)((int)&PTR_caseD_2_000e741c + param_1 + 3);
                switch(param_1) {
                    case 1:
                        iVar3 = !_call_switch_with_param1_2();
                        return (uint)(iVar3 != 0);
                    case 3:
                        iVar3 = !_mov_1_eax();
                        return (uint)(iVar3 != 0);
                    case 10:
                        iVar3 = FUN_000e7140();
                        return (uint)(iVar3 != 0);
                    case 0xd:
                        bVar1 = FUN_000e7440(param_2);
                        return (uint)(CONCAT31(extraout_var,bVar1) != 0);
                    case 0xe:
                        FUN_000e7240();
                        return 1;
                    case 0xf:
                        !_push_D:_or_1_to_stack();
                        return (uint)(uVar2 != 0);
                    case 0x10:
                        !_set_up_renderware_info();
                        return (uint)(uVar2 != 0);
                    case 0x11:
                        !_ret();
                        return 1;
                    case 0x1c:
                        iVar3 = !_add_vms_to_launch_ops();
                        return (uint)(iVar3 != 0);
                }
            }
            uVar2 = 2;
        }
    }
    return uVar2;
}
