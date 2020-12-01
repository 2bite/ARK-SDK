// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_AdobeFloor_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SM_AdobeFloor_BP.SM_AdobeFloor_BP_C.BPOnVariantSwitch
// ()
// Parameters:
// int*                           NewVariantIndex                (Parm, ZeroConstructor, IsPlainOldData)

void ASM_AdobeFloor_BP_C::BPOnVariantSwitch(int* NewVariantIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_AdobeFloor_BP.SM_AdobeFloor_BP_C.BPOnVariantSwitch");

	ASM_AdobeFloor_BP_C_BPOnVariantSwitch_Params params;
	params.NewVariantIndex = NewVariantIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_AdobeFloor_BP.SM_AdobeFloor_BP_C.UserConstructionScript
// ()

void ASM_AdobeFloor_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_AdobeFloor_BP.SM_AdobeFloor_BP_C.UserConstructionScript");

	ASM_AdobeFloor_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_AdobeFloor_BP.SM_AdobeFloor_BP_C.ExecuteUbergraph_SM_AdobeFloor_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASM_AdobeFloor_BP_C::ExecuteUbergraph_SM_AdobeFloor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_AdobeFloor_BP.SM_AdobeFloor_BP_C.ExecuteUbergraph_SM_AdobeFloor_BP");

	ASM_AdobeFloor_BP_C_ExecuteUbergraph_SM_AdobeFloor_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
