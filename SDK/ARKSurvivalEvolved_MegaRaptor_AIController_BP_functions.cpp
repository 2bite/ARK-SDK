// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaRaptor_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MegaRaptor_AIController_BP.MegaRaptor_AIController_BP_C.UserConstructionScript
// ()

void AMegaRaptor_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaRaptor_AIController_BP.MegaRaptor_AIController_BP_C.UserConstructionScript");

	AMegaRaptor_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaRaptor_AIController_BP.MegaRaptor_AIController_BP_C.ExecuteUbergraph_MegaRaptor_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegaRaptor_AIController_BP_C::ExecuteUbergraph_MegaRaptor_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaRaptor_AIController_BP.MegaRaptor_AIController_BP_C.ExecuteUbergraph_MegaRaptor_AIController_BP");

	AMegaRaptor_AIController_BP_C_ExecuteUbergraph_MegaRaptor_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
