// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spino_AI_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spino_AI_Blueprint.Spino_AI_Blueprint_C.UserConstructionScript
// ()

void ASpino_AI_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint.Spino_AI_Blueprint_C.UserConstructionScript");

	ASpino_AI_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_AI_Blueprint.Spino_AI_Blueprint_C.ExecuteUbergraph_Spino_AI_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_AI_Blueprint_C::ExecuteUbergraph_Spino_AI_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint.Spino_AI_Blueprint_C.ExecuteUbergraph_Spino_AI_Blueprint");

	ASpino_AI_Blueprint_C_ExecuteUbergraph_Spino_AI_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
