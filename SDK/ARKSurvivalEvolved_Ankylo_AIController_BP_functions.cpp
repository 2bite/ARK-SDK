// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ankylo_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ankylo_AIController_BP.Ankylo_AIController_BP_C.UserConstructionScript
// ()

void AAnkylo_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ankylo_AIController_BP.Ankylo_AIController_BP_C.UserConstructionScript");

	AAnkylo_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ankylo_AIController_BP.Ankylo_AIController_BP_C.ExecuteUbergraph_Ankylo_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAnkylo_AIController_BP_C::ExecuteUbergraph_Ankylo_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ankylo_AIController_BP.Ankylo_AIController_BP_C.ExecuteUbergraph_Ankylo_AIController_BP");

	AAnkylo_AIController_BP_C_ExecuteUbergraph_Ankylo_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
