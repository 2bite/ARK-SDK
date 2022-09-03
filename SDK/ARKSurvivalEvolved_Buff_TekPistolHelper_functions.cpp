// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistolHelper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.BPReactivateWithDamageCauser
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ForDamageCauser                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistolHelper_C::BPReactivateWithDamageCauser(class AActor** ForInstigator, class AActor** ForDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.BPReactivateWithDamageCauser");

	ABuff_TekPistolHelper_C_BPReactivateWithDamageCauser_Params params;
	params.ForInstigator = ForInstigator;
	params.ForDamageCauser = ForDamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.Set HUDElement Location and Scale from World Projection
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FHUDElement             HUDElement                     (Parm, OutParm, ReferenceParm)
// struct FVector                 WorldOffsetWhenClose           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldOffsetWhenFar             (Parm, ZeroConstructor, IsPlainOldData)
// struct FHUDElement             Out_Elem                       (Parm, OutParm)
// bool                           IsTargetOnScreen               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistolHelper_C::Set_HUDElement_Location_and_Scale_from_World_Projection(class APlayerController* PlayerController, class AActor* TargetActor, const struct FVector& WorldOffsetWhenClose, const struct FVector& WorldOffsetWhenFar, struct FHUDElement* HUDElement, struct FHUDElement* Out_Elem, bool* IsTargetOnScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.Set HUDElement Location and Scale from World Projection");

	ABuff_TekPistolHelper_C_Set_HUDElement_Location_and_Scale_from_World_Projection_Params params;
	params.PlayerController = PlayerController;
	params.TargetActor = TargetActor;
	params.WorldOffsetWhenClose = WorldOffsetWhenClose;
	params.WorldOffsetWhenFar = WorldOffsetWhenFar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUDElement != nullptr)
		*HUDElement = params.HUDElement;
	if (Out_Elem != nullptr)
		*Out_Elem = params.Out_Elem;
	if (IsTargetOnScreen != nullptr)
		*IsTargetOnScreen = params.IsTargetOnScreen;
}


// Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.BPGetHUDElements
// (NetReliable, Static, MulticastDelegate, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_TekPistolHelper_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.BPGetHUDElements");

	ABuff_TekPistolHelper_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.UserConstructionScript
// ()

void ABuff_TekPistolHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.UserConstructionScript");

	ABuff_TekPistolHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.ExecuteUbergraph_Buff_TekPistolHelper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistolHelper_C::ExecuteUbergraph_Buff_TekPistolHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.ExecuteUbergraph_Buff_TekPistolHelper");

	ABuff_TekPistolHelper_C_ExecuteUbergraph_Buff_TekPistolHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
