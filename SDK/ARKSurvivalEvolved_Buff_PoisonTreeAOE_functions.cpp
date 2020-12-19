// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonTreeAOE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonTreeAOE_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.BPDeactivated");

	ABuff_PoisonTreeAOE_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.GetGrowthScale
// ()
// Parameters:
// struct FVector                 Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonTreeAOE_C::GetGrowthScale(struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.GetGrowthScale");

	ABuff_PoisonTreeAOE_C_GetGrowthScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonTreeAOE_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ReceiveAnyDamage");

	ABuff_PoisonTreeAOE_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.NotifyDamage
// ()
// Parameters:
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TheDamageCauser                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonTreeAOE_C::NotifyDamage(float* DamageAmount, class UClass** DamageClass, class AController** EventInstigator, class AActor** TheDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.NotifyDamage");

	ABuff_PoisonTreeAOE_C_NotifyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageClass = DamageClass;
	params.EventInstigator = EventInstigator;
	params.TheDamageCauser = TheDamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.UserConstructionScript
// ()

void ABuff_PoisonTreeAOE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.UserConstructionScript");

	ABuff_PoisonTreeAOE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ReceiveBeginPlay
// ()

void ABuff_PoisonTreeAOE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ReceiveBeginPlay");

	ABuff_PoisonTreeAOE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonTreeAOE_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ReceiveTick");

	ABuff_PoisonTreeAOE_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.Multi-SetScale
// ()
// Parameters:
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonTreeAOE_C::Multi_SetScale(const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.Multi-SetScale");

	ABuff_PoisonTreeAOE_C_Multi_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ExecuteUbergraph_Buff_PoisonTreeAOE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonTreeAOE_C::ExecuteUbergraph_Buff_PoisonTreeAOE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonTreeAOE.Buff_PoisonTreeAOE_C.ExecuteUbergraph_Buff_PoisonTreeAOE");

	ABuff_PoisonTreeAOE_C_ExecuteUbergraph_Buff_PoisonTreeAOE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
