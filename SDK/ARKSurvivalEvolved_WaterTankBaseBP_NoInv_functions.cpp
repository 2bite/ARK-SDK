// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterTankBaseBP_NoInv_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterTankBaseBP_NoInv.WaterTankBaseBP_NoInv_C.UserConstructionScript
// ()

void AWaterTankBaseBP_NoInv_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTankBaseBP_NoInv.WaterTankBaseBP_NoInv_C.UserConstructionScript");

	AWaterTankBaseBP_NoInv_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterTankBaseBP_NoInv.WaterTankBaseBP_NoInv_C.ExecuteUbergraph_WaterTankBaseBP_NoInv
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterTankBaseBP_NoInv_C::ExecuteUbergraph_WaterTankBaseBP_NoInv(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTankBaseBP_NoInv.WaterTankBaseBP_NoInv_C.ExecuteUbergraph_WaterTankBaseBP_NoInv");

	AWaterTankBaseBP_NoInv_C_ExecuteUbergraph_WaterTankBaseBP_NoInv_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
