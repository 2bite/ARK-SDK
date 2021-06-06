// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphin_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.BPUpdateBestTarget
// ()
// Parameters:
// class AActor**                 bestTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          dontSetIn                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           dontSetOut                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ASpaceDolphin_AIController_BP_C::BPUpdateBestTarget(class AActor** bestTarget, bool* dontSetIn, bool* dontSetOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.BPUpdateBestTarget");

	ASpaceDolphin_AIController_BP_C_BPUpdateBestTarget_Params params;
	params.bestTarget = bestTarget;
	params.dontSetIn = dontSetIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dontSetOut != nullptr)
		*dontSetOut = params.dontSetOut;

	return params.ReturnValue;
}


// Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.UserConstructionScript
// ()

void ASpaceDolphin_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.UserConstructionScript");

	ASpaceDolphin_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.ExecuteUbergraph_SpaceDolphin_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphin_AIController_BP_C::ExecuteUbergraph_SpaceDolphin_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.ExecuteUbergraph_SpaceDolphin_AIController_BP");

	ASpaceDolphin_AIController_BP_C_ExecuteUbergraph_SpaceDolphin_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
