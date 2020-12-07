// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_AdobeRailing_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SM_AdobeRailing_BP.SM_AdobeRailing_BP_C.UserConstructionScript
// ()

void ASM_AdobeRailing_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_AdobeRailing_BP.SM_AdobeRailing_BP_C.UserConstructionScript");

	ASM_AdobeRailing_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_AdobeRailing_BP.SM_AdobeRailing_BP_C.ExecuteUbergraph_SM_AdobeRailing_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASM_AdobeRailing_BP_C::ExecuteUbergraph_SM_AdobeRailing_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_AdobeRailing_BP.SM_AdobeRailing_BP_C.ExecuteUbergraph_SM_AdobeRailing_BP");

	ASM_AdobeRailing_BP_C_ExecuteUbergraph_SM_AdobeRailing_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
