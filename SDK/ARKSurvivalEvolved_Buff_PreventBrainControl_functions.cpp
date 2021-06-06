// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventBrainControl_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PreventBrainControl.Buff_PreventBrainControl_C.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventBrainControl_C::BPPreSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventBrainControl.Buff_PreventBrainControl_C.BPPreSetupForInstigator");

	ABuff_PreventBrainControl_C_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventBrainControl.Buff_PreventBrainControl_C.UserConstructionScript
// ()

void ABuff_PreventBrainControl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventBrainControl.Buff_PreventBrainControl_C.UserConstructionScript");

	ABuff_PreventBrainControl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventBrainControl.Buff_PreventBrainControl_C.ExecuteUbergraph_Buff_PreventBrainControl
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventBrainControl_C::ExecuteUbergraph_Buff_PreventBrainControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventBrainControl.Buff_PreventBrainControl_C.ExecuteUbergraph_Buff_PreventBrainControl");

	ABuff_PreventBrainControl_C_ExecuteUbergraph_Buff_PreventBrainControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
