// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Lamprey_Character_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lamprey_Character.Lamprey_Character_C.UserConstructionScript
// ()

void ALamprey_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lamprey_Character.Lamprey_Character_C.UserConstructionScript");

	ALamprey_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lamprey_Character.Lamprey_Character_C.ExecuteUbergraph_Lamprey_Character
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALamprey_Character_C::ExecuteUbergraph_Lamprey_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lamprey_Character.Lamprey_Character_C.ExecuteUbergraph_Lamprey_Character");

	ALamprey_Character_C_ExecuteUbergraph_Lamprey_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
