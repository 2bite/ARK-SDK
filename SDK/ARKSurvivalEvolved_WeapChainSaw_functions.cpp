// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapChainSaw_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapChainSaw.WeapChainSaw_C.StopIdleSound
// ()

void AWeapChainSaw_C::StopIdleSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw.WeapChainSaw_C.StopIdleSound");

	AWeapChainSaw_C_StopIdleSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapChainSaw.WeapChainSaw_C.Chainsaw Can Start
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapChainSaw_C::Chainsaw_Can_Start(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw.WeapChainSaw_C.Chainsaw Can Start");

	AWeapChainSaw_C_Chainsaw_Can_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WeapChainSaw.WeapChainSaw_C.ChainsawCanFire
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapChainSaw_C::ChainsawCanFire(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw.WeapChainSaw_C.ChainsawCanFire");

	AWeapChainSaw_C_ChainsawCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function WeapChainSaw.WeapChainSaw_C.UpdateIdleSound
// ()

void AWeapChainSaw_C::UpdateIdleSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw.WeapChainSaw_C.UpdateIdleSound");

	AWeapChainSaw_C_UpdateIdleSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapChainSaw.WeapChainSaw_C.ChainsawHasAmmo
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapChainSaw_C::ChainsawHasAmmo(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw.WeapChainSaw_C.ChainsawHasAmmo");

	AWeapChainSaw_C_ChainsawHasAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WeapChainSaw.WeapChainSaw_C.UserConstructionScript
// ()

void AWeapChainSaw_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw.WeapChainSaw_C.UserConstructionScript");

	AWeapChainSaw_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapChainSaw.WeapChainSaw_C.AnimNotify_Equip
// ()

void AWeapChainSaw_C::AnimNotify_Equip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw.WeapChainSaw_C.AnimNotify_Equip");

	AWeapChainSaw_C_AnimNotify_Equip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapChainSaw.WeapChainSaw_C.AnimNotify_Unequip
// ()

void AWeapChainSaw_C::AnimNotify_Unequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw.WeapChainSaw_C.AnimNotify_Unequip");

	AWeapChainSaw_C_AnimNotify_Unequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapChainSaw.WeapChainSaw_C.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapChainSaw_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw.WeapChainSaw_C.BPAnimNotifyCustomEvent");

	AWeapChainSaw_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapChainSaw.WeapChainSaw_C.ReceiveBeginPlay
// ()

void AWeapChainSaw_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw.WeapChainSaw_C.ReceiveBeginPlay");

	AWeapChainSaw_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapChainSaw.WeapChainSaw_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AWeapChainSaw_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw.WeapChainSaw_C.ReceiveEndPlay");

	AWeapChainSaw_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapChainSaw.WeapChainSaw_C.ExecuteUbergraph_WeapChainSaw
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapChainSaw_C::ExecuteUbergraph_WeapChainSaw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapChainSaw.WeapChainSaw_C.ExecuteUbergraph_WeapChainSaw");

	AWeapChainSaw_C_ExecuteUbergraph_WeapChainSaw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
