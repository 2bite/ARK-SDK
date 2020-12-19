// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_HoneyLure_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.IsDinoInConsumeRange
// ()
// Parameters:
// class AActor*                  Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoAIController* DinoAI                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADroppedItemGeneric_HoneyLure_C::IsDinoInConsumeRange(class AActor* Dino, class APrimalDinoAIController* DinoAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.IsDinoInConsumeRange");

	ADroppedItemGeneric_HoneyLure_C_IsDinoInConsumeRange_Params params;
	params.Dino = Dino;
	params.DinoAI = DinoAI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.SetMovePointNearLure
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoToMove                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoAIController* DinoAI                         (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_HoneyLure_C::SetMovePointNearLure(class APrimalDinoCharacter* DinoToMove, class APrimalDinoAIController* DinoAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.SetMovePointNearLure");

	ADroppedItemGeneric_HoneyLure_C_SetMovePointNearLure_Params params;
	params.DinoToMove = DinoToMove;
	params.DinoAI = DinoAI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Can Dino Consume Bait
// ()
// Parameters:
// class APrimalDinoCharacter*    InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutputPin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_HoneyLure_C::Can_Dino_Consume_Bait(class APrimalDinoCharacter* InputPin, bool* OutputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Can Dino Consume Bait");

	ADroppedItemGeneric_HoneyLure_C_Can_Dino_Consume_Bait_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.BPPostInitializeComponents
// ()

void ADroppedItemGeneric_HoneyLure_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.BPPostInitializeComponents");

	ADroppedItemGeneric_HoneyLure_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.UserConstructionScript
// ()

void ADroppedItemGeneric_HoneyLure_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.UserConstructionScript");

	ADroppedItemGeneric_HoneyLure_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Dissolve__FinishedFunc
// ()

void ADroppedItemGeneric_HoneyLure_C::Dissolve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Dissolve__FinishedFunc");

	ADroppedItemGeneric_HoneyLure_C_Dissolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Dissolve__UpdateFunc
// ()

void ADroppedItemGeneric_HoneyLure_C::Dissolve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Dissolve__UpdateFunc");

	ADroppedItemGeneric_HoneyLure_C_Dissolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.ReceiveBeginPlay
// ()

void ADroppedItemGeneric_HoneyLure_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.ReceiveBeginPlay");

	ADroppedItemGeneric_HoneyLure_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.UpdateBait
// ()

void ADroppedItemGeneric_HoneyLure_C::UpdateBait()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.UpdateBait");

	ADroppedItemGeneric_HoneyLure_C_UpdateBait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.DestroyBait
// ()

void ADroppedItemGeneric_HoneyLure_C::DestroyBait()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.DestroyBait");

	ADroppedItemGeneric_HoneyLure_C_DestroyBait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.AttractCreatures
// ()

void ADroppedItemGeneric_HoneyLure_C::AttractCreatures()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.AttractCreatures");

	ADroppedItemGeneric_HoneyLure_C_AttractCreatures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.ExecuteUbergraph_DroppedItemGeneric_HoneyLure
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItemGeneric_HoneyLure_C::ExecuteUbergraph_DroppedItemGeneric_HoneyLure(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.ExecuteUbergraph_DroppedItemGeneric_HoneyLure");

	ADroppedItemGeneric_HoneyLure_C_ExecuteUbergraph_DroppedItemGeneric_HoneyLure_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
