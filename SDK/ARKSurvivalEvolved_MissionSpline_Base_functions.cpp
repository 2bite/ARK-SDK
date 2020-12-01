// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionSpline_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionSpline_Base.MissionSpline_Base_C.ActivateParticlesBetweenLocations
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Finish                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionSpline_Base_C::ActivateParticlesBetweenLocations(const struct FVector& Start, const struct FVector& Finish)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.ActivateParticlesBetweenLocations");

	AMissionSpline_Base_C_ActivateParticlesBetweenLocations_Params params;
	params.Start = Start;
	params.Finish = Finish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionSpline_Base.MissionSpline_Base_C.ClearParticles
// ()

void AMissionSpline_Base_C::ClearParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.ClearParticles");

	AMissionSpline_Base_C_ClearParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionSpline_Base.MissionSpline_Base_C.UpdateSpline
// ()

void AMissionSpline_Base_C::UpdateSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.UpdateSpline");

	AMissionSpline_Base_C_UpdateSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionSpline_Base.MissionSpline_Base_C.MakeSpline
// ()

void AMissionSpline_Base_C::MakeSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.MakeSpline");

	AMissionSpline_Base_C_MakeSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionSpline_Base.MissionSpline_Base_C.UserConstructionScript
// ()

void AMissionSpline_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.UserConstructionScript");

	AMissionSpline_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionSpline_Base.MissionSpline_Base_C.ReceiveBeginPlay
// ()

void AMissionSpline_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.ReceiveBeginPlay");

	AMissionSpline_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionSpline_Base.MissionSpline_Base_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionSpline_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.ReceiveTick");

	AMissionSpline_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionSpline_Base.MissionSpline_Base_C.ExecuteUbergraph_MissionSpline_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionSpline_Base_C::ExecuteUbergraph_MissionSpline_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_Base.MissionSpline_Base_C.ExecuteUbergraph_MissionSpline_Base");

	AMissionSpline_Base_C_ExecuteUbergraph_MissionSpline_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
