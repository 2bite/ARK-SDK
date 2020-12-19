// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_CaptainsHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_CaptainsHat.PrimalItemSkin_CaptainsHat_C.ExecuteUbergraph_PrimalItemSkin_CaptainsHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_CaptainsHat_C::ExecuteUbergraph_PrimalItemSkin_CaptainsHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_CaptainsHat.PrimalItemSkin_CaptainsHat_C.ExecuteUbergraph_PrimalItemSkin_CaptainsHat");

	UPrimalItemSkin_CaptainsHat_C_ExecuteUbergraph_PrimalItemSkin_CaptainsHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
