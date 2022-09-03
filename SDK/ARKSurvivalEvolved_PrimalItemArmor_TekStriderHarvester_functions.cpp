// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekStriderHarvester_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekStriderHarvester.PrimalItemArmor_TekStriderHarvester_C.ExecuteUbergraph_PrimalItemArmor_TekStriderHarvester
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekStriderHarvester_C::ExecuteUbergraph_PrimalItemArmor_TekStriderHarvester(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekStriderHarvester.PrimalItemArmor_TekStriderHarvester_C.ExecuteUbergraph_PrimalItemArmor_TekStriderHarvester");

	UPrimalItemArmor_TekStriderHarvester_C_ExecuteUbergraph_PrimalItemArmor_TekStriderHarvester_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
