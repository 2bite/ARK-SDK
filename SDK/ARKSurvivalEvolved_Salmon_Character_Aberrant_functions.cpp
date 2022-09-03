// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Salmon_Character_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Salmon_Character_Aberrant.Salmon_Character_Aberrant_C.UserConstructionScript
// ()

void ASalmon_Character_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Salmon_Character_Aberrant.Salmon_Character_Aberrant_C.UserConstructionScript");

	ASalmon_Character_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Salmon_Character_Aberrant.Salmon_Character_Aberrant_C.ExecuteUbergraph_Salmon_Character_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASalmon_Character_Aberrant_C::ExecuteUbergraph_Salmon_Character_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Salmon_Character_Aberrant.Salmon_Character_Aberrant_C.ExecuteUbergraph_Salmon_Character_Aberrant");

	ASalmon_Character_Aberrant_C_ExecuteUbergraph_Salmon_Character_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
