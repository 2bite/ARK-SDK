// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_FurGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_FurGloves.PrimalItemArmor_FurGloves_C.ExecuteUbergraph_PrimalItemArmor_FurGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_FurGloves_C::ExecuteUbergraph_PrimalItemArmor_FurGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_FurGloves.PrimalItemArmor_FurGloves_C.ExecuteUbergraph_PrimalItemArmor_FurGloves");

	UPrimalItemArmor_FurGloves_C_ExecuteUbergraph_PrimalItemArmor_FurGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
