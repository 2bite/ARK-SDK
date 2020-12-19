// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGlowStick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjGlowStick.ProjGlowStick_C.GetGlowstickOwner
// ()
// Parameters:
// class AActor*                  glowstickOwner                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjGlowStick_C::GetGlowstickOwner(class AActor** glowstickOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.GetGlowstickOwner");

	AProjGlowStick_C_GetGlowstickOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (glowstickOwner != nullptr)
		*glowstickOwner = params.glowstickOwner;
}


// Function ProjGlowStick.ProjGlowStick_C.ReceiveHit
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

void AProjGlowStick_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.ReceiveHit");

	AProjGlowStick_C_ReceiveHit_Params params;
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


// Function ProjGlowStick.ProjGlowStick_C.GetDefaultGlowStickRef
// ()
// Parameters:
// class AWeapGlowStick_C*        Ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjGlowStick_C::GetDefaultGlowStickRef(class AWeapGlowStick_C** Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.GetDefaultGlowStickRef");

	AProjGlowStick_C_GetDefaultGlowStickRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;
}


// Function ProjGlowStick.ProjGlowStick_C.HideAttachedComponents
// ()

void AProjGlowStick_C::HideAttachedComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.HideAttachedComponents");

	AProjGlowStick_C_HideAttachedComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.Set Collision Response
// ()

void AProjGlowStick_C::Set_Collision_Response()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.Set Collision Response");

	AProjGlowStick_C_Set_Collision_Response_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.IsAttachedToCharacter
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjGlowStick_C::IsAttachedToCharacter(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.IsAttachedToCharacter");

	AProjGlowStick_C_IsAttachedToCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjGlowStick.ProjGlowStick_C.Get Average Normal Within Radius
// (NetRequest, Exec, Event, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjGlowStick_C::Get_Average_Normal_Within_Radius(const struct FVector& Location, float Radius, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.Get Average Normal Within Radius");

	AProjGlowStick_C_Get_Average_Normal_Within_Radius_Params params;
	params.Location = Location;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjGlowStick.ProjGlowStick_C.Reset Scale
// ()

void AProjGlowStick_C::Reset_Scale()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.Reset Scale");

	AProjGlowStick_C_Reset_Scale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.Create Dynamic Material
// ()

void AProjGlowStick_C::Create_Dynamic_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.Create Dynamic Material");

	AProjGlowStick_C_Create_Dynamic_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.Update Emissiveness
// ()

void AProjGlowStick_C::Update_Emissiveness()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.Update Emissiveness");

	AProjGlowStick_C_Update_Emissiveness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.Check For Fade Out
// ()

void AProjGlowStick_C::Check_For_Fade_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.Check For Fade Out");

	AProjGlowStick_C_Check_For_Fade_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.Set Collision
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void AProjGlowStick_C::Set_Collision(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.Set Collision");

	AProjGlowStick_C_Set_Collision_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.InitGlowStickProjectile
// ()

void AProjGlowStick_C::InitGlowStickProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.InitGlowStickProjectile");

	AProjGlowStick_C_InitGlowStickProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.Hide Weapon
// ()

void AProjGlowStick_C::Hide_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.Hide Weapon");

	AProjGlowStick_C_Hide_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.BPAttachedRootComponent
// ()

void AProjGlowStick_C::BPAttachedRootComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.BPAttachedRootComponent");

	AProjGlowStick_C_BPAttachedRootComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.ReceiveBeginPlay
// ()

void AProjGlowStick_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.ReceiveBeginPlay");

	AProjGlowStick_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjGlowStick_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.OnExplode");

	AProjGlowStick_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjGlowStick.ProjGlowStick_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjGlowStick_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.ReceiveTick");

	AProjGlowStick_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.Fade Out Light
// ()
// Parameters:
// float                          Delta_Seconds                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroy                       (Parm, ZeroConstructor, IsPlainOldData)

void AProjGlowStick_C::Fade_Out_Light(float Delta_Seconds, bool bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.Fade Out Light");

	AProjGlowStick_C_Fade_Out_Light_Params params;
	params.Delta_Seconds = Delta_Seconds;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.UserConstructionScript
// ()

void AProjGlowStick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.UserConstructionScript");

	AProjGlowStick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjGlowStick_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.ReceiveAnyDamage");

	AProjGlowStick_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGlowStick.ProjGlowStick_C.ExecuteUbergraph_ProjGlowStick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGlowStick_C::ExecuteUbergraph_ProjGlowStick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGlowStick.ProjGlowStick_C.ExecuteUbergraph_ProjGlowStick");

	AProjGlowStick_C_ExecuteUbergraph_ProjGlowStick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
