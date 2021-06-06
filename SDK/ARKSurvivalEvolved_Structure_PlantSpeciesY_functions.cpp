// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PlantSpeciesY_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStructure_PlantSpeciesY_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.BPAdjustDamage");

	AStructure_PlantSpeciesY_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.BPNotifyImmobilizedCharacterIsDeadOrInConscious
// ()
// Parameters:
// bool*                          IsDead                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsConscious                    (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesY_C::BPNotifyImmobilizedCharacterIsDeadOrInConscious(bool* IsDead, bool* IsConscious)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.BPNotifyImmobilizedCharacterIsDeadOrInConscious");

	AStructure_PlantSpeciesY_C_BPNotifyImmobilizedCharacterIsDeadOrInConscious_Params params;
	params.IsDead = IsDead;
	params.IsConscious = IsConscious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.BPNotifyImmobilizedCharacterIsDead
// ()

void AStructure_PlantSpeciesY_C::BPNotifyImmobilizedCharacterIsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.BPNotifyImmobilizedCharacterIsDead");

	AStructure_PlantSpeciesY_C_BPNotifyImmobilizedCharacterIsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.UserConstructionScript
// ()

void AStructure_PlantSpeciesY_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.UserConstructionScript");

	AStructure_PlantSpeciesY_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.ReceiveBeginPlay
// ()

void AStructure_PlantSpeciesY_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.ReceiveBeginPlay");

	AStructure_PlantSpeciesY_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.PeriodicDamage
// ()

void AStructure_PlantSpeciesY_C::PeriodicDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.PeriodicDamage");

	AStructure_PlantSpeciesY_C_PeriodicDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.ExecuteUbergraph_Structure_PlantSpeciesY
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesY_C::ExecuteUbergraph_Structure_PlantSpeciesY(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesY.Structure_PlantSpeciesY_C.ExecuteUbergraph_Structure_PlantSpeciesY");

	AStructure_PlantSpeciesY_C_ExecuteUbergraph_Structure_PlantSpeciesY_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
