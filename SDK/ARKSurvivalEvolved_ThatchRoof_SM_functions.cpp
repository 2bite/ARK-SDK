// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ThatchRoof_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ThatchRoof_SM.ThatchRoof_SM_C.UserConstructionScript
// ()

void AThatchRoof_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchRoof_SM.ThatchRoof_SM_C.UserConstructionScript");

	AThatchRoof_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThatchRoof_SM.ThatchRoof_SM_C.ExecuteUbergraph_ThatchRoof_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThatchRoof_SM_C::ExecuteUbergraph_ThatchRoof_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchRoof_SM.ThatchRoof_SM_C.ExecuteUbergraph_ThatchRoof_SM");

	AThatchRoof_SM_C_ExecuteUbergraph_ThatchRoof_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
