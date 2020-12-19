// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_MarshmallowHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_MarshmallowHat.PrimalItemSkin_MarshmallowHat_C.ExecuteUbergraph_PrimalItemSkin_MarshmallowHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_MarshmallowHat_C::ExecuteUbergraph_PrimalItemSkin_MarshmallowHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MarshmallowHat.PrimalItemSkin_MarshmallowHat_C.ExecuteUbergraph_PrimalItemSkin_MarshmallowHat");

	UPrimalItemSkin_MarshmallowHat_C_ExecuteUbergraph_PrimalItemSkin_MarshmallowHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
