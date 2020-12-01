// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Manta_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Manta_AIController_BP.Manta_AIController_BP_C.UserConstructionScript
// ()

void AManta_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Manta_AIController_BP.Manta_AIController_BP_C.UserConstructionScript");

	AManta_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Manta_AIController_BP.Manta_AIController_BP_C.ExecuteUbergraph_Manta_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AManta_AIController_BP_C::ExecuteUbergraph_Manta_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Manta_AIController_BP.Manta_AIController_BP_C.ExecuteUbergraph_Manta_AIController_BP");

	AManta_AIController_BP_C_ExecuteUbergraph_Manta_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
