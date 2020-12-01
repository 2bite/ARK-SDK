// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RootedAOE_ForestKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RootedAOE_ForestKaiju_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.BPActivated");

	ABuff_RootedAOE_ForestKaiju_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.RootEnemiesInside
// ()
// Parameters:
// class AActor*                  ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RootedAOE_ForestKaiju_C::RootEnemiesInside(class AActor* ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.RootEnemiesInside");

	ABuff_RootedAOE_ForestKaiju_C_RootEnemiesInside_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RootedAOE_ForestKaiju_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.BPDeactivated");

	ABuff_RootedAOE_ForestKaiju_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.UserConstructionScript
// ()

void ABuff_RootedAOE_ForestKaiju_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.UserConstructionScript");

	ABuff_RootedAOE_ForestKaiju_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RootedAOE_ForestKaiju_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ReceiveTick");

	ABuff_RootedAOE_ForestKaiju_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ReceiveBeginPlay
// ()

void ABuff_RootedAOE_ForestKaiju_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ReceiveBeginPlay");

	ABuff_RootedAOE_ForestKaiju_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ExecuteUbergraph_Buff_RootedAOE_ForestKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RootedAOE_ForestKaiju_C::ExecuteUbergraph_Buff_RootedAOE_ForestKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ExecuteUbergraph_Buff_RootedAOE_ForestKaiju");

	ABuff_RootedAOE_ForestKaiju_C_ExecuteUbergraph_Buff_RootedAOE_ForestKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
