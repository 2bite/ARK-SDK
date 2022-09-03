// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Andrewsarchus_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.OnPossess
// ()
// Parameters:
// class APawn**                  PossessedPawn                  (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_AIController_BP_C::OnPossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.OnPossess");

	AAndrewsarchus_AIController_BP_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.ResetUseOverlapCheck
// ()

void AAndrewsarchus_AIController_BP_C::ResetUseOverlapCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.ResetUseOverlapCheck");

	AAndrewsarchus_AIController_BP_C_ResetUseOverlapCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.UserConstructionScript
// ()

void AAndrewsarchus_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.UserConstructionScript");

	AAndrewsarchus_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.ExecuteUbergraph_Andrewsarchus_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_AIController_BP_C::ExecuteUbergraph_Andrewsarchus_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C.ExecuteUbergraph_Andrewsarchus_AIController_BP");

	AAndrewsarchus_AIController_BP_C_ExecuteUbergraph_Andrewsarchus_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
