// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MeleeStoneWeapon_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MeleeStoneWeapon_Impacts.MeleeStoneWeapon_Impacts_C.UserConstructionScript
// ()

void AMeleeStoneWeapon_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeStoneWeapon_Impacts.MeleeStoneWeapon_Impacts_C.UserConstructionScript");

	AMeleeStoneWeapon_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeStoneWeapon_Impacts.MeleeStoneWeapon_Impacts_C.ExecuteUbergraph_MeleeStoneWeapon_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMeleeStoneWeapon_Impacts_C::ExecuteUbergraph_MeleeStoneWeapon_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeStoneWeapon_Impacts.MeleeStoneWeapon_Impacts_C.ExecuteUbergraph_MeleeStoneWeapon_Impacts");

	AMeleeStoneWeapon_Impacts_C_ExecuteUbergraph_MeleeStoneWeapon_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
