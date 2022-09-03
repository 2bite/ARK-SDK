// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Saber_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Saber_Character_BP.Saber_Character_BP_C.BPModifyHarvestingQuantity
// ()
// Parameters:
// float*                         originalQuantity               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 resourceSelected               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASaber_Character_BP_C::BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saber_Character_BP.Saber_Character_BP_C.BPModifyHarvestingQuantity");

	ASaber_Character_BP_C_BPModifyHarvestingQuantity_Params params;
	params.originalQuantity = originalQuantity;
	params.resourceSelected = resourceSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Saber_Character_BP.Saber_Character_BP_C.UserConstructionScript
// ()

void ASaber_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saber_Character_BP.Saber_Character_BP_C.UserConstructionScript");

	ASaber_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saber_Character_BP.Saber_Character_BP_C.ExecuteUbergraph_Saber_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASaber_Character_BP_C::ExecuteUbergraph_Saber_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saber_Character_BP.Saber_Character_BP_C.ExecuteUbergraph_Saber_Character_BP");

	ASaber_Character_BP_C_ExecuteUbergraph_Saber_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
