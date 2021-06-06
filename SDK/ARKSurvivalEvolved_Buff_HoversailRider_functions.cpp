// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HoversailRider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HoversailRider.Buff_HoversailRider_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_HoversailRider_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HoversailRider.Buff_HoversailRider_C.BPPreventAddingOtherBuff");

	ABuff_HoversailRider_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_HoversailRider.Buff_HoversailRider_C.UserConstructionScript
// ()

void ABuff_HoversailRider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HoversailRider.Buff_HoversailRider_C.UserConstructionScript");

	ABuff_HoversailRider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HoversailRider.Buff_HoversailRider_C.ExecuteUbergraph_Buff_HoversailRider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HoversailRider_C::ExecuteUbergraph_Buff_HoversailRider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HoversailRider.Buff_HoversailRider_C.ExecuteUbergraph_Buff_HoversailRider");

	ABuff_HoversailRider_C_ExecuteUbergraph_Buff_HoversailRider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
