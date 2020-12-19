// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_WoodShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_WoodShield.PrimalItemArmor_WoodShield_C.ExecuteUbergraph_PrimalItemArmor_WoodShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_WoodShield_C::ExecuteUbergraph_PrimalItemArmor_WoodShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_WoodShield.PrimalItemArmor_WoodShield_C.ExecuteUbergraph_PrimalItemArmor_WoodShield");

	UPrimalItemArmor_WoodShield_C_ExecuteUbergraph_PrimalItemArmor_WoodShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
