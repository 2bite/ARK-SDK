// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Frozen_Amarga_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Frozen_Amarga.Buff_Frozen_Amarga_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Frozen_Amarga_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_Amarga.Buff_Frozen_Amarga_C.BPPreventAddingOtherBuff");

	ABuff_Frozen_Amarga_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Frozen_Amarga.Buff_Frozen_Amarga_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_Amarga_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_Amarga.Buff_Frozen_Amarga_C.BPDeactivated");

	ABuff_Frozen_Amarga_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_Amarga.Buff_Frozen_Amarga_C.UserConstructionScript
// ()

void ABuff_Frozen_Amarga_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_Amarga.Buff_Frozen_Amarga_C.UserConstructionScript");

	ABuff_Frozen_Amarga_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_Amarga.Buff_Frozen_Amarga_C.ExecuteUbergraph_Buff_Frozen_Amarga
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_Amarga_C::ExecuteUbergraph_Buff_Frozen_Amarga(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_Amarga.Buff_Frozen_Amarga_C.ExecuteUbergraph_Buff_Frozen_Amarga");

	ABuff_Frozen_Amarga_C_ExecuteUbergraph_Buff_Frozen_Amarga_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
