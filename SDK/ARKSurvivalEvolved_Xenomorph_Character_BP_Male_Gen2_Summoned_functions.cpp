// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Male_Gen2_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP_Male_Gen2_Summoned.Xenomorph_Character_BP_Male_Gen2_Summoned_C.UserConstructionScript
// ()

void AXenomorph_Character_BP_Male_Gen2_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Gen2_Summoned.Xenomorph_Character_BP_Male_Gen2_Summoned_C.UserConstructionScript");

	AXenomorph_Character_BP_Male_Gen2_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Gen2_Summoned.Xenomorph_Character_BP_Male_Gen2_Summoned_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Gen2_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Gen2_Summoned_C::ExecuteUbergraph_Xenomorph_Character_BP_Male_Gen2_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Gen2_Summoned.Xenomorph_Character_BP_Male_Gen2_Summoned_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Gen2_Summoned");

	AXenomorph_Character_BP_Male_Gen2_Summoned_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_Gen2_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
