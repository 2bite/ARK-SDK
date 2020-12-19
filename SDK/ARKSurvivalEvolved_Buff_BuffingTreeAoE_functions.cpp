// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BuffingTreeAoE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.GetGrowthScale
// ()
// Parameters:
// struct FVector                 Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_BuffingTreeAoE_C::GetGrowthScale(struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.GetGrowthScale");

	ABuff_BuffingTreeAoE_C_GetGrowthScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.UserConstructionScript
// ()

void ABuff_BuffingTreeAoE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.UserConstructionScript");

	ABuff_BuffingTreeAoE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.ReceiveBeginPlay
// ()

void ABuff_BuffingTreeAoE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.ReceiveBeginPlay");

	ABuff_BuffingTreeAoE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BuffingTreeAoE_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.ReceiveTick");

	ABuff_BuffingTreeAoE_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.Multi-SetScale
// ()
// Parameters:
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BuffingTreeAoE_C::Multi_SetScale(const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.Multi-SetScale");

	ABuff_BuffingTreeAoE_C_Multi_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.ExecuteUbergraph_Buff_BuffingTreeAoE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BuffingTreeAoE_C::ExecuteUbergraph_Buff_BuffingTreeAoE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.ExecuteUbergraph_Buff_BuffingTreeAoE");

	ABuff_BuffingTreeAoE_C_ExecuteUbergraph_Buff_BuffingTreeAoE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
