// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoPackLeader_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoPackLeader_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.BuffTickServer");

	ABuff_DinoPackLeader_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.UserConstructionScript
// ()

void ABuff_DinoPackLeader_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.UserConstructionScript");

	ABuff_DinoPackLeader_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoPackLeader_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ReceiveTick");

	ABuff_DinoPackLeader_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ReceiveBeginPlay
// ()

void ABuff_DinoPackLeader_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ReceiveBeginPlay");

	ABuff_DinoPackLeader_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ExecuteUbergraph_Buff_DinoPackLeader
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoPackLeader_C::ExecuteUbergraph_Buff_DinoPackLeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ExecuteUbergraph_Buff_DinoPackLeader");

	ABuff_DinoPackLeader_C_ExecuteUbergraph_Buff_DinoPackLeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
