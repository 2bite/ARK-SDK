// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mek_Character_BP_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.GetMekHeat
// ()
// Parameters:
// float                          CurrentHeat                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxHeat                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMek_Character_BP_Interface_C::GetMekHeat(float* CurrentHeat, float* MaxHeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.GetMekHeat");

	UMek_Character_BP_Interface_C_GetMekHeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentHeat != nullptr)
		*CurrentHeat = params.CurrentHeat;
	if (MaxHeat != nullptr)
		*MaxHeat = params.MaxHeat;
}


// Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.GetMekFuel
// ()
// Parameters:
// float                          CurrentFuel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxFuel                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMek_Character_BP_Interface_C::GetMekFuel(float* CurrentFuel, float* MaxFuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.GetMekFuel");

	UMek_Character_BP_Interface_C_GetMekFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentFuel != nullptr)
		*CurrentFuel = params.CurrentFuel;
	if (MaxFuel != nullptr)
		*MaxFuel = params.MaxFuel;
}


// Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.ModifyMekHeat
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Subtract                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewHeatLevel                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMek_Character_BP_Interface_C::ModifyMekHeat(float Delta, bool Subtract, float* NewHeatLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.ModifyMekHeat");

	UMek_Character_BP_Interface_C_ModifyMekHeat_Params params;
	params.Delta = Delta;
	params.Subtract = Subtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewHeatLevel != nullptr)
		*NewHeatLevel = params.NewHeatLevel;
}


// Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.ModifyMekFuel
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Subtract                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewFuelLevel                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMek_Character_BP_Interface_C::ModifyMekFuel(float Delta, bool Subtract, float* NewFuelLevel, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.ModifyMekFuel");

	UMek_Character_BP_Interface_C_ModifyMekFuel_Params params;
	params.Delta = Delta;
	params.Subtract = Subtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewFuelLevel != nullptr)
		*NewFuelLevel = params.NewFuelLevel;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.SetBackpackMalfunction
// ()
// Parameters:
// bool                           DisableBackpack                (Parm, ZeroConstructor, IsPlainOldData)

void UMek_Character_BP_Interface_C::SetBackpackMalfunction(bool DisableBackpack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.SetBackpackMalfunction");

	UMek_Character_BP_Interface_C_SetBackpackMalfunction_Params params;
	params.DisableBackpack = DisableBackpack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
