// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShooterHudBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShooterHudBP.ShooterHudBP_C.GetAdditionalExplorerNoteDynamicMaterialParams
// (NetReliable, NetMulticast, Public, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FExplorerNoteEntry      ExplorerNote                   (Parm, OutParm, ReferenceParm)
// TArray<struct FNameScalarPair> ScalarMaterialParams           (Parm, OutParm, ZeroConstructor)
// TArray<struct FNameColorPair>  ColorMaterialParams            (Parm, OutParm, ZeroConstructor)

void AShooterHudBP_C::GetAdditionalExplorerNoteDynamicMaterialParams(struct FExplorerNoteEntry* ExplorerNote, TArray<struct FNameScalarPair>* ScalarMaterialParams, TArray<struct FNameColorPair>* ColorMaterialParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterHudBP.ShooterHudBP_C.GetAdditionalExplorerNoteDynamicMaterialParams");

	AShooterHudBP_C_GetAdditionalExplorerNoteDynamicMaterialParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExplorerNote != nullptr)
		*ExplorerNote = params.ExplorerNote;
	if (ScalarMaterialParams != nullptr)
		*ScalarMaterialParams = params.ScalarMaterialParams;
	if (ColorMaterialParams != nullptr)
		*ColorMaterialParams = params.ColorMaterialParams;
}


// Function ShooterHudBP.ShooterHudBP_C.UserConstructionScript
// ()

void AShooterHudBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterHudBP.ShooterHudBP_C.UserConstructionScript");

	AShooterHudBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterHudBP.ShooterHudBP_C.ExecuteUbergraph_ShooterHudBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterHudBP_C::ExecuteUbergraph_ShooterHudBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterHudBP.ShooterHudBP_C.ExecuteUbergraph_ShooterHudBP");

	AShooterHudBP_C_ExecuteUbergraph_ShooterHudBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
