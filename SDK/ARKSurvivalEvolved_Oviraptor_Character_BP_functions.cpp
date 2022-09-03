// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Oviraptor_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.OnRep_CarriedItem
// ()

void AOviraptor_Character_BP_C::OnRep_CarriedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.OnRep_CarriedItem");

	AOviraptor_Character_BP_C_OnRep_CarriedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.FindCarriedEgg
// ()
// Parameters:
// bool                           bIsAnimNotify                  (Parm, ZeroConstructor, IsPlainOldData)

void AOviraptor_Character_BP_C::FindCarriedEgg(bool bIsAnimNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.FindCarriedEgg");

	AOviraptor_Character_BP_C_FindCarriedEgg_Params params;
	params.bIsAnimNotify = bIsAnimNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UpdateEggBoost
// ()

void AOviraptor_Character_BP_C::UpdateEggBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UpdateEggBoost");

	AOviraptor_Character_BP_C_UpdateEggBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UserConstructionScript
// ()

void AOviraptor_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UserConstructionScript");

	AOviraptor_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintTamedTick
// ()

void AOviraptor_Character_BP_C::BlueprintTamedTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintTamedTick");

	AOviraptor_Character_BP_C_BlueprintTamedTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AOviraptor_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AOviraptor_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.DoCheckEgg
// ()

void AOviraptor_Character_BP_C::DoCheckEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.DoCheckEgg");

	AOviraptor_Character_BP_C_DoCheckEgg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.ExecuteUbergraph_Oviraptor_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOviraptor_Character_BP_C::ExecuteUbergraph_Oviraptor_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.ExecuteUbergraph_Oviraptor_Character_BP");

	AOviraptor_Character_BP_C_ExecuteUbergraph_Oviraptor_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
