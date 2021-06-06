// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Manta_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Manta_Character_BP_Aberrant.Manta_Character_BP_Aberrant_C.UserConstructionScript
// ()

void AManta_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Manta_Character_BP_Aberrant.Manta_Character_BP_Aberrant_C.UserConstructionScript");

	AManta_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Manta_Character_BP_Aberrant.Manta_Character_BP_Aberrant_C.ExecuteUbergraph_Manta_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AManta_Character_BP_Aberrant_C::ExecuteUbergraph_Manta_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Manta_Character_BP_Aberrant.Manta_Character_BP_Aberrant_C.ExecuteUbergraph_Manta_Character_BP_Aberrant");

	AManta_Character_BP_Aberrant_C_ExecuteUbergraph_Manta_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
