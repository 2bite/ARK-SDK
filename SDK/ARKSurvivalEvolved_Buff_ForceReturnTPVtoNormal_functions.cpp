// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ForceReturnTPVtoNormal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ForceReturnTPVtoNormal_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.BuffTickClient");

	ABuff_ForceReturnTPVtoNormal_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ForceReturnTPVtoNormal_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.BPCustomAllowAddBuff");

	ABuff_ForceReturnTPVtoNormal_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.UserConstructionScript
// ()

void ABuff_ForceReturnTPVtoNormal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.UserConstructionScript");

	ABuff_ForceReturnTPVtoNormal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.ExecuteUbergraph_Buff_ForceReturnTPVtoNormal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ForceReturnTPVtoNormal_C::ExecuteUbergraph_Buff_ForceReturnTPVtoNormal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.ExecuteUbergraph_Buff_ForceReturnTPVtoNormal");

	ABuff_ForceReturnTPVtoNormal_C_ExecuteUbergraph_Buff_ForceReturnTPVtoNormal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
