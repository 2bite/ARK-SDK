// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BloodCurseHeal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.CheckDeactivation
// ()

void ABuff_BloodCurseHeal_C::CheckDeactivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.CheckDeactivation");

	ABuff_BloodCurseHeal_C_CheckDeactivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.RecoverHealth
// ()
// Parameters:
// float                          DamageCaused                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BloodCurseHeal_C::RecoverHealth(float DamageCaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.RecoverHealth");

	ABuff_BloodCurseHeal_C_RecoverHealth_Params params;
	params.DamageCaused = DamageCaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.UpdateVictims
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add                            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BloodCurseHeal_C::UpdateVictims(class APrimalCharacter* Character, bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.UpdateVictims");

	ABuff_BloodCurseHeal_C_UpdateVictims_Params params;
	params.Character = Character;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.UserConstructionScript
// ()

void ABuff_BloodCurseHeal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.UserConstructionScript");

	ABuff_BloodCurseHeal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.ExecuteUbergraph_Buff_BloodCurseHeal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BloodCurseHeal_C::ExecuteUbergraph_Buff_BloodCurseHeal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BloodCurseHeal.Buff_BloodCurseHeal_C.ExecuteUbergraph_Buff_BloodCurseHeal");

	ABuff_BloodCurseHeal_C_ExecuteUbergraph_Buff_BloodCurseHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
