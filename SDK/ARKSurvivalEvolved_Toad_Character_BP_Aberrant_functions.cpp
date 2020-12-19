// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Toad_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Toad_Character_BP_Aberrant.Toad_Character_BP_Aberrant_C.UserConstructionScript
// ()

void AToad_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Toad_Character_BP_Aberrant.Toad_Character_BP_Aberrant_C.UserConstructionScript");

	AToad_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Toad_Character_BP_Aberrant.Toad_Character_BP_Aberrant_C.ExecuteUbergraph_Toad_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AToad_Character_BP_Aberrant_C::ExecuteUbergraph_Toad_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Toad_Character_BP_Aberrant.Toad_Character_BP_Aberrant_C.ExecuteUbergraph_Toad_Character_BP_Aberrant");

	AToad_Character_BP_Aberrant_C_ExecuteUbergraph_Toad_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
