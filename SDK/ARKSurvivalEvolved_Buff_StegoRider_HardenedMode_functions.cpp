// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StegoRider_HardenedMode_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_StegoRider_HardenedMode.Buff_StegoRider_HardenedMode_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_StegoRider_HardenedMode_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StegoRider_HardenedMode.Buff_StegoRider_HardenedMode_C.BuffAdjustDamage");

	ABuff_StegoRider_HardenedMode_C_BuffAdjustDamage_Params params;
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


// Function Buff_StegoRider_HardenedMode.Buff_StegoRider_HardenedMode_C.UserConstructionScript
// ()

void ABuff_StegoRider_HardenedMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StegoRider_HardenedMode.Buff_StegoRider_HardenedMode_C.UserConstructionScript");

	ABuff_StegoRider_HardenedMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StegoRider_HardenedMode.Buff_StegoRider_HardenedMode_C.ExecuteUbergraph_Buff_StegoRider_HardenedMode
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StegoRider_HardenedMode_C::ExecuteUbergraph_Buff_StegoRider_HardenedMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StegoRider_HardenedMode.Buff_StegoRider_HardenedMode_C.ExecuteUbergraph_Buff_StegoRider_HardenedMode");

	ABuff_StegoRider_HardenedMode_C_ExecuteUbergraph_Buff_StegoRider_HardenedMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
