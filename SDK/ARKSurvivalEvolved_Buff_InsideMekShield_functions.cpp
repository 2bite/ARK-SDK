// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_InsideMekShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_InsideMekShield.Buff_InsideMekShield_C.BPOverrideBuffToGiveOnDeactivation
// ()
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABuff_InsideMekShield_C::BPOverrideBuffToGiveOnDeactivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InsideMekShield.Buff_InsideMekShield_C.BPOverrideBuffToGiveOnDeactivation");

	ABuff_InsideMekShield_C_BPOverrideBuffToGiveOnDeactivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_InsideMekShield.Buff_InsideMekShield_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_InsideMekShield_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InsideMekShield.Buff_InsideMekShield_C.BuffTickClient");

	ABuff_InsideMekShield_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_InsideMekShield.Buff_InsideMekShield_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_InsideMekShield_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InsideMekShield.Buff_InsideMekShield_C.BPDeactivated");

	ABuff_InsideMekShield_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_InsideMekShield.Buff_InsideMekShield_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_InsideMekShield_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InsideMekShield.Buff_InsideMekShield_C.BPActivated");

	ABuff_InsideMekShield_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_InsideMekShield.Buff_InsideMekShield_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_InsideMekShield_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InsideMekShield.Buff_InsideMekShield_C.BuffTickServer");

	ABuff_InsideMekShield_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_InsideMekShield.Buff_InsideMekShield_C.GetBuffDescription
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, Const)
// Parameters:
// struct FStatusValueModifierDescription ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusValueModifierDescription ABuff_InsideMekShield_C::STATIC_GetBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InsideMekShield.Buff_InsideMekShield_C.GetBuffDescription");

	ABuff_InsideMekShield_C_GetBuffDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_InsideMekShield.Buff_InsideMekShield_C.GetOwnerMek
// ()
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsFriendly                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AMek_Character_BP_C*     Mek                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_InsideMekShield_C::GetOwnerMek(bool* IsValid, bool* IsFriendly, class AMek_Character_BP_C** Mek)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InsideMekShield.Buff_InsideMekShield_C.GetOwnerMek");

	ABuff_InsideMekShield_C_GetOwnerMek_Params params;

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


// Function Buff_InsideMekShield.Buff_InsideMekShield_C.IsOwnerMek
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_InsideMekShield_C::IsOwnerMek()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InsideMekShield.Buff_InsideMekShield_C.IsOwnerMek");

	ABuff_InsideMekShield_C_IsOwnerMek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_InsideMekShield.Buff_InsideMekShield_C.HideBuffFromHUD
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_InsideMekShield_C::HideBuffFromHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InsideMekShield.Buff_InsideMekShield_C.HideBuffFromHUD");

	ABuff_InsideMekShield_C_HideBuffFromHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_InsideMekShield.Buff_InsideMekShield_C.UserConstructionScript
// ()

void ABuff_InsideMekShield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InsideMekShield.Buff_InsideMekShield_C.UserConstructionScript");

	ABuff_InsideMekShield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_InsideMekShield.Buff_InsideMekShield_C.ExecuteUbergraph_Buff_InsideMekShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_InsideMekShield_C::ExecuteUbergraph_Buff_InsideMekShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_InsideMekShield.Buff_InsideMekShield_C.ExecuteUbergraph_Buff_InsideMekShield");

	ABuff_InsideMekShield_C_ExecuteUbergraph_Buff_InsideMekShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
