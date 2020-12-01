// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Greenhouse_Sloped_Wall_Left_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Greenhouse_Sloped_Wall_Left.Greenhouse_Sloped_Wall_Left_C.UserConstructionScript
// ()

void AGreenhouse_Sloped_Wall_Left_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Sloped_Wall_Left.Greenhouse_Sloped_Wall_Left_C.UserConstructionScript");

	AGreenhouse_Sloped_Wall_Left_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Greenhouse_Sloped_Wall_Left.Greenhouse_Sloped_Wall_Left_C.ExecuteUbergraph_Greenhouse_Sloped_Wall_Left
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGreenhouse_Sloped_Wall_Left_C::ExecuteUbergraph_Greenhouse_Sloped_Wall_Left(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Sloped_Wall_Left.Greenhouse_Sloped_Wall_Left_C.ExecuteUbergraph_Greenhouse_Sloped_Wall_Left");

	AGreenhouse_Sloped_Wall_Left_C_ExecuteUbergraph_Greenhouse_Sloped_Wall_Left_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
