#include "../../SDK/SDK.h"

MAKE_HOOK(CTFPlayerInventory_GetMaxItemCount, Signatures::CTFPlayerInventory_GetMaxItemCount.Get(), int, __fastcall, void* ecx, void* edx)
{
	return 3000;
}
