// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CorruptTumor_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CorruptTumor_AIController_BP.CorruptTumor_AIController_BP_C.UserConstructionScript
// ()

void ACorruptTumor_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_AIController_BP.CorruptTumor_AIController_BP_C.UserConstructionScript");

	ACorruptTumor_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptTumor_AIController_BP.CorruptTumor_AIController_BP_C.ExecuteUbergraph_CorruptTumor_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACorruptTumor_AIController_BP_C::ExecuteUbergraph_CorruptTumor_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_AIController_BP.CorruptTumor_AIController_BP_C.ExecuteUbergraph_CorruptTumor_AIController_BP");

	ACorruptTumor_AIController_BP_C_ExecuteUbergraph_CorruptTumor_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif