// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ichthyornis_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingDesireTamed
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          initialDesire                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          initialMultiplier              (Parm, ZeroConstructor, IsPlainOldData)
// float                          desire                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          desireMultiplier               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_AIController_BP_C::GetTargetingDesireTamed(class APrimalCharacter* Character, float initialDesire, float initialMultiplier, float* desire, float* desireMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingDesireTamed");

	AIchthyornis_AIController_BP_C_GetTargetingDesireTamed_Params params;
	params.Character = Character;
	params.initialDesire = initialDesire;
	params.initialMultiplier = initialMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (desire != nullptr)
		*desire = params.desire;
	if (desireMultiplier != nullptr)
		*desireMultiplier = params.desireMultiplier;
}


// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.StandardTargetChecks
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class AIchthyornis_Character_BP_C* IchthyPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_AIController_BP_C::StandardTargetChecks(class APrimalCharacter* Target, class AIchthyornis_Character_BP_C* IchthyPawn, bool* canTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.StandardTargetChecks");

	AIchthyornis_AIController_BP_C_StandardTargetChecks_Params params;
	params.Target = Target;
	params.IchthyPawn = IchthyPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canTarget != nullptr)
		*canTarget = params.canTarget;
}


// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Get Targeting Desire Wild
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          initialDesire                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          initialMultiplier              (Parm, ZeroConstructor, IsPlainOldData)
// float                          desire                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_AIController_BP_C::Get_Targeting_Desire_Wild(class APrimalCharacter* Character, float initialDesire, float initialMultiplier, float* desire, float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Get Targeting Desire Wild");

	AIchthyornis_AIController_BP_C_Get_Targeting_Desire_Wild_Params params;
	params.Character = Character;
	params.initialDesire = initialDesire;
	params.initialMultiplier = initialMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (desire != nullptr)
		*desire = params.desire;
	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetAggroNotifyNeighborsRange
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIchthyornis_AIController_BP_C::GetAggroNotifyNeighborsRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetAggroNotifyNeighborsRange");

	AIchthyornis_AIController_BP_C_GetAggroNotifyNeighborsRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingRangeForPlayers
// ()
// Parameters:
// float                          targetingRange                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_AIController_BP_C::GetTargetingRangeForPlayers(float* targetingRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingRangeForPlayers");

	AIchthyornis_AIController_BP_C_GetTargetingRangeForPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (targetingRange != nullptr)
		*targetingRange = params.targetingRange;
}


// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.DoDepthCheck
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NotTooDeep                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_AIController_BP_C::DoDepthCheck(class APrimalCharacter* Character, bool* NotTooDeep)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.DoDepthCheck");

	AIchthyornis_AIController_BP_C_DoDepthCheck_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NotTooDeep != nullptr)
		*NotTooDeep = params.NotTooDeep;
}


// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.UpdateFlyingOffset
// ()

void AIchthyornis_AIController_BP_C::UpdateFlyingOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.UpdateFlyingOffset");

	AIchthyornis_AIController_BP_C_UpdateFlyingOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Update Combat Offset
// ()

void AIchthyornis_AIController_BP_C::Update_Combat_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Update Combat Offset");

	AIchthyornis_AIController_BP_C_Update_Combat_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.ChangedAITarget
// ()

void AIchthyornis_AIController_BP_C::ChangedAITarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.ChangedAITarget");

	AIchthyornis_AIController_BP_C_ChangedAITarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIchthyornis_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.BPGetTargetingDesire");

	AIchthyornis_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.UserConstructionScript
// ()

void AIchthyornis_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.UserConstructionScript");

	AIchthyornis_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.ExecuteUbergraph_Ichthyornis_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_AIController_BP_C::ExecuteUbergraph_Ichthyornis_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.ExecuteUbergraph_Ichthyornis_AIController_BP");

	AIchthyornis_AIController_BP_C_ExecuteUbergraph_Ichthyornis_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
