// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EndBossMorph_Dissolve_In_Minion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_EndBossMorph_Dissolve_In_Minion.Buff_EndBossMorph_Dissolve_In_Minion_C.ReceiveDestroyed
// ()

void ABuff_EndBossMorph_Dissolve_In_Minion_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_Minion.Buff_EndBossMorph_Dissolve_In_Minion_C.ReceiveDestroyed");

	ABuff_EndBossMorph_Dissolve_In_Minion_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_In_Minion.Buff_EndBossMorph_Dissolve_In_Minion_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_In_Minion_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_Minion.Buff_EndBossMorph_Dissolve_In_Minion_C.BPDeactivated");

	ABuff_EndBossMorph_Dissolve_In_Minion_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_In_Minion.Buff_EndBossMorph_Dissolve_In_Minion_C.UserConstructionScript
// ()

void ABuff_EndBossMorph_Dissolve_In_Minion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_Minion.Buff_EndBossMorph_Dissolve_In_Minion_C.UserConstructionScript");

	ABuff_EndBossMorph_Dissolve_In_Minion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_In_Minion.Buff_EndBossMorph_Dissolve_In_Minion_C.ReceiveBeginPlay
// ()

void ABuff_EndBossMorph_Dissolve_In_Minion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_Minion.Buff_EndBossMorph_Dissolve_In_Minion_C.ReceiveBeginPlay");

	ABuff_EndBossMorph_Dissolve_In_Minion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_In_Minion.Buff_EndBossMorph_Dissolve_In_Minion_C.ExecuteUbergraph_Buff_EndBossMorph_Dissolve_In_Minion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_In_Minion_C::ExecuteUbergraph_Buff_EndBossMorph_Dissolve_In_Minion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_Minion.Buff_EndBossMorph_Dissolve_In_Minion_C.ExecuteUbergraph_Buff_EndBossMorph_Dissolve_In_Minion");

	ABuff_EndBossMorph_Dissolve_In_Minion_C_ExecuteUbergraph_Buff_EndBossMorph_Dissolve_In_Minion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
