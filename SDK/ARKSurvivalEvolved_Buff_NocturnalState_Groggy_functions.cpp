// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NocturnalState_Groggy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_NocturnalState_Groggy.Buff_NocturnalState_Groggy_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_NocturnalState_Groggy_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NocturnalState_Groggy.Buff_NocturnalState_Groggy_C.BPCustomAllowAddBuff");

	ABuff_NocturnalState_Groggy_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_NocturnalState_Groggy.Buff_NocturnalState_Groggy_C.UserConstructionScript
// ()

void ABuff_NocturnalState_Groggy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NocturnalState_Groggy.Buff_NocturnalState_Groggy_C.UserConstructionScript");

	ABuff_NocturnalState_Groggy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NocturnalState_Groggy.Buff_NocturnalState_Groggy_C.ExecuteUbergraph_Buff_NocturnalState_Groggy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NocturnalState_Groggy_C::ExecuteUbergraph_Buff_NocturnalState_Groggy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NocturnalState_Groggy.Buff_NocturnalState_Groggy_C.ExecuteUbergraph_Buff_NocturnalState_Groggy");

	ABuff_NocturnalState_Groggy_C_ExecuteUbergraph_Buff_NocturnalState_Groggy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
