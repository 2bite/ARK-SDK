// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_RiotGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_RiotGloves.PrimalItemArmor_RiotGloves_C.ExecuteUbergraph_PrimalItemArmor_RiotGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_RiotGloves_C::ExecuteUbergraph_PrimalItemArmor_RiotGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_RiotGloves.PrimalItemArmor_RiotGloves_C.ExecuteUbergraph_PrimalItemArmor_RiotGloves");

	UPrimalItemArmor_RiotGloves_C_ExecuteUbergraph_PrimalItemArmor_RiotGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
