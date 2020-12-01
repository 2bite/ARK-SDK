// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ParaWarningAlert_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.Add Enemy Indicators
// ()
// Parameters:
// TArray<struct FVector>         Enemies                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABuff_ParaWarningAlert_C::Add_Enemy_Indicators(TArray<struct FVector>* Enemies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.Add Enemy Indicators");

	ABuff_ParaWarningAlert_C_Add_Enemy_Indicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enemies != nullptr)
		*Enemies = params.Enemies;
}


// Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.BPActivated
// (Net, Exec, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ParaWarningAlert_C::STATIC_BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.BPActivated");

	ABuff_ParaWarningAlert_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.UserConstructionScript
// ()

void ABuff_ParaWarningAlert_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.UserConstructionScript");

	ABuff_ParaWarningAlert_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.ClientAddEnemyIndicators
// ()
// Parameters:
// TArray<struct FVector>         Locations                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABuff_ParaWarningAlert_C::ClientAddEnemyIndicators(TArray<struct FVector>* Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.ClientAddEnemyIndicators");

	ABuff_ParaWarningAlert_C_ClientAddEnemyIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;
}


// Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.ExecuteUbergraph_Buff_ParaWarningAlert
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ParaWarningAlert_C::ExecuteUbergraph_Buff_ParaWarningAlert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.ExecuteUbergraph_Buff_ParaWarningAlert");

	ABuff_ParaWarningAlert_C_ExecuteUbergraph_Buff_ParaWarningAlert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
