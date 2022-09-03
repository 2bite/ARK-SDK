// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonImmunity_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PoisonImmunity_Base.Buff_PoisonImmunity_Base_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PoisonImmunity_Base_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonImmunity_Base.Buff_PoisonImmunity_Base_C.BPPreventAddingOtherBuff");

	ABuff_PoisonImmunity_Base_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PoisonImmunity_Base.Buff_PoisonImmunity_Base_C.UserConstructionScript
// ()

void ABuff_PoisonImmunity_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonImmunity_Base.Buff_PoisonImmunity_Base_C.UserConstructionScript");

	ABuff_PoisonImmunity_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonImmunity_Base.Buff_PoisonImmunity_Base_C.ExecuteUbergraph_Buff_PoisonImmunity_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonImmunity_Base_C::ExecuteUbergraph_Buff_PoisonImmunity_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonImmunity_Base.Buff_PoisonImmunity_Base_C.ExecuteUbergraph_Buff_PoisonImmunity_Base");

	ABuff_PoisonImmunity_Base_C_ExecuteUbergraph_Buff_PoisonImmunity_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
