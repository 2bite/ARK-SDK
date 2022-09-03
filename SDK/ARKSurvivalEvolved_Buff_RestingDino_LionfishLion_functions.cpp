// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RestingDino_LionfishLion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.BPNotifyOtherBuffActivated
// ()
// Parameters:
// class APrimalBuff**            OtherBuff                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RestingDino_LionfishLion_C::BPNotifyOtherBuffActivated(class APrimalBuff** OtherBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.BPNotifyOtherBuffActivated");

	ABuff_RestingDino_LionfishLion_C_BPNotifyOtherBuffActivated_Params params;
	params.OtherBuff = OtherBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.UserConstructionScript
// ()

void ABuff_RestingDino_LionfishLion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.UserConstructionScript");

	ABuff_RestingDino_LionfishLion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.ExecuteUbergraph_Buff_RestingDino_LionfishLion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RestingDino_LionfishLion_C::ExecuteUbergraph_Buff_RestingDino_LionfishLion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.ExecuteUbergraph_Buff_RestingDino_LionfishLion");

	ABuff_RestingDino_LionfishLion_C_ExecuteUbergraph_Buff_RestingDino_LionfishLion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.awoken by other buff__DelegateSignature
// ()

void ABuff_RestingDino_LionfishLion_C::awoken_by_other_buff__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C.awoken by other buff__DelegateSignature");

	ABuff_RestingDino_LionfishLion_C_awoken_by_other_buff__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
