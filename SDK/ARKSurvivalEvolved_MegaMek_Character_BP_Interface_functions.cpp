// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaMek_Character_BP_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.StartSelfDestruct
// ()

void UMegaMek_Character_BP_Interface_C::StartSelfDestruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.StartSelfDestruct");

	UMegaMek_Character_BP_Interface_C_StartSelfDestruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.SetForceKill
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMegaMek_Character_BP_Interface_C::SetForceKill(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.SetForceKill");

	UMegaMek_Character_BP_Interface_C_SetForceKill_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.SetStunned
// ()
// Parameters:
// float                          StunDuration                   (Parm, ZeroConstructor, IsPlainOldData)

void UMegaMek_Character_BP_Interface_C::SetStunned(float StunDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.SetStunned");

	UMegaMek_Character_BP_Interface_C_SetStunned_Params params;
	params.StunDuration = StunDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
