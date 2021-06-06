// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_Motorized_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.UpdateFX
// (Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, BlueprintCallable)

void ABuff_Zipline_Motorized_C::STATIC_UpdateFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.UpdateFX");

	ABuff_Zipline_Motorized_C_UpdateFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPOverrideWeaponBob
// ()
// Parameters:
// struct FVector                 InWeaponBob                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_Zipline_Motorized_C::BPOverrideWeaponBob(struct FVector* InWeaponBob)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPOverrideWeaponBob");

	ABuff_Zipline_Motorized_C_BPOverrideWeaponBob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWeaponBob != nullptr)
		*InWeaponBob = params.InWeaponBob;

	return params.ReturnValue;
}


// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Motorized_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BuffTickClient");

	ABuff_Zipline_Motorized_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.Try Refill Gas
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, BlueprintCallable)

void ABuff_Zipline_Motorized_C::STATIC_Try_Refill_Gas()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.Try Refill Gas");

	ABuff_Zipline_Motorized_C_Try_Refill_Gas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPDrawBuffStatusHUD
// (NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, BlueprintCallable)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Motorized_C::STATIC_BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPDrawBuffStatusHUD");

	ABuff_Zipline_Motorized_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.GetMotorAndParentItem
// ()
// Parameters:
// class UObject*                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             ParentItem                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             MyItemSkin                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Motorized_C::GetMotorAndParentItem(class UObject* Actor, class UPrimalItem** ParentItem, class UPrimalItem** MyItemSkin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.GetMotorAndParentItem");

	ABuff_Zipline_Motorized_C_GetMotorAndParentItem_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentItem != nullptr)
		*ParentItem = params.ParentItem;
	if (MyItemSkin != nullptr)
		*MyItemSkin = params.MyItemSkin;
}


// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.TickMoveAlongZipline
// ()

void ABuff_Zipline_Motorized_C::TickMoveAlongZipline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.TickMoveAlongZipline");

	ABuff_Zipline_Motorized_C_TickMoveAlongZipline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Motorized_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPDeactivated");

	ABuff_Zipline_Motorized_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Motorized_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.BPSetupForInstigator");

	ABuff_Zipline_Motorized_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.UserConstructionScript
// ()

void ABuff_Zipline_Motorized_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.UserConstructionScript");

	ABuff_Zipline_Motorized_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.ConsumeGasoline
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Motorized_C::ConsumeGasoline(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.ConsumeGasoline");

	ABuff_Zipline_Motorized_C_ConsumeGasoline_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.ExecuteUbergraph_Buff_Zipline_Motorized
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Motorized_C::ExecuteUbergraph_Buff_Zipline_Motorized(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Motorized.Buff_Zipline_Motorized_C.ExecuteUbergraph_Buff_Zipline_Motorized");

	ABuff_Zipline_Motorized_C_ExecuteUbergraph_Buff_Zipline_Motorized_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
