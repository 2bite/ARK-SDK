// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NightVisionGoggles_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_NightVisionGoggles.Buff_NightVisionGoggles_C.UserConstructionScript
// ()

void ABuff_NightVisionGoggles_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NightVisionGoggles.Buff_NightVisionGoggles_C.UserConstructionScript");

	ABuff_NightVisionGoggles_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NightVisionGoggles.Buff_NightVisionGoggles_C.ExecuteUbergraph_Buff_NightVisionGoggles
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NightVisionGoggles_C::ExecuteUbergraph_Buff_NightVisionGoggles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NightVisionGoggles.Buff_NightVisionGoggles_C.ExecuteUbergraph_Buff_NightVisionGoggles");

	ABuff_NightVisionGoggles_C_ExecuteUbergraph_Buff_NightVisionGoggles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
