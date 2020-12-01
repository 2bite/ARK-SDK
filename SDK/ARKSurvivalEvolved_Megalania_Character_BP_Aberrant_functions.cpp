// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalania_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megalania_Character_BP_Aberrant.Megalania_Character_BP_Aberrant_C.UserConstructionScript
// ()

void AMegalania_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP_Aberrant.Megalania_Character_BP_Aberrant_C.UserConstructionScript");

	AMegalania_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalania_Character_BP_Aberrant.Megalania_Character_BP_Aberrant_C.ExecuteUbergraph_Megalania_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegalania_Character_BP_Aberrant_C::ExecuteUbergraph_Megalania_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP_Aberrant.Megalania_Character_BP_Aberrant_C.ExecuteUbergraph_Megalania_Character_BP_Aberrant");

	AMegalania_Character_BP_Aberrant_C_ExecuteUbergraph_Megalania_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
