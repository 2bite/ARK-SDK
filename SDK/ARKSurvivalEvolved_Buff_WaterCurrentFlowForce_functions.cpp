// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_WaterCurrentFlowForce_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnClearPassenger
// ()
// Parameters:
// class APrimalCharacter*        Passenger                      (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    ForDino                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WaterCurrentFlowForce_C::OnClearPassenger(class APrimalCharacter* Passenger, class APrimalDinoCharacter* ForDino, int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnClearPassenger");

	ABuff_WaterCurrentFlowForce_C_OnClearPassenger_Params params;
	params.Passenger = Passenger;
	params.ForDino = ForDino;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnClearRider
// ()
// Parameters:
// class AShooterCharacter*       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    ForDino                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WaterCurrentFlowForce_C::OnClearRider(class AShooterCharacter* forCharacter, class APrimalDinoCharacter* ForDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnClearRider");

	ABuff_WaterCurrentFlowForce_C_OnClearRider_Params params;
	params.forCharacter = forCharacter;
	params.ForDino = ForDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.On Set Passenger
// ()
// Parameters:
// class APrimalCharacter*        Passenger                      (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    ForDino                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WaterCurrentFlowForce_C::On_Set_Passenger(class APrimalCharacter* Passenger, class APrimalDinoCharacter* ForDino, int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.On Set Passenger");

	ABuff_WaterCurrentFlowForce_C_On_Set_Passenger_Params params;
	params.Passenger = Passenger;
	params.ForDino = ForDino;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnSetRider
// ()
// Parameters:
// class AShooterCharacter*       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    ForDino                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WaterCurrentFlowForce_C::OnSetRider(class AShooterCharacter* forCharacter, class APrimalDinoCharacter* ForDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnSetRider");

	ABuff_WaterCurrentFlowForce_C_OnSetRider_Params params;
	params.forCharacter = forCharacter;
	params.ForDino = ForDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.SetWaterCurrentBuffActivation
// ()
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WaterCurrentFlowForce_C::SetWaterCurrentBuffActivation(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.SetWaterCurrentBuffActivation");

	ABuff_WaterCurrentFlowForce_C_SetWaterCurrentBuffActivation_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_WaterCurrentFlowForce_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPCustomAllowAddBuff");

	ABuff_WaterCurrentFlowForce_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WaterCurrentFlowForce_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPSetupForInstigator");

	ABuff_WaterCurrentFlowForce_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPOnInstigatorMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WaterCurrentFlowForce_C::BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPOnInstigatorMovementModeChangedNotify");

	ABuff_WaterCurrentFlowForce_C_BPOnInstigatorMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BP_OverrideCharacterSwimmingVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FluidFriction                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          NetBuoyancy                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_WaterCurrentFlowForce_C::BP_OverrideCharacterSwimmingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity, float* FluidFriction, float* NetBuoyancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BP_OverrideCharacterSwimmingVelocity");

	ABuff_WaterCurrentFlowForce_C_BP_OverrideCharacterSwimmingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;
	if (FluidFriction != nullptr)
		*FluidFriction = params.FluidFriction;
	if (NetBuoyancy != nullptr)
		*NetBuoyancy = params.NetBuoyancy;

	return params.ReturnValue;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_WaterCurrentFlowForce_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.AllowPostProcessEffect");

	ABuff_WaterCurrentFlowForce_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WaterCurrentFlowForce_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BuffTickServer");

	ABuff_WaterCurrentFlowForce_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WaterCurrentFlowForce_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPDeactivated");

	ABuff_WaterCurrentFlowForce_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WaterCurrentFlowForce_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPActivated");

	ABuff_WaterCurrentFlowForce_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.UserConstructionScript
// ()

void ABuff_WaterCurrentFlowForce_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.UserConstructionScript");

	ABuff_WaterCurrentFlowForce_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.ExecuteUbergraph_Buff_WaterCurrentFlowForce
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WaterCurrentFlowForce_C::ExecuteUbergraph_Buff_WaterCurrentFlowForce(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.ExecuteUbergraph_Buff_WaterCurrentFlowForce");

	ABuff_WaterCurrentFlowForce_C_ExecuteUbergraph_Buff_WaterCurrentFlowForce_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
