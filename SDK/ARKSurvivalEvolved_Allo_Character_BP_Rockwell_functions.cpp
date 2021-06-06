// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Allo_Character_BP_Rockwell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Allo_Character_BP_Rockwell.Allo_Character_BP_Rockwell_C.UserConstructionScript
// ()

void AAllo_Character_BP_Rockwell_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Allo_Character_BP_Rockwell.Allo_Character_BP_Rockwell_C.UserConstructionScript");

	AAllo_Character_BP_Rockwell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Allo_Character_BP_Rockwell.Allo_Character_BP_Rockwell_C.ExecuteUbergraph_Allo_Character_BP_Rockwell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAllo_Character_BP_Rockwell_C::ExecuteUbergraph_Allo_Character_BP_Rockwell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Allo_Character_BP_Rockwell.Allo_Character_BP_Rockwell_C.ExecuteUbergraph_Allo_Character_BP_Rockwell");

	AAllo_Character_BP_Rockwell_C_ExecuteUbergraph_Allo_Character_BP_Rockwell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
