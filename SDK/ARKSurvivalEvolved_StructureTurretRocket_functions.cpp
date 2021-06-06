// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretRocket_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureTurretRocket.StructureTurretRocket_C.GetHudData
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComponent             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  CurrentAmmoItemTemplate        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          AmmoItemTemplates              (Parm, OutParm, ZeroConstructor)
// int                            LowAmmoWarningAmount           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructureTurretRocket_C::GetHudData(class UPrimalInventoryComponent** InventoryComponent, class UClass** CurrentAmmoItemTemplate, TArray<class UClass*>* AmmoItemTemplates, int* LowAmmoWarningAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretRocket.StructureTurretRocket_C.GetHudData");

	AStructureTurretRocket_C_GetHudData_Params params;

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


// Function StructureTurretRocket.StructureTurretRocket_C.BPReleasedPlayer
// ()
// Parameters:
// class AShooterCharacter**      ReleasedChar                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AtSeatNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretRocket_C::BPReleasedPlayer(class AShooterCharacter** ReleasedChar, int* AtSeatNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretRocket.StructureTurretRocket_C.BPReleasedPlayer");

	AStructureTurretRocket_C_BPReleasedPlayer_Params params;
	params.ReleasedChar = ReleasedChar;
	params.AtSeatNumber = AtSeatNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretRocket.StructureTurretRocket_C.UserConstructionScript
// ()

void AStructureTurretRocket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretRocket.StructureTurretRocket_C.UserConstructionScript");

	AStructureTurretRocket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretRocket.StructureTurretRocket_C.ExecuteUbergraph_StructureTurretRocket
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretRocket_C::ExecuteUbergraph_StructureTurretRocket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretRocket.StructureTurretRocket_C.ExecuteUbergraph_StructureTurretRocket");

	AStructureTurretRocket_C_ExecuteUbergraph_StructureTurretRocket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
