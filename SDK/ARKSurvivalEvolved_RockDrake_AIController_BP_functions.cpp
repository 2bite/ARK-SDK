// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockDrake_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RockDrake_AIController_BP.RockDrake_AIController_BP_C.BPNotifyTargetSet
// ()

void ARockDrake_AIController_BP_C::BPNotifyTargetSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_AIController_BP.RockDrake_AIController_BP_C.BPNotifyTargetSet");

	ARockDrake_AIController_BP_C_BPNotifyTargetSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_AIController_BP.RockDrake_AIController_BP_C.UserConstructionScript
// ()

void ARockDrake_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_AIController_BP.RockDrake_AIController_BP_C.UserConstructionScript");

	ARockDrake_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockDrake_AIController_BP.RockDrake_AIController_BP_C.ExecuteUbergraph_RockDrake_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARockDrake_AIController_BP_C::ExecuteUbergraph_RockDrake_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockDrake_AIController_BP.RockDrake_AIController_BP_C.ExecuteUbergraph_RockDrake_AIController_BP");

	ARockDrake_AIController_BP_C_ExecuteUbergraph_RockDrake_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
