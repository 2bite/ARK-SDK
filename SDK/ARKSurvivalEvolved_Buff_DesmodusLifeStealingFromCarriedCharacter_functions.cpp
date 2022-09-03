// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DesmodusLifeStealingFromCarriedCharacter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BPDeactivated");

	ABuff_DesmodusLifeStealingFromCarriedCharacter_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.TickLifeStealing
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::TickLifeStealing(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.TickLifeStealing");

	ABuff_DesmodusLifeStealingFromCarriedCharacter_C_TickLifeStealing_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BPSetupForInstigator");

	ABuff_DesmodusLifeStealingFromCarriedCharacter_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.UserConstructionScript
// ()

void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.UserConstructionScript");

	ABuff_DesmodusLifeStealingFromCarriedCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BuffTickClient");

	ABuff_DesmodusLifeStealingFromCarriedCharacter_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BuffTickServer");

	ABuff_DesmodusLifeStealingFromCarriedCharacter_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.ExecuteUbergraph_Buff_DesmodusLifeStealingFromCarriedCharacter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::ExecuteUbergraph_Buff_DesmodusLifeStealingFromCarriedCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.ExecuteUbergraph_Buff_DesmodusLifeStealingFromCarriedCharacter");

	ABuff_DesmodusLifeStealingFromCarriedCharacter_C_ExecuteUbergraph_Buff_DesmodusLifeStealingFromCarriedCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
