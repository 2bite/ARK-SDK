// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPaintbrush_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapPaintbrush.WeapPaintbrush_C.BPGetSelectedMeleeAttackAnim
// ()
// Parameters:
// struct FWeaponAnim             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FWeaponAnim AWeapPaintbrush_C::BPGetSelectedMeleeAttackAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPaintbrush.WeapPaintbrush_C.BPGetSelectedMeleeAttackAnim");

	AWeapPaintbrush_C_BPGetSelectedMeleeAttackAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapPaintbrush.WeapPaintbrush_C.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapPaintbrush_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPaintbrush.WeapPaintbrush_C.BPAnimNotifyCustomEvent");

	AWeapPaintbrush_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPaintbrush.WeapPaintbrush_C.UserConstructionScript
// ()

void AWeapPaintbrush_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPaintbrush.WeapPaintbrush_C.UserConstructionScript");

	AWeapPaintbrush_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPaintbrush.WeapPaintbrush_C.ExecuteUbergraph_WeapPaintbrush
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapPaintbrush_C::ExecuteUbergraph_WeapPaintbrush(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPaintbrush.WeapPaintbrush_C.ExecuteUbergraph_WeapPaintbrush");

	AWeapPaintbrush_C_ExecuteUbergraph_WeapPaintbrush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
