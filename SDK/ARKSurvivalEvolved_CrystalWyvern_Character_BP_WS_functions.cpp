// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvern_Character_BP_WS_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.SpawnWaterOverlapVFX
// (NetReliable, Event, Private, Delegate, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  WaterActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_WS_C::SpawnWaterOverlapVFX(class AActor* WaterActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.SpawnWaterOverlapVFX");

	ACrystalWyvern_Character_BP_WS_C_SpawnWaterOverlapVFX_Params params;
	params.WaterActor = WaterActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.UserConstructionScript
// ()

void ACrystalWyvern_Character_BP_WS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.UserConstructionScript");

	ACrystalWyvern_Character_BP_WS_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_WS_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ReceiveActorBeginOverlap");

	ACrystalWyvern_Character_BP_WS_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ReceiveActorEndOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_WS_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ReceiveActorEndOverlap");

	ACrystalWyvern_Character_BP_WS_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.Multi_UpdateBuffTime
// ()
// Parameters:
// bool                           bIsActive                      (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_WS_C::Multi_UpdateBuffTime(bool bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.Multi_UpdateBuffTime");

	ACrystalWyvern_Character_BP_WS_C_Multi_UpdateBuffTime_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ExecuteUbergraph_CrystalWyvern_Character_BP_WS
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_WS_C::ExecuteUbergraph_CrystalWyvern_Character_BP_WS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ExecuteUbergraph_CrystalWyvern_Character_BP_WS");

	ACrystalWyvern_Character_BP_WS_C_ExecuteUbergraph_CrystalWyvern_Character_BP_WS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
