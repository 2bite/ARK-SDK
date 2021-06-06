// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_GhillieShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_GhillieShirt.PrimalItemArmor_GhillieShirt_C.ExecuteUbergraph_PrimalItemArmor_GhillieShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_GhillieShirt_C::ExecuteUbergraph_PrimalItemArmor_GhillieShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GhillieShirt.PrimalItemArmor_GhillieShirt_C.ExecuteUbergraph_PrimalItemArmor_GhillieShirt");

	UPrimalItemArmor_GhillieShirt_C_ExecuteUbergraph_PrimalItemArmor_GhillieShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
