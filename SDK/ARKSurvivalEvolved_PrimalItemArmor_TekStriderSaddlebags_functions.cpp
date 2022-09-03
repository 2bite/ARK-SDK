// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekStriderSaddlebags_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekStriderSaddlebags.PrimalItemArmor_TekStriderSaddlebags_C.ExecuteUbergraph_PrimalItemArmor_TekStriderSaddlebags
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekStriderSaddlebags_C::ExecuteUbergraph_PrimalItemArmor_TekStriderSaddlebags(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekStriderSaddlebags.PrimalItemArmor_TekStriderSaddlebags_C.ExecuteUbergraph_PrimalItemArmor_TekStriderSaddlebags");

	UPrimalItemArmor_TekStriderSaddlebags_C_ExecuteUbergraph_PrimalItemArmor_TekStriderSaddlebags_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
