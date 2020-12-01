// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proc_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proc_AIController_BP.Proc_AIController_BP_C.UserConstructionScript
// ()

void AProc_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proc_AIController_BP.Proc_AIController_BP_C.UserConstructionScript");

	AProc_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proc_AIController_BP.Proc_AIController_BP_C.ExecuteUbergraph_Proc_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProc_AIController_BP_C::ExecuteUbergraph_Proc_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proc_AIController_BP.Proc_AIController_BP_C.ExecuteUbergraph_Proc_AIController_BP");

	AProc_AIController_BP_C_ExecuteUbergraph_Proc_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
