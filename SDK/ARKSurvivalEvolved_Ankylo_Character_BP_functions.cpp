// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ankylo_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ankylo_Character_BP.Ankylo_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAnkylo_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ankylo_Character_BP.Ankylo_Character_BP_C.BlueprintCanAttack");

	AAnkylo_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ankylo_Character_BP.Ankylo_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAnkylo_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ankylo_Character_BP.Ankylo_Character_BP_C.BlueprintCanRiderAttack");

	AAnkylo_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ankylo_Character_BP.Ankylo_Character_BP_C.BPModifyHarvestDamage
// ()
// Parameters:
// class UPrimalHarvestingComponent** harvestComponent               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         inDamage                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAnkylo_Character_BP_C::BPModifyHarvestDamage(class UPrimalHarvestingComponent** harvestComponent, float* inDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ankylo_Character_BP.Ankylo_Character_BP_C.BPModifyHarvestDamage");

	AAnkylo_Character_BP_C_BPModifyHarvestDamage_Params params;
	params.harvestComponent = harvestComponent;
	params.inDamage = inDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ankylo_Character_BP.Ankylo_Character_BP_C.UserConstructionScript
// ()

void AAnkylo_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ankylo_Character_BP.Ankylo_Character_BP_C.UserConstructionScript");

	AAnkylo_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ankylo_Character_BP.Ankylo_Character_BP_C.ExecuteUbergraph_Ankylo_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAnkylo_Character_BP_C::ExecuteUbergraph_Ankylo_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ankylo_Character_BP.Ankylo_Character_BP_C.ExecuteUbergraph_Ankylo_Character_BP");

	AAnkylo_Character_BP_C_ExecuteUbergraph_Ankylo_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
