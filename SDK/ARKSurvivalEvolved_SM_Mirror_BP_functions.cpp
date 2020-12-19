// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_Mirror_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SM_Mirror_BP.SM_Mirror_BP_C.CanUseRenderTarget
// ()
// Parameters:
// bool                           Can_Use                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASM_Mirror_BP_C::CanUseRenderTarget(bool* Can_Use)
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.CanUseRenderTarget");

	ASM_Mirror_BP_C_CanUseRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_Use != nullptr)
		*Can_Use = params.Can_Use;
}


// Function SM_Mirror_BP.SM_Mirror_BP_C.GetMirrorBlend
// ()
// Parameters:
// float                          CurrentMirrorBlend             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASM_Mirror_BP_C::GetMirrorBlend(float* CurrentMirrorBlend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.GetMirrorBlend");

	ASM_Mirror_BP_C_GetMirrorBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentMirrorBlend != nullptr)
		*CurrentMirrorBlend = params.CurrentMirrorBlend;
}


// Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveDestroyed
// ()

void ASM_Mirror_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveDestroyed");

	ASM_Mirror_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_Mirror_BP.SM_Mirror_BP_C.SetMirrorBlend
// ()
// Parameters:
// float                          NewMirrorBlend                 (Parm, ZeroConstructor, IsPlainOldData)

void ASM_Mirror_BP_C::SetMirrorBlend(float NewMirrorBlend)
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.SetMirrorBlend");

	ASM_Mirror_BP_C_SetMirrorBlend_Params params;
	params.NewMirrorBlend = NewMirrorBlend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_Mirror_BP.SM_Mirror_BP_C.UserConstructionScript
// ()

void ASM_Mirror_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.UserConstructionScript");

	ASM_Mirror_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveBeginPlay
// ()

void ASM_Mirror_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveBeginPlay");

	ASM_Mirror_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_Mirror_BP.SM_Mirror_BP_C.ForcedTick
// ()

void ASM_Mirror_BP_C::ForcedTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.ForcedTick");

	ASM_Mirror_BP_C_ForcedTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_Mirror_BP.SM_Mirror_BP_C.DistanceCheck
// ()

void ASM_Mirror_BP_C::DistanceCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.DistanceCheck");

	ASM_Mirror_BP_C_DistanceCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_Mirror_BP.SM_Mirror_BP_C.OnSemaphoreTaken_Event
// ()
// Parameters:
// struct FName                   SemaphoreName                  (Parm, ZeroConstructor, IsPlainOldData)

void ASM_Mirror_BP_C::OnSemaphoreTaken_Event(const struct FName& SemaphoreName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.OnSemaphoreTaken_Event");

	ASM_Mirror_BP_C_OnSemaphoreTaken_Event_Params params;
	params.SemaphoreName = SemaphoreName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ASM_Mirror_BP_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveActorBeginOverlap");

	ASM_Mirror_BP_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_Mirror_BP.SM_Mirror_BP_C.DestroyMirror
// ()

void ASM_Mirror_BP_C::DestroyMirror()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.DestroyMirror");

	ASM_Mirror_BP_C_DestroyMirror_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_Mirror_BP.SM_Mirror_BP_C.LerpMirrorBlend
// ()

void ASM_Mirror_BP_C::LerpMirrorBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.LerpMirrorBlend");

	ASM_Mirror_BP_C_LerpMirrorBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_Mirror_BP.SM_Mirror_BP_C.FadeOutDestroy
// ()

void ASM_Mirror_BP_C::FadeOutDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.FadeOutDestroy");

	ASM_Mirror_BP_C_FadeOutDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_Mirror_BP.SM_Mirror_BP_C.ExecuteUbergraph_SM_Mirror_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASM_Mirror_BP_C::ExecuteUbergraph_SM_Mirror_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.ExecuteUbergraph_SM_Mirror_BP");

	ASM_Mirror_BP_C_ExecuteUbergraph_SM_Mirror_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
