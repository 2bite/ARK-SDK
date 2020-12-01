// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rex_AIController_BP_Mega_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rex_AIController_BP_Mega.Rex_AIController_BP_Mega_C.UserConstructionScript
// ()

void ARex_AIController_BP_Mega_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_AIController_BP_Mega.Rex_AIController_BP_Mega_C.UserConstructionScript");

	ARex_AIController_BP_Mega_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_AIController_BP_Mega.Rex_AIController_BP_Mega_C.ExecuteUbergraph_Rex_AIController_BP_Mega
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARex_AIController_BP_Mega_C::ExecuteUbergraph_Rex_AIController_BP_Mega(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_AIController_BP_Mega.Rex_AIController_BP_Mega_C.ExecuteUbergraph_Rex_AIController_BP_Mega");

	ARex_AIController_BP_Mega_C_ExecuteUbergraph_Rex_AIController_BP_Mega_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
