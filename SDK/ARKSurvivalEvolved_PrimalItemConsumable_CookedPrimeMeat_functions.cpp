// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_CookedPrimeMeat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_CookedPrimeMeat.PrimalItemConsumable_CookedPrimeMeat_C.ExecuteUbergraph_PrimalItemConsumable_CookedPrimeMeat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_CookedPrimeMeat_C::ExecuteUbergraph_PrimalItemConsumable_CookedPrimeMeat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_CookedPrimeMeat.PrimalItemConsumable_CookedPrimeMeat_C.ExecuteUbergraph_PrimalItemConsumable_CookedPrimeMeat");

	UPrimalItemConsumable_CookedPrimeMeat_C_ExecuteUbergraph_PrimalItemConsumable_CookedPrimeMeat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
