// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Impacts_ArrowNet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Impacts_ArrowNet.Impacts_ArrowNet_C.UserConstructionScript
// ()

void AImpacts_ArrowNet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Impacts_ArrowNet.Impacts_ArrowNet_C.UserConstructionScript");

	AImpacts_ArrowNet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Impacts_ArrowNet.Impacts_ArrowNet_C.ExecuteUbergraph_Impacts_ArrowNet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AImpacts_ArrowNet_C::ExecuteUbergraph_Impacts_ArrowNet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Impacts_ArrowNet.Impacts_ArrowNet_C.ExecuteUbergraph_Impacts_ArrowNet");

	AImpacts_ArrowNet_C_ExecuteUbergraph_Impacts_ArrowNet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
