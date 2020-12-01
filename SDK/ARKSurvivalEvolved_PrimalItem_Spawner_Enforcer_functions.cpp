// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_Enforcer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Spawner_Enforcer.PrimalItem_Spawner_Enforcer_C.PreDinoSpawned
// (Net, NetReliable, NetRequest, Private, NetServer, HasDefaults, NetClient, DLLImport, Const, NetValidate)

void UPrimalItem_Spawner_Enforcer_C::PreDinoSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Enforcer.PrimalItem_Spawner_Enforcer_C.PreDinoSpawned");

	UPrimalItem_Spawner_Enforcer_C_PreDinoSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_Spawner_Enforcer.PrimalItem_Spawner_Enforcer_C.GetStatDisplayString
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue>* Stat                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StatConvertMapIndex            (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  StatDisplay                    (Parm, OutParm, ZeroConstructor)
// class FString                  ValueDisplay                   (Parm, OutParm, ZeroConstructor)
// bool                           ShowInTooltip                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Spawner_Enforcer_C::GetStatDisplayString(TEnumAsByte<EPrimalCharacterStatusValue>* Stat, int* Value, int* StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Enforcer.PrimalItem_Spawner_Enforcer_C.GetStatDisplayString");

	UPrimalItem_Spawner_Enforcer_C_GetStatDisplayString_Params params;
	params.Stat = Stat;
	params.Value = Value;
	params.StatConvertMapIndex = StatConvertMapIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatDisplay != nullptr)
		*StatDisplay = params.StatDisplay;
	if (ValueDisplay != nullptr)
		*ValueDisplay = params.ValueDisplay;
	if (ShowInTooltip != nullptr)
		*ShowInTooltip = params.ShowInTooltip;
}


// Function PrimalItem_Spawner_Enforcer.PrimalItem_Spawner_Enforcer_C.ExecuteUbergraph_PrimalItem_Spawner_Enforcer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Spawner_Enforcer_C::ExecuteUbergraph_PrimalItem_Spawner_Enforcer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Enforcer.PrimalItem_Spawner_Enforcer_C.ExecuteUbergraph_PrimalItem_Spawner_Enforcer");

	UPrimalItem_Spawner_Enforcer_C_ExecuteUbergraph_PrimalItem_Spawner_Enforcer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
