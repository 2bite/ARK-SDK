// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sarco_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sarco_Character_BP_Aberrant.Sarco_Character_BP_Aberrant_C.UserConstructionScript
// ()

void ASarco_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP_Aberrant.Sarco_Character_BP_Aberrant_C.UserConstructionScript");

	ASarco_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP_Aberrant.Sarco_Character_BP_Aberrant_C.ExecuteUbergraph_Sarco_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASarco_Character_BP_Aberrant_C::ExecuteUbergraph_Sarco_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP_Aberrant.Sarco_Character_BP_Aberrant_C.ExecuteUbergraph_Sarco_Character_BP_Aberrant");

	ASarco_Character_BP_Aberrant_C_ExecuteUbergraph_Sarco_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
