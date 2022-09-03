// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_Rockarrot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_Rockarrot.PrimalItemConsumable_Seed_Rockarrot_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Rockarrot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_Rockarrot_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Rockarrot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Rockarrot.PrimalItemConsumable_Seed_Rockarrot_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Rockarrot");

	UPrimalItemConsumable_Seed_Rockarrot_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Rockarrot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
