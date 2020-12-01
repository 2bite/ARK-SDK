// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaTrike_Character_BP_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.ShowSmallDino
// ()
// Parameters:
// class APrimalCharacter*        Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit_Info                       (Parm)

void AMegaTrike_Character_BP_Corrupt_C::ShowSmallDino(class APrimalCharacter* Actor, const struct FHitResult& Hit_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.ShowSmallDino");

	AMegaTrike_Character_BP_Corrupt_C_ShowSmallDino_Params params;
	params.Actor = Actor;
	params.Hit_Info = Hit_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.Stop Ram Attack Buildup
// ()

void AMegaTrike_Character_BP_Corrupt_C::Stop_Ram_Attack_Buildup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.Stop Ram Attack Buildup");

	AMegaTrike_Character_BP_Corrupt_C_Stop_Ram_Attack_Buildup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.HandleRamStructureCollision
// (NetRequest, Exec, Event, NetMulticast, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void AMegaTrike_Character_BP_Corrupt_C::HandleRamStructureCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.HandleRamStructureCollision");

	AMegaTrike_Character_BP_Corrupt_C_HandleRamStructureCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.CanDamageActor
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TargetCanBeDamaged             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegaTrike_Character_BP_Corrupt_C::CanDamageActor(class AActor* Target, bool* TargetCanBeDamaged)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.CanDamageActor");

	AMegaTrike_Character_BP_Corrupt_C_CanDamageActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetCanBeDamaged != nullptr)
		*TargetCanBeDamaged = params.TargetCanBeDamaged;
}


// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.UserConstructionScript
// ()

void AMegaTrike_Character_BP_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.UserConstructionScript");

	AMegaTrike_Character_BP_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.OnComponentBeginOverlap_Event
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AMegaTrike_Character_BP_Corrupt_C::OnComponentBeginOverlap_Event(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.OnComponentBeginOverlap_Event");

	AMegaTrike_Character_BP_Corrupt_C_OnComponentBeginOverlap_Event_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.OnRamStarted_Copy
// ()
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AMegaTrike_Character_BP_Corrupt_C::OnRamStarted_Copy(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.OnRamStarted_Copy");

	AMegaTrike_Character_BP_Corrupt_C_OnRamStarted_Copy_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.ClientOnRamEnded_Copy
// ()
// Parameters:
// bool                           HitSomething                   (Parm, ZeroConstructor, IsPlainOldData)

void AMegaTrike_Character_BP_Corrupt_C::ClientOnRamEnded_Copy(bool HitSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.ClientOnRamEnded_Copy");

	AMegaTrike_Character_BP_Corrupt_C_ClientOnRamEnded_Copy_Params params;
	params.HitSomething = HitSomething;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.Private__RamEnded_Copy
// ()
// Parameters:
// bool                           HitSomething                   (Parm, ZeroConstructor, IsPlainOldData)

void AMegaTrike_Character_BP_Corrupt_C::Private__RamEnded_Copy(bool HitSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.Private__RamEnded_Copy");

	AMegaTrike_Character_BP_Corrupt_C_Private__RamEnded_Copy_Params params;
	params.HitSomething = HitSomething;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.ExecuteUbergraph_MegaTrike_Character_BP_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegaTrike_Character_BP_Corrupt_C::ExecuteUbergraph_MegaTrike_Character_BP_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.ExecuteUbergraph_MegaTrike_Character_BP_Corrupt");

	AMegaTrike_Character_BP_Corrupt_C_ExecuteUbergraph_MegaTrike_Character_BP_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
