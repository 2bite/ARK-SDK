// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pela_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pela_Character_BP.Pela_Character_BP_C.BP_ForceAllowMountedWeapon
// ()
// Parameters:
// class UClass**                 WeaponTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APela_Character_BP_C::BP_ForceAllowMountedWeapon(class UClass** WeaponTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pela_Character_BP.Pela_Character_BP_C.BP_ForceAllowMountedWeapon");

	APela_Character_BP_C_BP_ForceAllowMountedWeapon_Params params;
	params.WeaponTemplate = WeaponTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pela_Character_BP.Pela_Character_BP_C.GetDefaultPela
// ()
// Parameters:
// class APela_Character_BP_C*    Default                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APela_Character_BP_C::GetDefaultPela(class APela_Character_BP_C** Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pela_Character_BP.Pela_Character_BP_C.GetDefaultPela");

	APela_Character_BP_C_GetDefaultPela_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Default != nullptr)
		*Default = params.Default;
}


// Function Pela_Character_BP.Pela_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void APela_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pela_Character_BP.Pela_Character_BP_C.BPNotifyClearRider");

	APela_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pela_Character_BP.Pela_Character_BP_C.InterpCamera TPV
// ()
// Parameters:
// struct FVector                 TargetOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void APela_Character_BP_C::InterpCamera_TPV(const struct FVector& TargetOffset, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pela_Character_BP.Pela_Character_BP_C.InterpCamera TPV");

	APela_Character_BP_C_InterpCamera_TPV_Params params;
	params.TargetOffset = TargetOffset;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pela_Character_BP.Pela_Character_BP_C.UserConstructionScript
// ()

void APela_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pela_Character_BP.Pela_Character_BP_C.UserConstructionScript");

	APela_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pela_Character_BP.Pela_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void APela_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pela_Character_BP.Pela_Character_BP_C.ReceiveTick");

	APela_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pela_Character_BP.Pela_Character_BP_C.ExecuteUbergraph_Pela_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APela_Character_BP_C::ExecuteUbergraph_Pela_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pela_Character_BP.Pela_Character_BP_C.ExecuteUbergraph_Pela_Character_BP");

	APela_Character_BP_C_ExecuteUbergraph_Pela_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
