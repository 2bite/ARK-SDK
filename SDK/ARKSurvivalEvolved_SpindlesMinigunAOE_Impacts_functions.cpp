// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpindlesMinigunAOE_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpindlesMinigunAOE_Impacts.SpindlesMinigunAOE_Impacts_C.UserConstructionScript
// ()

void ASpindlesMinigunAOE_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpindlesMinigunAOE_Impacts.SpindlesMinigunAOE_Impacts_C.UserConstructionScript");

	ASpindlesMinigunAOE_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpindlesMinigunAOE_Impacts.SpindlesMinigunAOE_Impacts_C.ExecuteUbergraph_SpindlesMinigunAOE_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpindlesMinigunAOE_Impacts_C::ExecuteUbergraph_SpindlesMinigunAOE_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpindlesMinigunAOE_Impacts.SpindlesMinigunAOE_Impacts_C.ExecuteUbergraph_SpindlesMinigunAOE_Impacts");

	ASpindlesMinigunAOE_Impacts_C_ExecuteUbergraph_SpindlesMinigunAOE_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
