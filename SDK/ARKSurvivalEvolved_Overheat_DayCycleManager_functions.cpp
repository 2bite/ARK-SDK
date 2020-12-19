// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Overheat_DayCycleManager_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.Is SuperheatActive
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOverheat_DayCycleManager_C::Is_SuperheatActive(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.Is SuperheatActive");

	AOverheat_DayCycleManager_C_Is_SuperheatActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.UserConstructionScript
// ()

void AOverheat_DayCycleManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.UserConstructionScript");

	AOverheat_DayCycleManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.ExecuteUbergraph_Overheat_DayCycleManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOverheat_DayCycleManager_C::ExecuteUbergraph_Overheat_DayCycleManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.ExecuteUbergraph_Overheat_DayCycleManager");

	AOverheat_DayCycleManager_C_ExecuteUbergraph_Overheat_DayCycleManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
