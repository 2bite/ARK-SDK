// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateAoEFlee_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Get Octree Group
// ()
// Parameters:
// TEnumAsByte<EServerOctreeGroup> OctreeGroup                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateAoEFlee_Base_C::Get_Octree_Group(TEnumAsByte<EServerOctreeGroup>* OctreeGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Get Octree Group");

	UDinoAttackStateAoEFlee_Base_C_Get_Octree_Group_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OctreeGroup != nullptr)
		*OctreeGroup = params.OctreeGroup;
}


// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.OnTickEvent
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateAoEFlee_Base_C::OnTickEvent(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.OnTickEvent");

	UDinoAttackStateAoEFlee_Base_C_OnTickEvent_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackStateAoEFlee_Base_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.BPCanAttack");

	UDinoAttackStateAoEFlee_Base_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Get AoE Radius
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateAoEFlee_Base_C::Get_AoE_Radius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Get AoE Radius");

	UDinoAttackStateAoEFlee_Base_C_Get_AoE_Radius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Find Characters To Frighten
// ()
// Parameters:
// TArray<class APrimalCharacter*> Characters                     (Parm, OutParm, ZeroConstructor)

void UDinoAttackStateAoEFlee_Base_C::Find_Characters_To_Frighten(TArray<class APrimalCharacter*>* Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Find Characters To Frighten");

	UDinoAttackStateAoEFlee_Base_C_Find_Characters_To_Frighten_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
}


// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Should Frighten Character
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldFrighten                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateAoEFlee_Base_C::Should_Frighten_Character(class APrimalCharacter* Character, bool* ShouldFrighten)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Should Frighten Character");

	UDinoAttackStateAoEFlee_Base_C_Should_Frighten_Character_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldFrighten != nullptr)
		*ShouldFrighten = params.ShouldFrighten;
}


// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Is On Cooldown
// ()
// Parameters:
// bool                           On_Cooldown                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateAoEFlee_Base_C::Is_On_Cooldown(bool* On_Cooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Is On Cooldown");

	UDinoAttackStateAoEFlee_Base_C_Is_On_Cooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (On_Cooldown != nullptr)
		*On_Cooldown = params.On_Cooldown;
}


// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateAoEFlee_Base_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.OnBeginEvent");

	UDinoAttackStateAoEFlee_Base_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.ExecuteUbergraph_DinoAttackStateAoEFlee_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateAoEFlee_Base_C::ExecuteUbergraph_DinoAttackStateAoEFlee_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.ExecuteUbergraph_DinoAttackStateAoEFlee_Base");

	UDinoAttackStateAoEFlee_Base_C_ExecuteUbergraph_DinoAttackStateAoEFlee_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
