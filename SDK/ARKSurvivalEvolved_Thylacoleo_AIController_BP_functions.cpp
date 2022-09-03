// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thylacoleo_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.BPForceTargetDinoRider
// ()
// Parameters:
// class AShooterCharacter**      playerTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AThylacoleo_AIController_BP_C::BPForceTargetDinoRider(class AShooterCharacter** playerTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.BPForceTargetDinoRider");

	AThylacoleo_AIController_BP_C_BPForceTargetDinoRider_Params params;
	params.playerTarget = playerTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.UserConstructionScript
// ()

void AThylacoleo_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.UserConstructionScript");

	AThylacoleo_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.ExecuteUbergraph_Thylacoleo_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_AIController_BP_C::ExecuteUbergraph_Thylacoleo_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.ExecuteUbergraph_Thylacoleo_AIController_BP");

	AThylacoleo_AIController_BP_C_ExecuteUbergraph_Thylacoleo_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
