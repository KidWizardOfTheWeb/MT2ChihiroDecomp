//
// Created on 9/4/2024.
//

void __cdecl _populate_graphics_modes(D3DDISPLAYMODE *param_1)

{
D3DDISPLAYMODE local_14;

D3D::Direct3D_EnumAdapterModes(0,0,&local_14.Width);
param_1->Width = local_14.Width;
param_1->RefreshRate = local_14.Format;
param_1->Height = local_14.Height;
param_1->Flags = 1;
param_1[1].Width = 1;
param_1->Format = D3DFMT_LIN_R5G6B5;
param_1[1].Height = 0x2a;
param_1[1].RefreshRate = local_14.Flags;
param_1[1].Flags = local_14.RefreshRate;
param_1[1].Format = 0x80000000;
return;
}