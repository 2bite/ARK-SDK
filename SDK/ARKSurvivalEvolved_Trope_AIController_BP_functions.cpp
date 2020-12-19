// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Trope_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trope_AIController_BP.Trope_AIController_BP_C.BPUpdateBestTarget
// ()
// Parameters:
// class AActor**                 bestTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          dontSetIn                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           dontSetOut                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ATrope_AIController_BP_C::BPUpdateBestTarget(class AActor** bestTarget, bool* dontSetIn, bool* dontSetOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trope_AIController_BP.Trope_AIController_BP_C.BPUpdateBestTarget");

	ATrope_AIController_BP_C_BPUpdateBestTarget_Params params;
	params.bestTarget = bestTarget;
	params.dontSetIn = dontSetIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dontSetOut != nullptr)
		*dontSetOut = params.dontSetOut;

	return params.ReturnValue;
}


// Function Trope_AIController_BP.Trope_AIController_BP_C.UserConstructionScript
// ()

void ATrope_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trope_AIController_BP.Trope_AIController_BP_C.UserConstructionScript");

	ATrope_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trope_AIController_BP.Trope_AIController_BP_C.ExecuteUbergraph_Trope_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATrope_AIController_BP_C::ExecuteUbergraph_Trope_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trope_AIController_BP.Trope_AIController_BP_C.ExecuteUbergraph_Trope_AIController_BP");

	ATrope_AIController_BP_C_ExecuteUbergraph_Trope_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
