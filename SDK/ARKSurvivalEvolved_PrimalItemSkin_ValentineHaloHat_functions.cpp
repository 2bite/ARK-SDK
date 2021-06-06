// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ValentineHaloHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ValentineHaloHat.PrimalItemSkin_ValentineHaloHat_C.ExecuteUbergraph_PrimalItemSkin_ValentineHaloHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ValentineHaloHat_C::ExecuteUbergraph_PrimalItemSkin_ValentineHaloHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ValentineHaloHat.PrimalItemSkin_ValentineHaloHat_C.ExecuteUbergraph_PrimalItemSkin_ValentineHaloHat");

	UPrimalItemSkin_ValentineHaloHat_C_ExecuteUbergraph_PrimalItemSkin_ValentineHaloHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
