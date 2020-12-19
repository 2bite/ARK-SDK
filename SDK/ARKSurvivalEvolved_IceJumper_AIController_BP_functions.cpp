// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceJumper_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetBabyFleeLocation
// ()
// Parameters:
// struct FVector                 Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::GetBabyFleeLocation(struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetBabyFleeLocation");

	AIceJumper_AIController_BP_C_GetBabyFleeLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsStuckInAir
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::IsStuckInAir(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsStuckInAir");

	AIceJumper_AIController_BP_C_IsStuckInAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.BPUpdateBestTarget
// ()
// Parameters:
// class AActor**                 bestTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          dontSetIn                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           dontSetOut                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AIceJumper_AIController_BP_C::BPUpdateBestTarget(class AActor** bestTarget, bool* dontSetIn, bool* dontSetOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.BPUpdateBestTarget");

	AIceJumper_AIController_BP_C_BPUpdateBestTarget_Params params;
	params.bestTarget = bestTarget;
	params.dontSetIn = dontSetIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dontSetOut != nullptr)
		*dontSetOut = params.dontSetOut;

	return params.ReturnValue;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.DoLOS
// ()
// Parameters:
// struct FVector                 ViewLocationOffset             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::DoLOS(const struct FVector& ViewLocationOffset, bool* retVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.DoLOS");

	AIceJumper_AIController_BP_C_DoLOS_Params params;
	params.ViewLocationOffset = ViewLocationOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Update LOSChecks
// ()

void AIceJumper_AIController_BP_C::Update_LOSChecks()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Update LOSChecks");

	AIceJumper_AIController_BP_C_Update_LOSChecks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Percent Stamina
// ()
// Parameters:
// float                          ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::Get_Percent_Stamina(float* ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Percent Stamina");

	AIceJumper_AIController_BP_C_Get_Percent_Stamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsFallingToGroundBelowTarget
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceJumper_AIController_BP_C::IsFallingToGroundBelowTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsFallingToGroundBelowTarget");

	AIceJumper_AIController_BP_C_IsFallingToGroundBelowTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.BPGetTargetingDesire
// (Net, NetRequest, Exec, Native, Static, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, Const)
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIceJumper_AIController_BP_C::STATIC_BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.BPGetTargetingDesire");

	AIceJumper_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetPrimalTarget
