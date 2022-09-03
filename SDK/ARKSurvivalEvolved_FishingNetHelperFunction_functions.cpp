// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FishingNetHelperFunction_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FishingNetHelperFunction.FishingNetHelperFunction_C.Stop Reeling
// ()
// Parameters:
// class UObject*                 Fisher                         (Parm, ZeroConstructor, IsPlainOldData)

void UFishingNetHelperFunction_C::Stop_Reeling(class UObject* Fisher)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.Stop Reeling");

	UFishingNetHelperFunction_C_Stop_Reeling_Params params;
	params.Fisher = Fisher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FishingNetHelperFunction.FishingNetHelperFunction_C.Cancel Cast
// ()
// Parameters:
// class UObject*                 Projectile_Owner               (Parm, ZeroConstructor, IsPlainOldData)

void UFishingNetHelperFunction_C::Cancel_Cast(class UObject* Projectile_Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.Cancel Cast");

	UFishingNetHelperFunction_C_Cancel_Cast_Params params;
	params.Projectile_Owner = Projectile_Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FishingNetHelperFunction.FishingNetHelperFunction_C.Caught Fish
// ()
// Parameters:
// class UObject*                 Projectile_Owner               (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    fish                           (Parm, ZeroConstructor, IsPlainOldData)

void UFishingNetHelperFunction_C::Caught_Fish(class UObject* Projectile_Owner, class APrimalDinoCharacter* fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.Caught Fish");

	UFishingNetHelperFunction_C_Caught_Fish_Params params;
	params.Projectile_Owner = Projectile_Owner;
	params.fish = fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FishingNetHelperFunction.FishingNetHelperFunction_C.Pass Projectile Reference
// ()
// Parameters:
// class UObject*                 Projectile_Owner               (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterProjectile*      Projectile                     (Parm, ZeroConstructor, IsPlainOldData)

void UFishingNetHelperFunction_C::Pass_Projectile_Reference(class UObject* Projectile_Owner, class AShooterProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.Pass Projectile Reference");

	UFishingNetHelperFunction_C_Pass_Projectile_Reference_Params params;
	params.Projectile_Owner = Projectile_Owner;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FishingNetHelperFunction.FishingNetHelperFunction_C.reel
// ()
// Parameters:
// class UObject*                 Fisher                         (Parm, ZeroConstructor, IsPlainOldData)

void UFishingNetHelperFunction_C::reel(class UObject* Fisher)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.reel");

	UFishingNetHelperFunction_C_reel_Params params;
	params.Fisher = Fisher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FishingNetHelperFunction.FishingNetHelperFunction_C.Update Rope
// ()
// Parameters:
// class AShooterProjectile*      net_projectile                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Rope_Endpoint_Location         (Parm, ZeroConstructor, IsPlainOldData)

void UFishingNetHelperFunction_C::Update_Rope(class AShooterProjectile* net_projectile, const struct FVector& Rope_Endpoint_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.Update Rope");

	UFishingNetHelperFunction_C_Update_Rope_Params params;
	params.net_projectile = net_projectile;
	params.Rope_Endpoint_Location = Rope_Endpoint_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FishingNetHelperFunction.FishingNetHelperFunction_C.Notify Net Collided With Water
// ()
// Parameters:
// class UObject*                 Projectile_Owner               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Water_Collide_Location         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Projectile_Rotation            (Parm, ZeroConstructor, IsPlainOldData)

void UFishingNetHelperFunction_C::Notify_Net_Collided_With_Water(class UObject* Projectile_Owner, const struct FVector& Water_Collide_Location, const struct FRotator& Projectile_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.Notify Net Collided With Water");

	UFishingNetHelperFunction_C_Notify_Net_Collided_With_Water_Params params;
	params.Projectile_Owner = Projectile_Owner;
	params.Water_Collide_Location = Water_Collide_Location;
	params.Projectile_Rotation = Projectile_Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FishingNetHelperFunction.FishingNetHelperFunction_C.ExecuteUbergraph_FishingNetHelperFunction
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFishingNetHelperFunction_C::ExecuteUbergraph_FishingNetHelperFunction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FishingNetHelperFunction.FishingNetHelperFunction_C.ExecuteUbergraph_FishingNetHelperFunction");

	UFishingNetHelperFunction_C_ExecuteUbergraph_FishingNetHelperFunction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
