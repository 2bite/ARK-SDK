// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_BeginLand_Fjordhawk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_BeginLand_Fjordhawk_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ReceiveExecute");

	UBTT_BeginLand_Fjordhawk_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_BeginLand_Fjordhawk_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ReceiveTick");

	UBTT_BeginLand_Fjordhawk_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.StartLanding
// ()
// Parameters:
// class AFjordhawk_Character_BP_C* Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// class AFjordhawk_AIController_BP_C* Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_BeginLand_Fjordhawk_C::StartLanding(class AFjordhawk_Character_BP_C* Dino, class AFjordhawk_AIController_BP_C* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.StartLanding");

	UBTT_BeginLand_Fjordhawk_C_StartLanding_Params params;
	params.Dino = Dino;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ExecuteUbergraph_BTT_BeginLand_Fjordhawk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_BeginLand_Fjordhawk_C::ExecuteUbergraph_BTT_BeginLand_Fjordhawk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ExecuteUbergraph_BTT_BeginLand_Fjordhawk");

	UBTT_BeginLand_Fjordhawk_C_ExecuteUbergraph_BTT_BeginLand_Fjordhawk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
