// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_GhillieGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_GhillieGloves.PrimalItemArmor_GhillieGloves_C.ExecuteUbergraph_PrimalItemArmor_GhillieGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_GhillieGloves_C::ExecuteUbergraph_PrimalItemArmor_GhillieGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GhillieGloves.PrimalItemArmor_GhillieGloves_C.ExecuteUbergraph_PrimalItemArmor_GhillieGloves");

	UPrimalItemArmor_GhillieGloves_C_ExecuteUbergraph_PrimalItemArmor_GhillieGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
