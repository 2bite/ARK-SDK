// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_DinoEasterEggHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_DinoEasterEggHat.PrimalItemSkin_DinoEasterEggHat_C.ExecuteUbergraph_PrimalItemSkin_DinoEasterEggHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_DinoEasterEggHat_C::ExecuteUbergraph_PrimalItemSkin_DinoEasterEggHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_DinoEasterEggHat.PrimalItemSkin_DinoEasterEggHat_C.ExecuteUbergraph_PrimalItemSkin_DinoEasterEggHat");

	UPrimalItemSkin_DinoEasterEggHat_C_ExecuteUbergraph_PrimalItemSkin_DinoEasterEggHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
