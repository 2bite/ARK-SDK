// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DodoRex_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DodoRex_Character_BP.DodoRex_Character_BP_C.RequestModData
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonObject*             JsonData                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADodoRex_Character_BP_C::RequestModData(const struct FName& Key, class UJsonObject** JsonData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DodoRex_Character_BP.DodoRex_Character_BP_C.RequestModData");

	ADodoRex_Character_BP_C_RequestModData_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JsonData != nullptr)
		*JsonData = params.JsonData;
}


// Function DodoRex_Character_BP.DodoRex_Character_BP_C.RequestModDataProcessing
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonObject*             InJsonData                     (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonObject*             OutJsonData                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADodoRex_Character_BP_C::RequestModDataProcessing(const struct FName& Key, class UJsonObject* InJsonData, class UJsonObject** OutJsonData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DodoRex_Character_BP.DodoRex_Character_BP_C.RequestModDataProcessing");

	ADodoRex_Character_BP_C_RequestModDataProcessing_Params params;
	params.Key = Key;
	params.InJsonData = InJsonData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutJsonData != nullptr)
		*OutJsonData = params.OutJsonData;
}


// Function DodoRex_Character_BP.DodoRex_Character_BP_C.UserConstructionScript
// ()

void ADodoRex_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DodoRex_Character_BP.DodoRex_Character_BP_C.UserConstructionScript");

	ADodoRex_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DodoRex_Character_BP.DodoRex_Character_BP_C.SendModData
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonObject*             JsonData                       (Parm, ZeroConstructor, IsPlainOldData)

void ADodoRex_Character_BP_C::SendModData(const struct FName& Key, class UJsonObject* JsonData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DodoRex_Character_BP.DodoRex_Character_BP_C.SendModData");

	ADodoRex_Character_BP_C_SendModData_Params params;
	params.Key = Key;
	params.JsonData = JsonData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DodoRex_Character_BP.DodoRex_Character_BP_C.ExecuteUbergraph_DodoRex_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADodoRex_Character_BP_C::ExecuteUbergraph_DodoRex_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DodoRex_Character_BP.DodoRex_Character_BP_C.ExecuteUbergraph_DodoRex_Character_BP");

	ADodoRex_Character_BP_C_ExecuteUbergraph_DodoRex_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
