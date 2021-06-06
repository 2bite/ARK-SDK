// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SleepingBagPlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SleepingBagPlacementEmitter.SleepingBagPlacementEmitter_C.UserConstructionScript
// ()

void ASleepingBagPlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SleepingBagPlacementEmitter.SleepingBagPlacementEmitter_C.UserConstructionScript");

	ASleepingBagPlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SleepingBagPlacementEmitter.SleepingBagPlacementEmitter_C.ExecuteUbergraph_SleepingBagPlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASleepingBagPlacementEmitter_C::ExecuteUbergraph_SleepingBagPlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SleepingBagPlacementEmitter.SleepingBagPlacementEmitter_C.ExecuteUbergraph_SleepingBagPlacementEmitter");

	ASleepingBagPlacementEmitter_C_ExecuteUbergraph_SleepingBagPlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
