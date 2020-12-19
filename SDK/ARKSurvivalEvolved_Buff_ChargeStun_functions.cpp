// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeStun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeStun.Buff_ChargeStun_C.Get ImmunityTime
// ()
// Parameters:
// float                          immunityTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_C::Get_ImmunityTime(float* immunityTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.Get ImmunityTime");

	ABuff_ChargeStun_C_Get_ImmunityTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (immunityTime != nullptr)
		*immunityTime = params.immunityTime;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.Get Max StunTime
// ()
// Parameters:
// float                          maxStunTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_C::Get_Max_StunTime(float* maxStunTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.Get Max StunTime");

	ABuff_ChargeStun_C_Get_Max_StunTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (maxStunTime != nullptr)
		*maxStunTime = params.maxStunTime;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.BuffTickClient");

	ABuff_ChargeStun_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.Get Armor Rating
// ()
// Parameters:
// float                          rating                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_C::Get_Armor_Rating(float* rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.Get Armor Rating");

	ABuff_ChargeStun_C_Get_Armor_Rating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (rating != nullptr)
		*rating = params.rating;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.IsUsingShield
// ()
// Parameters:
// bool                           usingShield                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_C::IsUsingShield(bool* usingShield)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.IsUsingShield");

	ABuff_ChargeStun_C_IsUsingShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (usingShield != nullptr)
		*usingShield = params.usingShield;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.Get Instigator Player
// ()
// Parameters:
// class AShooterCharacter*       instigatorPlayer               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_C::Get_Instigator_Player(class AShooterCharacter** instigatorPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.Get Instigator Player");

	ABuff_ChargeStun_C_Get_Instigator_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (instigatorPlayer != nullptr)
		*instigatorPlayer = params.instigatorPlayer;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.ApplyDamage
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_C::ApplyDamage(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.ApplyDamage");

	ABuff_ChargeStun_C_ApplyDamage_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ChargeStun_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.BPCheckPreventInput");

	ABuff_ChargeStun_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.BPDeactivated");

	ABuff_ChargeStun_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.DoStun
// ()

void ABuff_ChargeStun_C::DoStun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.DoStun");

	ABuff_ChargeStun_C_DoStun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.Should Be Stunned
// ()
// Parameters:
// bool                           canBeStunned                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_C::Should_Be_Stunned(bool* canBeStunned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.Should Be Stunned");

	ABuff_ChargeStun_C_Should_Be_Stunned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canBeStunned != nullptr)
		*canBeStunned = params.canBeStunned;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.Calculate Multipliers
// ()

void ABuff_ChargeStun_C::Calculate_Multipliers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.Calculate Multipliers");

	ABuff_ChargeStun_C_Calculate_Multipliers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.BPPostInitializeComponents
// ()

void ABuff_ChargeStun_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.BPPostInitializeComponents");

	ABuff_ChargeStun_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.AddStunAmount
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_C::AddStunAmount(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.AddStunAmount");

	ABuff_ChargeStun_C_AddStunAmount_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.BPResetBuffStart
// ()

void ABuff_ChargeStun_C::BPResetBuffStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.BPResetBuffStart");

	ABuff_ChargeStun_C_BPResetBuffStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.UserConstructionScript
// ()

void ABuff_ChargeStun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.UserConstructionScript");

	ABuff_ChargeStun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeStun.Buff_ChargeStun_C.ExecuteUbergraph_Buff_ChargeStun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_C::ExecuteUbergraph_Buff_ChargeStun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun.Buff_ChargeStun_C.ExecuteUbergraph_Buff_ChargeStun");

	ABuff_ChargeStun_C_ExecuteUbergraph_Buff_ChargeStun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
