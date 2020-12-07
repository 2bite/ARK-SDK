// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ChitinPants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ChitinPants.PrimalItemArmor_ChitinPants_C.ExecuteUbergraph_PrimalItemArmor_ChitinPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ChitinPants_C::ExecuteUbergraph_PrimalItemArmor_ChitinPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ChitinPants.PrimalItemArmor_ChitinPants_C.ExecuteUbergraph_PrimalItemArmor_ChitinPants");

	UPrimalItemArmor_ChitinPants_C_ExecuteUbergraph_PrimalItemArmor_ChitinPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
