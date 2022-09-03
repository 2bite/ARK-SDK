// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerHudInterface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerHudInterface.PlayerHudInterface_C.SetElementBarBoostIconHidden
// ()
// Parameters:
// bool                           isHidden                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHudInterface_C::SetElementBarBoostIconHidden(bool isHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHudInterface.PlayerHudInterface_C.SetElementBarBoostIconHidden");

	UPlayerHudInterface_C_SetElementBarBoostIconHidden_Params params;
	params.isHidden = isHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
