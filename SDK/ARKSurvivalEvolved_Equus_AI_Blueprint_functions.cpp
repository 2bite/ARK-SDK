// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Equus_AI_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equus_AI_Blueprint.Equus_AI_Blueprint_C.UserConstructionScript
// ()

void AEquus_AI_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_AI_Blueprint.Equus_AI_Blueprint_C.UserConstructionScript");

	AEquus_AI_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_AI_Blueprint.Equus_AI_Blueprint_C.ExecuteUbergraph_Equus_AI_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEquus_AI_Blueprint_C::ExecuteUbergraph_Equus_AI_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_AI_Blueprint.Equus_AI_Blueprint_C.ExecuteUbergraph_Equus_AI_Blueprint");

	AEquus_AI_Blueprint_C_ExecuteUbergraph_Equus_AI_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
