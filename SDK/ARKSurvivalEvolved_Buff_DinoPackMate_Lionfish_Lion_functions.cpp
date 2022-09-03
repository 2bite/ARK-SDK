// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoPackMate_Lionfish_Lion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_DinoPackMate_Lionfish_Lion_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.BuffAdjustDamage");

	ABuff_DinoPackMate_Lionfish_Lion_C_BuffAdjustDamage_Params params;
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


// Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.UserConstructionScript
// ()

void ABuff_DinoPackMate_Lionfish_Lion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.UserConstructionScript");

	ABuff_DinoPackMate_Lionfish_Lion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.ReceiveBeginPlay
// ()

void ABuff_DinoPackMate_Lionfish_Lion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.ReceiveBeginPlay");

	ABuff_DinoPackMate_Lionfish_Lion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.ExecuteUbergraph_Buff_DinoPackMate_Lionfish_Lion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoPackMate_Lionfish_Lion_C::ExecuteUbergraph_Buff_DinoPackMate_Lionfish_Lion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackMate_Lionfish_Lion.Buff_DinoPackMate_Lionfish_Lion_C.ExecuteUbergraph_Buff_DinoPackMate_Lionfish_Lion");

	ABuff_DinoPackMate_Lionfish_Lion_C_ExecuteUbergraph_Buff_DinoPackMate_Lionfish_Lion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
