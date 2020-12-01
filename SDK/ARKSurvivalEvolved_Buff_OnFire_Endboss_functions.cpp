// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OnFire_Endboss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_OnFire_Endboss.Buff_OnFire_EndBoss_C.UserConstructionScript
// ()

void ABuff_OnFire_EndBoss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OnFire_Endboss.Buff_OnFire_EndBoss_C.UserConstructionScript");

	ABuff_OnFire_EndBoss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OnFire_Endboss.Buff_OnFire_EndBoss_C.ExecuteUbergraph_Buff_OnFire_EndBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OnFire_EndBoss_C::ExecuteUbergraph_Buff_OnFire_EndBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OnFire_Endboss.Buff_OnFire_EndBoss_C.ExecuteUbergraph_Buff_OnFire_EndBoss");

	ABuff_OnFire_EndBoss_C_ExecuteUbergraph_Buff_OnFire_EndBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
