// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ammonite_Character_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ammonite_Character.Ammonite_Character_C.Apply Rage Buff on Character
// ()
// Parameters:
// class AActor*                  OtherCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  BuffToApply                    (Parm, ZeroConstructor, IsPlainOldData)

void AAmmonite_Character_C::Apply_Rage_Buff_on_Character(class AActor* OtherCharacter, class UClass* BuffToApply)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammonite_Character.Ammonite_Character_C.Apply Rage Buff on Character");

	AAmmonite_Character_C_Apply_Rage_Buff_on_Character_Params params;
	params.OtherCharacter = OtherCharacter;
	params.BuffToApply = BuffToApply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammonite_Character.Ammonite_Character_C.UserConstructionScript
// ()

void AAmmonite_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammonite_Character.Ammonite_Character_C.UserConstructionScript");

	AAmmonite_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammonite_Character.Ammonite_Character_C.AnimNotify_CallForHelp
// ()
// Parameters:
// class AActor*                  NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void AAmmonite_Character_C::AnimNotify_CallForHelp(class AActor* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammonite_Character.Ammonite_Character_C.AnimNotify_CallForHelp");

	AAmmonite_Character_C_AnimNotify_CallForHelp_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammonite_Character.Ammonite_Character_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AAmmonite_Character_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammonite_Character.Ammonite_Character_C.ReceiveAnyDamage");

	AAmmonite_Character_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammonite_Character.Ammonite_Character_C.SpawnLastInk
// ()

void AAmmonite_Character_C::SpawnLastInk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammonite_Character.Ammonite_Character_C.SpawnLastInk");

	AAmmonite_Character_C_SpawnLastInk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammonite_Character.Ammonite_Character_C.ExecuteUbergraph_Ammonite_Character
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmmonite_Character_C::ExecuteUbergraph_Ammonite_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammonite_Character.Ammonite_Character_C.ExecuteUbergraph_Ammonite_Character");

	AAmmonite_Character_C_ExecuteUbergraph_Ammonite_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
