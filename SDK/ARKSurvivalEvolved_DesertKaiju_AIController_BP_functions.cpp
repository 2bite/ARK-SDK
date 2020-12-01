// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesertKaiju_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DesertKaiju_AIController_BP.DesertKaiju_AIController_BP_C.BPSetupFindTarget
// ()

void ADesertKaiju_AIController_BP_C::BPSetupFindTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_AIController_BP.DesertKaiju_AIController_BP_C.BPSetupFindTarget");

	ADesertKaiju_AIController_BP_C_BPSetupFindTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_AIController_BP.DesertKaiju_AIController_BP_C.UserConstructionScript
// ()

void ADesertKaiju_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_AIController_BP.DesertKaiju_AIController_BP_C.UserConstructionScript");

	ADesertKaiju_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_AIController_BP.DesertKaiju_AIController_BP_C.ReceiveBeginPlay
// ()

void ADesertKaiju_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_AIController_BP.DesertKaiju_AIController_BP_C.ReceiveBeginPlay");

	ADesertKaiju_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_AIController_BP.DesertKaiju_AIController_BP_C.ExecuteUbergraph_DesertKaiju_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_AIController_BP_C::ExecuteUbergraph_DesertKaiju_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_AIController_BP.DesertKaiju_AIController_BP_C.ExecuteUbergraph_DesertKaiju_AIController_BP");

	ADesertKaiju_AIController_BP_C_ExecuteUbergraph_DesertKaiju_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
