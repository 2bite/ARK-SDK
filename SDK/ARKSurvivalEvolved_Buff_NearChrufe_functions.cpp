// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NearChrufe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_NearChrufe.Buff_NearChrufe_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NearChrufe_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NearChrufe.Buff_NearChrufe_C.BPDeactivated");

	ABuff_NearChrufe_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NearChrufe.Buff_NearChrufe_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NearChrufe_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NearChrufe.Buff_NearChrufe_C.BuffTickClient");

	ABuff_NearChrufe_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NearChrufe.Buff_NearChrufe_C.Update Heat Level
// ()
// Parameters:
// int                            Increased_Heat_level           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NearChrufe_C::Update_Heat_Level(int Increased_Heat_level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NearChrufe.Buff_NearChrufe_C.Update Heat Level");

	ABuff_NearChrufe_C_Update_Heat_Level_Params params;
	params.Increased_Heat_level = Increased_Heat_level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NearChrufe.Buff_NearChrufe_C.UserConstructionScript
// ()

void ABuff_NearChrufe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NearChrufe.Buff_NearChrufe_C.UserConstructionScript");

	ABuff_NearChrufe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NearChrufe.Buff_NearChrufe_C.ExecuteUbergraph_Buff_NearChrufe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NearChrufe_C::ExecuteUbergraph_Buff_NearChrufe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NearChrufe.Buff_NearChrufe_C.ExecuteUbergraph_Buff_NearChrufe");

	ABuff_NearChrufe_C_ExecuteUbergraph_Buff_NearChrufe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
