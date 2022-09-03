// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_SunGlasses_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.OrbitCameraChanged
// ()
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SunGlasses_C::OrbitCameraChanged(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.OrbitCameraChanged");

	UPrimalItemSkin_SunGlasses_C_OrbitCameraChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.EnteredThirdPerson
// ()

void UPrimalItemSkin_SunGlasses_C::EnteredThirdPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.EnteredThirdPerson");

	UPrimalItemSkin_SunGlasses_C_EnteredThirdPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.EnteredFirstPerson
// ()

void UPrimalItemSkin_SunGlasses_C::EnteredFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.EnteredFirstPerson");

	UPrimalItemSkin_SunGlasses_C_EnteredFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.CreateSunglassesComponent
// ()
// Parameters:
// class USkeletalMeshComponent*  ParentComponent                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Created                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SunGlasses_C::CreateSunglassesComponent(class USkeletalMeshComponent* ParentComponent, bool* Created)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.CreateSunglassesComponent");

	UPrimalItemSkin_SunGlasses_C_CreateSunglassesComponent_Params params;
	params.ParentComponent = ParentComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Created != nullptr)
		*Created = params.Created;
}


// Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SunGlasses_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.BPAnimNotifyCustomEvent");

	UPrimalItemSkin_SunGlasses_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.ExecuteUbergraph_PrimalItemSkin_SunGlasses
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SunGlasses_C::ExecuteUbergraph_PrimalItemSkin_SunGlasses(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.ExecuteUbergraph_PrimalItemSkin_SunGlasses");

	UPrimalItemSkin_SunGlasses_C_ExecuteUbergraph_PrimalItemSkin_SunGlasses_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
