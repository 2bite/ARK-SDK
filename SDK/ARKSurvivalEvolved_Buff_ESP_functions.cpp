// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ESP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ESP.Buff_ESP_C.ReceiveBeginPlay
// ()

void ABuff_ESP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ESP.Buff_ESP_C.ReceiveBeginPlay");

	ABuff_ESP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ESP.Buff_ESP_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ESP_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ESP.Buff_ESP_C.BPDeactivated");

	ABuff_ESP_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ESP.Buff_ESP_C.UserConstructionScript
// ()

void ABuff_ESP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ESP.Buff_ESP_C.UserConstructionScript");

	ABuff_ESP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ESP.Buff_ESP_C.ExecuteUbergraph_Buff_ESP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ESP_C::ExecuteUbergraph_Buff_ESP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ESP.Buff_ESP_C.ExecuteUbergraph_Buff_ESP");

	ABuff_ESP_C_ExecuteUbergraph_Buff_ESP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
