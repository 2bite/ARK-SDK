// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItem_GachaPod_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.UpdateItemName
// ()

void ADroppedItem_GachaPod_C::UpdateItemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.UpdateItemName");

	ADroppedItem_GachaPod_C_UpdateItemName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ReceiveHit
// ()
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ADroppedItem_GachaPod_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ReceiveHit");

	ADroppedItem_GachaPod_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.OnRep_ItemQuality
// ()

void ADroppedItem_GachaPod_C::OnRep_ItemQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.OnRep_ItemQuality");

	ADroppedItem_GachaPod_C_OnRep_ItemQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ReceiveBeginPlay
// ()

void ADroppedItem_GachaPod_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ReceiveBeginPlay");

	ADroppedItem_GachaPod_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.CheckForItem
// (Exec, Native, Event, NetMulticast, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void ADroppedItem_GachaPod_C::CheckForItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.CheckForItem");

	ADroppedItem_GachaPod_C_CheckForItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ActivateFX
// (NetReliable, Exec, NetResponse, NetMulticast, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void ADroppedItem_GachaPod_C::ActivateFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ActivateFX");

	ADroppedItem_GachaPod_C_ActivateFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.UserConstructionScript
// ()

void ADroppedItem_GachaPod_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.UserConstructionScript");

	ADroppedItem_GachaPod_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ColorShift
// ()

void ADroppedItem_GachaPod_C::ColorShift()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ColorShift");

	ADroppedItem_GachaPod_C_ColorShift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ExecuteUbergraph_DroppedItem_GachaPod
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedItem_GachaPod_C::ExecuteUbergraph_DroppedItem_GachaPod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ExecuteUbergraph_DroppedItem_GachaPod");

	ADroppedItem_GachaPod_C_ExecuteUbergraph_DroppedItem_GachaPod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
