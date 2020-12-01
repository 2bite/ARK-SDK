// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventDamageAndTargeting_EndBoss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.PreventActorTargeting
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PreventDamageAndTargeting_EndBoss_C::PreventActorTargeting(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.PreventActorTargeting");

	ABuff_PreventDamageAndTargeting_EndBoss_C_PreventActorTargeting_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventDamageAndTargeting_EndBoss_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.BPDeactivated");

	ABuff_PreventDamageAndTargeting_EndBoss_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.UserConstructionScript
// ()

void ABuff_PreventDamageAndTargeting_EndBoss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.UserConstructionScript");

	ABuff_PreventDamageAndTargeting_EndBoss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.ReceiveBeginPlay
// ()

void ABuff_PreventDamageAndTargeting_EndBoss_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.ReceiveBeginPlay");

	ABuff_PreventDamageAndTargeting_EndBoss_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.ExecuteUbergraph_Buff_PreventDamageAndTargeting_EndBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventDamageAndTargeting_EndBoss_C::ExecuteUbergraph_Buff_PreventDamageAndTargeting_EndBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.ExecuteUbergraph_Buff_PreventDamageAndTargeting_EndBoss");

	ABuff_PreventDamageAndTargeting_EndBoss_C_ExecuteUbergraph_Buff_PreventDamageAndTargeting_EndBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
