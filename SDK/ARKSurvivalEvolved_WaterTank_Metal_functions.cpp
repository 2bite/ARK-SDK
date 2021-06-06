// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterTank_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterTank_Metal.WaterTank_Metal_C.UserConstructionScript
// ()

void AWaterTank_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTank_Metal.WaterTank_Metal_C.UserConstructionScript");

	AWaterTank_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterTank_Metal.WaterTank_Metal_C.ExecuteUbergraph_WaterTank_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterTank_Metal_C::ExecuteUbergraph_WaterTank_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterTank_Metal.WaterTank_Metal_C.ExecuteUbergraph_WaterTank_Metal");

	AWaterTank_Metal_C_ExecuteUbergraph_WaterTank_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
