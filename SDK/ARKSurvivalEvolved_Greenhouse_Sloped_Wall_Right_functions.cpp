// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Greenhouse_Sloped_Wall_Right_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Greenhouse_Sloped_Wall_Right.Greenhouse_Sloped_Wall_Right_C.UserConstructionScript
// ()

void AGreenhouse_Sloped_Wall_Right_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Sloped_Wall_Right.Greenhouse_Sloped_Wall_Right_C.UserConstructionScript");

	AGreenhouse_Sloped_Wall_Right_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Greenhouse_Sloped_Wall_Right.Greenhouse_Sloped_Wall_Right_C.ExecuteUbergraph_Greenhouse_Sloped_Wall_Right
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGreenhouse_Sloped_Wall_Right_C::ExecuteUbergraph_Greenhouse_Sloped_Wall_Right(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Sloped_Wall_Right.Greenhouse_Sloped_Wall_Right_C.ExecuteUbergraph_Greenhouse_Sloped_Wall_Right");

	AGreenhouse_Sloped_Wall_Right_C_ExecuteUbergraph_Greenhouse_Sloped_Wall_Right_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
