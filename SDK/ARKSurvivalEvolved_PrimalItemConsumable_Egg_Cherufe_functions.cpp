// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Cherufe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Cherufe.PrimalItemConsumable_Egg_Cherufe_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Cherufe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Cherufe_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Cherufe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Cherufe.PrimalItemConsumable_Egg_Cherufe_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Cherufe");

	UPrimalItemConsumable_Egg_Cherufe_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Cherufe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
