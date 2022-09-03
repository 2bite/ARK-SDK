// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceJumperProjIceBreath_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.Is Vector on RightOf Forward
// ()
// Parameters:
// struct FVector                 TestVector                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumperProjIceBreath_C::Is_Vector_on_RightOf_Forward(const struct FVector& TestVector, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.Is Vector on RightOf Forward");

	AIceJumperProjIceBreath_C_Is_Vector_on_RightOf_Forward_Params params;
	params.TestVector = TestVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.GetIceBreathInterpSpeed
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumperProjIceBreath_C::GetIceBreathInterpSpeed(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.GetIceBreathInterpSpeed");

	AIceJumperProjIceBreath_C_GetIceBreathInterpSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.Get Normalized Vector On Ice Jumper Plane from Location
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumperProjIceBreath_C::Get_Normalized_Vector_On_Ice_Jumper_Plane_from_Location(const struct FVector& Location, struct FVector* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.Get Normalized Vector On Ice Jumper Plane from Location");

	AIceJumperProjIceBreath_C_Get_Normalized_Vector_On_Ice_Jumper_Plane_from_Location_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.Get Best Impact Location
// (NetReliable, NetRequest, Native, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        Rider                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactNormal                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           FoundNewimpactLocation         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumperProjIceBreath_C::Get_Best_Impact_Location(const struct FVector& Start, const struct FVector& End, class APrimalCharacter* Rider, struct FVector* ImpactLocation, struct FVector* ImpactNormal, bool* FoundNewimpactLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.Get Best Impact Location");

	AIceJumperProjIceBreath_C_Get_Best_Impact_Location_Params params;
	params.Start = Start;
	params.End = End;
	params.Rider = Rider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactLocation != nullptr)
		*ImpactLocation = params.ImpactLocation;
	if (ImpactNormal != nullptr)
		*ImpactNormal = params.ImpactNormal;
	if (FoundNewimpactLocation != nullptr)
		*FoundNewimpactLocation = params.FoundNewimpactLocation;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.CanCollideWith
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumperProjIceBreath_C::CanCollideWith(class AActor* Actor, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.CanCollideWith");

	AIceJumperProjIceBreath_C_CanCollideWith_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ValidateTick
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumperProjIceBreath_C::ValidateTick(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ValidateTick");

	AIceJumperProjIceBreath_C_ValidateTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.UpdateBeamLength
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintPure, NetValidate)

void AIceJumperProjIceBreath_C::STATIC_UpdateBeamLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.UpdateBeamLength");

	AIceJumperProjIceBreath_C_UpdateBeamLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.GetBeamStartEnd
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ValidatedStart                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ValidatedEnd                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumperProjIceBreath_C::STATIC_GetBeamStartEnd(const struct FVector& Start, const struct FVector& End, struct FVector* ValidatedStart, struct FVector* ValidatedEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.GetBeamStartEnd");

	AIceJumperProjIceBreath_C_GetBeamStartEnd_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidatedStart != nullptr)
		*ValidatedStart = params.ValidatedStart;
	if (ValidatedEnd != nullptr)
		*ValidatedEnd = params.ValidatedEnd;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.UserConstructionScript
// ()

void AIceJumperProjIceBreath_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.UserConstructionScript");

	AIceJumperProjIceBreath_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ReceiveBeginPlay
// ()

void AIceJumperProjIceBreath_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ReceiveBeginPlay");

	AIceJumperProjIceBreath_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumperProjIceBreath_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ReceiveTick");

	AIceJumperProjIceBreath_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.EnableBeam
// ()

void AIceJumperProjIceBreath_C::EnableBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.EnableBeam");

	AIceJumperProjIceBreath_C_EnableBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.OWNER_DrawDebugLine
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumperProjIceBreath_C::OWNER_DrawDebugLine(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.OWNER_DrawDebugLine");

	AIceJumperProjIceBreath_C_OWNER_DrawDebugLine_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.OWNER_DrawDebugSphere
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumperProjIceBreath_C::OWNER_DrawDebugSphere(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.OWNER_DrawDebugSphere");

	AIceJumperProjIceBreath_C_OWNER_DrawDebugSphere_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ExecuteUbergraph_IceJumperProjIceBreath
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumperProjIceBreath_C::ExecuteUbergraph_IceJumperProjIceBreath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ExecuteUbergraph_IceJumperProjIceBreath");

	AIceJumperProjIceBreath_C_ExecuteUbergraph_IceJumperProjIceBreath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
