// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Radiation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Radiation.Buff_Radiation_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Radiation_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation.Buff_Radiation_C.BuffTickServer");

	ABuff_Radiation_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Radiation.Buff_Radiation_C.UserConstructionScript
// ()

void ABuff_Radiation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation.Buff_Radiation_C.UserConstructionScript");

	ABuff_Radiation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Radiation.Buff_Radiation_C.ExecuteUbergraph_Buff_Radiation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Radiation_C::ExecuteUbergraph_Buff_Radiation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation.Buff_Radiation_C.ExecuteUbergraph_Buff_Radiation");

	ABuff_Radiation_C_ExecuteUbergraph_Buff_Radiation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
