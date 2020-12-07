// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CaveWolf_AIController_BP.CaveWolf_AIController_BP_C.UserConstructionScript
// ()

void ACaveWolf_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_AIController_BP.CaveWolf_AIController_BP_C.UserConstructionScript");

	ACaveWolf_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_AIController_BP.CaveWolf_AIController_BP_C.ExecuteUbergraph_CaveWolf_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_AIController_BP_C::ExecuteUbergraph_CaveWolf_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_AIController_BP.CaveWolf_AIController_BP_C.ExecuteUbergraph_CaveWolf_AIController_BP");

	ACaveWolf_AIController_BP_C_ExecuteUbergraph_CaveWolf_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
