// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiderFlyingWindWoosh_SpaceDolphin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.Get Ammo And Laser HUDElement Color
// ()
// Parameters:
// bool                           IsUsingSuperFlight             (Parm, ZeroConstructor, IsPlainOldData)
// int                            LaserLevel                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::Get_Ammo_And_Laser_HUDElement_Color(bool IsUsingSuperFlight, int LaserLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.Get Ammo And Laser HUDElement Color");

	ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_Get_Ammo_And_Laser_HUDElement_Color_Params params;
	params.IsUsingSuperFlight = IsUsingSuperFlight;
	params.LaserLevel = LaserLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.HitCollisionStarFoxMode
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::HitCollisionStarFoxMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.HitCollisionStarFoxMode");

	ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_HitCollisionStarFoxMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.StartedBraking
// ()
// Parameters:
// class ASpaceDolphin_Character_BP_C* self2                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::StartedBraking(class ASpaceDolphin_Character_BP_C* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.StartedBraking");

	ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_StartedBraking_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BPGetHUDElements
// (NetReliable, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BPGetHUDElements");

	ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.UpdateSFX
// ()

void ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::UpdateSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.UpdateSFX");

	ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_UpdateSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.GetBuffDescription
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FStatusValueModifierDescription ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusValueModifierDescription ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::STATIC_GetBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.GetBuffDescription");

	ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_GetBuffDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.AllowPostProcessEffect");

	ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.GetBuffPostprocessIntensity");

	ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BPCustomAllowAddBuff");

	ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.BuffTickClient");

	ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.UserConstructionScript
// ()

void ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.UserConstructionScript");

	ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_SpaceDolphin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RiderFlyingWindWoosh_SpaceDolphin_C::ExecuteUbergraph_Buff_RiderFlyingWindWoosh_SpaceDolphin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_SpaceDolphin");

	ABuff_RiderFlyingWindWoosh_SpaceDolphin_C_ExecuteUbergraph_Buff_RiderFlyingWindWoosh_SpaceDolphin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
