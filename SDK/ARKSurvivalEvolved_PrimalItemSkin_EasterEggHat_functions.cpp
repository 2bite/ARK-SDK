// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_EasterEggHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_EasterEggHat.PrimalItemSkin_EasterEggHat_C.ExecuteUbergraph_PrimalItemSkin_EasterEggHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_EasterEggHat_C::ExecuteUbergraph_PrimalItemSkin_EasterEggHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_EasterEggHat.PrimalItemSkin_EasterEggHat_C.ExecuteUbergraph_PrimalItemSkin_EasterEggHat");

	UPrimalItemSkin_EasterEggHat_C_ExecuteUbergraph_PrimalItemSkin_EasterEggHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
