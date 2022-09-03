// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sinomacrops_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.BPForceTargetDinoRider
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class AShooterCharacter**      playerTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASinomacrops_AIController_BP_C::STATIC_BPForceTargetDinoRider(class AShooterCharacter** playerTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.BPForceTargetDinoRider");

	ASinomacrops_AIController_BP_C_BPForceTargetDinoRider_Params params;
	params.playerTarget = playerTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.GetShouldFleeFromShooterChar
// ()
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldFlee                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_AIController_BP_C::GetShouldFleeFromShooterChar(class AShooterCharacter* ShooterChar, bool* ShouldFlee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.GetShouldFleeFromShooterChar");

	ASinomacrops_AIController_BP_C_GetShouldFleeFromShooterChar_Params params;
	params.ShooterChar = ShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldFlee != nullptr)
		*ShouldFlee = params.ShouldFlee;
}


// Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.BPGetTargetingDesire
// (NetReliable, NetRequest, Event, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASinomacrops_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.BPGetTargetingDesire");

	ASinomacrops_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.UserConstructionScript
// ()

void ASinomacrops_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.UserConstructionScript");

	ASinomacrops_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.ExecuteUbergraph_Sinomacrops_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASinomacrops_AIController_BP_C::ExecuteUbergraph_Sinomacrops_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.ExecuteUbergraph_Sinomacrops_AIController_BP");

	ASinomacrops_AIController_BP_C_ExecuteUbergraph_Sinomacrops_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
