// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterPipeBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterPipeBaseBP.WaterPipeBaseBP_C.UserConstructionScript
// ()

void AWaterPipeBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPipeBaseBP.WaterPipeBaseBP_C.UserConstructionScript");

	AWaterPipeBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPipeBaseBP.WaterPipeBaseBP_C.ExecuteUbergraph_WaterPipeBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterPipeBaseBP_C::ExecuteUbergraph_WaterPipeBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPipeBaseBP.WaterPipeBaseBP_C.ExecuteUbergraph_WaterPipeBaseBP");

	AWaterPipeBaseBP_C_ExecuteUbergraph_WaterPipeBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
