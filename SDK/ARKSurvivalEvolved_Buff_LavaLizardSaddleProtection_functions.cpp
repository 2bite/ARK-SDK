// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LavaLizardSaddleProtection_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_LavaLizardSaddleProtection.Buff_LavaLizardSaddleProtection_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LavaLizardSaddleProtection_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LavaLizardSaddleProtection.Buff_LavaLizardSaddleProtection_C.BuffTickServer");

	ABuff_LavaLizardSaddleProtection_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LavaLizardSaddleProtection.Buff_LavaLizardSaddleProtection_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_LavaLizardSaddleProtection_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LavaLizardSaddleProtection.Buff_LavaLizardSaddleProtection_C.BuffAdjustDamage");

	ABuff_LavaLizardSaddleProtection_C_BuffAdjustDamage_Params params;
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


// Function Buff_LavaLizardSaddleProtection.Buff_LavaLizardSaddleProtection_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LavaLizardSaddleProtection_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LavaLizardSaddleProtection.Buff_LavaLizardSaddleProtection_C.BPSetupForInstigator");

	ABuff_LavaLizardSaddleProtection_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LavaLizardSaddleProtection.Buff_LavaLizardSaddleProtection_C.UserConstructionScript
// ()

void ABuff_LavaLizardSaddleProtection_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LavaLizardSaddleProtection.Buff_LavaLizardSaddleProtection_C.UserConstructionScript");

	ABuff_LavaLizardSaddleProtection_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LavaLizardSaddleProtection.Buff_LavaLizardSaddleProtection_C.ExecuteUbergraph_Buff_LavaLizardSaddleProtection
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LavaLizardSaddleProtection_C::ExecuteUbergraph_Buff_LavaLizardSaddleProtection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LavaLizardSaddleProtection.Buff_LavaLizardSaddleProtection_C.ExecuteUbergraph_Buff_LavaLizardSaddleProtection");

	ABuff_LavaLizardSaddleProtection_C_ExecuteUbergraph_Buff_LavaLizardSaddleProtection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
