// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekGloves_Gen2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekGloves_Gen2.PrimalItemArmor_TekGloves_Gen2_C.ExecuteUbergraph_PrimalItemArmor_TekGloves_Gen2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekGloves_Gen2_C::ExecuteUbergraph_PrimalItemArmor_TekGloves_Gen2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekGloves_Gen2.PrimalItemArmor_TekGloves_Gen2_C.ExecuteUbergraph_PrimalItemArmor_TekGloves_Gen2");

	UPrimalItemArmor_TekGloves_Gen2_C_ExecuteUbergraph_PrimalItemArmor_TekGloves_Gen2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
