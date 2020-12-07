// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TransparentRiotShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TransparentRiotShield.PrimalItemArmor_TransparentRiotShield_C.ExecuteUbergraph_PrimalItemArmor_TransparentRiotShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TransparentRiotShield_C::ExecuteUbergraph_PrimalItemArmor_TransparentRiotShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TransparentRiotShield.PrimalItemArmor_TransparentRiotShield_C.ExecuteUbergraph_PrimalItemArmor_TransparentRiotShield");

	UPrimalItemArmor_TransparentRiotShield_C_ExecuteUbergraph_PrimalItemArmor_TransparentRiotShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
