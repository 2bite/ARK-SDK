// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Leedsichthys_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.GetNumOfStacksToAdd
// ()
// Parameters:
// int                            StackQuantity                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumToAdd                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumOfStacks                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            LeftOver                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALeedsichthys_Character_BP_C::GetNumOfStacksToAdd(int StackQuantity, int NumToAdd, int* NumOfStacks, int* LeftOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.GetNumOfStacksToAdd");

	ALeedsichthys_Character_BP_C_GetNumOfStacksToAdd_Params params;
	params.StackQuantity = StackQuantity;
	params.NumToAdd = NumToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumOfStacks != nullptr)
		*NumOfStacks = params.NumOfStacks;
	if (LeftOver != nullptr)
		*LeftOver = params.LeftOver;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ALeedsichthys_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPClientDoMultiUse");

	ALeedsichthys_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ALeedsichthys_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPDoAttack");

	ALeedsichthys_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ALeedsichthys_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ReceiveAnyDamage");

	ALeedsichthys_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.GetHarvestingIndex
// ()
// Parameters:
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALeedsichthys_Character_BP_C::GetHarvestingIndex(int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.GetHarvestingIndex");

	ALeedsichthys_Character_BP_C_GetHarvestingIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (index != nullptr)
		*index = params.index;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ALeedsichthys_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPGetMultiUseEntries");

	ALeedsichthys_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALeedsichthys_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPTryMultiUse");

	ALeedsichthys_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.UserConstructionScript
// ()

void ALeedsichthys_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.UserConstructionScript");

	ALeedsichthys_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ReceiveBeginPlay
// ()

void ALeedsichthys_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ReceiveBeginPlay");

	ALeedsichthys_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ForceFwd
// ()

void ALeedsichthys_Character_BP_C::ForceFwd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ForceFwd");

	ALeedsichthys_Character_BP_C_ForceFwd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ServerForceFwd
// ()

void ALeedsichthys_Character_BP_C::ServerForceFwd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ServerForceFwd");

	ALeedsichthys_Character_BP_C_ServerForceFwd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.Spawn Blood
// ()
// Parameters:
// struct FVector                 ActorLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ALeedsichthys_Character_BP_C::Spawn_Blood(const struct FVector& ActorLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.Spawn Blood");

	ALeedsichthys_Character_BP_C_Spawn_Blood_Params params;
	params.ActorLocation = ActorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.AnimNotify_TailSplash
// ()

void ALeedsichthys_Character_BP_C::AnimNotify_TailSplash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.AnimNotify_TailSplash");

	ALeedsichthys_Character_BP_C_AnimNotify_TailSplash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.AnimNotify_MouthSplash
// ()

void ALeedsichthys_Character_BP_C::AnimNotify_MouthSplash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.AnimNotify_MouthSplash");

	ALeedsichthys_Character_BP_C_AnimNotify_MouthSplash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPTimerServer
// ()

void ALeedsichthys_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPTimerServer");

	ALeedsichthys_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ClearBaitTime
// ()

void ALeedsichthys_Character_BP_C::ClearBaitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ClearBaitTime");

	ALeedsichthys_Character_BP_C_ClearBaitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.SootheBehavior
// ()

void ALeedsichthys_Character_BP_C::SootheBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.SootheBehavior");

	ALeedsichthys_Character_BP_C_SootheBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ExecuteUbergraph_Leedsichthys_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALeedsichthys_Character_BP_C::ExecuteUbergraph_Leedsichthys_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ExecuteUbergraph_Leedsichthys_Character_BP");

	ALeedsichthys_Character_BP_C_ExecuteUbergraph_Leedsichthys_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
