// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AmmoContainerHelper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAmmoContainerIcon
// ()
// Parameters:
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_AmmoContainerHelper_C::GetAmmoContainerIcon(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAmmoContainerIcon");

	ABuff_AmmoContainerHelper_C_GetAmmoContainerIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ProvidedAmmoQuantity
// ()
// Parameters:
// class APrimalStructureItemContainer* TurretStructureItemContainer   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AmmoItemTemplate               (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AnyAmmoContainersInRange       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_AmmoContainerHelper_C::ProvidedAmmoQuantity(class APrimalStructureItemContainer* TurretStructureItemContainer, class UClass* AmmoItemTemplate, int* Quantity, bool* AnyAmmoContainersInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ProvidedAmmoQuantity");

	ABuff_AmmoContainerHelper_C_ProvidedAmmoQuantity_Params params;
	params.TurretStructureItemContainer = TurretStructureItemContainer;
	params.AmmoItemTemplate = AmmoItemTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quantity != nullptr)
		*Quantity = params.Quantity;
	if (AnyAmmoContainersInRange != nullptr)
		*AnyAmmoContainersInRange = params.AnyAmmoContainersInRange;
}


// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAllAmmoNearby
// ()
// Parameters:
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            InitialQuantity                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartingLocation               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AmmoClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure*        TurretToCheck                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            finalQuantity                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AnyAmmoContainersInRange       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_AmmoContainerHelper_C::GetAllAmmoNearby(float Range, int InitialQuantity, const struct FVector& StartingLocation, class UClass* AmmoClass, class APrimalStructure* TurretToCheck, int* finalQuantity, bool* AnyAmmoContainersInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAllAmmoNearby");

	ABuff_AmmoContainerHelper_C_GetAllAmmoNearby_Params params;
	params.Range = Range;
	params.InitialQuantity = InitialQuantity;
	params.StartingLocation = StartingLocation;
	params.AmmoClass = AmmoClass;
	params.TurretToCheck = TurretToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (finalQuantity != nullptr)
		*finalQuantity = params.finalQuantity;
	if (AnyAmmoContainersInRange != nullptr)
		*AnyAmmoContainersInRange = params.AnyAmmoContainersInRange;
}


// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.DrawBuffFloatingHUD
// ()
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AmmoContainerHelper_C::DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.DrawBuffFloatingHUD");

	ABuff_AmmoContainerHelper_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.CalculateWidgetLocation
// ()
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumSlots                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_AmmoContainerHelper_C::CalculateWidgetLocation(int SlotIndex, int NumSlots, struct FVector2D* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.CalculateWidgetLocation");

	ABuff_AmmoContainerHelper_C_CalculateWidgetLocation_Params params;
	params.SlotIndex = SlotIndex;
	params.NumSlots = NumSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
}


// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAmmoInfo
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UClass*>          AmmoTypeList                   (Parm, OutParm, ZeroConstructor)
// TArray<int>                    AmmoCountList                  (Parm, OutParm, ZeroConstructor)
// TArray<struct FAmmoCount>      AmmoCounts                     (Parm, OutParm, ZeroConstructor)

void ABuff_AmmoContainerHelper_C::GetAmmoInfo(TArray<class UClass*>* AmmoTypeList, TArray<int>* AmmoCountList, TArray<struct FAmmoCount>* AmmoCounts)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.GetAmmoInfo");

	ABuff_AmmoContainerHelper_C_GetAmmoInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoTypeList != nullptr)
		*AmmoTypeList = params.AmmoTypeList;
	if (AmmoCountList != nullptr)
		*AmmoCountList = params.AmmoCountList;
	if (AmmoCounts != nullptr)
		*AmmoCounts = params.AmmoCounts;
}


// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.SyncHUDElements
// (NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void ABuff_AmmoContainerHelper_C::STATIC_SyncHUDElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.SyncHUDElements");

	ABuff_AmmoContainerHelper_C_SyncHUDElements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_AmmoContainerHelper_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.BPGetHUDElements");

	ABuff_AmmoContainerHelper_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ReceiveBeginPlay
// ()

void ABuff_AmmoContainerHelper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ReceiveBeginPlay");

	ABuff_AmmoContainerHelper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.UserConstructionScript
// ()

void ABuff_AmmoContainerHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.UserConstructionScript");

	ABuff_AmmoContainerHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AmmoContainerHelper_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.BuffTickClient");

	ABuff_AmmoContainerHelper_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ExecuteUbergraph_Buff_AmmoContainerHelper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AmmoContainerHelper_C::ExecuteUbergraph_Buff_AmmoContainerHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmmoContainerHelper.Buff_AmmoContainerHelper_C.ExecuteUbergraph_Buff_AmmoContainerHelper");

	ABuff_AmmoContainerHelper_C_ExecuteUbergraph_Buff_AmmoContainerHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
