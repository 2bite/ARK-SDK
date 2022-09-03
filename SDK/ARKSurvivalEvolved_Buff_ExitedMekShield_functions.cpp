// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExitedMekShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExitedMekShield_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.BuffTickClient");

	ABuff_ExitedMekShield_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.GetOwnerMek
// ()
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsFriendly                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AMek_Character_BP_C*     Mek                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ExitedMekShield_C::GetOwnerMek(bool* IsValid, bool* IsFriendly, class AMek_Character_BP_C** Mek)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.GetOwnerMek");

	ABuff_ExitedMekShield_C_GetOwnerMek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (IsFriendly != nullptr)
		*IsFriendly = params.IsFriendly;
	if (Mek != nullptr)
		*Mek = params.Mek;
}


// Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.IsOwnerMek
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ExitedMekShield_C::IsOwnerMek()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.IsOwnerMek");

	ABuff_ExitedMekShield_C_IsOwnerMek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.UserConstructionScript
// ()

void ABuff_ExitedMekShield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.UserConstructionScript");

	ABuff_ExitedMekShield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.ExecuteUbergraph_Buff_ExitedMekShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExitedMekShield_C::ExecuteUbergraph_Buff_ExitedMekShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExitedMekShield.Buff_ExitedMekShield_C.ExecuteUbergraph_Buff_ExitedMekShield");

	ABuff_ExitedMekShield_C_ExecuteUbergraph_Buff_ExitedMekShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
