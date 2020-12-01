// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExtinctionDayCycle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_KKArenaAscenscionLoc
// ()
// Parameters:
// class AActor*                  SSPoint                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExtinctionDayCycle_C::GetVar_KKArenaAscenscionLoc(class AActor** SSPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_KKArenaAscenscionLoc");

	AExtinctionDayCycle_C_GetVar_KKArenaAscenscionLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SSPoint != nullptr)
		*SSPoint = params.SSPoint;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_DKArenaLoc
// ()
// Parameters:
// class AActor*                  Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExtinctionDayCycle_C::GetVar_DKArenaLoc(class AActor** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_DKArenaLoc");

	AExtinctionDayCycle_C_GetVar_DKArenaLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_IsBossElectricalStormActive
// ()
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExtinctionDayCycle_C::GetVar_IsBossElectricalStormActive(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_IsBossElectricalStormActive");

	AExtinctionDayCycle_C_GetVar_IsBossElectricalStormActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_KKArenaLoc
// ()
// Parameters:
// class AActor*                  ServerPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExtinctionDayCycle_C::GetVar_KKArenaLoc(class AActor** ServerPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_KKArenaLoc");

	AExtinctionDayCycle_C_GetVar_KKArenaLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerPoint != nullptr)
		*ServerPoint = params.ServerPoint;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_FKArenaLoc
// ()
// Parameters:
// class AActor*                  ServerPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExtinctionDayCycle_C::GetVar_FKArenaLoc(class AActor** ServerPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_FKArenaLoc");

	AExtinctionDayCycle_C_GetVar_FKArenaLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerPoint != nullptr)
		*ServerPoint = params.ServerPoint;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_IKArenaLoc
// ()
// Parameters:
// class AActor*                  ServerPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExtinctionDayCycle_C::GetVar_IKArenaLoc(class AActor** ServerPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.GetVar_IKArenaLoc");

	AExtinctionDayCycle_C_GetVar_IKArenaLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerPoint != nullptr)
		*ServerPoint = params.ServerPoint;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.Get Golem MeshClass
// ()
// Parameters:
// class UClass*                  isScorchedEarthMesh            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExtinctionDayCycle_C::Get_Golem_MeshClass(class UClass** isScorchedEarthMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.Get Golem MeshClass");

	AExtinctionDayCycle_C_Get_Golem_MeshClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isScorchedEarthMesh != nullptr)
		*isScorchedEarthMesh = params.isScorchedEarthMesh;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.AttemptWeaponFiring
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterWeapon**         theWeapon                      (Parm, ZeroConstructor, IsPlainOldData)

void AExtinctionDayCycle_C::STATIC_AttemptWeaponFiring(class AShooterWeapon** theWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.AttemptWeaponFiring");

	AExtinctionDayCycle_C_AttemptWeaponFiring_Params params;
	params.theWeapon = theWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.AllowStructureActivation
// ()
// Parameters:
// class APrimalStructure**       theStructure                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExtinctionDayCycle_C::AllowStructureActivation(class APrimalStructure** theStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.AllowStructureActivation");

	AExtinctionDayCycle_C_AllowStructureActivation_Params params;
	params.theStructure = theStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.AllowWeaponFiring
// ()
// Parameters:
// class AActor**                 theWeaponOrStructure           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExtinctionDayCycle_C::AllowWeaponFiring(class AActor** theWeaponOrStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.AllowWeaponFiring");

	AExtinctionDayCycle_C_AllowWeaponFiring_Params params;
	params.theWeaponOrStructure = theWeaponOrStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.IsActorIntoBossElectricalStorm
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           _return                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExtinctionDayCycle_C::IsActorIntoBossElectricalStorm(class AActor* Actor, bool* _return)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.IsActorIntoBossElectricalStorm");

	AExtinctionDayCycle_C_IsActorIntoBossElectricalStorm_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_return != nullptr)
		*_return = params._return;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.SetSkyMaterial
// ()
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Weather                        (Parm, OutParm, ZeroConstructor)

void AExtinctionDayCycle_C::SetSkyMaterial(float* Time, TArray<float>* Weather)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.SetSkyMaterial");

	AExtinctionDayCycle_C_SetSkyMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
	if (Weather != nullptr)
		*Weather = params.Weather;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.Init Materials
// ()

void AExtinctionDayCycle_C::Init_Materials()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.Init Materials");

	AExtinctionDayCycle_C_Init_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.Bind Master Dome
// ()
// Parameters:
// class ABP_ProtoArkDome_Base_C* Dome                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           newMaster                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExtinctionDayCycle_C::Bind_Master_Dome(class ABP_ProtoArkDome_Base_C* Dome, bool* newMaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.Bind Master Dome");

	AExtinctionDayCycle_C_Bind_Master_Dome_Params params;
	params.Dome = Dome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newMaster != nullptr)
		*newMaster = params.newMaster;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.UserConstructionScript
// ()

void AExtinctionDayCycle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.UserConstructionScript");

	AExtinctionDayCycle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.SetVar_Boss_ElectricalStormActive
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AExtinctionDayCycle_C::SetVar_Boss_ElectricalStormActive(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.SetVar_Boss_ElectricalStormActive");

	AExtinctionDayCycle_C_SetVar_Boss_ElectricalStormActive_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExtinctionDayCycle.ExtinctionDayCycle_C.ExecuteUbergraph_ExtinctionDayCycle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExtinctionDayCycle_C::ExecuteUbergraph_ExtinctionDayCycle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle.ExtinctionDayCycle_C.ExecuteUbergraph_ExtinctionDayCycle");

	AExtinctionDayCycle_C_ExecuteUbergraph_ExtinctionDayCycle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
