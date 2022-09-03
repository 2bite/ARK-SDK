// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_RexGhost_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_RexGhost.PrimalItemSkin_ChibiDino_RexGhost_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_RexGhost
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_RexGhost_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_RexGhost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_RexGhost.PrimalItemSkin_ChibiDino_RexGhost_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_RexGhost");

	UPrimalItemSkin_ChibiDino_RexGhost_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_RexGhost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
