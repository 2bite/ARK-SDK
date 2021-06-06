// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Emitter_MissionPrepArea_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_MissionPrepArea_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.ReceiveEndPlay");

	AEmitter_MissionPrepArea_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.ReceiveBeginPlay
// ()

void AEmitter_MissionPrepArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.ReceiveBeginPlay");

	AEmitter_MissionPrepArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.UserConstructionScript
// ()

void AEmitter_MissionPrepArea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.UserConstructionScript");

	AEmitter_MissionPrepArea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.ExecuteUbergraph_Emitter_MissionPrepArea
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_MissionPrepArea_C::ExecuteUbergraph_Emitter_MissionPrepArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.ExecuteUbergraph_Emitter_MissionPrepArea");

	AEmitter_MissionPrepArea_C_ExecuteUbergraph_Emitter_MissionPrepArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
