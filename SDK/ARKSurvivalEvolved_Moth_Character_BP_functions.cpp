// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Moth_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Moth_Character_BP.Moth_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMoth_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moth_Character_BP.Moth_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AMoth_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moth_Character_BP.Moth_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMoth_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moth_Character_BP.Moth_Character_BP_C.ReceiveAnyDamage");

	AMoth_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moth_Character_BP.Moth_Character_BP_C.UserConstructionScript
// ()

void AMoth_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Moth_Character_BP.Moth_Character_BP_C.UserConstructionScript");

	AMoth_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moth_Character_BP.Moth_Character_BP_C.SpawnSpores
// ()

void AMoth_Character_BP_C::SpawnSpores()
{
	static auto fn = UObject::FindObject<UFunction>("Function Moth_Character_BP.Moth_Character_BP_C.SpawnSpores");

	AMoth_Character_BP_C_SpawnSpores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moth_Character_BP.Moth_Character_BP_C.SporeAttack
// ()

void AMoth_Character_BP_C::SporeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Moth_Character_BP.Moth_Character_BP_C.SporeAttack");

	AMoth_Character_BP_C_SporeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moth_Character_BP.Moth_Character_BP_C.ExecuteUbergraph_Moth_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMoth_Character_BP_C::ExecuteUbergraph_Moth_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moth_Character_BP.Moth_Character_BP_C.ExecuteUbergraph_Moth_Character_BP");

	AMoth_Character_BP_C_ExecuteUbergraph_Moth_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
