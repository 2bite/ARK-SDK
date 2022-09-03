// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Kairuku_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Kairuku_AIController_BP.Kairuku_AIController_BP_C.UserConstructionScript
// ()

void AKairuku_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kairuku_AIController_BP.Kairuku_AIController_BP_C.UserConstructionScript");

	AKairuku_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kairuku_AIController_BP.Kairuku_AIController_BP_C.ExecuteUbergraph_Kairuku_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AKairuku_AIController_BP_C::ExecuteUbergraph_Kairuku_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kairuku_AIController_BP.Kairuku_AIController_BP_C.ExecuteUbergraph_Kairuku_AIController_BP");

	AKairuku_AIController_BP_C_ExecuteUbergraph_Kairuku_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
