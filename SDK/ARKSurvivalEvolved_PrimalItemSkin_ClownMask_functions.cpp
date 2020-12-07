// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ClownMask_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ClownMask.PrimalItemSkin_ClownMask_C.ExecuteUbergraph_PrimalItemSkin_ClownMask
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ClownMask_C::ExecuteUbergraph_PrimalItemSkin_ClownMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ClownMask.PrimalItemSkin_ClownMask_C.ExecuteUbergraph_PrimalItemSkin_ClownMask");

	UPrimalItemSkin_ClownMask_C_ExecuteUbergraph_PrimalItemSkin_ClownMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
