// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_GhilliePants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_GhilliePants.PrimalItemArmor_GhilliePants_C.ExecuteUbergraph_PrimalItemArmor_GhilliePants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_GhilliePants_C::ExecuteUbergraph_PrimalItemArmor_GhilliePants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GhilliePants.PrimalItemArmor_GhilliePants_C.ExecuteUbergraph_PrimalItemArmor_GhilliePants");

	UPrimalItemArmor_GhilliePants_C_ExecuteUbergraph_PrimalItemArmor_GhilliePants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
