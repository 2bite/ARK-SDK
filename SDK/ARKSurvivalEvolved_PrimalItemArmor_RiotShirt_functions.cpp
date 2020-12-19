// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_RiotShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_RiotShirt.PrimalItemArmor_RiotShirt_C.ExecuteUbergraph_PrimalItemArmor_RiotShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_RiotShirt_C::ExecuteUbergraph_PrimalItemArmor_RiotShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_RiotShirt.PrimalItemArmor_RiotShirt_C.ExecuteUbergraph_PrimalItemArmor_RiotShirt");

	UPrimalItemArmor_RiotShirt_C_ExecuteUbergraph_PrimalItemArmor_RiotShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
