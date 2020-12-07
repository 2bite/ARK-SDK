// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SCUBA_Flippers_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SCUBA_Flippers.Buff_SCUBA_Flippers_C.UserConstructionScript
// ()

void ABuff_SCUBA_Flippers_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SCUBA_Flippers.Buff_SCUBA_Flippers_C.UserConstructionScript");

	ABuff_SCUBA_Flippers_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SCUBA_Flippers.Buff_SCUBA_Flippers_C.ExecuteUbergraph_Buff_SCUBA_Flippers
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SCUBA_Flippers_C::ExecuteUbergraph_Buff_SCUBA_Flippers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SCUBA_Flippers.Buff_SCUBA_Flippers_C.ExecuteUbergraph_Buff_SCUBA_Flippers");

	ABuff_SCUBA_Flippers_C_ExecuteUbergraph_Buff_SCUBA_Flippers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
