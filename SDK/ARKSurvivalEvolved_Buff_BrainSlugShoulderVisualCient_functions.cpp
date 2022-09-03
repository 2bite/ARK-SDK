// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BrainSlugShoulderVisualCient_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.BPGetHUDElements
// (NetRequest, Exec, Native, Event, MulticastDelegate, NetClient, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_BrainSlugShoulderVisualCient_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.BPGetHUDElements");

	ABuff_BrainSlugShoulderVisualCient_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.DrawBuffFloatingHUD
// (Exec, NetResponse, Static, MulticastDelegate, NetClient, BlueprintEvent)
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugShoulderVisualCient_C::STATIC_DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.DrawBuffFloatingHUD");

	ABuff_BrainSlugShoulderVisualCient_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.UserConstructionScript
// ()

void ABuff_BrainSlugShoulderVisualCient_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.UserConstructionScript");

	ABuff_BrainSlugShoulderVisualCient_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugShoulderVisualCient_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.BuffTickClient");

	ABuff_BrainSlugShoulderVisualCient_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugShoulderVisualCient_C::ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient");

	ABuff_BrainSlugShoulderVisualCient_C_ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
