// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_Paracer_Saddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_Paracer_Saddle.PrimalItemArmor_Paracer_Saddle_C.ExecuteUbergraph_PrimalItemArmor_Paracer_Saddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Paracer_Saddle_C::ExecuteUbergraph_PrimalItemArmor_Paracer_Saddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Paracer_Saddle.PrimalItemArmor_Paracer_Saddle_C.ExecuteUbergraph_PrimalItemArmor_Paracer_Saddle");

	UPrimalItemArmor_Paracer_Saddle_C_ExecuteUbergraph_PrimalItemArmor_Paracer_Saddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
