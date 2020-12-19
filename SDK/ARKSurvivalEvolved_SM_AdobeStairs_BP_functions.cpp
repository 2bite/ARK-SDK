// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_AdobeStairs_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SM_AdobeStairs_BP.SM_AdobeStairs_BP_C.UserConstructionScript
// ()

void ASM_AdobeStairs_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_AdobeStairs_BP.SM_AdobeStairs_BP_C.UserConstructionScript");

	ASM_AdobeStairs_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_AdobeStairs_BP.SM_AdobeStairs_BP_C.ExecuteUbergraph_SM_AdobeStairs_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASM_AdobeStairs_BP_C::ExecuteUbergraph_SM_AdobeStairs_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_AdobeStairs_BP.SM_AdobeStairs_BP_C.ExecuteUbergraph_SM_AdobeStairs_BP");

	ASM_AdobeStairs_BP_C_ExecuteUbergraph_SM_AdobeStairs_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
