// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Trilobite_Character_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trilobite_Character_Aberrant.Trilobite_Character_Aberrant_C.UserConstructionScript
// ()

void ATrilobite_Character_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trilobite_Character_Aberrant.Trilobite_Character_Aberrant_C.UserConstructionScript");

	ATrilobite_Character_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trilobite_Character_Aberrant.Trilobite_Character_Aberrant_C.ExecuteUbergraph_Trilobite_Character_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATrilobite_Character_Aberrant_C::ExecuteUbergraph_Trilobite_Character_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trilobite_Character_Aberrant.Trilobite_Character_Aberrant_C.ExecuteUbergraph_Trilobite_Character_Aberrant");

	ATrilobite_Character_Aberrant_C_ExecuteUbergraph_Trilobite_Character_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
