// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Trilobite_Character_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trilobite_Character.Trilobite_Character_C.UserConstructionScript
// ()

void ATrilobite_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trilobite_Character.Trilobite_Character_C.UserConstructionScript");

	ATrilobite_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trilobite_Character.Trilobite_Character_C.ExecuteUbergraph_Trilobite_Character
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATrilobite_Character_C::ExecuteUbergraph_Trilobite_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trilobite_Character.Trilobite_Character_C.ExecuteUbergraph_Trilobite_Character");

	ATrilobite_Character_C_ExecuteUbergraph_Trilobite_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
