// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IsBeingCarried_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IsBeingCarried_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BPSetupForInstigator");

	ABuff_IsBeingCarried_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.CanGrabWaterDino
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoRef                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_IsBeingCarried_C::CanGrabWaterDino(class APrimalDinoCharacter* DinoRef, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.CanGrabWaterDino");

	ABuff_IsBeingCarried_C_CanGrabWaterDino_Params params;
	params.DinoRef = DinoRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.CheckAttachmentAndEvaluate
// ()

void ABuff_IsBeingCarried_C::CheckAttachmentAndEvaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.CheckAttachmentAndEvaluate");

	ABuff_IsBeingCarried_C_CheckAttachmentAndEvaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IsBeingCarried_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BuffTickClient");

	ABuff_IsBeingCarried_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IsBeingCarried_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BuffTickServer");

	ABuff_IsBeingCarried_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_IsBeingCarried_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BPCustomAllowAddBuff");

	ABuff_IsBeingCarried_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_IsBeingCarried_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BPPreventAddingOtherBuff");

	ABuff_IsBeingCarried_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.ReceiveBeginPlay
// ()

void ABuff_IsBeingCarried_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.ReceiveBeginPlay");

	ABuff_IsBeingCarried_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IsBeingCarried_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.ReceiveEndPlay");

	ABuff_IsBeingCarried_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.UserConstructionScript
// ()

void ABuff_IsBeingCarried_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.UserConstructionScript");

	ABuff_IsBeingCarried_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.ExecuteUbergraph_Buff_IsBeingCarried
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IsBeingCarried_C::ExecuteUbergraph_Buff_IsBeingCarried(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.ExecuteUbergraph_Buff_IsBeingCarried");

	ABuff_IsBeingCarried_C_ExecuteUbergraph_Buff_IsBeingCarried_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
