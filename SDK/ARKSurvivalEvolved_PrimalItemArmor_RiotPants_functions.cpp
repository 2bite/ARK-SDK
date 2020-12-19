// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_RiotPants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_RiotPants.PrimalItemArmor_RiotPants_C.ExecuteUbergraph_PrimalItemArmor_RiotPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_RiotPants_C::ExecuteUbergraph_PrimalItemArmor_RiotPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_RiotPants.PrimalItemArmor_RiotPants_C.ExecuteUbergraph_PrimalItemArmor_RiotPants");

	UPrimalItemArmor_RiotPants_C_ExecuteUbergraph_PrimalItemArmor_RiotPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
