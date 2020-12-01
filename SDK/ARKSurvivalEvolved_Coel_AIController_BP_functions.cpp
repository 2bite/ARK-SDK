// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Coel_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Coel_AIController_BP.Coel_AIController_BP_C.UserConstructionScript
// ()

void ACoel_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Coel_AIController_BP.Coel_AIController_BP_C.UserConstructionScript");

	ACoel_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Coel_AIController_BP.Coel_AIController_BP_C.ExecuteUbergraph_Coel_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACoel_AIController_BP_C::ExecuteUbergraph_Coel_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Coel_AIController_BP.Coel_AIController_BP_C.ExecuteUbergraph_Coel_AIController_BP");

	ACoel_AIController_BP_C_ExecuteUbergraph_Coel_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
