// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponEmptyCryopod_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.Get Stat Value for Display
// (Net, Native, Event, Static, Protected, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// float                          MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue> Stat                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void UPrimalItem_WeaponEmptyCryopod_C::STATIC_Get_Stat_Value_for_Display(float MaxValue, TEnumAsByte<EPrimalCharacterStatusValue> Stat, float Value, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.Get Stat Value for Display");

	UPrimalItem_WeaponEmptyCryopod_C_Get_Stat_Value_for_Display_Params params;
	params.MaxValue = MaxValue;
	params.Stat = Stat;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetStatDisplayName
// (NetReliable, NetRequest, NetResponse, Static, Protected, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> Stat                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayName                    (Parm, OutParm)

void UPrimalItem_WeaponEmptyCryopod_C::STATIC_GetStatDisplayName(TEnumAsByte<EPrimalCharacterStatusValue> Stat, struct FText* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetStatDisplayName");

	UPrimalItem_WeaponEmptyCryopod_C_GetStatDisplayName_Params params;
	params.Stat = Stat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetItemDescription
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, Protected, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_WeaponEmptyCryopod_C::STATIC_BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetItemDescription");

	UPrimalItem_WeaponEmptyCryopod_C_BPGetItemDescription_Params params;
	params.InDescription = InDescription;
	params.bGetLongDescription = bGetLongDescription;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPInitIconMaterial
// (NetReliable, Static, NetMulticast, Public, NetServer, HasDefaults, NetClient, Const, NetValidate)

void UPrimalItem_WeaponEmptyCryopod_C::STATIC_BPInitIconMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPInitIconMaterial");

	UPrimalItem_WeaponEmptyCryopod_C_BPInitIconMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomIconMaterialParent
// ()
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UPrimalItem_WeaponEmptyCryopod_C::BPGetCustomIconMaterialParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomIconMaterialParent");

	UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomIconMaterialParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPTributeItemUploaded
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Public, NetServer, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// class UObject**                ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponEmptyCryopod_C::STATIC_BPTributeItemUploaded(class UObject** ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPTributeItemUploaded");

	UPrimalItem_WeaponEmptyCryopod_C_BPTributeItemUploaded_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPTributeItemDownloaded
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, NetServer, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// class UObject**                ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponEmptyCryopod_C::STATIC_BPTributeItemDownloaded(class UObject** ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPTributeItemDownloaded");

	UPrimalItem_WeaponEmptyCryopod_C_BPTributeItemDownloaded_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPItemBelowDurabilityThreshold
// ()

void UPrimalItem_WeaponEmptyCryopod_C::BPItemBelowDurabilityThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPItemBelowDurabilityThreshold");

	UPrimalItem_WeaponEmptyCryopod_C_BPItemBelowDurabilityThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomInventoryWidgetTextColor
// ()
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor UPrimalItem_WeaponEmptyCryopod_C::BPGetCustomInventoryWidgetTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomInventoryWidgetTextColor");

	UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomInventoryWidgetTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomDurabilityText
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_WeaponEmptyCryopod_C::BPGetCustomDurabilityText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomDurabilityText");

	UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomDurabilityText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomAutoDecreaseDurabilityPerInterval
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimalItem_WeaponEmptyCryopod_C::BPGetCustomAutoDecreaseDurabilityPerInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomAutoDecreaseDurabilityPerInterval");

	UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomAutoDecreaseDurabilityPerInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomInventoryWidgetText
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_WeaponEmptyCryopod_C::BPGetCustomInventoryWidgetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomInventoryWidgetText");

	UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomInventoryWidgetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPItemBroken
// (Event, NetResponse, Static, NetMulticast, Public, NetServer, HasDefaults, NetClient, Const, NetValidate)

void UPrimalItem_WeaponEmptyCryopod_C::STATIC_BPItemBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPItemBroken");

	UPrimalItem_WeaponEmptyCryopod_C_BPItemBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.TryDeploy
// (Event, Public, NetServer, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SpawningActor                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  IgnoreActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Deployed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  FailureReason                  (Parm, OutParm, ZeroConstructor)

void UPrimalItem_WeaponEmptyCryopod_C::TryDeploy(const struct FVector& Location, const struct FRotator& Rotation, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Deployed, struct FVector* NewLocation, class FString* FailureReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.TryDeploy");

	UPrimalItem_WeaponEmptyCryopod_C_TryDeploy_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.SpawningActor = SpawningActor;
	params.IgnoreActor = IgnoreActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Deployed != nullptr)
		*Deployed = params.Deployed;
	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
	if (FailureReason != nullptr)
		*FailureReason = params.FailureReason;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.CanFit
// (NetReliable, Exec, Native, Event, NetResponse, Public, NetServer, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          VerticalOffset                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          HorizontalOffset               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SpawningActor                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  IgnoreActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponEmptyCryopod_C::CanFit(const struct FVector& Location, float VerticalOffset, float Angle, float HorizontalOffset, float Radius, float HalfHeight, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.CanFit");

	UPrimalItem_WeaponEmptyCryopod_C_CanFit_Params params;
	params.Location = Location;
	params.VerticalOffset = VerticalOffset;
	params.Angle = Angle;
	params.HorizontalOffset = HorizontalOffset;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.SpawningActor = SpawningActor;
	params.IgnoreActor = IgnoreActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.CanDeploy
// ()
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SpawningActor                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  IgnoreActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  FailureReason                  (Parm, OutParm, ZeroConstructor)

void UPrimalItem_WeaponEmptyCryopod_C::CanDeploy(class UClass* Class, const struct FVector& Location, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation, class FString* FailureReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.CanDeploy");

	UPrimalItem_WeaponEmptyCryopod_C_CanDeploy_Params params;
	params.Class = Class;
	params.Location = Location;
	params.SpawningActor = SpawningActor;
	params.IgnoreActor = IgnoreActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
	if (FailureReason != nullptr)
		*FailureReason = params.FailureReason;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetItemName
// (NetRequest, Exec, Event, NetResponse, Static, Public, NetServer, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// class FString*                 ItemNameIn                     (Parm, ZeroConstructor)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_WeaponEmptyCryopod_C::STATIC_BPGetItemName(class FString* ItemNameIn, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetItemName");

	UPrimalItem_WeaponEmptyCryopod_C_BPGetItemName_Params params;
	params.ItemNameIn = ItemNameIn;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BrokenDeploy
// ()

void UPrimalItem_WeaponEmptyCryopod_C::BrokenDeploy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BrokenDeploy");

	UPrimalItem_WeaponEmptyCryopod_C_BrokenDeploy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponEmptyCryopod_C::ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod");

	UPrimalItem_WeaponEmptyCryopod_C_ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.NewEventDispatcher__DelegateSignature
// ()

void UPrimalItem_WeaponEmptyCryopod_C::NewEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.NewEventDispatcher__DelegateSignature");

	UPrimalItem_WeaponEmptyCryopod_C_NewEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
