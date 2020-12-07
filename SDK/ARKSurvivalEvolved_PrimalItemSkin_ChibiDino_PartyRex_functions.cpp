// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_PartyRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_PartyRex.PrimalItemSkin_ChibiDino_PartyRex_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_PartyRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_PartyRex_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_PartyRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_PartyRex.PrimalItemSkin_ChibiDino_PartyRex_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_PartyRex");

	UPrimalItemSkin_ChibiDino_PartyRex_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_PartyRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
