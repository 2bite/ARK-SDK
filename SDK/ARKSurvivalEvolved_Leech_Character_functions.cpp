// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Leech_Character_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Leech_Character.Leech_Character_C.UserConstructionScript
// ()

void ALeech_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Leech_Character.Leech_Character_C.UserConstructionScript");

	ALeech_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leech_Character.Leech_Character_C.ExecuteUbergraph_Leech_Character
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALeech_Character_C::ExecuteUbergraph_Leech_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leech_Character.Leech_Character_C.ExecuteUbergraph_Leech_Character");

	ALeech_Character_C_ExecuteUbergraph_Leech_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