// ()
// Parameters:
// class APrimalCharacter*        Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::GetPrimalTarget(class APrimalCharacter** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetPrimalTarget");

	AIceJumper_AIController_BP_C_GetPrimalTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Target Is PreventingFrozen
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceJumper_AIController_BP_C::Target_Is_PreventingFrozen()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Target Is PreventingFrozen");

	AIceJumper_AIController_BP_C_Target_Is_PreventingFrozen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Target Is Freezing
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceJumper_AIController_BP_C::Target_Is_Freezing()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Target Is Freezing");

	AIceJumper_AIController_BP_C_Target_Is_Freezing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Is LowStamina
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::Is_LowStamina(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Is LowStamina");

	AIceJumper_AIController_BP_C_Is_LowStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnTakeDamage
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::OnTakeDamage(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnTakeDamage");

	AIceJumper_AIController_BP_C_OnTakeDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TookLotsOfDamage
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::TookLotsOfDamage(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TookLotsOfDamage");

	AIceJumper_AIController_BP_C_TookLotsOfDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TargetIsFrozen
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIceJumper_AIController_BP_C::TargetIsFrozen()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TargetIsFrozen");

	AIceJumper_AIController_BP_C_TargetIsFrozen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetMeleeWeight
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::GetMeleeWeight(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetMeleeWeight");

	AIceJumper_AIController_BP_C_GetMeleeWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UpdateMelee
// (NetReliable, NetRequest, Exec, Native, Event, Static, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, Const)

void AIceJumper_AIController_BP_C::STATIC_UpdateMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UpdateMelee");

	AIceJumper_AIController_BP_C_UpdateMelee_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.melee
// ()

void AIceJumper_AIController_BP_C::melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.melee");

	AIceJumper_AIController_BP_C_melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UpdateIceBreath
// ()

void AIceJumper_AIController_BP_C::UpdateIceBreath()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UpdateIceBreath");

	AIceJumper_AIController_BP_C_UpdateIceBreath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>     PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnMovementModeChanged");

	AIceJumper_AIController_BP_C_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnAbilityChanged
// (Net, Exec, Native, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EIceJumperAbilities_Enum> NewAbility                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIceJumperAbilities_Enum> PrevAbility                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIceJumperShortDashTypes_Enum> SecondaryAbility               (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::STATIC_OnAbilityChanged(TEnumAsByte<EIceJumperAbilities_Enum> NewAbility, TEnumAsByte<EIceJumperAbilities_Enum> PrevAbility, TEnumAsByte<EIceJumperShortDashTypes_Enum> SecondaryAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnAbilityChanged");

	AIceJumper_AIController_BP_C_OnAbilityChanged_Params params;
	params.NewAbility = NewAbility;
	params.PrevAbility = PrevAbility;
	params.SecondaryAbility = SecondaryAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Trigger RandomWeighted Ability
// (Exec, Event, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EIceJumperAbilities_Enum> TriggeredAbility               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIceJumperShortDashTypes_Enum> SecondaryAbility               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::STATIC_Trigger_RandomWeighted_Ability(TEnumAsByte<EIceJumperAbilities_Enum>* TriggeredAbility, TEnumAsByte<EIceJumperShortDashTypes_Enum>* SecondaryAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Trigger RandomWeighted Ability");

	AIceJumper_AIController_BP_C_Trigger_RandomWeighted_Ability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TriggeredAbility != nullptr)
		*TriggeredAbility = params.TriggeredAbility;
	if (SecondaryAbility != nullptr)
		*SecondaryAbility = params.SecondaryAbility;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get ShortForward Dash Weight
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::Get_ShortForward_Dash_Weight(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get ShortForward Dash Weight");

	AIceJumper_AIController_BP_C_Get_ShortForward_Dash_Weight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetSide DashWeight
// ()
// Parameters:
// bool                           Left                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::GetSide_DashWeight(bool Left, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetSide DashWeight");

	AIceJumper_AIController_BP_C_GetSide_DashWeight_Params params;
	params.Left = Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get JumpWeight
// (NetReliable, Native, Event, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, Const)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::Get_JumpWeight(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get JumpWeight");

	AIceJumper_AIController_BP_C_Get_JumpWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsTarget Tamed or Survivor
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::IsTarget_Tamed_or_Survivor(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsTarget Tamed or Survivor");

	AIceJumper_AIController_BP_C_IsTarget_Tamed_or_Survivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Forward DashWeight
// (Net, NetRequest, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, Const)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::Get_Forward_DashWeight(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Forward DashWeight");

	AIceJumper_AIController_BP_C_Get_Forward_DashWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsInAir
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::IsInAir(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsInAir");

	AIceJumper_AIController_BP_C_IsInAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Ice BreathWeight
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, Const)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::STATIC_Get_Ice_BreathWeight(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Ice BreathWeight");

	AIceJumper_AIController_BP_C_Get_Ice_BreathWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IceBreath
// ()

void AIceJumper_AIController_BP_C::IceBreath()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IceBreath");

	AIceJumper_AIController_BP_C_IceBreath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ForwardDash
// ()

void AIceJumper_AIController_BP_C::ForwardDash()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ForwardDash");

	AIceJumper_AIController_BP_C_ForwardDash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IceJumper
// ()
// Parameters:
// class AIceJumper_Character_BP_C* Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::IceJumper(class AIceJumper_Character_BP_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IceJumper");

	AIceJumper_AIController_BP_C_IceJumper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.SideDash
// ()
// Parameters:
// TEnumAsByte<EIceJumperShortDashTypes_Enum> Type                           (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::SideDash(TEnumAsByte<EIceJumperShortDashTypes_Enum> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.SideDash");

	AIceJumper_AIController_BP_C_SideDash_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ReceiveBeginPlay
// ()

void AIceJumper_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ReceiveBeginPlay");

	AIceJumper_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Jump
// ()

void AIceJumper_AIController_BP_C::Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Jump");

	AIceJumper_AIController_BP_C_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ChangedAITarget
// ()

void AIceJumper_AIController_BP_C::ChangedAITarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ChangedAITarget");

	AIceJumper_AIController_BP_C_ChangedAITarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ReceiveTick");

	AIceJumper_AIController_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UserConstructionScript
// ()

void AIceJumper_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UserConstructionScript");

	AIceJumper_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TryNextAbility
// ()

void AIceJumper_AIController_BP_C::TryNextAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TryNextAbility");

	AIceJumper_AIController_BP_C_TryNextAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TickStaminaRegen
// ()

void AIceJumper_AIController_BP_C::TickStaminaRegen()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TickStaminaRegen");

	AIceJumper_AIController_BP_C_TickStaminaRegen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ResetDamageCounter
// ()

void AIceJumper_AIController_BP_C::ResetDamageCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ResetDamageCounter");

	AIceJumper_AIController_BP_C_ResetDamageCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.FindImprintPlayer
// ()

void AIceJumper_AIController_BP_C::FindImprintPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.FindImprintPlayer");

	AIceJumper_AIController_BP_C_FindImprintPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ExecuteUbergraph_IceJumper_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIceJumper_AIController_BP_C::ExecuteUbergraph_IceJumper_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ExecuteUbergraph_IceJumper_AIController_BP");

	AIceJumper_AIController_BP_C_ExecuteUbergraph_IceJumper_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
