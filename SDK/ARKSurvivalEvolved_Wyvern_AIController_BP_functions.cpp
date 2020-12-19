// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wyvern_AIController_BP.Wyvern_AIController_BP_C.BP_TamedOverrideHorizontalLandingRange
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D AWyvern_AIController_BP_C::BP_TamedOverrideHorizontalLandingRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_AIController_BP.Wyvern_AIController_BP_C.BP_TamedOverrideHorizontalLandingRange");

	AWyvern_AIController_BP_C_BP_TamedOverrideHorizontalLandingRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wyvern_AIController_BP.Wyvern_AIController_BP_C.UserConstructionScript
// ()

void AWyvern_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_AIController_BP.Wyvern_AIController_BP_C.UserConstructionScript");

	AWyvern_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_AIController_BP.Wyvern_AIController_BP_C.ExecuteUbergraph_Wyvern_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_AIController_BP_C::ExecuteUbergraph_Wyvern_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_AIController_BP.Wyvern_AIController_BP_C.ExecuteUbergraph_Wyvern_AIController_BP");

	AWyvern_AIController_BP_C_ExecuteUbergraph_Wyvern_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
