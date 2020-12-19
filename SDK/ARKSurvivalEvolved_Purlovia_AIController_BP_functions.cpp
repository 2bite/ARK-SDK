// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Purlovia_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Purlovia_AIController_BP.Purlovia_AIController_BP_C.GetAggroNotifyNeighborsRange
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APurlovia_AIController_BP_C::GetAggroNotifyNeighborsRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_AIController_BP.Purlovia_AIController_BP_C.GetAggroNotifyNeighborsRange");

	APurlovia_AIController_BP_C_GetAggroNotifyNeighborsRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Purlovia_AIController_BP.Purlovia_AIController_BP_C.UserConstructionScript
// ()

void APurlovia_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_AIController_BP.Purlovia_AIController_BP_C.UserConstructionScript");

	APurlovia_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_AIController_BP.Purlovia_AIController_BP_C.ExecuteUbergraph_Purlovia_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_AIController_BP_C::ExecuteUbergraph_Purlovia_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_AIController_BP.Purlovia_AIController_BP_C.ExecuteUbergraph_Purlovia_AIController_BP");

	APurlovia_AIController_BP_C_ExecuteUbergraph_Purlovia_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
