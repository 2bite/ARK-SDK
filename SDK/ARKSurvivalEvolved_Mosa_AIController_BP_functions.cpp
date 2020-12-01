// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mosa_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mosa_AIController_BP.Mosa_AIController_BP_C.UserConstructionScript
// ()

void AMosa_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_AIController_BP.Mosa_AIController_BP_C.UserConstructionScript");

	AMosa_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mosa_AIController_BP.Mosa_AIController_BP_C.ExecuteUbergraph_Mosa_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMosa_AIController_BP_C::ExecuteUbergraph_Mosa_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_AIController_BP.Mosa_AIController_BP_C.ExecuteUbergraph_Mosa_AIController_BP");

	AMosa_AIController_BP_C_ExecuteUbergraph_Mosa_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
