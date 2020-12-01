// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MegaMekSetupForPlayer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MegaMekSetupForPlayer_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.BuffTickServer");

	ABuff_MegaMekSetupForPlayer_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MegaMekSetupForPlayer_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.BPActivated");

	ABuff_MegaMekSetupForPlayer_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.UserConstructionScript
// ()

void ABuff_MegaMekSetupForPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.UserConstructionScript");

	ABuff_MegaMekSetupForPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.MultiPlayTransformVFX
// ()

void ABuff_MegaMekSetupForPlayer_C::MultiPlayTransformVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.MultiPlayTransformVFX");

	ABuff_MegaMekSetupForPlayer_C_MultiPlayTransformVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.ReceiveBeginPlay
// ()

void ABuff_MegaMekSetupForPlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.ReceiveBeginPlay");

	ABuff_MegaMekSetupForPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.ExecuteUbergraph_Buff_MegaMekSetupForPlayer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MegaMekSetupForPlayer_C::ExecuteUbergraph_Buff_MegaMekSetupForPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.ExecuteUbergraph_Buff_MegaMekSetupForPlayer");

	ABuff_MegaMekSetupForPlayer_C_ExecuteUbergraph_Buff_MegaMekSetupForPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
