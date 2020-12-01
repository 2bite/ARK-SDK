// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AscensionData_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AscensionData.AscensionData_C.GetData
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam2                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAscensionData_C::GetData(bool* NewParam, bool* NewParam1, bool* NewParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function AscensionData.AscensionData_C.GetData");

	AAscensionData_C_GetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
	if (NewParam2 != nullptr)
		*NewParam2 = params.NewParam2;
}


// Function AscensionData.AscensionData_C.SaveData
// ()
// Parameters:
// int                            BossLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void AAscensionData_C::SaveData(int BossLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AscensionData.AscensionData_C.SaveData");

	AAscensionData_C_SaveData_Params params;
	params.BossLevel = BossLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AscensionData.AscensionData_C.UserConstructionScript
// ()

void AAscensionData_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AscensionData.AscensionData_C.UserConstructionScript");

	AAscensionData_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AscensionData.AscensionData_C.ExecuteUbergraph_AscensionData
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAscensionData_C::ExecuteUbergraph_AscensionData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AscensionData.AscensionData_C.ExecuteUbergraph_AscensionData");

	AAscensionData_C_ExecuteUbergraph_AscensionData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
