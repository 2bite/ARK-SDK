// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NightVisionGoggles_ESP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_NightVisionGoggles_ESP.Buff_NightVisionGoggles_ESP_C.UserConstructionScript
// ()

void ABuff_NightVisionGoggles_ESP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NightVisionGoggles_ESP.Buff_NightVisionGoggles_ESP_C.UserConstructionScript");

	ABuff_NightVisionGoggles_ESP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NightVisionGoggles_ESP.Buff_NightVisionGoggles_ESP_C.ExecuteUbergraph_Buff_NightVisionGoggles_ESP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NightVisionGoggles_ESP_C::ExecuteUbergraph_Buff_NightVisionGoggles_ESP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NightVisionGoggles_ESP.Buff_NightVisionGoggles_ESP_C.ExecuteUbergraph_Buff_NightVisionGoggles_ESP");

	ABuff_NightVisionGoggles_ESP_C_ExecuteUbergraph_Buff_NightVisionGoggles_ESP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
