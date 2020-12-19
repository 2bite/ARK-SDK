// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExtinctionDayCycle_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.GetVar_KKArenaAscenscionLoc
// ()
// Parameters:
// class AActor*                  SSPoint                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExtinctionDayCycle_Interface_C::GetVar_KKArenaAscenscionLoc(class AActor** SSPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.GetVar_KKArenaAscenscionLoc");

	UExtinctionDayCycle_Interface_C_GetVar_KKArenaAscenscionLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SSPoint != nullptr)
		*SSPoint = params.SSPoint;
}


// Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.GetVar_DKArenaLoc
// ()
// Parameters:
// class AActor*                  Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExtinctionDayCycle_Interface_C::GetVar_DKArenaLoc(class AActor** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.GetVar_DKArenaLoc");

	UExtinctionDayCycle_Interface_C_GetVar_DKArenaLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.GetVar_IsBossElectricalStormActive
// ()
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExtinctionDayCycle_Interface_C::GetVar_IsBossElectricalStormActive(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.GetVar_IsBossElectricalStormActive");

	UExtinctionDayCycle_Interface_C_GetVar_IsBossElectricalStormActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.GetVar_KKArenaLoc
// ()
// Parameters:
// class AActor*                  ServerPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExtinctionDayCycle_Interface_C::GetVar_KKArenaLoc(class AActor** ServerPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.GetVar_KKArenaLoc");

	UExtinctionDayCycle_Interface_C_GetVar_KKArenaLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerPoint != nullptr)
		*ServerPoint = params.ServerPoint;
}


// Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.GetVar_FKArenaLoc
// ()
// Parameters:
// class AActor*                  ServerPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExtinctionDayCycle_Interface_C::GetVar_FKArenaLoc(class AActor** ServerPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.GetVar_FKArenaLoc");

	UExtinctionDayCycle_Interface_C_GetVar_FKArenaLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerPoint != nullptr)
		*ServerPoint = params.ServerPoint;
}


// Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.GetVar_IKArenaLoc
// ()
// Parameters:
// class AActor*                  ServerPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExtinctionDayCycle_Interface_C::GetVar_IKArenaLoc(class AActor** ServerPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.GetVar_IKArenaLoc");

	UExtinctionDayCycle_Interface_C_GetVar_IKArenaLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerPoint != nullptr)
		*ServerPoint = params.ServerPoint;
}


// Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.SetVar_Boss_ElectricalStormActive
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UExtinctionDayCycle_Interface_C::SetVar_Boss_ElectricalStormActive(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C.SetVar_Boss_ElectricalStormActive");

	UExtinctionDayCycle_Interface_C_SetVar_Boss_ElectricalStormActive_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
