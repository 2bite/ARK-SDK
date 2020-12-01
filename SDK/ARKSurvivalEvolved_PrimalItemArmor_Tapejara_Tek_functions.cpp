// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_Tapejara_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_Tapejara_Tek.PrimalItemArmor_Tapejara_Tek_C.ExecuteUbergraph_PrimalItemArmor_Tapejara_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Tapejara_Tek_C::ExecuteUbergraph_PrimalItemArmor_Tapejara_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Tapejara_Tek.PrimalItemArmor_Tapejara_Tek_C.ExecuteUbergraph_PrimalItemArmor_Tapejara_Tek");

	UPrimalItemArmor_Tapejara_Tek_C_ExecuteUbergraph_PrimalItemArmor_Tapejara_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
