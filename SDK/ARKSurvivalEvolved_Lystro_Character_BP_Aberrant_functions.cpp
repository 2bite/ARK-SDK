// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Lystro_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lystro_Character_BP_Aberrant.Lystro_Character_BP_Aberrant_C.UserConstructionScript
// ()

void ALystro_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lystro_Character_BP_Aberrant.Lystro_Character_BP_Aberrant_C.UserConstructionScript");

	ALystro_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lystro_Character_BP_Aberrant.Lystro_Character_BP_Aberrant_C.ExecuteUbergraph_Lystro_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALystro_Character_BP_Aberrant_C::ExecuteUbergraph_Lystro_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lystro_Character_BP_Aberrant.Lystro_Character_BP_Aberrant_C.ExecuteUbergraph_Lystro_Character_BP_Aberrant");

	ALystro_Character_BP_Aberrant_C_ExecuteUbergraph_Lystro_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
