// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_Disease_Low_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Base_Disease_Low.Buff_Base_Disease_Low_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Base_Disease_Low_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_Disease_Low.Buff_Base_Disease_Low_C.BPCustomAllowAddBuff");

	ABuff_Base_Disease_Low_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Base_Disease_Low.Buff_Base_Disease_Low_C.UserConstructionScript
// ()

void ABuff_Base_Disease_Low_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_Disease_Low.Buff_Base_Disease_Low_C.UserConstructionScript");

	ABuff_Base_Disease_Low_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_Disease_Low.Buff_Base_Disease_Low_C.ExecuteUbergraph_Buff_Base_Disease_Low
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_Disease_Low_C::ExecuteUbergraph_Buff_Base_Disease_Low(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_Disease_Low.Buff_Base_Disease_Low_C.ExecuteUbergraph_Buff_Base_Disease_Low");

	ABuff_Base_Disease_Low_C_ExecuteUbergraph_Buff_Base_Disease_Low_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
