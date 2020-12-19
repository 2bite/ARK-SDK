// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvern_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.BPShouldNotifyAnyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrystalWyvern_AIController_BP_C::BPShouldNotifyAnyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.BPShouldNotifyAnyNeighbor");

	ACrystalWyvern_AIController_BP_C_BPShouldNotifyAnyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.BP_TamedOverrideHorizontalLandingRange
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D ACrystalWyvern_AIController_BP_C::BP_TamedOverrideHorizontalLandingRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.BP_TamedOverrideHorizontalLandingRange");

	ACrystalWyvern_AIController_BP_C_BP_TamedOverrideHorizontalLandingRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.UserConstructionScript
// ()

void ACrystalWyvern_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.UserConstructionScript");

	ACrystalWyvern_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.ExecuteUbergraph_CrystalWyvern_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_AIController_BP_C::ExecuteUbergraph_CrystalWyvern_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.ExecuteUbergraph_CrystalWyvern_AIController_BP");

	ACrystalWyvern_AIController_BP_C_ExecuteUbergraph_CrystalWyvern_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
