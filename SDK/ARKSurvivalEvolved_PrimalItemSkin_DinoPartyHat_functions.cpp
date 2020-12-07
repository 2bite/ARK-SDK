// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_DinoPartyHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_DinoPartyHat.PrimalItemSkin_DinoPartyHat_C.ExecuteUbergraph_PrimalItemSkin_DinoPartyHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_DinoPartyHat_C::ExecuteUbergraph_PrimalItemSkin_DinoPartyHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_DinoPartyHat.PrimalItemSkin_DinoPartyHat_C.ExecuteUbergraph_PrimalItemSkin_DinoPartyHat");

	UPrimalItemSkin_DinoPartyHat_C_ExecuteUbergraph_PrimalItemSkin_DinoPartyHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
