// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterPipe_Stone_Intersection_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterPipe_Stone_Intersection.WaterPipe_Stone_Intersection_C.UserConstructionScript
// ()

void AWaterPipe_Stone_Intersection_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPipe_Stone_Intersection.WaterPipe_Stone_Intersection_C.UserConstructionScript");

	AWaterPipe_Stone_Intersection_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPipe_Stone_Intersection.WaterPipe_Stone_Intersection_C.ExecuteUbergraph_WaterPipe_Stone_Intersection
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterPipe_Stone_Intersection_C::ExecuteUbergraph_WaterPipe_Stone_Intersection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPipe_Stone_Intersection.WaterPipe_Stone_Intersection_C.ExecuteUbergraph_WaterPipe_Stone_Intersection");

	AWaterPipe_Stone_Intersection_C_ExecuteUbergraph_WaterPipe_Stone_Intersection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
