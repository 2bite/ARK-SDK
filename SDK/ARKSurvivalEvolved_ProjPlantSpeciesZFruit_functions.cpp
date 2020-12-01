// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPlantSpeciesZFruit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsActorValidForPVEorIsPVP
// ()
// Parameters:
// class AActor*                  HitCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjPlantSpeciesZFruit_C::IsActorValidForPVEorIsPVP(class AActor* HitCharacter, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsActorValidForPVEorIsPVP");

	AProjPlantSpeciesZFruit_C_IsActorValidForPVEorIsPVP_Params params;
	params.HitCharacter = HitCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsShielded
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsShielded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjPlantSpeciesZFruit_C::IsShielded(class AActor* Actor, bool* IsShielded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsShielded");

	AProjPlantSpeciesZFruit_C_IsShielded_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsShielded != nullptr)
		*IsShielded = params.IsShielded;
}


// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsWearingProtection
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWearingProtection            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjPlantSpeciesZFruit_C::IsWearingProtection(class AActor* Actor, bool* IsWearingProtection)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsWearingProtection");

	AProjPlantSpeciesZFruit_C_IsWearingProtection_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsWearingProtection != nullptr)
		*IsWearingProtection = params.IsWearingProtection;
}


// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsNearbyStructure
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, DLLImport, Const, NetValidate)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          IndexOffset                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StructureInBetween             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjPlantSpeciesZFruit_C::STATIC_IsNearbyStructure(int index, float IndexOffset, bool* StructureInBetween)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.IsNearbyStructure");

	AProjPlantSpeciesZFruit_C_IsNearbyStructure_Params params;
	params.index = index;
	params.IndexOffset = IndexOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StructureInBetween != nullptr)
		*StructureInBetween = params.StructureInBetween;
}


// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.GetAngleBetween
// ()
// Parameters:
// struct FVector                 v1                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 v2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjPlantSpeciesZFruit_C::GetAngleBetween(const struct FVector& v1, const struct FVector& v2, float* retVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.GetAngleBetween");

	AProjPlantSpeciesZFruit_C_GetAngleBetween_Params params;
	params.v1 = v1;
	params.v2 = v2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.UserConstructionScript
// ()

void AProjPlantSpeciesZFruit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.UserConstructionScript");

	AProjPlantSpeciesZFruit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjPlantSpeciesZFruit_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.OnExplode");

	AProjPlantSpeciesZFruit_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.BPProjectileBounced
// ()
// Parameters:
// struct FHitResult              ImpactResult                   (Parm, OutParm, ReferenceParm)
// struct FVector                 ImpactVelocity                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AProjPlantSpeciesZFruit_C::BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.BPProjectileBounced");

	AProjPlantSpeciesZFruit_C_BPProjectileBounced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactResult != nullptr)
		*ImpactResult = params.ImpactResult;
	if (ImpactVelocity != nullptr)
		*ImpactVelocity = params.ImpactVelocity;
}


// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ReceiveBeginPlay
// ()

void AProjPlantSpeciesZFruit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ReceiveBeginPlay");

	AProjPlantSpeciesZFruit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ROC_DisableProjectile
// ()

void AProjPlantSpeciesZFruit_C::ROC_DisableProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ROC_DisableProjectile");

	AProjPlantSpeciesZFruit_C_ROC_DisableProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.SpawnCharge_Emitter
// ()

void AProjPlantSpeciesZFruit_C::SpawnCharge_Emitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.SpawnCharge_Emitter");

	AProjPlantSpeciesZFruit_C_SpawnCharge_Emitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ExecuteUbergraph_ProjPlantSpeciesZFruit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjPlantSpeciesZFruit_C::ExecuteUbergraph_ProjPlantSpeciesZFruit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPlantSpeciesZFruit.ProjPlantSpeciesZFruit_C.ExecuteUbergraph_ProjPlantSpeciesZFruit");

	AProjPlantSpeciesZFruit_C_ExecuteUbergraph_ProjPlantSpeciesZFruit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
