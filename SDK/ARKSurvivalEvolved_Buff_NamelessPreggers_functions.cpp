// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NamelessPreggers_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPNotifyExperienceGained
// ()
// Parameters:
// float*                         ActualExpGained                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ExpectedExpGain                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EXPType>*          ExpTypeGained                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NamelessPreggers_C::BPNotifyExperienceGained(float* ActualExpGained, float* ExpectedExpGain, TEnumAsByte<EXPType>* ExpTypeGained)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPNotifyExperienceGained");

	ABuff_NamelessPreggers_C_BPNotifyExperienceGained_Params params;
	params.ActualExpGained = ActualExpGained;
	params.ExpectedExpGain = ExpectedExpGain;
	params.ExpTypeGained = ExpTypeGained;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NamelessPreggers_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPSetupForInstigator");

	ABuff_NamelessPreggers_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NamelessPreggers_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPDeactivated");

	ABuff_NamelessPreggers_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPModifyPlayerBoneModifiers
// (NetReliable, NetRequest, Native, Event, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// TArray<struct FBoneModifier>   InBoneModifiers                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FBoneModifier>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBoneModifier> ABuff_NamelessPreggers_C::BPModifyPlayerBoneModifiers(TArray<struct FBoneModifier>* InBoneModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPModifyPlayerBoneModifiers");

	ABuff_NamelessPreggers_C_BPModifyPlayerBoneModifiers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBoneModifiers != nullptr)
		*InBoneModifiers = params.InBoneModifiers;

	return params.ReturnValue;
}


// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.HandleBuffAnimNotify
// (Exec, Native, NetResponse, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FName*                  AnimNotifyName                 (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 AnimNotifyStringData           (Parm, ZeroConstructor)

void ABuff_NamelessPreggers_C::HandleBuffAnimNotify(struct FName* AnimNotifyName, class FString* AnimNotifyStringData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.HandleBuffAnimNotify");

	ABuff_NamelessPreggers_C_HandleBuffAnimNotify_Params params;
	params.AnimNotifyName = AnimNotifyName;
	params.AnimNotifyStringData = AnimNotifyStringData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.UpdateBuffPersistentData
// ()

void ABuff_NamelessPreggers_C::UpdateBuffPersistentData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.UpdateBuffPersistentData");

	ABuff_NamelessPreggers_C_UpdateBuffPersistentData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.ReceiveBeginPlay
// (NetRequest, Exec, Native, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ABuff_NamelessPreggers_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.ReceiveBeginPlay");

	ABuff_NamelessPreggers_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NamelessPreggers_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BuffTickClient");

	ABuff_NamelessPreggers_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPDrawBuffStatusHUD
// (NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NamelessPreggers_C::STATIC_BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPDrawBuffStatusHUD");

	ABuff_NamelessPreggers_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NamelessPreggers_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BuffTickServer");

	ABuff_NamelessPreggers_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.UserConstructionScript
// ()

void ABuff_NamelessPreggers_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.UserConstructionScript");

	ABuff_NamelessPreggers_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.Multi_SetupBaby
// ()

void ABuff_NamelessPreggers_C::Multi_SetupBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.Multi_SetupBaby");

	ABuff_NamelessPreggers_C_Multi_SetupBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.ExecuteUbergraph_Buff_NamelessPreggers
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NamelessPreggers_C::ExecuteUbergraph_Buff_NamelessPreggers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.ExecuteUbergraph_Buff_NamelessPreggers");

	ABuff_NamelessPreggers_C_ExecuteUbergraph_Buff_NamelessPreggers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
