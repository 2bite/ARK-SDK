// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExosuitRider_Offline_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExosuitRider_Offline_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPSetupForInstigator");

	ABuff_ExosuitRider_Offline_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.PreventActorTargeting
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ExosuitRider_Offline_C::PreventActorTargeting(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.PreventActorTargeting");

	ABuff_ExosuitRider_Offline_C_PreventActorTargeting_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_ExosuitRider_Offline_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BuffAdjustDamage");

	ABuff_ExosuitRider_Offline_C_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.InitBuff
// ()

void ABuff_ExosuitRider_Offline_C::InitBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.InitBuff");

	ABuff_ExosuitRider_Offline_C_InitBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExosuitRider_Offline_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPDeactivated");

	ABuff_ExosuitRider_Offline_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.OnOwningSuitDied
// ()
// Parameters:
// class APrimalCharacter*        DiedChar                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExosuitRider_Offline_C::OnOwningSuitDied(class APrimalCharacter* DiedChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.OnOwningSuitDied");

	ABuff_ExosuitRider_Offline_C_OnOwningSuitDied_Params params;
	params.DiedChar = DiedChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPInstigatorPossessed
// ()
// Parameters:
// class AController**            ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExosuitRider_Offline_C::BPInstigatorPossessed(class AController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPInstigatorPossessed");

	ABuff_ExosuitRider_Offline_C_BPInstigatorPossessed_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.UserConstructionScript
// ()

void ABuff_ExosuitRider_Offline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.UserConstructionScript");

	ABuff_ExosuitRider_Offline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.WaitForClient
// ()

void ABuff_ExosuitRider_Offline_C::WaitForClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.WaitForClient");

	ABuff_ExosuitRider_Offline_C_WaitForClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.ExecuteUbergraph_Buff_ExosuitRider_Offline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExosuitRider_Offline_C::ExecuteUbergraph_Buff_ExosuitRider_Offline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.ExecuteUbergraph_Buff_ExosuitRider_Offline");

	ABuff_ExosuitRider_Offline_C_ExecuteUbergraph_Buff_ExosuitRider_Offline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
