// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Diplo_AI_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Diplo_AI_Blueprint.Diplo_AI_Blueprint_C.UserConstructionScript
// ()

void ADiplo_AI_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplo_AI_Blueprint.Diplo_AI_Blueprint_C.UserConstructionScript");

	ADiplo_AI_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplo_AI_Blueprint.Diplo_AI_Blueprint_C.ExecuteUbergraph_Diplo_AI_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADiplo_AI_Blueprint_C::ExecuteUbergraph_Diplo_AI_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplo_AI_Blueprint.Diplo_AI_Blueprint_C.ExecuteUbergraph_Diplo_AI_Blueprint");

	ADiplo_AI_Blueprint_C_ExecuteUbergraph_Diplo_AI_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
