// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Greenhouse_Wall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Greenhouse_Wall.Greenhouse_Wall_C.UserConstructionScript
// ()

void AGreenhouse_Wall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Wall.Greenhouse_Wall_C.UserConstructionScript");

	AGreenhouse_Wall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Greenhouse_Wall.Greenhouse_Wall_C.ExecuteUbergraph_Greenhouse_Wall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGreenhouse_Wall_C::ExecuteUbergraph_Greenhouse_Wall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Wall.Greenhouse_Wall_C.ExecuteUbergraph_Greenhouse_Wall");

	AGreenhouse_Wall_C_ExecuteUbergraph_Greenhouse_Wall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
