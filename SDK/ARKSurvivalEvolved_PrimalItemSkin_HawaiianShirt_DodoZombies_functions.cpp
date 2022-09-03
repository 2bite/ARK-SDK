// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_HawaiianShirt_DodoZombies_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_HawaiianShirt_DodoZombies.PrimalItemSkin_HawaiianShirt_DodoZombies_C.ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_DodoZombies
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_HawaiianShirt_DodoZombies_C::ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_DodoZombies(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_HawaiianShirt_DodoZombies.PrimalItemSkin_HawaiianShirt_DodoZombies_C.ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_DodoZombies");

	UPrimalItemSkin_HawaiianShirt_DodoZombies_C_ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_DodoZombies_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
