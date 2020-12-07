// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Nursing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Nursing.Buff_Nursing_C.BPGetBabyImprintingSpeedMultiplier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Nursing_C::BPGetBabyImprintingSpeedMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Nursing.Buff_Nursing_C.BPGetBabyImprintingSpeedMultiplier");

	ABuff_Nursing_C_BPGetBabyImprintingSpeedMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Nursing.Buff_Nursing_C.DrawBuffFloatingHUD
// ()
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Nursing_C::DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Nursing.Buff_Nursing_C.DrawBuffFloatingHUD");

	ABuff_Nursing_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Nursing.Buff_Nursing_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Nursing_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Nursing.Buff_Nursing_C.BuffTickServer");

	ABuff_Nursing_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Nursing.Buff_Nursing_C.UserConstructionScript
// ()

void ABuff_Nursing_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Nursing.Buff_Nursing_C.UserConstructionScript");

	ABuff_Nursing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Nursing.Buff_Nursing_C.ExecuteUbergraph_Buff_Nursing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Nursing_C::ExecuteUbergraph_Buff_Nursing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Nursing.Buff_Nursing_C.ExecuteUbergraph_Buff_Nursing");

	ABuff_Nursing_C_ExecuteUbergraph_Buff_Nursing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
