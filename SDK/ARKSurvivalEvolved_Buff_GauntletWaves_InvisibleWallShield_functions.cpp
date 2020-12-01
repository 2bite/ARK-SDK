// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GauntletWaves_InvisibleWallShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.UserConstructionScript
// ()

void ABuff_GauntletWaves_InvisibleWallShield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.UserConstructionScript");

	ABuff_GauntletWaves_InvisibleWallShield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.ReceiveBeginPlay
// ()

void ABuff_GauntletWaves_InvisibleWallShield_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.ReceiveBeginPlay");

	ABuff_GauntletWaves_InvisibleWallShield_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.SetupShieldScale
// ()
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GauntletWaves_InvisibleWallShield_C::SetupShieldScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.SetupShieldScale");

	ABuff_GauntletWaves_InvisibleWallShield_C_SetupShieldScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.ExecuteUbergraph_Buff_GauntletWaves_InvisibleWallShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GauntletWaves_InvisibleWallShield_C::ExecuteUbergraph_Buff_GauntletWaves_InvisibleWallShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C.ExecuteUbergraph_Buff_GauntletWaves_InvisibleWallShield");

	ABuff_GauntletWaves_InvisibleWallShield_C_ExecuteUbergraph_Buff_GauntletWaves_InvisibleWallShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
