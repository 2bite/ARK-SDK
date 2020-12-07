// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Monkey_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Monkey_AIController_BP.Monkey_AIController_BP_C.UserConstructionScript
// ()

void AMonkey_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Monkey_AIController_BP.Monkey_AIController_BP_C.UserConstructionScript");

	AMonkey_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Monkey_AIController_BP.Monkey_AIController_BP_C.ExecuteUbergraph_Monkey_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMonkey_AIController_BP_C::ExecuteUbergraph_Monkey_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Monkey_AIController_BP.Monkey_AIController_BP_C.ExecuteUbergraph_Monkey_AIController_BP");

	AMonkey_AIController_BP_C_ExecuteUbergraph_Monkey_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
