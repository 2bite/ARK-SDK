// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Male_Tamed_Gen2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP_Male_Tamed_Gen2.Xenomorph_Character_BP_Male_Tamed_Gen2_C.UserConstructionScript
// ()

void AXenomorph_Character_BP_Male_Tamed_Gen2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed_Gen2.Xenomorph_Character_BP_Male_Tamed_Gen2_C.UserConstructionScript");

	AXenomorph_Character_BP_Male_Tamed_Gen2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed_Gen2.Xenomorph_Character_BP_Male_Tamed_Gen2_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed_Gen2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Tamed_Gen2_C::ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed_Gen2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed_Gen2.Xenomorph_Character_BP_Male_Tamed_Gen2_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed_Gen2");

	AXenomorph_Character_BP_Male_Tamed_Gen2_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed_Gen2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
