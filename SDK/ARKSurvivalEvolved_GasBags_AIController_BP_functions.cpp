// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasBags_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GasBags_AIController_BP.GasBags_AIController_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_AIController_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_AIController_BP.GasBags_AIController_BP_C.ReceiveTick");

	AGasBags_AIController_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_AIController_BP.GasBags_AIController_BP_C.TickCheckDangerLevels
// (NetReliable, NetRequest, Exec, NetMulticast, Public, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)

void AGasBags_AIController_BP_C::TickCheckDangerLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_AIController_BP.GasBags_AIController_BP_C.TickCheckDangerLevels");

	AGasBags_AIController_BP_C_TickCheckDangerLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_AIController_BP.GasBags_AIController_BP_C.GetDangerLevel
// ()
// Parameters:
// float                          Danger                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGasBags_AIController_BP_C::GetDangerLevel(float* Danger)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_AIController_BP.GasBags_AIController_BP_C.GetDangerLevel");

	AGasBags_AIController_BP_C_GetDangerLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Danger != nullptr)
		*Danger = params.Danger;
}


// Function GasBags_AIController_BP.GasBags_AIController_BP_C.UserConstructionScript
// ()

void AGasBags_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_AIController_BP.GasBags_AIController_BP_C.UserConstructionScript");

	AGasBags_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_AIController_BP.GasBags_AIController_BP_C.ExecuteUbergraph_GasBags_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_AIController_BP_C::ExecuteUbergraph_GasBags_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_AIController_BP.GasBags_AIController_BP_C.ExecuteUbergraph_GasBags_AIController_BP");

	AGasBags_AIController_BP_C_ExecuteUbergraph_GasBags_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
