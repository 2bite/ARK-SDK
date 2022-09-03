// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sauropod_AI_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sauropod_AI_Blueprint.Sauropod_AI_Blueprint_C.UserConstructionScript
// ()

void ASauropod_AI_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sauropod_AI_Blueprint.Sauropod_AI_Blueprint_C.UserConstructionScript");

	ASauropod_AI_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sauropod_AI_Blueprint.Sauropod_AI_Blueprint_C.ExecuteUbergraph_Sauropod_AI_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASauropod_AI_Blueprint_C::ExecuteUbergraph_Sauropod_AI_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sauropod_AI_Blueprint.Sauropod_AI_Blueprint_C.ExecuteUbergraph_Sauropod_AI_Blueprint");

	ASauropod_AI_Blueprint_C_ExecuteUbergraph_Sauropod_AI_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
