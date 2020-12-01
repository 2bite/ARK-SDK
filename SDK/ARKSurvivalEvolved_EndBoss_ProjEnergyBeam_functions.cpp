// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_ProjEnergyBeam_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.CheckCanHaveBeams
// ()
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEndBoss_ProjEnergyBeam_C::CheckCanHaveBeams(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.CheckCanHaveBeams");

	AEndBoss_ProjEnergyBeam_C_CheckCanHaveBeams_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.UpdateBeamAim
// ()

void AEndBoss_ProjEnergyBeam_C::UpdateBeamAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.UpdateBeamAim");

	AEndBoss_ProjEnergyBeam_C_UpdateBeamAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.UserConstructionScript
// ()

void AEndBoss_ProjEnergyBeam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.UserConstructionScript");

	AEndBoss_ProjEnergyBeam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.ReceiveBeginPlay
// ()

void AEndBoss_ProjEnergyBeam_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.ReceiveBeginPlay");

	AEndBoss_ProjEnergyBeam_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_ProjEnergyBeam_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.ReceiveTick");

	AEndBoss_ProjEnergyBeam_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.DisableBeam
// ()

void AEndBoss_ProjEnergyBeam_C::DisableBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.DisableBeam");

	AEndBoss_ProjEnergyBeam_C_DisableBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.ClearTargets
// ()

void AEndBoss_ProjEnergyBeam_C::ClearTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.ClearTargets");

	AEndBoss_ProjEnergyBeam_C_ClearTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.UpdateProjectileBeam
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_ProjEnergyBeam_C::UpdateProjectileBeam(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.UpdateProjectileBeam");

	AEndBoss_ProjEnergyBeam_C_UpdateProjectileBeam_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.UpdateVisuals
// ()
// Parameters:
// struct FVector                 EndPoint                       (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_ProjEnergyBeam_C::UpdateVisuals(const struct FVector& EndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.UpdateVisuals");

	AEndBoss_ProjEnergyBeam_C_UpdateVisuals_Params params;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.TraceAndDealDamage
// ()
// Parameters:
// class APrimalDinoCharacter*    BeamInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_ProjEnergyBeam_C::TraceAndDealDamage(class APrimalDinoCharacter* BeamInstigator, const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.TraceAndDealDamage");

	AEndBoss_ProjEnergyBeam_C_TraceAndDealDamage_Params params;
	params.BeamInstigator = BeamInstigator;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.DestroyBeam
// ()

void AEndBoss_ProjEnergyBeam_C::DestroyBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.DestroyBeam");

	AEndBoss_ProjEnergyBeam_C_DestroyBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.ExecuteUbergraph_EndBoss_ProjEnergyBeam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_ProjEnergyBeam_C::ExecuteUbergraph_EndBoss_ProjEnergyBeam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_ProjEnergyBeam.EndBoss_ProjEnergyBeam_C.ExecuteUbergraph_EndBoss_ProjEnergyBeam");

	AEndBoss_ProjEnergyBeam_C_ExecuteUbergraph_EndBoss_ProjEnergyBeam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
