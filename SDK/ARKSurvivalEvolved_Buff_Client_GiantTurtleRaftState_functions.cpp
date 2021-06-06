// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Client_GiantTurtleRaftState_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.BuffTickClient
// (NetReliable, NetResponse, NetMulticast, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Client_GiantTurtleRaftState_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.BuffTickClient");

	ABuff_Client_GiantTurtleRaftState_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.UserConstructionScript
// ()

void ABuff_Client_GiantTurtleRaftState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.UserConstructionScript");

	ABuff_Client_GiantTurtleRaftState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.ExecuteUbergraph_Buff_Client_GiantTurtleRaftState
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Client_GiantTurtleRaftState_C::ExecuteUbergraph_Buff_Client_GiantTurtleRaftState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.ExecuteUbergraph_Buff_Client_GiantTurtleRaftState");

	ABuff_Client_GiantTurtleRaftState_C_ExecuteUbergraph_Buff_Client_GiantTurtleRaftState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
