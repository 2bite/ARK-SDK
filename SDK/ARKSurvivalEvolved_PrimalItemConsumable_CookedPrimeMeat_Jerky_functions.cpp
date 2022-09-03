// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_CookedPrimeMeat_Jerky_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_CookedPrimeMeat_Jerky.PrimalItemConsumable_CookedPrimeMeat_Jerky_C.ExecuteUbergraph_PrimalItemConsumable_CookedPrimeMeat_Jerky
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_CookedPrimeMeat_Jerky_C::ExecuteUbergraph_PrimalItemConsumable_CookedPrimeMeat_Jerky(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_CookedPrimeMeat_Jerky.PrimalItemConsumable_CookedPrimeMeat_Jerky_C.ExecuteUbergraph_PrimalItemConsumable_CookedPrimeMeat_Jerky");

	UPrimalItemConsumable_CookedPrimeMeat_Jerky_C_ExecuteUbergraph_PrimalItemConsumable_CookedPrimeMeat_Jerky_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
