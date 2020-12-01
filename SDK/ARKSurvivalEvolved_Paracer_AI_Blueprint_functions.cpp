// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Paracer_AI_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Paracer_AI_Blueprint.Paracer_AI_Blueprint_C.UserConstructionScript
// ()

void AParacer_AI_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_AI_Blueprint.Paracer_AI_Blueprint_C.UserConstructionScript");

	AParacer_AI_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paracer_AI_Blueprint.Paracer_AI_Blueprint_C.ExecuteUbergraph_Paracer_AI_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AParacer_AI_Blueprint_C::ExecuteUbergraph_Paracer_AI_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_AI_Blueprint.Paracer_AI_Blueprint_C.ExecuteUbergraph_Paracer_AI_Blueprint");

	AParacer_AI_Blueprint_C_ExecuteUbergraph_Paracer_AI_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
