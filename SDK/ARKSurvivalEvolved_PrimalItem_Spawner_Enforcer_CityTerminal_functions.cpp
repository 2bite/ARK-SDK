// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_Enforcer_CityTerminal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Spawner_Enforcer_CityTerminal.PrimalItem_Spawner_Enforcer_CityTerminal_C.PreDinoSpawned
// (NetReliable, Native, Event, NetMulticast, Protected, NetServer, HasOutParms, DLLImport, BlueprintPure, NetValidate)

void UPrimalItem_Spawner_Enforcer_CityTerminal_C::PreDinoSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Enforcer_CityTerminal.PrimalItem_Spawner_Enforcer_CityTerminal_C.PreDinoSpawned");

	UPrimalItem_Spawner_Enforcer_CityTerminal_C_PreDinoSpawned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_Spawner_Enforcer_CityTerminal.PrimalItem_Spawner_Enforcer_CityTerminal_C.GetStatDisplayString
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue>* Stat                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StatConvertMapIndex            (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  StatDisplay                    (Parm, OutParm, ZeroConstructor)
// class FString                  ValueDisplay                   (Parm, OutParm, ZeroConstructor)
// bool                           ShowInTooltip                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Spawner_Enforcer_CityTerminal_C::GetStatDisplayString(TEnumAsByte<EPrimalCharacterStatusValue>* Stat, int* Value, int* StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Enforcer_CityTerminal.PrimalItem_Spawner_Enforcer_CityTerminal_C.GetStatDisplayString");

	UPrimalItem_Spawner_Enforcer_CityTerminal_C_GetStatDisplayString_Params params;
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


// Function PrimalItem_Spawner_Enforcer_CityTerminal.PrimalItem_Spawner_Enforcer_CityTerminal_C.ExecuteUbergraph_PrimalItem_Spawner_Enforcer_CityTerminal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Spawner_Enforcer_CityTerminal_C::ExecuteUbergraph_PrimalItem_Spawner_Enforcer_CityTerminal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Enforcer_CityTerminal.PrimalItem_Spawner_Enforcer_CityTerminal_C.ExecuteUbergraph_PrimalItem_Spawner_Enforcer_CityTerminal");

	UPrimalItem_Spawner_Enforcer_CityTerminal_C_ExecuteUbergraph_PrimalItem_Spawner_Enforcer_CityTerminal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
