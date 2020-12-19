// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MiningDrill_ReduceWeights_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MiningDrill_ReduceWeights.Buff_MiningDrill_ReduceWeights_C.UserConstructionScript
// ()

void ABuff_MiningDrill_ReduceWeights_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiningDrill_ReduceWeights.Buff_MiningDrill_ReduceWeights_C.UserConstructionScript");

	ABuff_MiningDrill_ReduceWeights_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MiningDrill_ReduceWeights.Buff_MiningDrill_ReduceWeights_C.ExecuteUbergraph_Buff_MiningDrill_ReduceWeights
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MiningDrill_ReduceWeights_C::ExecuteUbergraph_Buff_MiningDrill_ReduceWeights(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiningDrill_ReduceWeights.Buff_MiningDrill_ReduceWeights_C.ExecuteUbergraph_Buff_MiningDrill_ReduceWeights");

	ABuff_MiningDrill_ReduceWeights_C_ExecuteUbergraph_Buff_MiningDrill_ReduceWeights_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
