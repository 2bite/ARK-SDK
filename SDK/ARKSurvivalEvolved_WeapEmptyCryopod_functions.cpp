// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapEmptyCryopod_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.GetContainedDinoClass
// ()
// Parameters:
// struct FCustomItemData         CustomItemData                 (Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnedClass                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapEmptyCryopod_C::GetContainedDinoClass(struct FCustomItemData* CustomItemData, class UClass** ReturnedClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.GetContainedDinoClass");

	AWeapEmptyCryopod_C_GetContainedDinoClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomItemData != nullptr)
		*CustomItemData = params.CustomItemData;
	if (ReturnedClass != nullptr)
		*ReturnedClass = params.ReturnedClass;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.Get Character StatsAsFloats
// ()
// Parameters:
// class APrimalDinoCharacter*    Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Stats                          (Parm, OutParm, ZeroConstructor)

void AWeapEmptyCryopod_C::Get_Character_StatsAsFloats(class APrimalDinoCharacter* Character, TArray<float>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.Get Character StatsAsFloats");

	AWeapEmptyCryopod_C_Get_Character_StatsAsFloats_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.ReportSuccess
// ()

void AWeapEmptyCryopod_C::ReportSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.ReportSuccess");

	AWeapEmptyCryopod_C_ReportSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.GetSaddleData
// ()
// Parameters:
// TArray<unsigned char>          Bytes                          (Parm, OutParm, ZeroConstructor)

void AWeapEmptyCryopod_C::GetSaddleData(TArray<unsigned char>* Bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.GetSaddleData");

	AWeapEmptyCryopod_C_GetSaddleData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bytes != nullptr)
		*Bytes = params.Bytes;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.ReceiveBeginPlay
// ()

void AWeapEmptyCryopod_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.ReceiveBeginPlay");

	AWeapEmptyCryopod_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.UpdateContainsFX
// (NetReliable, Exec, Event, NetResponse, Static, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           ForceOff                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapEmptyCryopod_C::STATIC_UpdateContainsFX(bool ForceOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.UpdateContainsFX");

	AWeapEmptyCryopod_C_UpdateContainsFX_Params params;
	params.ForceOff = ForceOff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPFiredWeapon
// ()

void AWeapEmptyCryopod_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPFiredWeapon");

	AWeapEmptyCryopod_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.CanCapture
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Capture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapEmptyCryopod_C::CanCapture(class APrimalDinoCharacter* Dino, bool* Capture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.CanCapture");

	AWeapEmptyCryopod_C_CanCapture_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Capture != nullptr)
		*Capture = params.Capture;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPTryFireWeapon
// (NetReliable, NetRequest, Native, Event, NetMulticast, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapEmptyCryopod_C::BPTryFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPTryFireWeapon");

	AWeapEmptyCryopod_C_BPTryFireWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPStartEquippedNotify
// ()

void AWeapEmptyCryopod_C::BPStartEquippedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPStartEquippedNotify");

	AWeapEmptyCryopod_C_BPStartEquippedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.UserConstructionScript
// ()

void AWeapEmptyCryopod_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.UserConstructionScript");

	AWeapEmptyCryopod_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.Capture
// ()

void AWeapEmptyCryopod_C::Capture()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.Capture");

	AWeapEmptyCryopod_C_Capture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.Ingest
// ()

void AWeapEmptyCryopod_C::Ingest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.Ingest");

	AWeapEmptyCryopod_C_Ingest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.StartIngestion
// ()

void AWeapEmptyCryopod_C::StartIngestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.StartIngestion");

	AWeapEmptyCryopod_C_StartIngestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.ClientPlayAnimation
// ()
// Parameters:
// bool                           IncludeInstigator              (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            TPV                            (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            FPV                            (Parm, ZeroConstructor, IsPlainOldData)

void AWeapEmptyCryopod_C::ClientPlayAnimation(bool IncludeInstigator, class UAnimMontage* TPV, class UAnimMontage* FPV)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.ClientPlayAnimation");

	AWeapEmptyCryopod_C_ClientPlayAnimation_Params params;
	params.IncludeInstigator = IncludeInstigator;
	params.TPV = TPV;
	params.FPV = FPV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.Reload
// ()

void AWeapEmptyCryopod_C::Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.Reload");

	AWeapEmptyCryopod_C_Reload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.StartCaptureLoop
// ()
// Parameters:
// class APrimalDinoCharacter*    CapturingDino                  (Parm, ZeroConstructor, IsPlainOldData)

void AWeapEmptyCryopod_C::StartCaptureLoop(class APrimalDinoCharacter* CapturingDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.StartCaptureLoop");

	AWeapEmptyCryopod_C_StartCaptureLoop_Params params;
	params.CapturingDino = CapturingDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.EndCaptureLoop
// ()

void AWeapEmptyCryopod_C::EndCaptureLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.EndCaptureLoop");

	AWeapEmptyCryopod_C_EndCaptureLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.CaptureSuccess
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeapEmptyCryopod_C::CaptureSuccess(const struct FVector& Location, const struct FRotator& Rotation, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.CaptureSuccess");

	AWeapEmptyCryopod_C_CaptureSuccess_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.DeploySuccess
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeapEmptyCryopod_C::DeploySuccess(const struct FVector& Location, const struct FRotator& Rotation, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.DeploySuccess");

	AWeapEmptyCryopod_C_DeploySuccess_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.DeployFailure
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapEmptyCryopod_C::DeployFailure(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.DeployFailure");

	AWeapEmptyCryopod_C_DeployFailure_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapEmptyCryopod.WeapEmptyCryopod_C.ExecuteUbergraph_WeapEmptyCryopod
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapEmptyCryopod_C::ExecuteUbergraph_WeapEmptyCryopod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapEmptyCryopod.WeapEmptyCryopod_C.ExecuteUbergraph_WeapEmptyCryopod");

	AWeapEmptyCryopod_C_ExecuteUbergraph_WeapEmptyCryopod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
