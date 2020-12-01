// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_PugMask_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_PugMask.PrimalItemSkin_PugMask_C.ExecuteUbergraph_PrimalItemSkin_PugMask
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_PugMask_C::ExecuteUbergraph_PrimalItemSkin_PugMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_PugMask.PrimalItemSkin_PugMask_C.ExecuteUbergraph_PrimalItemSkin_PugMask");

	UPrimalItemSkin_PugMask_C_ExecuteUbergraph_PrimalItemSkin_PugMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
