// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TestTentacleProjectile_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TestTentacleProjectile.TestTentacleProjectile_C.UserConstructionScript
// ()

void ATestTentacleProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestTentacleProjectile.TestTentacleProjectile_C.UserConstructionScript");

	ATestTentacleProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestTentacleProjectile.TestTentacleProjectile_C.ReceiveBeginPlay
// ()

void ATestTentacleProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestTentacleProjectile.TestTentacleProjectile_C.ReceiveBeginPlay");

	ATestTentacleProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestTentacleProjectile.TestTentacleProjectile_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATestTentacleProjectile_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestTentacleProjectile.TestTentacleProjectile_C.ReceiveTick");

	ATestTentacleProjectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestTentacleProjectile.TestTentacleProjectile_C.ExecuteUbergraph_TestTentacleProjectile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATestTentacleProjectile_C::ExecuteUbergraph_TestTentacleProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestTentacleProjectile.TestTentacleProjectile_C.ExecuteUbergraph_TestTentacleProjectile");

	ATestTentacleProjectile_C_ExecuteUbergraph_TestTentacleProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
