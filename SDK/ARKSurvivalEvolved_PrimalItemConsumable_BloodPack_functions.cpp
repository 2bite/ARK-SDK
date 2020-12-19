// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_BloodPack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_BloodPack.PrimalItemConsumable_BloodPack_C.ExecuteUbergraph_PrimalItemConsumable_BloodPack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_BloodPack_C::ExecuteUbergraph_PrimalItemConsumable_BloodPack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_BloodPack.PrimalItemConsumable_BloodPack_C.ExecuteUbergraph_PrimalItemConsumable_BloodPack");

	UPrimalItemConsumable_BloodPack_C_ExecuteUbergraph_PrimalItemConsumable_BloodPack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
