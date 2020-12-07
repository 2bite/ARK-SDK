// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OilSlick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_OilSlick.Buff_OilSlick_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OilSlick_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OilSlick.Buff_OilSlick_C.ReceiveTick");

	ABuff_OilSlick_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OilSlick.Buff_OilSlick_C.SpawnOilFire
// (NetReliable, Exec, Native, Public, Private, HasOutParms, DLLImport, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 OverrideOriginLocation         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OilSlick_C::SpawnOilFire(const struct FVector& OverrideOriginLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OilSlick.Buff_OilSlick_C.SpawnOilFire");

	ABuff_OilSlick_C_SpawnOilFire_Params params;
	params.OverrideOriginLocation = OverrideOriginLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OilSlick.Buff_OilSlick_C.UserConstructionScript
// ()

void ABuff_OilSlick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OilSlick.Buff_OilSlick_C.UserConstructionScript");

	ABuff_OilSlick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OilSlick.Buff_OilSlick_C.OnTakeAnyDamage_Event
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OilSlick_C::OnTakeAnyDamage_Event(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OilSlick.Buff_OilSlick_C.OnTakeAnyDamage_Event");

	ABuff_OilSlick_C_OnTakeAnyDamage_Event_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OilSlick.Buff_OilSlick_C.ReceiveBeginPlay
// ()

void ABuff_OilSlick_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OilSlick.Buff_OilSlick_C.ReceiveBeginPlay");

	ABuff_OilSlick_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OilSlick.Buff_OilSlick_C.ExecuteUbergraph_Buff_OilSlick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OilSlick_C::ExecuteUbergraph_Buff_OilSlick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OilSlick.Buff_OilSlick_C.ExecuteUbergraph_Buff_OilSlick");

	ABuff_OilSlick_C_ExecuteUbergraph_Buff_OilSlick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
