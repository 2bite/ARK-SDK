// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapHarpoon_Net_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapHarpoon_Net.WeapHarpoon_Net_C.Remote Set Crosshair Size
// ()
// Parameters:
// float                          InSize                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutSize                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapHarpoon_Net_C::Remote_Set_Crosshair_Size(float InSize, float* OutSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoon_Net.WeapHarpoon_Net_C.Remote Set Crosshair Size");

	AWeapHarpoon_Net_C_Remote_Set_Crosshair_Size_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSize != nullptr)
		*OutSize = params.OutSize;
}


// Function WeapHarpoon_Net.WeapHarpoon_Net_C.Remote Set Crosshair Color
// ()
// Parameters:
// struct FLinearColor            InColor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            outColor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapHarpoon_Net_C::Remote_Set_Crosshair_Color(const struct FLinearColor& InColor, struct FLinearColor* outColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoon_Net.WeapHarpoon_Net_C.Remote Set Crosshair Color");

	AWeapHarpoon_Net_C_Remote_Set_Crosshair_Color_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outColor != nullptr)
		*outColor = params.outColor;
}


// Function WeapHarpoon_Net.WeapHarpoon_Net_C.GetHudData
// (Exec, NetResponse, Public, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  ProjectileClass                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SocketLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FireDirection                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AimedTargetCheckRadius         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsFPV                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapHarpoon_Net_C::GetHudData(class UClass** ProjectileClass, struct FVector* SocketLocation, struct FVector* FireDirection, float* AimedTargetCheckRadius, bool* IsFPV)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoon_Net.WeapHarpoon_Net_C.GetHudData");

	AWeapHarpoon_Net_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectileClass != nullptr)
		*ProjectileClass = params.ProjectileClass;
	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;
	if (FireDirection != nullptr)
		*FireDirection = params.FireDirection;
	if (AimedTargetCheckRadius != nullptr)
		*AimedTargetCheckRadius = params.AimedTargetCheckRadius;
	if (IsFPV != nullptr)
		*IsFPV = params.IsFPV;
}


// Function WeapHarpoon_Net.WeapHarpoon_Net_C.BPGetCrosshairColor
// ()
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor AWeapHarpoon_Net_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoon_Net.WeapHarpoon_Net_C.BPGetCrosshairColor");

	AWeapHarpoon_Net_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapHarpoon_Net.WeapHarpoon_Net_C.BPStartEquippedNotify
// ()

void AWeapHarpoon_Net_C::BPStartEquippedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoon_Net.WeapHarpoon_Net_C.BPStartEquippedNotify");

	AWeapHarpoon_Net_C_BPStartEquippedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapHarpoon_Net.WeapHarpoon_Net_C.StartUnequipEvent
// ()

void AWeapHarpoon_Net_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoon_Net.WeapHarpoon_Net_C.StartUnequipEvent");

	AWeapHarpoon_Net_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapHarpoon_Net.WeapHarpoon_Net_C.ReceiveDestroyed
// ()

void AWeapHarpoon_Net_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoon_Net.WeapHarpoon_Net_C.ReceiveDestroyed");

	AWeapHarpoon_Net_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapHarpoon_Net.WeapHarpoon_Net_C.GetCrosshairColor
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapHarpoon_Net_C::GetCrosshairColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoon_Net.WeapHarpoon_Net_C.GetCrosshairColor");

	AWeapHarpoon_Net_C_GetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function WeapHarpoon_Net.WeapHarpoon_Net_C.BPDrawHud
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)

void AWeapHarpoon_Net_C::BPDrawHud(class AShooterHUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoon_Net.WeapHarpoon_Net_C.BPDrawHud");

	AWeapHarpoon_Net_C_BPDrawHud_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapHarpoon_Net.WeapHarpoon_Net_C.UserConstructionScript
// ()

void AWeapHarpoon_Net_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoon_Net.WeapHarpoon_Net_C.UserConstructionScript");

	AWeapHarpoon_Net_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapHarpoon_Net.WeapHarpoon_Net_C.ExecuteUbergraph_WeapHarpoon_Net
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapHarpoon_Net_C::ExecuteUbergraph_WeapHarpoon_Net(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoon_Net.WeapHarpoon_Net_C.ExecuteUbergraph_WeapHarpoon_Net");

	AWeapHarpoon_Net_C_ExecuteUbergraph_WeapHarpoon_Net_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
