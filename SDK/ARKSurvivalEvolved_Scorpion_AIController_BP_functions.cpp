// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Scorpion_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Scorpion_AIController_BP.Scorpion_AIController_BP_C.UserConstructionScript
// ()

void AScorpion_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scorpion_AIController_BP.Scorpion_AIController_BP_C.UserConstructionScript");

	AScorpion_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scorpion_AIController_BP.Scorpion_AIController_BP_C.ExecuteUbergraph_Scorpion_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AScorpion_AIController_BP_C::ExecuteUbergraph_Scorpion_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scorpion_AIController_BP.Scorpion_AIController_BP_C.ExecuteUbergraph_Scorpion_AIController_BP");

	AScorpion_AIController_BP_C_ExecuteUbergraph_Scorpion_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
