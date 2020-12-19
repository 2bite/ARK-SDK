// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Achatina_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Achatina_Character_BP_Aberrant.Achatina_Character_BP_Aberrant_C.UserConstructionScript
// ()

void AAchatina_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Achatina_Character_BP_Aberrant.Achatina_Character_BP_Aberrant_C.UserConstructionScript");

	AAchatina_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Achatina_Character_BP_Aberrant.Achatina_Character_BP_Aberrant_C.ExecuteUbergraph_Achatina_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAchatina_Character_BP_Aberrant_C::ExecuteUbergraph_Achatina_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Achatina_Character_BP_Aberrant.Achatina_Character_BP_Aberrant_C.ExecuteUbergraph_Achatina_Character_BP_Aberrant");

	AAchatina_Character_BP_Aberrant_C_ExecuteUbergraph_Achatina_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
