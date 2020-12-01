// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_BaseBerry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_BaseBerry.PrimalItemConsumable_Seed_BaseBerry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_BaseBerry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_BaseBerry_C::ExecuteUbergraph_PrimalItemConsumable_Seed_BaseBerry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_BaseBerry.PrimalItemConsumable_Seed_BaseBerry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_BaseBerry");

	UPrimalItemConsumable_Seed_BaseBerry_C_ExecuteUbergraph_PrimalItemConsumable_Seed_BaseBerry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
