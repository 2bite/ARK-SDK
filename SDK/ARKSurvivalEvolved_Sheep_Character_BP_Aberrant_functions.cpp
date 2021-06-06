// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sheep_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sheep_Character_BP_Aberrant.Sheep_Character_BP_Aberrant_C.UserConstructionScript
// ()

void ASheep_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP_Aberrant.Sheep_Character_BP_Aberrant_C.UserConstructionScript");

	ASheep_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sheep_Character_BP_Aberrant.Sheep_Character_BP_Aberrant_C.ExecuteUbergraph_Sheep_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASheep_Character_BP_Aberrant_C::ExecuteUbergraph_Sheep_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sheep_Character_BP_Aberrant.Sheep_Character_BP_Aberrant_C.ExecuteUbergraph_Sheep_Character_BP_Aberrant");

	ASheep_Character_BP_Aberrant_C_ExecuteUbergraph_Sheep_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
