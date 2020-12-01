// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerControllerBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanFit
// (Exec, MulticastDelegate, Protected, Delegate, HasDefaults, BlueprintEvent)
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

void APlayerControllerBlueprint_C::CanFit(const struct FVector& Location, float VerticalOffset, float Angle, float HorizontalOffset, float Radius, float HalfHeight, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanFit");

	APlayerControllerBlueprint_C_CanFit_Params params;
	params.Location = Location;
	params.VerticalOffset = VerticalOffset;
	params.Angle = Angle;
	params.HorizontalOffset = HorizontalOffset;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.SpawningActor = SpawningActor;
	params.IgnoreActor = IgnoreActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanDeploy
// ()
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  IgnoreActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerControllerBlueprint_C::CanDeploy(class UClass* Class, const struct FVector& Location, class AActor* Actor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanDeploy");

	APlayerControllerBlueprint_C_CanDeploy_Params params;
	params.Class = Class;
	params.Location = Location;
	params.Actor = Actor;
	params.IgnoreActor = IgnoreActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPCheckCanDinoSpawnFromLocation
// ()
// Parameters:
// class UClass**                 DinoClass                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CheckLocation                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APlayerControllerBlueprint_C::BPCheckCanDinoSpawnFromLocation(class UClass** DinoClass, struct FVector* CheckLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPCheckCanDinoSpawnFromLocation");

	APlayerControllerBlueprint_C_BPCheckCanDinoSpawnFromLocation_Params params;
	params.DinoClass = DinoClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckLocation != nullptr)
		*CheckLocation = params.CheckLocation;

	return params.ReturnValue;
}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.UserConstructionScript
// ()

void APlayerControllerBlueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.UserConstructionScript");

	APlayerControllerBlueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ExecuteUbergraph_PlayerControllerBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerControllerBlueprint_C::ExecuteUbergraph_PlayerControllerBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ExecuteUbergraph_PlayerControllerBlueprint");

	APlayerControllerBlueprint_C_ExecuteUbergraph_PlayerControllerBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
