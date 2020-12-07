// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Leech_Character_Diseased_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Leech_Character_Diseased.Leech_Character_Diseased_C.UserConstructionScript
// ()

void ALeech_Character_Diseased_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Leech_Character_Diseased.Leech_Character_Diseased_C.UserConstructionScript");

	ALeech_Character_Diseased_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leech_Character_Diseased.Leech_Character_Diseased_C.ExecuteUbergraph_Leech_Character_Diseased
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALeech_Character_Diseased_C::ExecuteUbergraph_Leech_Character_Diseased(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leech_Character_Diseased.Leech_Character_Diseased_C.ExecuteUbergraph_Leech_Character_Diseased");

	ALeech_Character_Diseased_C_ExecuteUbergraph_Leech_Character_Diseased_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
