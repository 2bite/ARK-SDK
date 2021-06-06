// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalosaurus_Character_BP_TekCave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megalosaurus_Character_BP_TekCave.Megalosaurus_Character_BP_TekCave_C.UserConstructionScript
// ()

void AMegalosaurus_Character_BP_TekCave_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP_TekCave.Megalosaurus_Character_BP_TekCave_C.UserConstructionScript");

	AMegalosaurus_Character_BP_TekCave_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP_TekCave.Megalosaurus_Character_BP_TekCave_C.ExecuteUbergraph_Megalosaurus_Character_BP_TekCave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_TekCave_C::ExecuteUbergraph_Megalosaurus_Character_BP_TekCave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP_TekCave.Megalosaurus_Character_BP_TekCave_C.ExecuteUbergraph_Megalosaurus_Character_BP_TekCave");

	AMegalosaurus_Character_BP_TekCave_C_ExecuteUbergraph_Megalosaurus_Character_BP_TekCave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
