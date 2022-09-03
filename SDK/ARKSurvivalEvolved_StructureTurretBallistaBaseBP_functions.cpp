// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBallistaBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.GetHudData
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComponent             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  CurrentAmmoItemTemplate        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          AmmoItemTemplates              (Parm, OutParm, ZeroConstructor)
// int                            LowAmmoWarningAmount           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructureTurretBallistaBaseBP_C::GetHudData(class UPrimalInventoryComponent** InventoryComponent, class UClass** CurrentAmmoItemTemplate, TArray<class UClass*>* AmmoItemTemplates, int* LowAmmoWarningAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.GetHudData");

	AStructureTurretBallistaBaseBP_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;
	if (CurrentAmmoItemTemplate != nullptr)
		*CurrentAmmoItemTemplate = params.CurrentAmmoItemTemplate;
	if (AmmoItemTemplates != nullptr)
		*AmmoItemTemplates = params.AmmoItemTemplates;
	if (LowAmmoWarningAmount != nullptr)
		*LowAmmoWarningAmount = params.LowAmmoWarningAmount;
}


// Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.BPReleasedPlayer
// ()
// Parameters:
// class AShooterCharacter**      ReleasedChar                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AtSeatNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretBallistaBaseBP_C::BPReleasedPlayer(class AShooterCharacter** ReleasedChar, int* AtSeatNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.BPReleasedPlayer");

	AStructureTurretBallistaBaseBP_C_BPReleasedPlayer_Params params;
	params.ReleasedChar = ReleasedChar;
	params.AtSeatNumber = AtSeatNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.UserConstructionScript
// ()

void AStructureTurretBallistaBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.UserConstructionScript");

	AStructureTurretBallistaBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.ExecuteUbergraph_StructureTurretBallistaBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretBallistaBaseBP_C::ExecuteUbergraph_StructureTurretBallistaBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.ExecuteUbergraph_StructureTurretBallistaBaseBP");

	AStructureTurretBallistaBaseBP_C_ExecuteUbergraph_StructureTurretBallistaBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
