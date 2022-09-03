// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Shapeshifter_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Shapeshifter_Small.PrimalItemSkin_ChibiDino_Shapeshifter_Small_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Shapeshifter_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Shapeshifter_Small_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Shapeshifter_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Shapeshifter_Small.PrimalItemSkin_ChibiDino_Shapeshifter_Small_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Shapeshifter_Small");

	UPrimalItemSkin_ChibiDino_Shapeshifter_Small_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Shapeshifter_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
