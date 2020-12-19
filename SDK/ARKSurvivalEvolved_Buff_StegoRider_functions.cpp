// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StegoRider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_StegoRider.Buff_StegoRider_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_StegoRider_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StegoRider.Buff_StegoRider_C.BPPreventAddingOtherBuff");

	ABuff_StegoRider_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_StegoRider.Buff_StegoRider_C.BPNotifyPreventDismounting
// ()
// Parameters:
// class APrimalDinoCharacter**   FromDino                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StegoRider_C::BPNotifyPreventDismounting(class APrimalDinoCharacter** FromDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StegoRider.Buff_StegoRider_C.BPNotifyPreventDismounting");

	ABuff_StegoRider_C_BPNotifyPreventDismounting_Params params;
	params.FromDino = FromDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StegoRider.Buff_StegoRider_C.UserConstructionScript
// ()

void ABuff_StegoRider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StegoRider.Buff_StegoRider_C.UserConstructionScript");

	ABuff_StegoRider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StegoRider.Buff_StegoRider_C.ExecuteUbergraph_Buff_StegoRider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StegoRider_C::ExecuteUbergraph_Buff_StegoRider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StegoRider.Buff_StegoRider_C.ExecuteUbergraph_Buff_StegoRider");

	ABuff_StegoRider_C_ExecuteUbergraph_Buff_StegoRider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
