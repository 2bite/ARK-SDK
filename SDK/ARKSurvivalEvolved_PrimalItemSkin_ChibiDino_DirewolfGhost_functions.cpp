// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_DirewolfGhost_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_DirewolfGhost.PrimalItemSkin_ChibiDino_DirewolfGhost_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_DirewolfGhost
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_DirewolfGhost_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_DirewolfGhost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_DirewolfGhost.PrimalItemSkin_ChibiDino_DirewolfGhost_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_DirewolfGhost");

	UPrimalItemSkin_ChibiDino_DirewolfGhost_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_DirewolfGhost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
