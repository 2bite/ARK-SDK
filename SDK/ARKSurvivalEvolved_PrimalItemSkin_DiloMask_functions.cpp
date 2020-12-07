// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_DiloMask_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_DiloMask.PrimalItemSkin_DiloMask_C.ExecuteUbergraph_PrimalItemSkin_DiloMask
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_DiloMask_C::ExecuteUbergraph_PrimalItemSkin_DiloMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_DiloMask.PrimalItemSkin_DiloMask_C.ExecuteUbergraph_PrimalItemSkin_DiloMask");

	UPrimalItemSkin_DiloMask_C_ExecuteUbergraph_PrimalItemSkin_DiloMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
