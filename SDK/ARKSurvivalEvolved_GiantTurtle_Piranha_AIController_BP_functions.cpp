// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GiantTurtle_Piranha_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C.ChangedAITarget
// ()

void AGiantTurtle_Piranha_AIController_BP_C::ChangedAITarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C.ChangedAITarget");

	AGiantTurtle_Piranha_AIController_BP_C_ChangedAITarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C.UserConstructionScript
// ()

void AGiantTurtle_Piranha_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C.UserConstructionScript");

	AGiantTurtle_Piranha_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C.ExecuteUbergraph_GiantTurtle_Piranha_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Piranha_AIController_BP_C::ExecuteUbergraph_GiantTurtle_Piranha_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C.ExecuteUbergraph_GiantTurtle_Piranha_AIController_BP");

	AGiantTurtle_Piranha_AIController_BP_C_ExecuteUbergraph_GiantTurtle_Piranha_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
