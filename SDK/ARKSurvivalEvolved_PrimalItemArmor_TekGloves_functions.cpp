// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekGloves.PrimalItemArmor_TekGloves_C.ExecuteUbergraph_PrimalItemArmor_TekGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekGloves_C::ExecuteUbergraph_PrimalItemArmor_TekGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekGloves.PrimalItemArmor_TekGloves_C.ExecuteUbergraph_PrimalItemArmor_TekGloves");

	UPrimalItemArmor_TekGloves_C_ExecuteUbergraph_PrimalItemArmor_TekGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
