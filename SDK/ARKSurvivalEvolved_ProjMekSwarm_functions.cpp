// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMekSwarm_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjMekSwarm.ProjMekSwarm_C.SetupMissileSpawnParticles
// ()
// Parameters:
// class USkeletalMeshComponent*  MekMesh                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void AProjMekSwarm_C::SetupMissileSpawnParticles(class USkeletalMeshComponent* MekMesh, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.SetupMissileSpawnParticles");

	AProjMekSwarm_C_SetupMissileSpawnParticles_Params params;
	params.MekMesh = MekMesh;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjMekSwarm.ProjMekSwarm_C.PointOnGrid
// ()
// Parameters:
// int                            ThisIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          HorizScale                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          VertScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D AProjMekSwarm_C::PointOnGrid(int ThisIndex, int Width, int Height, float HorizScale, float VertScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.PointOnGrid");

	AProjMekSwarm_C_PointOnGrid_Params params;
	params.ThisIndex = ThisIndex;
	params.Width = Width;
	params.Height = Height;
	params.HorizScale = HorizScale;
	params.VertScale = VertScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProjMekSwarm.ProjMekSwarm_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjMekSwarm_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.ReceiveTick");

	AProjMekSwarm_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjMekSwarm.ProjMekSwarm_C.BPGetBoidSpawnLocationAndVelocity
// (NetReliable, Exec, Static, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// int*                           BoidIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBoid                   BoidData                       (Parm, OutParm, ReferenceParm)
// struct FVector                 SpawnLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnVelocity                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjMekSwarm_C::STATIC_BPGetBoidSpawnLocationAndVelocity(int* BoidIndex, struct FBoid* BoidData, struct FVector* SpawnLocation, struct FVector* SpawnVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.BPGetBoidSpawnLocationAndVelocity");

	AProjMekSwarm_C_BPGetBoidSpawnLocationAndVelocity_Params params;
	params.BoidIndex = BoidIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoidData != nullptr)
		*BoidData = params.BoidData;
	if (SpawnLocation != nullptr)
		*SpawnLocation = params.SpawnLocation;
	if (SpawnVelocity != nullptr)
		*SpawnVelocity = params.SpawnVelocity;
}


// Function ProjMekSwarm.ProjMekSwarm_C.UserConstructionScript
// ()

void AProjMekSwarm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.UserConstructionScript");

	AProjMekSwarm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjMekSwarm.ProjMekSwarm_C.BPOnBoidExplode
// ()
// Parameters:
// int*                           BoidIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent** BoidParticles                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AProjMekSwarm_C::BPOnBoidExplode(int* BoidIndex, class UParticleSystemComponent** BoidParticles, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.BPOnBoidExplode");

	AProjMekSwarm_C_BPOnBoidExplode_Params params;
	params.BoidIndex = BoidIndex;
	params.BoidParticles = BoidParticles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function ProjMekSwarm.ProjMekSwarm_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjMekSwarm_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.OnExplode");

	AProjMekSwarm_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjMekSwarm.ProjMekSwarm_C.DisableMissleParticles
// ()
// Parameters:
// class UParticleSystemComponent* Comp                           (Parm, ZeroConstructor, IsPlainOldData)

void AProjMekSwarm_C::DisableMissleParticles(class UParticleSystemComponent* Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.DisableMissleParticles");

	AProjMekSwarm_C_DisableMissleParticles_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjMekSwarm.ProjMekSwarm_C.ExecuteUbergraph_ProjMekSwarm
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjMekSwarm_C::ExecuteUbergraph_ProjMekSwarm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMekSwarm.ProjMekSwarm_C.ExecuteUbergraph_ProjMekSwarm");

	AProjMekSwarm_C_ExecuteUbergraph_ProjMekSwarm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
