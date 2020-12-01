// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseSwarm_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.GetRandomWanderPoint
// ()
// Parameters:
// struct FVector                 Point                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABaseSwarm_AIController_BP_C::GetRandomWanderPoint(struct FVector* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.GetRandomWanderPoint");

	ABaseSwarm_AIController_BP_C_GetRandomWanderPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Point != nullptr)
		*Point = params.Point;
}


// Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ChangedAITarget
// ()

void ABaseSwarm_AIController_BP_C::ChangedAITarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ChangedAITarget");

	ABaseSwarm_AIController_BP_C_ChangedAITarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.UserConstructionScript
// ()

void ABaseSwarm_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.UserConstructionScript");

	ABaseSwarm_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ReceiveBeginPlay
// ()

void ABaseSwarm_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ReceiveBeginPlay");

	ABaseSwarm_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABaseSwarm_AIController_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ReceiveTick");

	ABaseSwarm_AIController_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ExecuteUbergraph_BaseSwarm_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABaseSwarm_AIController_BP_C::ExecuteUbergraph_BaseSwarm_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseSwarm_AIController_BP.BaseSwarm_AIController_BP_C.ExecuteUbergraph_BaseSwarm_AIController_BP");

	ABaseSwarm_AIController_BP_C_ExecuteUbergraph_BaseSwarm_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
