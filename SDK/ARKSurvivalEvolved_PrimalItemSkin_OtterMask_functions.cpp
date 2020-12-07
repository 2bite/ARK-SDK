// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_OtterMask_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_OtterMask.PrimalItemSkin_OtterMask_C.ExecuteUbergraph_PrimalItemSkin_OtterMask
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_OtterMask_C::ExecuteUbergraph_PrimalItemSkin_OtterMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_OtterMask.PrimalItemSkin_OtterMask_C.ExecuteUbergraph_PrimalItemSkin_OtterMask");

	UPrimalItemSkin_OtterMask_C_ExecuteUbergraph_PrimalItemSkin_OtterMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
