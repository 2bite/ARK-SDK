// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CryopodNerf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CryopodNerf.Buff_CryopodNerf_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_CryopodNerf_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryopodNerf.Buff_CryopodNerf_C.BuffAdjustDamage");

	ABuff_CryopodNerf_C_BuffAdjustDamage_Params params;
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


// Function Buff_CryopodNerf.Buff_CryopodNerf_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CryopodNerf_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryopodNerf.Buff_CryopodNerf_C.BPSetupForInstigator");

	ABuff_CryopodNerf_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CryopodNerf.Buff_CryopodNerf_C.DrawBuffFloatingHUD
// ()
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CryopodNerf_C::DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryopodNerf.Buff_CryopodNerf_C.DrawBuffFloatingHUD");

	ABuff_CryopodNerf_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CryopodNerf.Buff_CryopodNerf_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_CryopodNerf_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryopodNerf.Buff_CryopodNerf_C.BPPreventAddingOtherBuff");

	ABuff_CryopodNerf_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_CryopodNerf.Buff_CryopodNerf_C.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CryopodNerf_C::BPPreSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryopodNerf.Buff_CryopodNerf_C.BPPreSetupForInstigator");

	ABuff_CryopodNerf_C_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CryopodNerf.Buff_CryopodNerf_C.UserConstructionScript
// ()

void ABuff_CryopodNerf_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryopodNerf.Buff_CryopodNerf_C.UserConstructionScript");

	ABuff_CryopodNerf_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CryopodNerf.Buff_CryopodNerf_C.ExecuteUbergraph_Buff_CryopodNerf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CryopodNerf_C::ExecuteUbergraph_Buff_CryopodNerf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryopodNerf.Buff_CryopodNerf_C.ExecuteUbergraph_Buff_CryopodNerf");

	ABuff_CryopodNerf_C_ExecuteUbergraph_Buff_CryopodNerf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
