// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Archa_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Archa_AIController_BP.Archa_AIController_BP_C.UserConstructionScript
// ()

void AArcha_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_AIController_BP.Archa_AIController_BP_C.UserConstructionScript");

	AArcha_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archa_AIController_BP.Archa_AIController_BP_C.ExecuteUbergraph_Archa_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArcha_AIController_BP_C::ExecuteUbergraph_Archa_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_AIController_BP.Archa_AIController_BP_C.ExecuteUbergraph_Archa_AIController_BP");

	AArcha_AIController_BP_C_ExecuteUbergraph_Archa_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
