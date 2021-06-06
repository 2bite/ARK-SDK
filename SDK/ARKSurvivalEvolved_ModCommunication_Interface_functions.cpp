// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ModCommunication_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ModCommunication_Interface.ModCommunication_Interface_C.RequestModDataProcessing
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonObject*             InJsonData                     (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonObject*             OutJsonData                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UModCommunication_Interface_C::RequestModDataProcessing(const struct FName& Key, class UJsonObject* InJsonData, class UJsonObject** OutJsonData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModCommunication_Interface.ModCommunication_Interface_C.RequestModDataProcessing");

	UModCommunication_Interface_C_RequestModDataProcessing_Params params;
	params.Key = Key;
	params.InJsonData = InJsonData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutJsonData != nullptr)
		*OutJsonData = params.OutJsonData;
}


// Function ModCommunication_Interface.ModCommunication_Interface_C.RequestModData
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonObject*             JsonData                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UModCommunication_Interface_C::RequestModData(const struct FName& Key, class UJsonObject** JsonData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModCommunication_Interface.ModCommunication_Interface_C.RequestModData");

	UModCommunication_Interface_C_RequestModData_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JsonData != nullptr)
		*JsonData = params.JsonData;
}


// Function ModCommunication_Interface.ModCommunication_Interface_C.SendModData
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonObject*             JsonData                       (Parm, ZeroConstructor, IsPlainOldData)

void UModCommunication_Interface_C::SendModData(const struct FName& Key, class UJsonObject* JsonData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModCommunication_Interface.ModCommunication_Interface_C.SendModData");

	UModCommunication_Interface_C_SendModData_Params params;
	params.Key = Key;
	params.JsonData = JsonData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
