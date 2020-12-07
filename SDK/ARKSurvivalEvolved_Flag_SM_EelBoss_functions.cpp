// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Flag_SM_EelBoss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Flag_SM_EelBoss.Flag_SM_EelBoss_C.UserConstructionScript
// ()

void AFlag_SM_EelBoss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flag_SM_EelBoss.Flag_SM_EelBoss_C.UserConstructionScript");

	AFlag_SM_EelBoss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flag_SM_EelBoss.Flag_SM_EelBoss_C.ExecuteUbergraph_Flag_SM_EelBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFlag_SM_EelBoss_C::ExecuteUbergraph_Flag_SM_EelBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flag_SM_EelBoss.Flag_SM_EelBoss_C.ExecuteUbergraph_Flag_SM_EelBoss");

	AFlag_SM_EelBoss_C_ExecuteUbergraph_Flag_SM_EelBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
