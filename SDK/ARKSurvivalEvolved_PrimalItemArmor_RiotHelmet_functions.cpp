// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_RiotHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_RiotHelmet.PrimalItemArmor_RiotHelmet_C.ExecuteUbergraph_PrimalItemArmor_RiotHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_RiotHelmet_C::ExecuteUbergraph_PrimalItemArmor_RiotHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_RiotHelmet.PrimalItemArmor_RiotHelmet_C.ExecuteUbergraph_PrimalItemArmor_RiotHelmet");

	UPrimalItemArmor_RiotHelmet_C_ExecuteUbergraph_PrimalItemArmor_RiotHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
