// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventFreezing_Fenrir_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C.UserConstructionScript
// ()

void ABuff_PreventFreezing_Fenrir_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C.UserConstructionScript");

	ABuff_PreventFreezing_Fenrir_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventFreezing_Fenrir_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C.BuffTickServer");

	ABuff_PreventFreezing_Fenrir_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C.ExecuteUbergraph_Buff_PreventFreezing_Fenrir
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventFreezing_Fenrir_C::ExecuteUbergraph_Buff_PreventFreezing_Fenrir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C.ExecuteUbergraph_Buff_PreventFreezing_Fenrir");

	ABuff_PreventFreezing_Fenrir_C_ExecuteUbergraph_Buff_PreventFreezing_Fenrir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
