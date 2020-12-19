// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Iguanodon_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Iguanodon_Character_BP_Aberrant.Iguanodon_Character_BP_Aberrant_C.UserConstructionScript
// ()

void AIguanodon_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP_Aberrant.Iguanodon_Character_BP_Aberrant_C.UserConstructionScript");

	AIguanodon_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP_Aberrant.Iguanodon_Character_BP_Aberrant_C.ExecuteUbergraph_Iguanodon_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIguanodon_Character_BP_Aberrant_C::ExecuteUbergraph_Iguanodon_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP_Aberrant.Iguanodon_Character_BP_Aberrant_C.ExecuteUbergraph_Iguanodon_Character_BP_Aberrant");

	AIguanodon_Character_BP_Aberrant_C_ExecuteUbergraph_Iguanodon_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
