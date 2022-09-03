// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Lamprey_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Lamprey.Buff_Lamprey_C.GetNumBatteries
// ()
// Parameters:
// int                            numBatteries                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::GetNumBatteries(int* numBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.GetNumBatteries");

	ABuff_Lamprey_C_GetNumBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numBatteries != nullptr)
		*numBatteries = params.numBatteries;
}


// Function Buff_Lamprey.Buff_Lamprey_C.Get Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.Get Charge Variable Interface");

	ABuff_Lamprey_C_Get_Charge_Variable_Interface_Params params;
	params.variableType = variableType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fValue != nullptr)
		*fValue = params.fValue;
	if (dValue != nullptr)
		*dValue = params.dValue;
	if (bBValue != nullptr)
		*bBValue = params.bBValue;
	if (iValue != nullptr)
		*iValue = params.iValue;
}


// Function Buff_Lamprey.Buff_Lamprey_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Lamprey_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.BPPreventAddingOtherBuff");

	ABuff_Lamprey_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Lamprey.Buff_Lamprey_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.BuffTickClient");

	ABuff_Lamprey_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.CreateChargeManager
// ()

void ABuff_Lamprey_C::CreateChargeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.CreateChargeManager");

	ABuff_Lamprey_C_CreateChargeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.BuffTickServer");

	ABuff_Lamprey_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.BPDeactivated");

	ABuff_Lamprey_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.NotifyDamage
// ()
// Parameters:
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TheDamageCauser                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::NotifyDamage(float* DamageAmount, class UClass** DamageClass, class AController** EventInstigator, class AActor** TheDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.NotifyDamage");

	ABuff_Lamprey_C_NotifyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageClass = DamageClass;
	params.EventInstigator = EventInstigator;
	params.TheDamageCauser = TheDamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Lamprey_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.BPCustomAllowAddBuff");

	ABuff_Lamprey_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Lamprey.Buff_Lamprey_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Lamprey_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.BPTryMultiUse");

	ABuff_Lamprey_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Lamprey.Buff_Lamprey_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, Static, Public, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_Lamprey_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.BPGetMultiUseEntries");

	ABuff_Lamprey_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_Lamprey.Buff_Lamprey_C.BPSetupForInstigator
// (NetReliable, NetResponse, Static, Public, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::STATIC_BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.BPSetupForInstigator");

	ABuff_Lamprey_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.UserConstructionScript
// ()

void ABuff_Lamprey_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.UserConstructionScript");

	ABuff_Lamprey_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.FadeInTimeline__FinishedFunc
// ()

void ABuff_Lamprey_C::FadeInTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.FadeInTimeline__FinishedFunc");

	ABuff_Lamprey_C_FadeInTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.FadeInTimeline__UpdateFunc
// ()

void ABuff_Lamprey_C::FadeInTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.FadeInTimeline__UpdateFunc");

	ABuff_Lamprey_C_FadeInTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.FadeOutTimeline__FinishedFunc
// ()

void ABuff_Lamprey_C::FadeOutTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.FadeOutTimeline__FinishedFunc");

	ABuff_Lamprey_C_FadeOutTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.FadeOutTimeline__UpdateFunc
// ()

void ABuff_Lamprey_C::FadeOutTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.FadeOutTimeline__UpdateFunc");

	ABuff_Lamprey_C_FadeOutTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.DissolveTimeLine__FinishedFunc
// ()

void ABuff_Lamprey_C::DissolveTimeLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.DissolveTimeLine__FinishedFunc");

	ABuff_Lamprey_C_DissolveTimeLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.DissolveTimeLine__UpdateFunc
// ()

void ABuff_Lamprey_C::DissolveTimeLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.DissolveTimeLine__UpdateFunc");

	ABuff_Lamprey_C_DissolveTimeLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.Interface Check for Batteries and Update Multicast
// ()

void ABuff_Lamprey_C::Interface_Check_for_Batteries_and_Update_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.Interface Check for Batteries and Update Multicast");

	ABuff_Lamprey_C_Interface_Check_for_Batteries_and_Update_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Boolean MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Boolean MulticastInterface");

	ABuff_Lamprey_C_Charge_Variable_Event_Boolean_MulticastInterface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Float Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Float Multicast Interface");

	ABuff_Lamprey_C_Charge_Variable_Event_Float_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Double MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Double MulticastInterface");

	ABuff_Lamprey_C_Charge_Variable_Event_Double_MulticastInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Boolean Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Boolean Interface");

	ABuff_Lamprey_C_Charge_Variable_Event_Boolean_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEventFloatInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEventFloatInterface");

	ABuff_Lamprey_C_ChargeVariableEventFloatInterface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEventDoubleInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEventDoubleInterface");

	ABuff_Lamprey_C_ChargeVariableEventDoubleInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEventIntInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEventIntInterface");

	ABuff_Lamprey_C_ChargeVariableEventIntInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEventIntMulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEventIntMulticastInterface");

	ABuff_Lamprey_C_ChargeVariableEventIntMulticastInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.FadeInLight
// ()

void ABuff_Lamprey_C::FadeInLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.FadeInLight");

	ABuff_Lamprey_C_FadeInLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.MultiUpdateLight
// ()

void ABuff_Lamprey_C::MultiUpdateLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.MultiUpdateLight");

	ABuff_Lamprey_C_MultiUpdateLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.UpdateLightIntensity
// ()
// Parameters:
// float                          Start                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          End                            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::UpdateLightIntensity(float Start, float End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.UpdateLightIntensity");

	ABuff_Lamprey_C_UpdateLightIntensity_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.Dissolve
// ()

void ABuff_Lamprey_C::Dissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.Dissolve");

	ABuff_Lamprey_C_Dissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.MultiDissolve
// ()

void ABuff_Lamprey_C::MultiDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.MultiDissolve");

	ABuff_Lamprey_C_MultiDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.ReceiveBeginPlay
// ()

void ABuff_Lamprey_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.ReceiveBeginPlay");

	ABuff_Lamprey_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.Set Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicast                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           triggerEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.Set Charge Variable Interface");

	ABuff_Lamprey_C_Set_Charge_Variable_Interface_Params params;
	params.variableType = variableType;
	params.multicast = multicast;
	params.fValue = fValue;
	params.dValue = dValue;
	params.bBValue = bBValue;
	params.triggerEvent = triggerEvent;
	params.multicastEvent = multicastEvent;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Interface");

	ABuff_Lamprey_C_Charge_Variable_Event_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Trigger Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iVariable                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.Charge Variable Event Trigger Multicast Interface");

	ABuff_Lamprey_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iVariable = iVariable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEvent
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEvent");

	ABuff_Lamprey_C_ChargeVariableEvent_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEvent_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::ChargeVariableEvent_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.ChargeVariableEvent_Multicast");

	ABuff_Lamprey_C_ChargeVariableEvent_Multicast_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey.Buff_Lamprey_C.ExecuteUbergraph_Buff_Lamprey
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_C::ExecuteUbergraph_Buff_Lamprey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey.Buff_Lamprey_C.ExecuteUbergraph_Buff_Lamprey");

	ABuff_Lamprey_C_ExecuteUbergraph_Buff_Lamprey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
