// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_TekWyvern_Projectile_Mine_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.BPPostInitializeComponents
// ()

void AProj_TekWyvern_Projectile_Mine_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.BPPostInitializeComponents");

	AProj_TekWyvern_Projectile_Mine_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.UpdateBeam
// ()
// Parameters:
// TArray<class AActor*>          actors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AProj_TekWyvern_Projectile_Mine_C::UpdateBeam(TArray<class AActor*>* actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.UpdateBeam");

	AProj_TekWyvern_Projectile_Mine_C_UpdateBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (actors != nullptr)
		*actors = params.actors;
}


// Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProj_TekWyvern_Projectile_Mine_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ReceiveTick");

	AProj_TekWyvern_Projectile_Mine_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.UserConstructionScript
// ()

void AProj_TekWyvern_Projectile_Mine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.UserConstructionScript");

	AProj_TekWyvern_Projectile_Mine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ReceiveBeginPlay
// ()

void AProj_TekWyvern_Projectile_Mine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ReceiveBeginPlay");

	AProj_TekWyvern_Projectile_Mine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ExecuteUbergraph_Proj_TekWyvern_Projectile_Mine
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProj_TekWyvern_Projectile_Mine_C::ExecuteUbergraph_Proj_TekWyvern_Projectile_Mine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C.ExecuteUbergraph_Proj_TekWyvern_Projectile_Mine");

	AProj_TekWyvern_Projectile_Mine_C_ExecuteUbergraph_Proj_TekWyvern_Projectile_Mine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
