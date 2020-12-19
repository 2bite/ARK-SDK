// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseRoof_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseRoof_SM.BaseRoof_SM_C.UserConstructionScript
// ()

void ABaseRoof_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRoof_SM.BaseRoof_SM_C.UserConstructionScript");

	ABaseRoof_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseRoof_SM.BaseRoof_SM_C.ExecuteUbergraph_BaseRoof_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABaseRoof_SM_C::ExecuteUbergraph_BaseRoof_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRoof_SM.BaseRoof_SM_C.ExecuteUbergraph_BaseRoof_SM");

	ABaseRoof_SM_C_ExecuteUbergraph_BaseRoof_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
