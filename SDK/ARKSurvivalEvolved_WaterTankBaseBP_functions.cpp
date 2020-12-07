// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterTankBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterTankBaseBP.WaterTankBaseBP_C.UserConstructionScript
// ()

void AWaterTankBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTankBaseBP.WaterTankBaseBP_C.UserConstructionScript");

	AWaterTankBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterTankBaseBP.WaterTankBaseBP_C.ExecuteUbergraph_WaterTankBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterTankBaseBP_C::ExecuteUbergraph_WaterTankBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTankBaseBP.WaterTankBaseBP_C.ExecuteUbergraph_WaterTankBaseBP");

	AWaterTankBaseBP_C_ExecuteUbergraph_WaterTankBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
